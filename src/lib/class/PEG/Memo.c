#include <lib/class/PEG/Memo.h>


Optr layout_PEG_Memo_Class_class;
Optr slot_PEG_Memo_parser;
Optr layout_PEG_Memo;


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend20091 = new_Send((Optr)slot_PEG_Memo_parser, SMB_expression, 0);
    Array PThreadedCode20090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send0, (Optr)PSend20091, (Optr)&t_method_return);
    Method PMethod20089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20090, 1, PSend20091);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod20089, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20093 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    // memoizeMatch:. 
    Send PSend20095 = new_Send((Optr)VAR_input_0_0, SMB_memoizeMatch_, 1, (Optr)slot_PEG_Memo_parser);
    Array PThreadedCode20094 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send1, (Optr)PSend20095, (Optr)&t_method_return);
    Method PMethod20092 = new_Method_with(PArray20093, empty_Array, empty_Array, PThreadedCode20094, 1, PSend20095);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20092, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20097 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend20099 = new_Send((Optr)slot_PEG_Memo_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode20098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend20099, (Optr)&t_method_return);
    Method PMethod20096 = new_Method_with(PArray20097, empty_Array, empty_Array, PThreadedCode20098, 1, PSend20099);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20096, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray20101 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // semantics:. 
    Send PSend20103 = new_Send((Optr)slot_PEG_Memo_parser, SMB_semantics_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode20102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend20103, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20100 = new_Method_with(PArray20101, empty_Array, empty_Array, PThreadedCode20102, 2, PSend20103, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod20100, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB_on_() {
    /*
    on: p
// 	^ super basicNew on: p
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray20105 = new_Array_with(1, (Optr)VAR_p_0_0);
    Assign PAssign20107 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)VAR_p_0_0);
    Array PThreadedCode20106 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20107, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20104 = new_Method_with(PArray20105, empty_Array, empty_Array, PThreadedCode20106, 2, PAssign20107, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20104, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray20109 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20112 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend20117 = new_Send((Optr)VAR_child_0_0, SMB_asChildParser, 0);
    Assign PAssign20116 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)PSend20117);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20118 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign20116);
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign20116, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend20117, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend20118, (Optr)&t_block_return);
    Block PBlock20114 = new_Block_with(empty_Array, empty_Array, PThreadedCode20115, 1, PSend20118);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend20119 = new_Send((Optr)slot_PEG_Memo_parser, SMB_ifNil_, 1, (Optr)PBlock20114);
    // <=. 
    Send PSend20120 = new_Send((Optr)slot_PEG_Memo_parser, SMB__lt__equals_, 1, (Optr)VAR_child_0_0);
    Array PThreadedCode20113 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_closure, (Optr)PBlock20114, (Optr)&t_send1, (Optr)PSend20119, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send1, (Optr)PSend20120, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock20111 = new_Block_with(PArray20112, empty_Array, PThreadedCode20113, 3, PSend20119, PSend20120, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20121 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20111);
    Array PThreadedCode20110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20111, (Optr)&t_send1, (Optr)PSend20121, (Optr)&t_method_return);
    Method PMethod20108 = new_Method_with(PArray20109, empty_Array, empty_Array, PThreadedCode20110, 1, PSend20121);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod20108, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray20123 = new_Array_with(1, (Optr)VAR_p_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper20125 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend20126 = new_Send((Optr)PSuper20125, SMB_on_, 1, (Optr)VAR_p_0_0);
    Array PThreadedCode20124 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper20125, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_send1, (Optr)PSend20126, (Optr)&t_method_return);
    Method PMethod20122 = new_Method_with(PArray20123, empty_Array, empty_Array, PThreadedCode20124, 1, PSend20126);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod20122, HEADER(PEG_Memo_Class));
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