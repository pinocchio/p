#include <lib/class/PEG/Expression.h>


Optr layout_PEG_Expression_Class_class;


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18900 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18902 = new_Send((Optr)PEGOrderedChoiceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18903 = new_Send((Optr)PSend18902, SMB__lt__equals_, 1, (Optr)self);
    // <=. 
    Send PSend18904 = new_Send((Optr)PSend18903, SMB__lt__equals_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18901 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGOrderedChoiceExpression_classReference, (Optr)&t_send0, (Optr)PSend18902, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18903, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18904, (Optr)&t_method_return);
    Method PMethod18899 = new_Method_with(PArray18900, empty_Array, empty_Array, PThreadedCode18901, 1, PSend18904);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PMethod18899, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB_omit() {
    Symbol SMB_omit = new_Symbol(L"omit");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18907 = new_Send((Optr)PEGOmit_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18906 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOmit_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18907, (Optr)&t_method_return);
    Method PMethod18905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18906, 1, PSend18907);
    
    MethodClosure MC_SMB_omit = new_MethodClosure((Method)PMethod18905, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_omit, MC_SMB_omit);
}


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18910 = new_Send((Optr)PEGStrongZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18909 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18910, (Optr)&t_method_return);
    Method PMethod18908 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18909, 1, PSend18910);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18908, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB__logicAnd_() {
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18912 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18914 = new_Send((Optr)PEGStrongSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18915 = new_Send((Optr)PSend18914, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18916 = new_Send((Optr)PSend18915, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18913 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGStrongSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18914, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18915, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18916, (Optr)&t_method_return);
    Method PMethod18911 = new_Method_with(PArray18912, empty_Array, empty_Array, PThreadedCode18913, 1, PSend18916);
    
    MethodClosure MC_SMB__logicAnd_ = new_MethodClosure((Method)PMethod18911, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__logicAnd_, MC_SMB__logicAnd_);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18919 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18918 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18919, (Optr)&t_method_return);
    Method PMethod18917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18918, 1, PSend18919);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18917, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend18922 = new_Send((Optr)PEGAtEnd_classReference, SMB_instance, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend18923 = new_Send((Optr)self, SMB__and_, 1, (Optr)PSend18922);
    Array PThreadedCode18921 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGAtEnd_classReference, (Optr)&t_send0, (Optr)PSend18922, (Optr)&t_send1, (Optr)PSend18923, (Optr)&t_method_return);
    Method PMethod18920 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18921, 1, PSend18923);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18920, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_optional() {
    Symbol SMB_optional = new_Symbol(L"optional");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18926 = new_Send((Optr)PEGOptionalExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18925 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOptionalExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18926, (Optr)&t_method_return);
    Method PMethod18924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18925, 1, PSend18926);
    
    MethodClosure MC_SMB_optional = new_MethodClosure((Method)PMethod18924, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_optional, MC_SMB_optional);
}


static void init_SMB_match_() {
    Symbol SMB_match_ = new_Symbol(L"match:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18928 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18931 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    // parseOn:. 
    Send PSend18933 = new_Send((Optr)self, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_parsingFailed = new_Symbol(L"parsingFailed");
    // parsingFailed. 
    Send PSend18937 = new_Send((Optr)VAR_input_0_0, SMB_parsingFailed, 0);
    Array PThreadedCode18936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18937, (Optr)&t_block_return);
    Block PBlock18935 = new_Block_with(empty_Array, empty_Array, PThreadedCode18936, 1, PSend18937);
    // ifFalse:. 
    Send PSend18934 = new_Send((Optr)PSend18933, SMB_ifFalse_, 1, (Optr)PBlock18935);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18938 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend18939 = new_Send((Optr)PSend18938, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18943 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18942 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18943, (Optr)&t_block_return);
    Block PBlock18941 = new_Block_with(empty_Array, empty_Array, PThreadedCode18942, 1, PSend18943);
    // ifTrue:. 
    Send PSend18940 = new_Send((Optr)PSend18939, SMB_ifTrue_, 1, (Optr)PBlock18941);
    // stack. 
    Send PSend18944 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_pop = new_Symbol(L"pop");
    // pop. 
    Send PSend18945 = new_Send((Optr)PSend18944, SMB_pop, 0);
    Array PThreadedCode18932 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18933, (Optr)&t_send_ifFalse_, (Optr)PSend18934, (Optr)PBlock18935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18938, (Optr)&t_send0, (Optr)PSend18939, (Optr)&t_send_ifTrue_, (Optr)PSend18940, (Optr)PBlock18941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18944, (Optr)&t_send0, (Optr)PSend18945, (Optr)&t_method_return);
    Block PBlock18930 = new_Block_with(PArray18931, empty_Array, PThreadedCode18932, 3, PSend18934, PSend18940, PSend18945);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18946 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18930);
    Array PThreadedCode18929 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18930, (Optr)&t_send1, (Optr)PSend18946, (Optr)&t_method_return);
    Method PMethod18927 = new_Method_with(PArray18928, empty_Array, empty_Array, PThreadedCode18929, 1, PSend18946);
    
    MethodClosure MC_SMB_match_ = new_MethodClosure((Method)PMethod18927, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_match_, MC_SMB_match_);
}


