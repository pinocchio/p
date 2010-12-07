#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18275 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18277 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18276 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18277);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18278 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18274 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18275, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18276, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18278, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18273 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18274, 4, PSend18275, PAssign18276, PSend18278, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18273, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18282 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18284 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18285 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18284);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18289 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18290 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18289);
    Array PThreadedCode18288 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18289, (Optr)&t_send1, (Optr)PSend18290, (Optr)&t_block_return);
    Block PBlock18287 = new_Block_with(empty_Array, empty_Array, PThreadedCode18288, 1, PSend18290);
    // ifTrue:. 
    Send PSend18286 = new_Send((Optr)PSend18285, SMB_ifTrue_, 1, (Optr)PBlock18287);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18291 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18283 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18284, (Optr)&t_send1, (Optr)PSend18285, (Optr)&t_send_ifTrue_, (Optr)PSend18286, (Optr)PBlock18287, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18291, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18281 = new_Block_with(PArray18282, empty_Array, PThreadedCode18283, 3, PSend18286, PSend18291, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18292 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18281);
    Array PThreadedCode18280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18281, (Optr)&t_send1, (Optr)PSend18292, (Optr)&t_method_return);
    Method PMethod18279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18280, 1, PSend18292);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18279, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18296 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18298 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18302 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18301 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18302, (Optr)&t_block_return);
    Block PBlock18300 = new_Block_with(empty_Array, empty_Array, PThreadedCode18301, 1, PSend18302);
    // ifTrue:. 
    Send PSend18299 = new_Send((Optr)PSend18298, SMB_ifTrue_, 1, (Optr)PBlock18300);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18303 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18304 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18305 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18297 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18298, (Optr)&t_send_ifTrue_, (Optr)PSend18299, (Optr)PBlock18300, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18303, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18304, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18295 = new_Block_with(PArray18296, empty_Array, PThreadedCode18297, 5, PSend18299, PSend18303, PSend18304, PSend18305, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18306 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18295);
    Array PThreadedCode18294 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18295, (Optr)&t_send1, (Optr)PSend18306, (Optr)&t_method_return);
    Method PMethod18293 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18294, 1, PSend18306);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18293, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18310 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18312 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18316 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18317 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18316);
    Array PThreadedCode18315 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18316, (Optr)&t_send1, (Optr)PSend18317, (Optr)&t_block_return);
    Block PBlock18314 = new_Block_with(empty_Array, empty_Array, PThreadedCode18315, 1, PSend18317);
    // ifFalse:. 
    Send PSend18313 = new_Send((Optr)PSend18312, SMB_ifFalse_, 1, (Optr)PBlock18314);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18318 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18311 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18312, (Optr)&t_send_ifFalse_, (Optr)PSend18313, (Optr)PBlock18314, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18318, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18309 = new_Block_with(PArray18310, empty_Array, PThreadedCode18311, 3, PSend18313, PSend18318, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18319 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18309);
    Array PThreadedCode18308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18309, (Optr)&t_send1, (Optr)PSend18319, (Optr)&t_method_return);
    Method PMethod18307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18308, 1, PSend18319);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18307, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18323 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18322 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18323);
    Super PSuper18324 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18321 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18322, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18321, 3, PAssign18322, PSuper18324, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18320, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18326 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18329 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18331 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18335 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18336 = new_Send((Optr)PSend18335, SMB_contents, 0);
    // contents. 
    Send PSend18337 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18338 = new_Send((Optr)PSend18336, SMB__equals_, 1, (Optr)PSend18337);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18342 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18341 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18342, (Optr)&t_block_return);
    Block PBlock18340 = new_Block_with(empty_Array, empty_Array, PThreadedCode18341, 1, PSend18342);
    // ifTrue:. 
    Send PSend18339 = new_Send((Optr)PSend18338, SMB_ifTrue_, 1, (Optr)PBlock18340);
    Array PThreadedCode18334 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18335, (Optr)&t_send0, (Optr)PSend18336, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18337, (Optr)&t_send1, (Optr)PSend18338, (Optr)&t_send_ifTrue_, (Optr)PSend18339, (Optr)PBlock18340, (Optr)&t_block_return);
    Block PBlock18333 = new_Block_with(empty_Array, empty_Array, PThreadedCode18334, 1, PSend18339);
    // ifFalse:. 
    Send PSend18332 = new_Send((Optr)PSend18331, SMB_ifFalse_, 1, (Optr)PBlock18333);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18345 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18346 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18344 = new_Send((Optr)PSend18345, SMB_setLines_, 1, (Optr)PSend18346);
    Assign PAssign18343 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18344);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18347 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18349 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18348 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18349);
    Array PThreadedCode18330 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18331, (Optr)&t_send_ifFalse_, (Optr)PSend18332, (Optr)PBlock18333, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18343, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18345, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18346, (Optr)&t_send1, (Optr)PSend18344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18347, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18348, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18328 = new_Block_with(PArray18329, empty_Array, PThreadedCode18330, 5, PSend18332, PAssign18343, PSend18347, PAssign18348, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18350 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18328);
    Array PThreadedCode18327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18328, (Optr)&t_send1, (Optr)PSend18350, (Optr)&t_method_return);
    Method PMethod18325 = new_Method_with(empty_Array, PArray18326, empty_Array, PThreadedCode18327, 1, PSend18350);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18325, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18354 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18356 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18359 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18358 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18359, (Optr)&t_block_return);
    Block PBlock18357 = new_Block_with(empty_Array, empty_Array, PThreadedCode18358, 1, PSend18359);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18360 = new_Send((Optr)PSend18356, SMB_or_, 1, (Optr)PBlock18357);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18364 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18363 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18364, (Optr)&t_block_return);
    Block PBlock18362 = new_Block_with(empty_Array, empty_Array, PThreadedCode18363, 1, PSend18364);
    // ifTrue:. 
    Send PSend18361 = new_Send((Optr)PSend18360, SMB_ifTrue_, 1, (Optr)PBlock18362);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18365 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18366 = new_Send((Optr)PSend18365, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18367 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18366);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18368 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18355 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18356, (Optr)&t_push_closure, (Optr)PBlock18357, (Optr)&t_send1, (Optr)PSend18360, (Optr)&t_send_ifTrue_, (Optr)PSend18361, (Optr)PBlock18362, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18365, (Optr)&t_send0, (Optr)PSend18366, (Optr)&t_send1, (Optr)PSend18367, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18368, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18353 = new_Block_with(PArray18354, empty_Array, PThreadedCode18355, 4, PSend18361, PSend18367, PSend18368, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18369 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18353);
    Array PThreadedCode18352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18353, (Optr)&t_send1, (Optr)PSend18369, (Optr)&t_method_return);
    Method PMethod18351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18352, 1, PSend18369);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18351, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18373 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18375 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18379 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18378 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18379, (Optr)&t_block_return);
    Block PBlock18377 = new_Block_with(empty_Array, empty_Array, PThreadedCode18378, 1, PSend18379);
    // ifTrue:. 
    Send PSend18376 = new_Send((Optr)PSend18375, SMB_ifTrue_, 1, (Optr)PBlock18377);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18380 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18381 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18382 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18374 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18375, (Optr)&t_send_ifTrue_, (Optr)PSend18376, (Optr)PBlock18377, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18380, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18381, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18382, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18372 = new_Block_with(PArray18373, empty_Array, PThreadedCode18374, 5, PSend18376, PSend18380, PSend18381, PSend18382, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18383 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18372);
    Array PThreadedCode18371 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18372, (Optr)&t_send1, (Optr)PSend18383, (Optr)&t_method_return);
    Method PMethod18370 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18371, 1, PSend18383);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18370, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
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
    init_SMB_historyNext();
    init_SMB_down();
    init_SMB_initialize();
    init_SMB_historyPush();
    init_SMB_historyRestore();
    init_SMB_historyPrevious();
    
}