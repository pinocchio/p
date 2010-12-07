#include <lib/class/PEG/Memo.h>


Optr layout_PEG_Memo_Class_class;
Optr slot_PEG_Memo_parser;
Optr layout_PEG_Memo;


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend19994 = new_Send((Optr)slot_PEG_Memo_parser, SMB_expression, 0);
    Array PThreadedCode19993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send0, (Optr)PSend19994, (Optr)&t_method_return);
    Method PMethod19992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19993, 1, PSend19994);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod19992, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19996 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    // memoizeMatch:. 
    Send PSend19998 = new_Send((Optr)VAR_input_0_0, SMB_memoizeMatch_, 1, (Optr)slot_PEG_Memo_parser);
    Array PThreadedCode19997 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send1, (Optr)PSend19998, (Optr)&t_method_return);
    Method PMethod19995 = new_Method_with(PArray19996, empty_Array, empty_Array, PThreadedCode19997, 1, PSend19998);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19995, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20000 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend20002 = new_Send((Optr)slot_PEG_Memo_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode20001 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend20002, (Optr)&t_method_return);
    Method PMethod19999 = new_Method_with(PArray20000, empty_Array, empty_Array, PThreadedCode20001, 1, PSend20002);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19999, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20004 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // semantics:. 
    Send PSend20006 = new_Send((Optr)slot_PEG_Memo_parser, SMB_semantics_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20006, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20003 = new_Method_with(PArray20004, empty_Array, empty_Array, PThreadedCode20005, 2, PSend20006, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod20003, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB_on_() {
    /*
    on: p
// 	^ super basicNew on: p
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray20008 = new_Array_with(1, (Optr)VAR_p_0_0);
    Assign PAssign20010 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)VAR_p_0_0);
    Array PThreadedCode20009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20010, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20007 = new_Method_with(PArray20008, empty_Array, empty_Array, PThreadedCode20009, 2, PAssign20010, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20007, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray20012 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20015 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend20020 = new_Send((Optr)VAR_child_0_0, SMB_asChildParser, 0);
    Assign PAssign20019 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)PSend20020);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20021 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign20019);
    Array PThreadedCode20018 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign20019, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend20020, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend20021, (Optr)&t_block_return);
    Block PBlock20017 = new_Block_with(empty_Array, empty_Array, PThreadedCode20018, 1, PSend20021);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend20022 = new_Send((Optr)slot_PEG_Memo_parser, SMB_ifNil_, 1, (Optr)PBlock20017);
    // <=. 
    Send PSend20023 = new_Send((Optr)slot_PEG_Memo_parser, SMB__lt__equals_, 1, (Optr)VAR_child_0_0);
    Array PThreadedCode20016 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_closure, (Optr)PBlock20017, (Optr)&t_send1, (Optr)PSend20022, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send1, (Optr)PSend20023, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock20014 = new_Block_with(PArray20015, empty_Array, PThreadedCode20016, 3, PSend20022, PSend20023, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20024 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20014);
    Array PThreadedCode20013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20014, (Optr)&t_send1, (Optr)PSend20024, (Optr)&t_method_return);
    Method PMethod20011 = new_Method_with(PArray20012, empty_Array, empty_Array, PThreadedCode20013, 1, PSend20024);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod20011, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray20026 = new_Array_with(1, (Optr)VAR_p_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper20028 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend20029 = new_Send((Optr)PSuper20028, SMB_on_, 1, (Optr)VAR_p_0_0);
    Array PThreadedCode20027 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper20028, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_send1, (Optr)PSend20029, (Optr)&t_method_return);
    Method PMethod20025 = new_Method_with(PArray20026, empty_Array, empty_Array, PThreadedCode20027, 1, PSend20029);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20025, HEADER(PEG_Memo_Class));
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