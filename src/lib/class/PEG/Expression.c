#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18582 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18584 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18585 = new_Send((Optr)PSend18584, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18586 = new_Send((Optr)PSend18585, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18583 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18584, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18585, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18586, (Optr)&t_method_return);
    Method PMethod18581 = new_Method_with(PArray18582, empty_Array, empty_Array, PThreadedCode18583, 1, PSend18586);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18581, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18589 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18588 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18589, (Optr)&t_method_return);
    Method PMethod18587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18588, 1, PSend18589);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18587, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18592 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18591 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18592, (Optr)&t_method_return);
    Method PMethod18590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18591, 1, PSend18592);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18590, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18594 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18596 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18597 = new_Send((Optr)PSend18596, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18598 = new_Send((Optr)PSend18597, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18595 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18596, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18598, (Optr)&t_method_return);
    Method PMethod18593 = new_Method_with(PArray18594, empty_Array, empty_Array, PThreadedCode18595, 1, PSend18598);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18593, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18601 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18600 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18601, (Optr)&t_method_return);
    Method PMethod18599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18600, 1, PSend18601);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18599, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18604 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18605 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18604);
    Array PThreadedCode18603 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18604, (Optr)&t_send1, (Optr)PSend18605, (Optr)&t_method_return);
    Method PMethod18602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18603, 1, PSend18605);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18602, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18608 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18608, (Optr)&t_method_return);
    Method PMethod18606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18607, 1, PSend18608);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18606, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18610 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18613 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18615 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18619 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18618 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18619, (Optr)&t_block_return);
    Block PBlock18617 = new_Block_with(empty_Array, empty_Array, PThreadedCode18618, 1, PSend18619);
    // ifFalse:. 
    Send PSend18616 = new_Send((Optr)PSend18615, SMB_ifFalse_, 1, (Optr)PBlock18617);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18620 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18621 = new_Send((Optr)PSend18620, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18624 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18625, (Optr)&t_block_return);
    Block PBlock18623 = new_Block_with(empty_Array, empty_Array, PThreadedCode18624, 1, PSend18625);
    // ifTrue:. 
    Send PSend18622 = new_Send((Optr)PSend18621, SMB_ifTrue_, 1, (Optr)PBlock18623);
    // stack. 
    Send PSend18626 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18627 = new_Send((Optr)PSend18626, SMB_pop, 0);
    Array PThreadedCode18614 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18615, (Optr)&t_send_ifFalse_, (Optr)PSend18616, (Optr)PBlock18617, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18620, (Optr)&t_send0, (Optr)PSend18621, (Optr)&t_send_ifTrue_, (Optr)PSend18622, (Optr)PBlock18623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18626, (Optr)&t_send0, (Optr)PSend18627, (Optr)&t_method_return);
    Block PBlock18612 = new_Block_with(PArray18613, empty_Array, PThreadedCode18614, 3, PSend18616, PSend18622, PSend18627);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18628 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18612);
    Array PThreadedCode18611 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18612, (Optr)&t_send1, (Optr)PSend18628, (Optr)&t_method_return);
    Method PMethod18609 = new_Method_with(PArray18610, empty_Array, empty_Array, PThreadedCode18611, 1, PSend18628);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18609, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18630 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18629 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18630, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18629, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18632 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18632, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18631, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18635 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18634 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18635, (Optr)&t_method_return);
    Method PMethod18633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18634, 1, PSend18635);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18633, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18637 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18639 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18640 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18639);
    Array PThreadedCode18638 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18639, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_method_return);
    Method PMethod18636 = new_Method_with(PArray18637, empty_Array, empty_Array, PThreadedCode18638, 1, PSend18640);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18636, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18642 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18644 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18645 = new_Send((Optr)PSend18644, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18646 = new_Send((Optr)PSend18645, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18643 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18644, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18645, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18646, (Optr)&t_method_return);
    Method PMethod18641 = new_Method_with(PArray18642, empty_Array, empty_Array, PThreadedCode18643, 1, PSend18646);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18641, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18649 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18648 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18649, (Optr)&t_method_return);
    Method PMethod18647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18648, 1, PSend18649);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18647, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18651 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18651, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18650, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18653 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18655 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18656 = new_Send((Optr)PSuper18655, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18654 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18655, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18656, (Optr)&t_method_return);
    Method PMethod18652 = new_Method_with(PArray18653, empty_Array, empty_Array, PThreadedCode18654, 1, PSend18656);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18652, HEADER(PEG_Expression_Class));
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