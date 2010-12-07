#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18769 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18771 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18772 = new_Send((Optr)PSend18771, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18773 = new_Send((Optr)PSend18772, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18770 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18771, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18772, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18773, (Optr)&t_method_return);
    Method PMethod18768 = new_Method_with(PArray18769, empty_Array, empty_Array, PThreadedCode18770, 1, PSend18773);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18768, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18776 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18775 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18776, (Optr)&t_method_return);
    Method PMethod18774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18775, 1, PSend18776);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18774, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18779 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18779, (Optr)&t_method_return);
    Method PMethod18777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18778, 1, PSend18779);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18777, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18781 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18783 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18784 = new_Send((Optr)PSend18783, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18785 = new_Send((Optr)PSend18784, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18782 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18783, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18784, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18785, (Optr)&t_method_return);
    Method PMethod18780 = new_Method_with(PArray18781, empty_Array, empty_Array, PThreadedCode18782, 1, PSend18785);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18780, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18788 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18787 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18788, (Optr)&t_method_return);
    Method PMethod18786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18787, 1, PSend18788);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18786, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18791 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18792 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18791);
    Array PThreadedCode18790 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18791, (Optr)&t_send1, (Optr)PSend18792, (Optr)&t_method_return);
    Method PMethod18789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18790, 1, PSend18792);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18789, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18794 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18794, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18793, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18797 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18796 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18797, (Optr)&t_method_return);
    Method PMethod18795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18796, 1, PSend18797);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18795, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18799 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18802 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18804 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18808 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18807 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18808, (Optr)&t_block_return);
    Block PBlock18806 = new_Block_with(empty_Array, empty_Array, PThreadedCode18807, 1, PSend18808);
    // ifFalse:. 
    Send PSend18805 = new_Send((Optr)PSend18804, SMB_ifFalse_, 1, (Optr)PBlock18806);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18809 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18810 = new_Send((Optr)PSend18809, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18814 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18813 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18814, (Optr)&t_block_return);
    Block PBlock18812 = new_Block_with(empty_Array, empty_Array, PThreadedCode18813, 1, PSend18814);
    // ifTrue:. 
    Send PSend18811 = new_Send((Optr)PSend18810, SMB_ifTrue_, 1, (Optr)PBlock18812);
    // stack. 
    Send PSend18815 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18816 = new_Send((Optr)PSend18815, SMB_pop, 0);
    Array PThreadedCode18803 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18804, (Optr)&t_send_ifFalse_, (Optr)PSend18805, (Optr)PBlock18806, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18809, (Optr)&t_send0, (Optr)PSend18810, (Optr)&t_send_ifTrue_, (Optr)PSend18811, (Optr)PBlock18812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18815, (Optr)&t_send0, (Optr)PSend18816, (Optr)&t_method_return);
    Block PBlock18801 = new_Block_with(PArray18802, empty_Array, PThreadedCode18803, 3, PSend18805, PSend18811, PSend18816);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18817 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18801);
    Array PThreadedCode18800 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18801, (Optr)&t_send1, (Optr)PSend18817, (Optr)&t_method_return);
    Method PMethod18798 = new_Method_with(PArray18799, empty_Array, empty_Array, PThreadedCode18800, 1, PSend18817);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18798, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18819 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18819, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18818, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18821 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18821, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18820, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18824 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18823 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18824, (Optr)&t_method_return);
    Method PMethod18822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18823, 1, PSend18824);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18822, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18826 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18828 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18829 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18828);
    Array PThreadedCode18827 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18828, (Optr)&t_send1, (Optr)PSend18829, (Optr)&t_method_return);
    Method PMethod18825 = new_Method_with(PArray18826, empty_Array, empty_Array, PThreadedCode18827, 1, PSend18829);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18825, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18831 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18833 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18834 = new_Send((Optr)PSend18833, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18835 = new_Send((Optr)PSend18834, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18832 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18833, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18834, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18835, (Optr)&t_method_return);
    Method PMethod18830 = new_Method_with(PArray18831, empty_Array, empty_Array, PThreadedCode18832, 1, PSend18835);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18830, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18838 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18837 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18838, (Optr)&t_method_return);
    Method PMethod18836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18837, 1, PSend18838);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18836, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18840 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18842 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18843 = new_Send((Optr)PSuper18842, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18841 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18842, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18843, (Optr)&t_method_return);
    Method PMethod18839 = new_Method_with(PArray18840, empty_Array, empty_Array, PThreadedCode18841, 1, PSend18843);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18839, HEADER(PEG_Expression_Class));
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