static void init_SMB_asChildParser() {
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    Array PThreadedCode18948 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18947 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18948, 1, self);
    
    MethodClosure MC_SMB_asChildParser = new_MethodClosure((Method)PMethod18947, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asChildParser, MC_SMB_asChildParser);
}


static void init_SMB_withoutOmit() {
    Symbol SMB_withoutOmit = new_Symbol(L"withoutOmit");
    Array PThreadedCode18950 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18950, 1, self);
    
    MethodClosure MC_SMB_withoutOmit = new_MethodClosure((Method)PMethod18949, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_withoutOmit, MC_SMB_withoutOmit);
}


static void init_SMB_plus() {
    Symbol SMB_plus = new_Symbol(L"plus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18953 = new_Send((Optr)PEGOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18952 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18953, (Optr)&t_method_return);
    Method PMethod18951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18952, 1, PSend18953);
    
    MethodClosure MC_SMB_plus = new_MethodClosure((Method)PMethod18951, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_plus, MC_SMB_plus);
}


static void init_SMB_parse_() {
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18955 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18957 = new_Send((Optr)PEGStringScanner_classReference, SMB_on_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_match_ = new_Symbol(L"match:");
    // match:. 
    Send PSend18958 = new_Send((Optr)self, SMB_match_, 1, (Optr)PSend18957);
    Array PThreadedCode18956 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PEGStringScanner_classReference, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18957, (Optr)&t_send1, (Optr)PSend18958, (Optr)&t_method_return);
    Method PMethod18954 = new_Method_with(PArray18955, empty_Array, empty_Array, PThreadedCode18956, 1, PSend18958);
    
    MethodClosure MC_SMB_parse_ = new_MethodClosure((Method)PMethod18954, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_parse_, MC_SMB_parse_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_expression_0_0 = new_Variable_named(L"expression", 0);
    Array PArray18960 = new_Array_with(1, (Optr)VAR_expression_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18962 = new_Send((Optr)PEGSequenceExpression_classReference, SMB_new, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend18963 = new_Send((Optr)PSend18962, SMB__lt__and_, 1, (Optr)self);
    // <&. 
    Send PSend18964 = new_Send((Optr)PSend18963, SMB__lt__and_, 1, (Optr)VAR_expression_0_0);
    Array PThreadedCode18961 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGSequenceExpression_classReference, (Optr)&t_send0, (Optr)PSend18962, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18963, (Optr)&t_push_variable, (Optr)VAR_expression_0_0, (Optr)&t_send1, (Optr)PSend18964, (Optr)&t_method_return);
    Method PMethod18959 = new_Method_with(PArray18960, empty_Array, empty_Array, PThreadedCode18961, 1, PSend18964);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PMethod18959, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_times() {
    Symbol SMB_times = new_Symbol(L"times");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18967 = new_Send((Optr)PEGZeroOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18966 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGZeroOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18967, (Optr)&t_method_return);
    Method PMethod18965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18966, 1, PSend18967);
    
    MethodClosure MC_SMB_times = new_MethodClosure((Method)PMethod18965, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_times, MC_SMB_times);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Array PThreadedCode18969 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18969, 1, self);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod18968, PEG_Expression_Class);
    store_method(PEG_Expression_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_argument_0_0 = new_Variable_named(L"argument", 0);
    Array PArray18971 = new_Array_with(1, (Optr)VAR_argument_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18973 = new_Super(SMB_basicNew, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend18974 = new_Send((Optr)PSuper18973, SMB_initialize_, 1, (Optr)VAR_argument_0_0);
    Array PThreadedCode18972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18973, (Optr)&t_push_variable, (Optr)VAR_argument_0_0, (Optr)&t_send1, (Optr)PSend18974, (Optr)&t_method_return);
    Method PMethod18970 = new_Method_with(PArray18971, empty_Array, empty_Array, PThreadedCode18972, 1, PSend18974);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod18970, HEADER(PEG_Expression_Class));
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