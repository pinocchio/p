#include <lib/class/PEG/Memo.h>


Optr layout_PEG_Memo_Class_class;
Optr slot_PEG_Memo_parser;
Optr layout_PEG_Memo;


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend19962 = new_Send((Optr)slot_PEG_Memo_parser, SMB_expression, 0);
    Array PThreadedCode19961 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send0, (Optr)PSend19962, (Optr)&t_method_return);
    Method PMethod19960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19961, 1, PSend19962);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod19960, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19964 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    // memoizeMatch:. 
    Send PSend19966 = new_Send((Optr)VAR_input_0_0, SMB_memoizeMatch_, 1, (Optr)slot_PEG_Memo_parser);
    Array PThreadedCode19965 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send1, (Optr)PSend19966, (Optr)&t_method_return);
    Method PMethod19963 = new_Method_with(PArray19964, empty_Array, empty_Array, PThreadedCode19965, 1, PSend19966);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19963, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19968 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19970 = new_Send((Optr)slot_PEG_Memo_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19970, (Optr)&t_method_return);
    Method PMethod19967 = new_Method_with(PArray19968, empty_Array, empty_Array, PThreadedCode19969, 1, PSend19970);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19967, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19972 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // semantics:. 
    Send PSend19974 = new_Send((Optr)slot_PEG_Memo_parser, SMB_semantics_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode19973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend19974, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19971 = new_Method_with(PArray19972, empty_Array, empty_Array, PThreadedCode19973, 2, PSend19974, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod19971, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB_on_() {
    /*
    on: p
// 	^ super basicNew on: p
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray19976 = new_Array_with(1, (Optr)VAR_p_0_0);
    Assign PAssign19978 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)VAR_p_0_0);
    Array PThreadedCode19977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19978, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19975 = new_Method_with(PArray19976, empty_Array, empty_Array, PThreadedCode19977, 2, PAssign19978, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19975, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19980 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19983 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19988 = new_Send((Optr)VAR_child_0_0, SMB_asChildParser, 0);
    Assign PAssign19987 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)PSend19988);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19989 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19987);
    Array PThreadedCode19986 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19987, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19988, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19989, (Optr)&t_block_return);
    Block PBlock19985 = new_Block_with(empty_Array, empty_Array, PThreadedCode19986, 1, PSend19989);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19990 = new_Send((Optr)slot_PEG_Memo_parser, SMB_ifNil_, 1, (Optr)PBlock19985);
    // <=. 
    Send PSend19991 = new_Send((Optr)slot_PEG_Memo_parser, SMB__lt__equals_, 1, (Optr)VAR_child_0_0);
    Array PThreadedCode19984 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_closure, (Optr)PBlock19985, (Optr)&t_send1, (Optr)PSend19990, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send1, (Optr)PSend19991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19982 = new_Block_with(PArray19983, empty_Array, PThreadedCode19984, 3, PSend19990, PSend19991, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19992 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19982);
    Array PThreadedCode19981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19982, (Optr)&t_send1, (Optr)PSend19992, (Optr)&t_method_return);
    Method PMethod19979 = new_Method_with(PArray19980, empty_Array, empty_Array, PThreadedCode19981, 1, PSend19992);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19979, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray19994 = new_Array_with(1, (Optr)VAR_p_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper19996 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend19997 = new_Send((Optr)PSuper19996, SMB_on_, 1, (Optr)VAR_p_0_0);
    Array PThreadedCode19995 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19996, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_send1, (Optr)PSend19997, (Optr)&t_method_return);
    Method PMethod19993 = new_Method_with(PArray19994, empty_Array, empty_Array, PThreadedCode19995, 1, PSend19997);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19993, HEADER(PEG_Memo_Class));
    store_method(HEADER(PEG_Memo_Class), SMB_on_, MC_SMB_on_);
}

void init_PEG_PEGMemo_layout() {
    layout_PEG_Memo_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Memo_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Memo_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Memo_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Memo_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Memo_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Memo = new_Symbol(L"Memo");
    slot_PEG_Memo_parser = (Optr)new_Slot(0, L"parser");
    layout_PEG_Memo = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_Memo)->values[0] = slot_PEG_Memo_parser; // parser 
    PEG_Memo_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Memo_Class_class);
    PEG_Memo_Class->layout = layout_PEG_Memo;
    PEG_Memo_Class->name = SMB_Memo;
    
}

void init_PEG_PEGMemo_methods() {
    init_SMB_expression();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_semantics_();
    init_SMB_on_();
    init_SMB__lt__equals_();
    init_class_SMB_on_();
    
}