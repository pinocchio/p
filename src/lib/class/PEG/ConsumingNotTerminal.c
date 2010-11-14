#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20246 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20245 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20246, (Optr)&t_method_return);
    Method PMethod20244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20245, 1, PSend20246);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20244, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20248 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20249 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20252 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20255 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20254 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20255);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20256 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20260 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20259 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20260, (Optr)&t_block_return);
    Block PBlock20258 = new_Block_with(empty_Array, empty_Array, PThreadedCode20259, 1, PSend20260);
    // ifTrue:. 
    Send PSend20257 = new_Send((Optr)PSend20256, SMB_ifTrue_, 1, (Optr)PBlock20258);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20261 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20265 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20264 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20265, (Optr)&t_block_return);
    Block PBlock20263 = new_Block_with(empty_Array, empty_Array, PThreadedCode20264, 1, PSend20265);
    // ifTrue:. 
    Send PSend20262 = new_Send((Optr)PSend20261, SMB_ifTrue_, 1, (Optr)PBlock20263);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20266 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20267 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20253 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20254, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20255, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20256, (Optr)&t_send_ifTrue_, (Optr)PSend20257, (Optr)PBlock20258, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20261, (Optr)&t_send_ifTrue_, (Optr)PSend20262, (Optr)PBlock20263, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20267, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20251 = new_Block_with(PArray20252, empty_Array, PThreadedCode20253, 6, PAssign20254, PSend20257, PSend20262, PSend20266, PSend20267, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20268 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20251);
    Array PThreadedCode20250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20251, (Optr)&t_send1, (Optr)PSend20268, (Optr)&t_method_return);
    Method PMethod20247 = new_Method_with(PArray20248, PArray20249, empty_Array, PThreadedCode20250, 1, PSend20268);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20247, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20270 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20273 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20275 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20276 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20275);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20280 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20279 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20280, (Optr)&t_block_return);
    Block PBlock20278 = new_Block_with(empty_Array, empty_Array, PThreadedCode20279, 1, PSend20280);
    // ifTrue:. 
    Send PSend20277 = new_Send((Optr)PSend20276, SMB_ifTrue_, 1, (Optr)PBlock20278);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20281 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20274 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20275, (Optr)&t_send1, (Optr)PSend20276, (Optr)&t_send_ifTrue_, (Optr)PSend20277, (Optr)PBlock20278, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20281, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20272 = new_Block_with(PArray20273, empty_Array, PThreadedCode20274, 3, PSend20277, PSend20281, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20282 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20272);
    Array PThreadedCode20271 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20272, (Optr)&t_send1, (Optr)PSend20282, (Optr)&t_method_return);
    Method PMethod20269 = new_Method_with(PArray20270, empty_Array, empty_Array, PThreadedCode20271, 1, PSend20282);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20269, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGConsumingNotTerminal_layout() {
    layout_PEG_ConsumingNotTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ConsumingNotTerminal = new_Symbol(L"ConsumingNotTerminal");
    layout_PEG_ConsumingNotTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ConsumingNotTerminal)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_ConsumingNotTerminal_Class = (Class)new_Class(PEG_NotTerminal_Class, layout_PEG_ConsumingNotTerminal_Class_class);
    PEG_ConsumingNotTerminal_Class->layout = layout_PEG_ConsumingNotTerminal;
    PEG_ConsumingNotTerminal_Class->name = SMB_ConsumingNotTerminal;
    
}

void init_PEG_PEGConsumingNotTerminal_methods() {
    init_SMB_strongTimes();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}