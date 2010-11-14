#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18277 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18279 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18278 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18279);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18280 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18276 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18277, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18278, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18279, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18276, 4, PSend18277, PAssign18278, PSend18280, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18275, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18284 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18286 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18287 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18286);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18291 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18292 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18291);
    Array PThreadedCode18290 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18291, (Optr)&t_send1, (Optr)PSend18292, (Optr)&t_block_return);
    Block PBlock18289 = new_Block_with(empty_Array, empty_Array, PThreadedCode18290, 1, PSend18292);
    // ifTrue:. 
    Send PSend18288 = new_Send((Optr)PSend18287, SMB_ifTrue_, 1, (Optr)PBlock18289);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18293 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18285 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18286, (Optr)&t_send1, (Optr)PSend18287, (Optr)&t_send_ifTrue_, (Optr)PSend18288, (Optr)PBlock18289, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18293, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18283 = new_Block_with(PArray18284, empty_Array, PThreadedCode18285, 3, PSend18288, PSend18293, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18294 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18283);
    Array PThreadedCode18282 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18283, (Optr)&t_send1, (Optr)PSend18294, (Optr)&t_method_return);
    Method PMethod18281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18282, 1, PSend18294);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18281, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18298 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18300 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18304 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18303 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18304, (Optr)&t_block_return);
    Block PBlock18302 = new_Block_with(empty_Array, empty_Array, PThreadedCode18303, 1, PSend18304);
    // ifTrue:. 
    Send PSend18301 = new_Send((Optr)PSend18300, SMB_ifTrue_, 1, (Optr)PBlock18302);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18305 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18306 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18307 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18299 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18300, (Optr)&t_send_ifTrue_, (Optr)PSend18301, (Optr)PBlock18302, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18305, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18306, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18307, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18297 = new_Block_with(PArray18298, empty_Array, PThreadedCode18299, 5, PSend18301, PSend18305, PSend18306, PSend18307, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18308 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18297);
    Array PThreadedCode18296 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18297, (Optr)&t_send1, (Optr)PSend18308, (Optr)&t_method_return);
    Method PMethod18295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18296, 1, PSend18308);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18295, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18312 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18314 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18318 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18319 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18318);
    Array PThreadedCode18317 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18318, (Optr)&t_send1, (Optr)PSend18319, (Optr)&t_block_return);
    Block PBlock18316 = new_Block_with(empty_Array, empty_Array, PThreadedCode18317, 1, PSend18319);
    // ifFalse:. 
    Send PSend18315 = new_Send((Optr)PSend18314, SMB_ifFalse_, 1, (Optr)PBlock18316);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18320 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18313 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18314, (Optr)&t_send_ifFalse_, (Optr)PSend18315, (Optr)PBlock18316, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18320, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18311 = new_Block_with(PArray18312, empty_Array, PThreadedCode18313, 3, PSend18315, PSend18320, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18321 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18311);
    Array PThreadedCode18310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18311, (Optr)&t_send1, (Optr)PSend18321, (Optr)&t_method_return);
    Method PMethod18309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18310, 1, PSend18321);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18309, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18325 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18324 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18325);
    Super PSuper18326 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18323 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18324, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18325, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18326, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18323, 3, PAssign18324, PSuper18326, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18322, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18328 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18331 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18333 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18337 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18338 = new_Send((Optr)PSend18337, SMB_contents, 0);
    // contents. 
    Send PSend18339 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18340 = new_Send((Optr)PSend18338, SMB__equals_, 1, (Optr)PSend18339);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18344 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18343 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18344, (Optr)&t_block_return);
    Block PBlock18342 = new_Block_with(empty_Array, empty_Array, PThreadedCode18343, 1, PSend18344);
    // ifTrue:. 
    Send PSend18341 = new_Send((Optr)PSend18340, SMB_ifTrue_, 1, (Optr)PBlock18342);
    Array PThreadedCode18336 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18337, (Optr)&t_send0, (Optr)PSend18338, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18339, (Optr)&t_send1, (Optr)PSend18340, (Optr)&t_send_ifTrue_, (Optr)PSend18341, (Optr)PBlock18342, (Optr)&t_block_return);
    Block PBlock18335 = new_Block_with(empty_Array, empty_Array, PThreadedCode18336, 1, PSend18341);
    // ifFalse:. 
    Send PSend18334 = new_Send((Optr)PSend18333, SMB_ifFalse_, 1, (Optr)PBlock18335);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18347 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18348 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18346 = new_Send((Optr)PSend18347, SMB_setLines_, 1, (Optr)PSend18348);
    Assign PAssign18345 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18346);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18349 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18351 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18350 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18351);
    Array PThreadedCode18332 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18333, (Optr)&t_send_ifFalse_, (Optr)PSend18334, (Optr)PBlock18335, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18345, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18347, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18348, (Optr)&t_send1, (Optr)PSend18346, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18349, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18350, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18351, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18330 = new_Block_with(PArray18331, empty_Array, PThreadedCode18332, 5, PSend18334, PAssign18345, PSend18349, PAssign18350, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18352 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18330);
    Array PThreadedCode18329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18330, (Optr)&t_send1, (Optr)PSend18352, (Optr)&t_method_return);
    Method PMethod18327 = new_Method_with(empty_Array, PArray18328, empty_Array, PThreadedCode18329, 1, PSend18352);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18327, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18356 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18358 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18361 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18360 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18361, (Optr)&t_block_return);
    Block PBlock18359 = new_Block_with(empty_Array, empty_Array, PThreadedCode18360, 1, PSend18361);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18362 = new_Send((Optr)PSend18358, SMB_or_, 1, (Optr)PBlock18359);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18366 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18365 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18366, (Optr)&t_block_return);
    Block PBlock18364 = new_Block_with(empty_Array, empty_Array, PThreadedCode18365, 1, PSend18366);
    // ifTrue:. 
    Send PSend18363 = new_Send((Optr)PSend18362, SMB_ifTrue_, 1, (Optr)PBlock18364);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18367 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18368 = new_Send((Optr)PSend18367, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18369 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18368);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18370 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18357 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18358, (Optr)&t_push_closure, (Optr)PBlock18359, (Optr)&t_send1, (Optr)PSend18362, (Optr)&t_send_ifTrue_, (Optr)PSend18363, (Optr)PBlock18364, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18367, (Optr)&t_send0, (Optr)PSend18368, (Optr)&t_send1, (Optr)PSend18369, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18370, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18355 = new_Block_with(PArray18356, empty_Array, PThreadedCode18357, 4, PSend18363, PSend18369, PSend18370, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18371 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18355);
    Array PThreadedCode18354 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18355, (Optr)&t_send1, (Optr)PSend18371, (Optr)&t_method_return);
    Method PMethod18353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18354, 1, PSend18371);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18353, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18375 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18377 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18380 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18381, (Optr)&t_block_return);
    Block PBlock18379 = new_Block_with(empty_Array, empty_Array, PThreadedCode18380, 1, PSend18381);
    // ifTrue:. 
    Send PSend18378 = new_Send((Optr)PSend18377, SMB_ifTrue_, 1, (Optr)PBlock18379);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18382 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18383 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18384 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18376 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18377, (Optr)&t_send_ifTrue_, (Optr)PSend18378, (Optr)PBlock18379, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18382, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18383, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18374 = new_Block_with(PArray18375, empty_Array, PThreadedCode18376, 5, PSend18378, PSend18382, PSend18383, PSend18384, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18385 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18374);
    Array PThreadedCode18373 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18374, (Optr)&t_send1, (Optr)PSend18385, (Optr)&t_method_return);
    Method PMethod18372 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18373, 1, PSend18385);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18372, Shell_ReadLine_HistoryText_Class);
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