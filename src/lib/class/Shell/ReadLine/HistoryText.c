#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18406 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18408 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18407 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18408);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18409 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18405 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18406, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18407, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18408, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18409, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18404 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18405, 4, PSend18406, PAssign18407, PSend18409, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18404, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18413 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18415 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18416 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18415);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18420 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18421 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18420);
    Array PThreadedCode18419 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18420, (Optr)&t_send1, (Optr)PSend18421, (Optr)&t_block_return);
    Block PBlock18418 = new_Block_with(empty_Array, empty_Array, PThreadedCode18419, 1, PSend18421);
    // ifTrue:. 
    Send PSend18417 = new_Send((Optr)PSend18416, SMB_ifTrue_, 1, (Optr)PBlock18418);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18422 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18414 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18415, (Optr)&t_send1, (Optr)PSend18416, (Optr)&t_send_ifTrue_, (Optr)PSend18417, (Optr)PBlock18418, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18422, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18412 = new_Block_with(PArray18413, empty_Array, PThreadedCode18414, 3, PSend18417, PSend18422, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18423 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18412);
    Array PThreadedCode18411 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18412, (Optr)&t_send1, (Optr)PSend18423, (Optr)&t_method_return);
    Method PMethod18410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18411, 1, PSend18423);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18410, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18427 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18429 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18433 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18434 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18433);
    Array PThreadedCode18432 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18433, (Optr)&t_send1, (Optr)PSend18434, (Optr)&t_block_return);
    Block PBlock18431 = new_Block_with(empty_Array, empty_Array, PThreadedCode18432, 1, PSend18434);
    // ifFalse:. 
    Send PSend18430 = new_Send((Optr)PSend18429, SMB_ifFalse_, 1, (Optr)PBlock18431);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18435 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18428 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18429, (Optr)&t_send_ifFalse_, (Optr)PSend18430, (Optr)PBlock18431, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18435, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18426 = new_Block_with(PArray18427, empty_Array, PThreadedCode18428, 3, PSend18430, PSend18435, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18436 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18426);
    Array PThreadedCode18425 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18426, (Optr)&t_send1, (Optr)PSend18436, (Optr)&t_method_return);
    Method PMethod18424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18425, 1, PSend18436);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18424, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18440 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18439 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18440);
    Super PSuper18441 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18438 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18439, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18440, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18441, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18438, 3, PAssign18439, PSuper18441, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18437, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18445 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18447 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18450 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18449 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18450, (Optr)&t_block_return);
    Block PBlock18448 = new_Block_with(empty_Array, empty_Array, PThreadedCode18449, 1, PSend18450);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18451 = new_Send((Optr)PSend18447, SMB_or_, 1, (Optr)PBlock18448);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18455 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18454 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18455, (Optr)&t_block_return);
    Block PBlock18453 = new_Block_with(empty_Array, empty_Array, PThreadedCode18454, 1, PSend18455);
    // ifTrue:. 
    Send PSend18452 = new_Send((Optr)PSend18451, SMB_ifTrue_, 1, (Optr)PBlock18453);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18456 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18457 = new_Send((Optr)PSend18456, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18458 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18457);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18459 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18446 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18447, (Optr)&t_push_closure, (Optr)PBlock18448, (Optr)&t_send1, (Optr)PSend18451, (Optr)&t_send_ifTrue_, (Optr)PSend18452, (Optr)PBlock18453, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18456, (Optr)&t_send0, (Optr)PSend18457, (Optr)&t_send1, (Optr)PSend18458, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18459, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18444 = new_Block_with(PArray18445, empty_Array, PThreadedCode18446, 4, PSend18452, PSend18458, PSend18459, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18460 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18444);
    Array PThreadedCode18443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18444, (Optr)&t_send1, (Optr)PSend18460, (Optr)&t_method_return);
    Method PMethod18442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18443, 1, PSend18460);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18442, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18464 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18466 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18470 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18469 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18470, (Optr)&t_block_return);
    Block PBlock18468 = new_Block_with(empty_Array, empty_Array, PThreadedCode18469, 1, PSend18470);
    // ifTrue:. 
    Send PSend18467 = new_Send((Optr)PSend18466, SMB_ifTrue_, 1, (Optr)PBlock18468);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18471 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18472 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18473 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18465 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18466, (Optr)&t_send_ifTrue_, (Optr)PSend18467, (Optr)PBlock18468, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18471, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18472, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18463 = new_Block_with(PArray18464, empty_Array, PThreadedCode18465, 5, PSend18467, PSend18471, PSend18472, PSend18473, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18474 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18463);
    Array PThreadedCode18462 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18463, (Optr)&t_send1, (Optr)PSend18474, (Optr)&t_method_return);
    Method PMethod18461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18462, 1, PSend18474);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18461, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18478 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18480 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18484, (Optr)&t_block_return);
    Block PBlock18482 = new_Block_with(empty_Array, empty_Array, PThreadedCode18483, 1, PSend18484);
    // ifTrue:. 
    Send PSend18481 = new_Send((Optr)PSend18480, SMB_ifTrue_, 1, (Optr)PBlock18482);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18485 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18486 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18487 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18479 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18480, (Optr)&t_send_ifTrue_, (Optr)PSend18481, (Optr)PBlock18482, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18485, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18486, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18487, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18477 = new_Block_with(PArray18478, empty_Array, PThreadedCode18479, 5, PSend18481, PSend18485, PSend18486, PSend18487, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18488 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18477);
    Array PThreadedCode18476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18477, (Optr)&t_send1, (Optr)PSend18488, (Optr)&t_method_return);
    Method PMethod18475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18476, 1, PSend18488);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18475, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18490 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18493 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18495 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18499 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18500 = new_Send((Optr)PSend18499, SMB_contents, 0);
    // contents. 
    Send PSend18501 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18502 = new_Send((Optr)PSend18500, SMB__equals_, 1, (Optr)PSend18501);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18506 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18506, (Optr)&t_block_return);
    Block PBlock18504 = new_Block_with(empty_Array, empty_Array, PThreadedCode18505, 1, PSend18506);
    // ifTrue:. 
    Send PSend18503 = new_Send((Optr)PSend18502, SMB_ifTrue_, 1, (Optr)PBlock18504);
    Array PThreadedCode18498 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18499, (Optr)&t_send0, (Optr)PSend18500, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18501, (Optr)&t_send1, (Optr)PSend18502, (Optr)&t_send_ifTrue_, (Optr)PSend18503, (Optr)PBlock18504, (Optr)&t_block_return);
    Block PBlock18497 = new_Block_with(empty_Array, empty_Array, PThreadedCode18498, 1, PSend18503);
    // ifFalse:. 
    Send PSend18496 = new_Send((Optr)PSend18495, SMB_ifFalse_, 1, (Optr)PBlock18497);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18509 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18510 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18508 = new_Send((Optr)PSend18509, SMB_setLines_, 1, (Optr)PSend18510);
    Assign PAssign18507 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18508);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18511 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18513 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18512 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18513);
    Array PThreadedCode18494 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18495, (Optr)&t_send_ifFalse_, (Optr)PSend18496, (Optr)PBlock18497, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18507, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18509, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18510, (Optr)&t_send1, (Optr)PSend18508, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18511, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18512, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18492 = new_Block_with(PArray18493, empty_Array, PThreadedCode18494, 5, PSend18496, PAssign18507, PSend18511, PAssign18512, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18514 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18492);
    Array PThreadedCode18491 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18492, (Optr)&t_send1, (Optr)PSend18514, (Optr)&t_method_return);
    Method PMethod18489 = new_Method_with(empty_Array, PArray18490, empty_Array, PThreadedCode18491, 1, PSend18514);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18489, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
}

