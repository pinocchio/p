#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
<<<<<<< HEAD
    Send PSend20278 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20278, (Optr)&t_method_return);
    Method PMethod20276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20277, 1, PSend20278);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20276, PEG_ConsumingNotTerminal_Class);
=======
    Send PSend20244 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20243 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20244, (Optr)&t_method_return);
    Method PMethod20242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20243, 1, PSend20244);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20242, PEG_ConsumingNotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray20280 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20281 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20284 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20287 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20286 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20287);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20288 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20292 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20291 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20292, (Optr)&t_block_return);
    Block PBlock20290 = new_Block_with(empty_Array, empty_Array, PThreadedCode20291, 1, PSend20292);
    // ifTrue:. 
    Send PSend20289 = new_Send((Optr)PSend20288, SMB_ifTrue_, 1, (Optr)PBlock20290);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20293 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20297 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20296 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20297, (Optr)&t_block_return);
    Block PBlock20295 = new_Block_with(empty_Array, empty_Array, PThreadedCode20296, 1, PSend20297);
    // ifTrue:. 
    Send PSend20294 = new_Send((Optr)PSend20293, SMB_ifTrue_, 1, (Optr)PBlock20295);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20298 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20299 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20285 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20286, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20287, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20288, (Optr)&t_send_ifTrue_, (Optr)PSend20289, (Optr)PBlock20290, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20293, (Optr)&t_send_ifTrue_, (Optr)PSend20294, (Optr)PBlock20295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20299, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20283 = new_Block_with(PArray20284, empty_Array, PThreadedCode20285, 6, PAssign20286, PSend20289, PSend20294, PSend20298, PSend20299, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20300 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20283);
    Array PThreadedCode20282 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20283, (Optr)&t_send1, (Optr)PSend20300, (Optr)&t_method_return);
    Method PMethod20279 = new_Method_with(PArray20280, PArray20281, empty_Array, PThreadedCode20282, 1, PSend20300);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20279, PEG_ConsumingNotTerminal_Class);
=======
    Array PArray20246 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20247 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20250 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20253 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20252 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20253);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20254 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20258 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20257 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20258, (Optr)&t_block_return);
    Block PBlock20256 = new_Block_with(empty_Array, empty_Array, PThreadedCode20257, 1, PSend20258);
    // ifTrue:. 
    Send PSend20255 = new_Send((Optr)PSend20254, SMB_ifTrue_, 1, (Optr)PBlock20256);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20259 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20263 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20262 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20263, (Optr)&t_block_return);
    Block PBlock20261 = new_Block_with(empty_Array, empty_Array, PThreadedCode20262, 1, PSend20263);
    // ifTrue:. 
    Send PSend20260 = new_Send((Optr)PSend20259, SMB_ifTrue_, 1, (Optr)PBlock20261);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20264 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20265 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20251 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20252, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20253, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20254, (Optr)&t_send_ifTrue_, (Optr)PSend20255, (Optr)PBlock20256, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20259, (Optr)&t_send_ifTrue_, (Optr)PSend20260, (Optr)PBlock20261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20265, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20249 = new_Block_with(PArray20250, empty_Array, PThreadedCode20251, 6, PAssign20252, PSend20255, PSend20260, PSend20264, PSend20265, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20266 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20249);
    Array PThreadedCode20248 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20249, (Optr)&t_send1, (Optr)PSend20266, (Optr)&t_method_return);
    Method PMethod20245 = new_Method_with(PArray20246, PArray20247, empty_Array, PThreadedCode20248, 1, PSend20266);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20245, PEG_ConsumingNotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray20302 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20305 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20307 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20308 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20307);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20312 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20311 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20312, (Optr)&t_block_return);
    Block PBlock20310 = new_Block_with(empty_Array, empty_Array, PThreadedCode20311, 1, PSend20312);
    // ifTrue:. 
    Send PSend20309 = new_Send((Optr)PSend20308, SMB_ifTrue_, 1, (Optr)PBlock20310);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20313 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20306 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20307, (Optr)&t_send1, (Optr)PSend20308, (Optr)&t_send_ifTrue_, (Optr)PSend20309, (Optr)PBlock20310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20313, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20304 = new_Block_with(PArray20305, empty_Array, PThreadedCode20306, 3, PSend20309, PSend20313, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20314 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20304);
    Array PThreadedCode20303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20304, (Optr)&t_send1, (Optr)PSend20314, (Optr)&t_method_return);
    Method PMethod20301 = new_Method_with(PArray20302, empty_Array, empty_Array, PThreadedCode20303, 1, PSend20314);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20301, PEG_ConsumingNotTerminal_Class);
=======
    Array PArray20268 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20271 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20273 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20274 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20273);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20278 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20277 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20278, (Optr)&t_block_return);
    Block PBlock20276 = new_Block_with(empty_Array, empty_Array, PThreadedCode20277, 1, PSend20278);
    // ifTrue:. 
    Send PSend20275 = new_Send((Optr)PSend20274, SMB_ifTrue_, 1, (Optr)PBlock20276);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20279 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20272 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20273, (Optr)&t_send1, (Optr)PSend20274, (Optr)&t_send_ifTrue_, (Optr)PSend20275, (Optr)PBlock20276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20279, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20270 = new_Block_with(PArray20271, empty_Array, PThreadedCode20272, 3, PSend20275, PSend20279, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20280 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20270);
    Array PThreadedCode20269 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20270, (Optr)&t_send1, (Optr)PSend20280, (Optr)&t_method_return);
    Method PMethod20267 = new_Method_with(PArray20268, empty_Array, empty_Array, PThreadedCode20269, 1, PSend20280);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20267, PEG_ConsumingNotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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