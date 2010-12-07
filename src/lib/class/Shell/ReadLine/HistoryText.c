#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18309 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18311 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18310 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18311);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18312 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18308 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18309, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18310, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18312, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18308, 4, PSend18309, PAssign18310, PSend18312, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18307, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18316 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18318 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18319 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18318);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18323 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18324 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18323);
    Array PThreadedCode18322 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18323, (Optr)&t_send1, (Optr)PSend18324, (Optr)&t_block_return);
    Block PBlock18321 = new_Block_with(empty_Array, empty_Array, PThreadedCode18322, 1, PSend18324);
    // ifTrue:. 
    Send PSend18320 = new_Send((Optr)PSend18319, SMB_ifTrue_, 1, (Optr)PBlock18321);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18325 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18317 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18318, (Optr)&t_send1, (Optr)PSend18319, (Optr)&t_send_ifTrue_, (Optr)PSend18320, (Optr)PBlock18321, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18325, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18315 = new_Block_with(PArray18316, empty_Array, PThreadedCode18317, 3, PSend18320, PSend18325, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18326 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18315);
    Array PThreadedCode18314 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18315, (Optr)&t_send1, (Optr)PSend18326, (Optr)&t_method_return);
    Method PMethod18313 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18314, 1, PSend18326);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18313, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18330 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18332 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18336 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18337 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18336);
    Array PThreadedCode18335 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18336, (Optr)&t_send1, (Optr)PSend18337, (Optr)&t_block_return);
    Block PBlock18334 = new_Block_with(empty_Array, empty_Array, PThreadedCode18335, 1, PSend18337);
    // ifFalse:. 
    Send PSend18333 = new_Send((Optr)PSend18332, SMB_ifFalse_, 1, (Optr)PBlock18334);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18338 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18331 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18332, (Optr)&t_send_ifFalse_, (Optr)PSend18333, (Optr)PBlock18334, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18338, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18329 = new_Block_with(PArray18330, empty_Array, PThreadedCode18331, 3, PSend18333, PSend18338, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18339 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18329);
    Array PThreadedCode18328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18329, (Optr)&t_send1, (Optr)PSend18339, (Optr)&t_method_return);
    Method PMethod18327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18328, 1, PSend18339);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18327, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18343 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18342 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18343);
    Super PSuper18344 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18341 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18342, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18344, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18341, 3, PAssign18342, PSuper18344, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18340, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18348 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18350 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18353 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18352 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18353, (Optr)&t_block_return);
    Block PBlock18351 = new_Block_with(empty_Array, empty_Array, PThreadedCode18352, 1, PSend18353);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18354 = new_Send((Optr)PSend18350, SMB_or_, 1, (Optr)PBlock18351);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18358 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18357 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18358, (Optr)&t_block_return);
    Block PBlock18356 = new_Block_with(empty_Array, empty_Array, PThreadedCode18357, 1, PSend18358);
    // ifTrue:. 
    Send PSend18355 = new_Send((Optr)PSend18354, SMB_ifTrue_, 1, (Optr)PBlock18356);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18359 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18360 = new_Send((Optr)PSend18359, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18361 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18360);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18362 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18349 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18350, (Optr)&t_push_closure, (Optr)PBlock18351, (Optr)&t_send1, (Optr)PSend18354, (Optr)&t_send_ifTrue_, (Optr)PSend18355, (Optr)PBlock18356, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18359, (Optr)&t_send0, (Optr)PSend18360, (Optr)&t_send1, (Optr)PSend18361, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18362, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18347 = new_Block_with(PArray18348, empty_Array, PThreadedCode18349, 4, PSend18355, PSend18361, PSend18362, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18363 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18347);
    Array PThreadedCode18346 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18347, (Optr)&t_send1, (Optr)PSend18363, (Optr)&t_method_return);
    Method PMethod18345 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18346, 1, PSend18363);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18345, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18367 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18369 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18373 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18372 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18373, (Optr)&t_block_return);
    Block PBlock18371 = new_Block_with(empty_Array, empty_Array, PThreadedCode18372, 1, PSend18373);
    // ifTrue:. 
    Send PSend18370 = new_Send((Optr)PSend18369, SMB_ifTrue_, 1, (Optr)PBlock18371);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18374 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18375 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18376 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18368 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18369, (Optr)&t_send_ifTrue_, (Optr)PSend18370, (Optr)PBlock18371, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18374, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18375, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18376, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18366 = new_Block_with(PArray18367, empty_Array, PThreadedCode18368, 5, PSend18370, PSend18374, PSend18375, PSend18376, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18377 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18366);
    Array PThreadedCode18365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18366, (Optr)&t_send1, (Optr)PSend18377, (Optr)&t_method_return);
    Method PMethod18364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18365, 1, PSend18377);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18364, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18381 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18383 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18387 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18386 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18387, (Optr)&t_block_return);
    Block PBlock18385 = new_Block_with(empty_Array, empty_Array, PThreadedCode18386, 1, PSend18387);
    // ifTrue:. 
    Send PSend18384 = new_Send((Optr)PSend18383, SMB_ifTrue_, 1, (Optr)PBlock18385);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18388 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18389 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18390 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18382 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18383, (Optr)&t_send_ifTrue_, (Optr)PSend18384, (Optr)PBlock18385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18388, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18389, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18390, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18380 = new_Block_with(PArray18381, empty_Array, PThreadedCode18382, 5, PSend18384, PSend18388, PSend18389, PSend18390, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18391 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18380);
    Array PThreadedCode18379 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18380, (Optr)&t_send1, (Optr)PSend18391, (Optr)&t_method_return);
    Method PMethod18378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18379, 1, PSend18391);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18378, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18393 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18396 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18398 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18402 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18403 = new_Send((Optr)PSend18402, SMB_contents, 0);
    // contents. 
    Send PSend18404 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18405 = new_Send((Optr)PSend18403, SMB__equals_, 1, (Optr)PSend18404);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18409, (Optr)&t_block_return);
    Block PBlock18407 = new_Block_with(empty_Array, empty_Array, PThreadedCode18408, 1, PSend18409);
    // ifTrue:. 
    Send PSend18406 = new_Send((Optr)PSend18405, SMB_ifTrue_, 1, (Optr)PBlock18407);
    Array PThreadedCode18401 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18402, (Optr)&t_send0, (Optr)PSend18403, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18404, (Optr)&t_send1, (Optr)PSend18405, (Optr)&t_send_ifTrue_, (Optr)PSend18406, (Optr)PBlock18407, (Optr)&t_block_return);
    Block PBlock18400 = new_Block_with(empty_Array, empty_Array, PThreadedCode18401, 1, PSend18406);
    // ifFalse:. 
    Send PSend18399 = new_Send((Optr)PSend18398, SMB_ifFalse_, 1, (Optr)PBlock18400);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18412 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18413 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18411 = new_Send((Optr)PSend18412, SMB_setLines_, 1, (Optr)PSend18413);
    Assign PAssign18410 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18411);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18414 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18416 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18415 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18416);
    Array PThreadedCode18397 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18398, (Optr)&t_send_ifFalse_, (Optr)PSend18399, (Optr)PBlock18400, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18410, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18412, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18413, (Optr)&t_send1, (Optr)PSend18411, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18414, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18415, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18416, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18395 = new_Block_with(PArray18396, empty_Array, PThreadedCode18397, 5, PSend18399, PAssign18410, PSend18414, PAssign18415, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18417 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18395);
    Array PThreadedCode18394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18395, (Optr)&t_send1, (Optr)PSend18417, (Optr)&t_method_return);
    Method PMethod18392 = new_Method_with(empty_Array, PArray18393, empty_Array, PThreadedCode18394, 1, PSend18417);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18392, Shell_ReadLine_HistoryText_Class);
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