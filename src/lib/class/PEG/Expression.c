#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18771 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18773 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18774 = new_Send((Optr)PSend18773, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18775 = new_Send((Optr)PSend18774, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18772 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18773, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18774, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18775, (Optr)&t_method_return);
    Method PMethod18770 = new_Method_with(PArray18771, empty_Array, empty_Array, PThreadedCode18772, 1, PSend18775);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18770, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18778 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18777 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18778, (Optr)&t_method_return);
    Method PMethod18776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18777, 1, PSend18778);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18776, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18781 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18780 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18781, (Optr)&t_method_return);
    Method PMethod18779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18780, 1, PSend18781);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18779, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18783 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18785 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18786 = new_Send((Optr)PSend18785, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18787 = new_Send((Optr)PSend18786, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18784 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18785, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18786, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18787, (Optr)&t_method_return);
    Method PMethod18782 = new_Method_with(PArray18783, empty_Array, empty_Array, PThreadedCode18784, 1, PSend18787);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18782, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18790 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18789 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18790, (Optr)&t_method_return);
    Method PMethod18788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18789, 1, PSend18790);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18788, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18793 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18794 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18793);
    Array PThreadedCode18792 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18793, (Optr)&t_send1, (Optr)PSend18794, (Optr)&t_method_return);
    Method PMethod18791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18792, 1, PSend18794);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18791, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18796 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18796, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18795, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18799 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18798 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18799, (Optr)&t_method_return);
    Method PMethod18797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18798, 1, PSend18799);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18797, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18801 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18804 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18806 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18810 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18809 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18810, (Optr)&t_block_return);
    Block PBlock18808 = new_Block_with(empty_Array, empty_Array, PThreadedCode18809, 1, PSend18810);
    // ifFalse:. 
    Send PSend18807 = new_Send((Optr)PSend18806, SMB_ifFalse_, 1, (Optr)PBlock18808);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18811 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18812 = new_Send((Optr)PSend18811, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18816 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18815 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18816, (Optr)&t_block_return);
    Block PBlock18814 = new_Block_with(empty_Array, empty_Array, PThreadedCode18815, 1, PSend18816);
    // ifTrue:. 
    Send PSend18813 = new_Send((Optr)PSend18812, SMB_ifTrue_, 1, (Optr)PBlock18814);
    // stack. 
    Send PSend18817 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18818 = new_Send((Optr)PSend18817, SMB_pop, 0);
    Array PThreadedCode18805 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18806, (Optr)&t_send_ifFalse_, (Optr)PSend18807, (Optr)PBlock18808, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18811, (Optr)&t_send0, (Optr)PSend18812, (Optr)&t_send_ifTrue_, (Optr)PSend18813, (Optr)PBlock18814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18817, (Optr)&t_send0, (Optr)PSend18818, (Optr)&t_method_return);
    Block PBlock18803 = new_Block_with(PArray18804, empty_Array, PThreadedCode18805, 3, PSend18807, PSend18813, PSend18818);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18819 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18803);
    Array PThreadedCode18802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18803, (Optr)&t_send1, (Optr)PSend18819, (Optr)&t_method_return);
    Method PMethod18800 = new_Method_with(PArray18801, empty_Array, empty_Array, PThreadedCode18802, 1, PSend18819);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18800, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18821 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18821, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18820, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18823 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18823, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18822, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18826 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18825 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18826, (Optr)&t_method_return);
    Method PMethod18824 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18825, 1, PSend18826);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18824, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18828 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18830 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18831 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18830);
    Array PThreadedCode18829 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18830, (Optr)&t_send1, (Optr)PSend18831, (Optr)&t_method_return);
    Method PMethod18827 = new_Method_with(PArray18828, empty_Array, empty_Array, PThreadedCode18829, 1, PSend18831);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18827, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18833 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18835 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18836 = new_Send((Optr)PSend18835, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18837 = new_Send((Optr)PSend18836, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18834 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18835, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18836, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18837, (Optr)&t_method_return);
    Method PMethod18832 = new_Method_with(PArray18833, empty_Array, empty_Array, PThreadedCode18834, 1, PSend18837);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18832, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18840 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18840, (Optr)&t_method_return);
    Method PMethod18838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18839, 1, PSend18840);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18838, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18842 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18844 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18845 = new_Send((Optr)PSuper18844, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18843 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18844, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18845, (Optr)&t_method_return);
    Method PMethod18841 = new_Method_with(PArray18842, empty_Array, empty_Array, PThreadedCode18843, 1, PSend18845);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18841, HEADER(PEG_Expression_Class));
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