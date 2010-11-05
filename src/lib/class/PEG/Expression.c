#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18607 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18609 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18610 = new_Send((Optr)PSend18609, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18611 = new_Send((Optr)PSend18610, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18608 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18609, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18610, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18611, (Optr)&t_method_return);
    Method PMethod18606 = new_Method_with(PArray18607, empty_Array, empty_Array, PThreadedCode18608, 1, PSend18611);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18606, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18614 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18613 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18614, (Optr)&t_method_return);
    Method PMethod18612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18613, 1, PSend18614);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18612, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18617 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18616 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18617, (Optr)&t_method_return);
    Method PMethod18615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18616, 1, PSend18617);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18615, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18619 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18621 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18622 = new_Send((Optr)PSend18621, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18623 = new_Send((Optr)PSend18622, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18620 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18621, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18622, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18623, (Optr)&t_method_return);
    Method PMethod18618 = new_Method_with(PArray18619, empty_Array, empty_Array, PThreadedCode18620, 1, PSend18623);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18618, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18626 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18625 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18626, (Optr)&t_method_return);
    Method PMethod18624 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18625, 1, PSend18626);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18624, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18629 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18630 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18629);
    Array PThreadedCode18628 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18629, (Optr)&t_send1, (Optr)PSend18630, (Optr)&t_method_return);
    Method PMethod18627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18628, 1, PSend18630);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18627, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18633 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18632 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18633, (Optr)&t_method_return);
    Method PMethod18631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18632, 1, PSend18633);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18631, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18635 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18638 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18640 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18644 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18643 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18644, (Optr)&t_block_return);
    Block PBlock18642 = new_Block_with(empty_Array, empty_Array, PThreadedCode18643, 1, PSend18644);
    // ifFalse:. 
    Send PSend18641 = new_Send((Optr)PSend18640, SMB_ifFalse_, 1, (Optr)PBlock18642);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18645 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18646 = new_Send((Optr)PSend18645, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18650 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18649 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18650, (Optr)&t_block_return);
    Block PBlock18648 = new_Block_with(empty_Array, empty_Array, PThreadedCode18649, 1, PSend18650);
    // ifTrue:. 
    Send PSend18647 = new_Send((Optr)PSend18646, SMB_ifTrue_, 1, (Optr)PBlock18648);
    // stack. 
    Send PSend18651 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18652 = new_Send((Optr)PSend18651, SMB_pop, 0);
    Array PThreadedCode18639 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_send_ifFalse_, (Optr)PSend18641, (Optr)PBlock18642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18645, (Optr)&t_send0, (Optr)PSend18646, (Optr)&t_send_ifTrue_, (Optr)PSend18647, (Optr)PBlock18648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18651, (Optr)&t_send0, (Optr)PSend18652, (Optr)&t_method_return);
    Block PBlock18637 = new_Block_with(PArray18638, empty_Array, PThreadedCode18639, 3, PSend18641, PSend18647, PSend18652);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18653 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18637);
    Array PThreadedCode18636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18637, (Optr)&t_send1, (Optr)PSend18653, (Optr)&t_method_return);
    Method PMethod18634 = new_Method_with(PArray18635, empty_Array, empty_Array, PThreadedCode18636, 1, PSend18653);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18634, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18655 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18655, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18654, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18657 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18656 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18657, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18656, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18660 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18659 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18660, (Optr)&t_method_return);
    Method PMethod18658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18659, 1, PSend18660);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18658, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18662 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18664 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18665 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18664);
    Array PThreadedCode18663 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18664, (Optr)&t_send1, (Optr)PSend18665, (Optr)&t_method_return);
    Method PMethod18661 = new_Method_with(PArray18662, empty_Array, empty_Array, PThreadedCode18663, 1, PSend18665);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18661, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18667 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18669 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18670 = new_Send((Optr)PSend18669, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18671 = new_Send((Optr)PSend18670, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18668 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18669, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18670, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18671, (Optr)&t_method_return);
    Method PMethod18666 = new_Method_with(PArray18667, empty_Array, empty_Array, PThreadedCode18668, 1, PSend18671);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18666, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18674 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18673 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18674, (Optr)&t_method_return);
    Method PMethod18672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18673, 1, PSend18674);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18672, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18676 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18676, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18675, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18678 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18680 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18681 = new_Send((Optr)PSuper18680, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18679 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18680, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18681, (Optr)&t_method_return);
    Method PMethod18677 = new_Method_with(PArray18678, empty_Array, empty_Array, PThreadedCode18679, 1, PSend18681);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18677, HEADER(PEG_Expression_Class));
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