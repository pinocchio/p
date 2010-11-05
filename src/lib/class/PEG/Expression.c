#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18498 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18500 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18501 = new_Send((Optr)PSend18500, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18502 = new_Send((Optr)PSend18501, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18499 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18500, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18501, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18502, (Optr)&t_method_return);
    Method PMethod18497 = new_Method_with(PArray18498, empty_Array, empty_Array, PThreadedCode18499, 1, PSend18502);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18497, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18505 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18504 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18505, (Optr)&t_method_return);
    Method PMethod18503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18504, 1, PSend18505);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18503, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18508 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18507 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18508, (Optr)&t_method_return);
    Method PMethod18506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18507, 1, PSend18508);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18506, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18510 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18512 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18513 = new_Send((Optr)PSend18512, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18514 = new_Send((Optr)PSend18513, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18511 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18512, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18513, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18514, (Optr)&t_method_return);
    Method PMethod18509 = new_Method_with(PArray18510, empty_Array, empty_Array, PThreadedCode18511, 1, PSend18514);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18509, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18517 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18516 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18517, (Optr)&t_method_return);
    Method PMethod18515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18516, 1, PSend18517);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18515, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18520 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18521 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18520);
    Array PThreadedCode18519 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18520, (Optr)&t_send1, (Optr)PSend18521, (Optr)&t_method_return);
    Method PMethod18518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18519, 1, PSend18521);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18518, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18524 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18523 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18524, (Optr)&t_method_return);
    Method PMethod18522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18523, 1, PSend18524);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18522, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18526 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18529 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18531 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18535 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18534 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18535, (Optr)&t_block_return);
    Block PBlock18533 = new_Block_with(empty_Array, empty_Array, PThreadedCode18534, 1, PSend18535);
    // ifFalse:. 
    Send PSend18532 = new_Send((Optr)PSend18531, SMB_ifFalse_, 1, (Optr)PBlock18533);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18536 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18537 = new_Send((Optr)PSend18536, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18541 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18540 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18541, (Optr)&t_block_return);
    Block PBlock18539 = new_Block_with(empty_Array, empty_Array, PThreadedCode18540, 1, PSend18541);
    // ifTrue:. 
    Send PSend18538 = new_Send((Optr)PSend18537, SMB_ifTrue_, 1, (Optr)PBlock18539);
    // stack. 
    Send PSend18542 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18543 = new_Send((Optr)PSend18542, SMB_pop, 0);
    Array PThreadedCode18530 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18531, (Optr)&t_send_ifFalse_, (Optr)PSend18532, (Optr)PBlock18533, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18536, (Optr)&t_send0, (Optr)PSend18537, (Optr)&t_send_ifTrue_, (Optr)PSend18538, (Optr)PBlock18539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18542, (Optr)&t_send0, (Optr)PSend18543, (Optr)&t_method_return);
    Block PBlock18528 = new_Block_with(PArray18529, empty_Array, PThreadedCode18530, 3, PSend18532, PSend18538, PSend18543);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18544 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18528);
    Array PThreadedCode18527 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18528, (Optr)&t_send1, (Optr)PSend18544, (Optr)&t_method_return);
    Method PMethod18525 = new_Method_with(PArray18526, empty_Array, empty_Array, PThreadedCode18527, 1, PSend18544);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18525, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18546 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18546, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18545, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18548 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18548, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18547, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18551 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18550 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18551, (Optr)&t_method_return);
    Method PMethod18549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18550, 1, PSend18551);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18549, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18553 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18555 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18556 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18555);
    Array PThreadedCode18554 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18555, (Optr)&t_send1, (Optr)PSend18556, (Optr)&t_method_return);
    Method PMethod18552 = new_Method_with(PArray18553, empty_Array, empty_Array, PThreadedCode18554, 1, PSend18556);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18552, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18558 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18560 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18561 = new_Send((Optr)PSend18560, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18562 = new_Send((Optr)PSend18561, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18559 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18560, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18561, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18562, (Optr)&t_method_return);
    Method PMethod18557 = new_Method_with(PArray18558, empty_Array, empty_Array, PThreadedCode18559, 1, PSend18562);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18557, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18565 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18564 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18565, (Optr)&t_method_return);
    Method PMethod18563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18564, 1, PSend18565);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18563, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18567 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18567, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18566, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18569 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18571 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18572 = new_Send((Optr)PSuper18571, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18570 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18571, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18572, (Optr)&t_method_return);
    Method PMethod18568 = new_Method_with(PArray18569, empty_Array, empty_Array, PThreadedCode18570, 1, PSend18572);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18568, HEADER(PEG_Expression_Class));
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