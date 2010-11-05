#include <lib/class/PEG/Memo.h>


Optr layout_PEG_Memo_Class_class;
Optr slot_PEG_Memo_parser;
Optr layout_PEG_Memo;


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend19632 = new_Send((Optr)slot_PEG_Memo_parser, SMB_expression, 0);
    Array PThreadedCode19631 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send0, (Optr)PSend19632, (Optr)&t_method_return);
    Method PMethod19630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19631, 1, PSend19632);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod19630, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19634 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_memoizeMatch_ = new_Symbol(L"memoizeMatch:");
    // memoizeMatch:. 
    Send PSend19636 = new_Send((Optr)VAR_input_0_0, SMB_memoizeMatch_, 1, (Optr)slot_PEG_Memo_parser);
    Array PThreadedCode19635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_send1, (Optr)PSend19636, (Optr)&t_method_return);
    Method PMethod19633 = new_Method_with(PArray19634, empty_Array, empty_Array, PThreadedCode19635, 1, PSend19636);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19633, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19638 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19640 = new_Send((Optr)slot_PEG_Memo_parser, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19640, (Optr)&t_method_return);
    Method PMethod19637 = new_Method_with(PArray19638, empty_Array, empty_Array, PThreadedCode19639, 1, PSend19640);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19637, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19642 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    // semantics:. 
    Send PSend19644 = new_Send((Optr)slot_PEG_Memo_parser, SMB_semantics_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode19643 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend19644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19641 = new_Method_with(PArray19642, empty_Array, empty_Array, PThreadedCode19643, 2, PSend19644, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod19641, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB_on_() {
    /*
    on: p
// 	^ super basicNew on: p
    */
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray19646 = new_Array_with(1, (Optr)VAR_p_0_0);
    Assign PAssign19648 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)VAR_p_0_0);
    Array PThreadedCode19647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19648, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19645 = new_Method_with(PArray19646, empty_Array, empty_Array, PThreadedCode19647, 2, PAssign19648, self);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19645, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB_on_, MC_SMB_on_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_child_0_0 = new_Variable_named(L"child", 0);
    Array PArray19650 = new_Array_with(1, (Optr)VAR_child_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19653 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19658 = new_Send((Optr)VAR_child_0_0, SMB_asChildParser, 0);
    Assign PAssign19657 = new_Assign((Optr)slot_PEG_Memo_parser, (Optr)PSend19658);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PAssign19657);
    Array PThreadedCode19656 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)PAssign19657, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send0, (Optr)PSend19658, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend19659, (Optr)&t_block_return);
    Block PBlock19655 = new_Block_with(empty_Array, empty_Array, PThreadedCode19656, 1, PSend19659);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19660 = new_Send((Optr)slot_PEG_Memo_parser, SMB_ifNil_, 1, (Optr)PBlock19655);
    // <=. 
    Send PSend19661 = new_Send((Optr)slot_PEG_Memo_parser, SMB__lt__equals_, 1, (Optr)VAR_child_0_0);
    Array PThreadedCode19654 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_closure, (Optr)PBlock19655, (Optr)&t_send1, (Optr)PSend19660, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Memo_parser, (Optr)&t_push_variable, (Optr)VAR_child_0_0, (Optr)&t_send1, (Optr)PSend19661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19652 = new_Block_with(PArray19653, empty_Array, PThreadedCode19654, 3, PSend19660, PSend19661, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19662 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19652);
    Array PThreadedCode19651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19652, (Optr)&t_send1, (Optr)PSend19662, (Optr)&t_method_return);
    Method PMethod19649 = new_Method_with(PArray19650, empty_Array, empty_Array, PThreadedCode19651, 1, PSend19662);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19649, PEG_Memo_Class);
    store_method(PEG_Memo_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_on_() {
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_p_0_0 = new_Variable_named(L"p", 0);
    Array PArray19664 = new_Array_with(1, (Optr)VAR_p_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper19666 = new_Super(SMB_basicNew, 0);
    // on:. 
    Send PSend19667 = new_Send((Optr)PSuper19666, SMB_on_, 1, (Optr)VAR_p_0_0);
    Array PThreadedCode19665 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper19666, (Optr)&t_push_variable, (Optr)VAR_p_0_0, (Optr)&t_send1, (Optr)PSend19667, (Optr)&t_method_return);
    Method PMethod19663 = new_Method_with(PArray19664, empty_Array, empty_Array, PThreadedCode19665, 1, PSend19667);
    
    MethodClosure MC_SMB_on_ = new_MethodClosure((Method)PMethod19663, HEADER(PEG_Memo_Class));
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