#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18803 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18805 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18806 = new_Send((Optr)PSend18805, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18807 = new_Send((Optr)PSend18806, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18804 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18805, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18806, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18807, (Optr)&t_method_return);
    Method PMethod18802 = new_Method_with(PArray18803, empty_Array, empty_Array, PThreadedCode18804, 1, PSend18807);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18802, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18810 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18809 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18810, (Optr)&t_method_return);
    Method PMethod18808 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18809, 1, PSend18810);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18808, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18813 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18812 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18813, (Optr)&t_method_return);
    Method PMethod18811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18812, 1, PSend18813);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18811, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18815 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18817 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18818 = new_Send((Optr)PSend18817, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18819 = new_Send((Optr)PSend18818, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18816 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18817, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18818, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18819, (Optr)&t_method_return);
    Method PMethod18814 = new_Method_with(PArray18815, empty_Array, empty_Array, PThreadedCode18816, 1, PSend18819);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18814, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18822 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18821 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18822, (Optr)&t_method_return);
    Method PMethod18820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18821, 1, PSend18822);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18820, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18825 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18826 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18825);
    Array PThreadedCode18824 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18825, (Optr)&t_send1, (Optr)PSend18826, (Optr)&t_method_return);
    Method PMethod18823 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18824, 1, PSend18826);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18823, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18829 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18828 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18829, (Optr)&t_method_return);
    Method PMethod18827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18828, 1, PSend18829);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18827, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18831 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18834 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18836 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18840 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18839 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18840, (Optr)&t_block_return);
    Block PBlock18838 = new_Block_with(empty_Array, empty_Array, PThreadedCode18839, 1, PSend18840);
    // ifFalse:. 
    Send PSend18837 = new_Send((Optr)PSend18836, SMB_ifFalse_, 1, (Optr)PBlock18838);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18841 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18842 = new_Send((Optr)PSend18841, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18846 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18845 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18846, (Optr)&t_block_return);
    Block PBlock18844 = new_Block_with(empty_Array, empty_Array, PThreadedCode18845, 1, PSend18846);
    // ifTrue:. 
    Send PSend18843 = new_Send((Optr)PSend18842, SMB_ifTrue_, 1, (Optr)PBlock18844);
    // stack. 
    Send PSend18847 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18848 = new_Send((Optr)PSend18847, SMB_pop, 0);
    Array PThreadedCode18835 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18836, (Optr)&t_send_ifFalse_, (Optr)PSend18837, (Optr)PBlock18838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18841, (Optr)&t_send0, (Optr)PSend18842, (Optr)&t_send_ifTrue_, (Optr)PSend18843, (Optr)PBlock18844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18847, (Optr)&t_send0, (Optr)PSend18848, (Optr)&t_method_return);
    Block PBlock18833 = new_Block_with(PArray18834, empty_Array, PThreadedCode18835, 3, PSend18837, PSend18843, PSend18848);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18849 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18833);
    Array PThreadedCode18832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18833, (Optr)&t_send1, (Optr)PSend18849, (Optr)&t_method_return);
    Method PMethod18830 = new_Method_with(PArray18831, empty_Array, empty_Array, PThreadedCode18832, 1, PSend18849);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18830, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18851 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18851, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18850, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18853 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18853, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18852, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18856 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18855 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18856, (Optr)&t_method_return);
    Method PMethod18854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18855, 1, PSend18856);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18854, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18858 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18860 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18861 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18860);
    Array PThreadedCode18859 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18860, (Optr)&t_send1, (Optr)PSend18861, (Optr)&t_method_return);
    Method PMethod18857 = new_Method_with(PArray18858, empty_Array, empty_Array, PThreadedCode18859, 1, PSend18861);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18857, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18863 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18865 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18866 = new_Send((Optr)PSend18865, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18867 = new_Send((Optr)PSend18866, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18864 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18865, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18866, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18867, (Optr)&t_method_return);
    Method PMethod18862 = new_Method_with(PArray18863, empty_Array, empty_Array, PThreadedCode18864, 1, PSend18867);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18862, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18870 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18869 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18870, (Optr)&t_method_return);
    Method PMethod18868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18869, 1, PSend18870);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18868, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18872 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18872, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18871, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18874 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18876 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18877 = new_Send((Optr)PSuper18876, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18875 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18876, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18877, (Optr)&t_method_return);
    Method PMethod18873 = new_Method_with(PArray18874, empty_Array, empty_Array, PThreadedCode18875, 1, PSend18877);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18873, HEADER(PEG_Expression_Class));
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