void init_Shell_ReadLine_PHistoryText_layout() {
    layout_Shell_ReadLine_HistoryText_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_HistoryText = new_Symbol(L"HistoryText");
    slot_Shell_ReadLine_HistoryText_history = (Optr)new_Slot(2, L"history");
    layout_Shell_ReadLine_HistoryText = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Shell_ReadLine_HistoryText)->values[0] = slot_Shell_ReadLine_Text_lines; // lines 
    ((Array)layout_Shell_ReadLine_HistoryText)->values[1] = slot_Shell_ReadLine_Text_stream; // stream 
    ((Array)layout_Shell_ReadLine_HistoryText)->values[2] = slot_Shell_ReadLine_HistoryText_history; // history 
    Shell_ReadLine_HistoryText_Class = (Class)new_Class(Shell_ReadLine_Text_Class, layout_Shell_ReadLine_HistoryText_Class_class);
    Shell_ReadLine_HistoryText_Class->layout = layout_Shell_ReadLine_HistoryText;
    Shell_ReadLine_HistoryText_Class->name = SMB_HistoryText;
    
}

void init_Shell_ReadLine_PHistoryText_methods() {
    init_SMB_clear();
    init_SMB_up();
    init_SMB_down();
    init_SMB_initialize();
    init_SMB_historyRestore();
    init_SMB_historyPrevious();
    init_SMB_historyNext();
    init_SMB_historyPush();
    
}