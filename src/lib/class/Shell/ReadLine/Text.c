#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17280 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17280, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17279, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17283 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17284 = new_Send((Optr)PSend17283, SMB_previous, 0);
    Array PThreadedCode17282 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17283, (Optr)&t_send0, (Optr)PSend17284, (Optr)&t_method_return);
    Method PMethod17281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17282, 1, PSend17284);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17281, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17287 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17286 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17287, (Optr)&t_method_return);
    Method PMethod17285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17286, 1, PSend17287);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17285, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17290 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17291 = new_Send((Optr)PSend17290, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17295 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17294 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17295, (Optr)&t_block_return);
    Block PBlock17293 = new_Block_with(empty_Array, empty_Array, PThreadedCode17294, 1, PSend17295);
    Array PThreadedCode17297 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17296 = new_Block_with(empty_Array, empty_Array, PThreadedCode17297, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17292 = new_Send((Optr)PSend17291, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17293, (Optr)PBlock17296);
    Array PThreadedCode17289 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17290, (Optr)&t_send0, (Optr)PSend17291, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17292, (Optr)PBlock17293, (Optr)PBlock17296, (Optr)&t_method_return);
    Method PMethod17288 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17289, 1, PSend17292);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17288, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17299 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17300 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17303 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17305 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17306 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17309 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17308 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17309, (Optr)&t_block_return);
    Block PBlock17307 = new_Block_with(empty_Array, empty_Array, PThreadedCode17308, 1, PSend17309);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17313 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17312 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17313);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17314 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17315 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17314);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17319 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17320 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17319);
    Array PThreadedCode17318 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17319, (Optr)&t_send1, (Optr)PSend17320, (Optr)&t_block_return);
    Block PBlock17317 = new_Block_with(empty_Array, empty_Array, PThreadedCode17318, 1, PSend17320);
    // ifTrue:. 
    Send PSend17316 = new_Send((Optr)PSend17315, SMB_ifTrue_, 1, (Optr)PBlock17317);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17324 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17323 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17324);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17322 = new_Send((Optr)PSend17323, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17321 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17322);
    Array PThreadedCode17311 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17312, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17313, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17314, (Optr)&t_send1, (Optr)PSend17315, (Optr)&t_send_ifTrue_, (Optr)PSend17316, (Optr)PBlock17317, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17321, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17324, (Optr)&t_send1, (Optr)PSend17323, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17322, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17310 = new_Block_with(empty_Array, empty_Array, PThreadedCode17311, 3, PAssign17312, PSend17316, PAssign17321);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17325 = new_Send((Optr)PBlock17307, SMB_whileTrue_, 1, (Optr)PBlock17310);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17326 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17330 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17331 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17330);
    Array PThreadedCode17329 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17330, (Optr)&t_send1, (Optr)PSend17331, (Optr)&t_block_return);
    Block PBlock17328 = new_Block_with(empty_Array, empty_Array, PThreadedCode17329, 1, PSend17331);
    // ifTrue:. 
    Send PSend17327 = new_Send((Optr)PSend17326, SMB_ifTrue_, 1, (Optr)PBlock17328);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17332 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17304 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17305, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17306, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17307, (Optr)&t_push_closure, (Optr)PBlock17310, (Optr)&t_send1, (Optr)PSend17325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17326, (Optr)&t_send_ifTrue_, (Optr)PSend17327, (Optr)PBlock17328, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17332, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17302 = new_Block_with(PArray17303, empty_Array, PThreadedCode17304, 6, PAssign17305, PSend17306, PSend17325, PSend17327, PSend17332, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17333 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17302);
    Array PThreadedCode17301 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17302, (Optr)&t_send1, (Optr)PSend17333, (Optr)&t_method_return);
    Method PMethod17298 = new_Method_with(PArray17299, PArray17300, empty_Array, PThreadedCode17301, 1, PSend17333);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17298, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17336 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17337 = new_Send((Optr)PSend17336, SMB_position, 0);
    Array PThreadedCode17335 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17336, (Optr)&t_send0, (Optr)PSend17337, (Optr)&t_method_return);
    Method PMethod17334 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17335, 1, PSend17337);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17334, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17340 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17341 = new_Send((Optr)PSend17340, SMB_remove, 0);
    Array PThreadedCode17339 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17340, (Optr)&t_send0, (Optr)PSend17341, (Optr)&t_method_return);
    Method PMethod17338 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17339, 1, PSend17341);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17338, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17345 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17344 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17345);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17348 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17347 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17348);
    Assign PAssign17346 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17347);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17349 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17343 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17344, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17345, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17346, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17348, (Optr)&t_send1, (Optr)PSend17347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17349, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17343, 4, PAssign17344, PAssign17346, PSend17349, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17342, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17352 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17352, (Optr)&t_method_return);
    Method PMethod17350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17351, 1, PSend17352);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17350, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17355 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17356 = new_Send((Optr)PSend17355, SMB_next, 0);
    Array PThreadedCode17354 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17355, (Optr)&t_send0, (Optr)PSend17356, (Optr)&t_method_return);
    Method PMethod17353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17354, 1, PSend17356);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17353, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17359 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17360 = new_Send((Optr)PSend17359, SMB_end, 0);
    Array PThreadedCode17358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_send0, (Optr)PSend17360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17358, 2, PSend17360, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17357, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17362 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17364 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17365 = new_Send((Optr)PSend17364, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17363 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17364, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17365, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17361 = new_Method_with(PArray17362, empty_Array, empty_Array, PThreadedCode17363, 2, PSend17365, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17361, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17368 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17369 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17370 = new_Send((Optr)PSend17369, SMB_start, 0);
    Array PThreadedCode17367 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17368, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17369, (Optr)&t_send0, (Optr)PSend17370, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17366 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17367, 3, PSend17368, PSend17370, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17366, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17372 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17374 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17373 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17374, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17371 = new_Method_with(PArray17372, empty_Array, empty_Array, PThreadedCode17373, 2, PAssign17374, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17371, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17376 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17377 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17380 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17382 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17384 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17383 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17384);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17385 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17386 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17388 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17390 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17395 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17394 = new_Send((Optr)PSend17395, SMB_size, 0);
    // -. 
    Send PSend17393 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17394);
    // -. 
    Send PSend17392 = new_Send((Optr)PSend17393, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17391 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17392);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17396 = new_Send((Optr)PAssign17391, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17400 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17399 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17400, (Optr)&t_block_return);
    Block PBlock17398 = new_Block_with(empty_Array, empty_Array, PThreadedCode17399, 1, PSend17400);
    // ifTrue:. 
    Send PSend17397 = new_Send((Optr)PSend17396, SMB_ifTrue_, 1, (Optr)PBlock17398);
    Array PThreadedCode17389 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17390, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17391, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17395, (Optr)&t_send0, (Optr)PSend17394, (Optr)&t_send1, (Optr)PSend17393, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17392, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17396, (Optr)&t_send_ifTrue_, (Optr)PSend17397, (Optr)PBlock17398, (Optr)&t_method_return);
    Block PBlock17387 = new_Block_with(PArray17388, empty_Array, PThreadedCode17389, 2, PSend17390, PSend17397);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17401 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17386, (Optr)PBlock17387);
    // next. 
    Send PSend17402 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17403 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17404 = new_Send((Optr)PSend17403, SMB_size, 0);
    // <=. 
    Send PSend17405 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17404);
    // value. 
    Send PSend17408 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17409 = new_Send((Optr)PSend17408, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17407 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17408, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17410, (Optr)&t_block_return);
    Block PBlock17406 = new_Block_with(empty_Array, empty_Array, PThreadedCode17407, 1, PSend17410);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17411 = new_Send((Optr)PSend17405, SMB_and_, 1, (Optr)PBlock17406);
    Array PThreadedCode17381 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17382, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17383, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17385, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17386, (Optr)&t_push_closure, (Optr)PBlock17387, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17401, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17403, (Optr)&t_send0, (Optr)PSend17404, (Optr)&t_send1, (Optr)PSend17405, (Optr)&t_push_closure, (Optr)PBlock17406, (Optr)&t_send1, (Optr)PSend17411, (Optr)&t_method_return);
    Block PBlock17379 = new_Block_with(PArray17380, empty_Array, PThreadedCode17381, 6, PAssign17382, PAssign17383, PSend17385, PSend17401, PSend17402, PSend17411);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17412 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17379);
    Array PThreadedCode17378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17379, (Optr)&t_send1, (Optr)PSend17412, (Optr)&t_method_return);
    Method PMethod17375 = new_Method_with(PArray17376, PArray17377, empty_Array, PThreadedCode17378, 1, PSend17412);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17375, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17415 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17416 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17415);
    Array PThreadedCode17414 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17415, (Optr)&t_send1, (Optr)PSend17416, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17414, 2, PSend17416, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17413, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17419 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17420 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17418 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17419, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17420, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17418, 3, PSend17419, PSend17420, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17417, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17423 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17424 = new_Send((Optr)PSend17423, SMB_value, 0);
    Array PThreadedCode17422 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17423, (Optr)&t_send0, (Optr)PSend17424, (Optr)&t_method_return);
    Method PMethod17421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17422, 1, PSend17424);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17421, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17426 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17428 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17429 = new_Send((Optr)PSend17428, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17427 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17428, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17425 = new_Method_with(PArray17426, empty_Array, empty_Array, PThreadedCode17427, 2, PSend17429, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17425, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17435 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17436 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17440 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17441 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17439 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17441, (Optr)&t_block_return);
    Block PBlock17438 = new_Block_with(empty_Array, empty_Array, PThreadedCode17439, 2, PSend17440, PSend17441);
    // ifTrue:. 
    Send PSend17437 = new_Send((Optr)PSend17436, SMB_ifTrue_, 1, (Optr)PBlock17438);
    Array PThreadedCode17434 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17435, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_send_ifTrue_, (Optr)PSend17437, (Optr)PBlock17438, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17432 = new_Block_with(PArray17433, empty_Array, PThreadedCode17434, 3, PSend17435, PSend17437, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17442 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17432);
    Array PThreadedCode17431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17432, (Optr)&t_send1, (Optr)PSend17442, (Optr)&t_method_return);
    Method PMethod17430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17431, 1, PSend17442);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17430, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17444 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17446 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17445 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17443 = new_Method_with(PArray17444, empty_Array, empty_Array, PThreadedCode17445, 2, PSend17446, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17443, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17449 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17450 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17451 = new_Send((Optr)PSend17449, SMB__minus_, 1, (Optr)PSend17450);
    Array PThreadedCode17448 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17449, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17450, (Optr)&t_send1, (Optr)PSend17451, (Optr)&t_method_return);
    Method PMethod17447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17448, 1, PSend17451);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17447, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17454 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17455 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17456 = new_Send((Optr)PSend17455, SMB_end, 0);
    Array PThreadedCode17453 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17454, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17455, (Optr)&t_send0, (Optr)PSend17456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17453, 3, PSend17454, PSend17456, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17452, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17459 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17458 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17459, (Optr)&t_method_return);
    Method PMethod17457 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17458, 1, PSend17459);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17457, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17462 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17463 = new_Send((Optr)PSend17462, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17464 = new_Send((Optr)PSend17463, SMB_size, 0);
    Array PThreadedCode17461 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17462, (Optr)&t_send0, (Optr)PSend17463, (Optr)&t_send0, (Optr)PSend17464, (Optr)&t_method_return);
    Method PMethod17460 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17461, 1, PSend17464);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17460, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17466 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17468 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17467 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17468, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17465 = new_Method_with(PArray17466, empty_Array, empty_Array, PThreadedCode17467, 2, PSend17468, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17465, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17471 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17470 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_method_return);
    Method PMethod17469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17470, 1, PSend17471);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17469, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17473 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17475 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17477 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17476 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17477);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17478 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17479 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17481 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17483 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17487 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17486 = new_Send((Optr)PSend17487, SMB_size, 0);
    // +. 
    Send PSend17485 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17486);
    Assign PAssign17484 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17485);
    Array PThreadedCode17482 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17483, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17484, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17480 = new_Block_with(PArray17481, empty_Array, PThreadedCode17482, 2, PSend17483, PAssign17484);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17488 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17479, (Optr)PBlock17480);
    // next. 
    Send PSend17489 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17490 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17491 = new_Send((Optr)PSend17490, SMB_position, 0);
    // +. 
    Send PSend17492 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17491);
    Array PThreadedCode17474 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17475, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17476, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17478, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17479, (Optr)&t_push_closure, (Optr)PBlock17480, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17488, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17489, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_send0, (Optr)PSend17491, (Optr)&t_send1, (Optr)PSend17492, (Optr)&t_method_return);
    Method PMethod17472 = new_Method_with(empty_Array, PArray17473, empty_Array, PThreadedCode17474, 6, PAssign17475, PAssign17476, PSend17478, PSend17488, PSend17489, PSend17492);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17472, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17495 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17496 = new_Send((Optr)PSend17495, SMB_start, 0);
    Array PThreadedCode17494 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17495, (Optr)&t_send0, (Optr)PSend17496, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17493 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17494, 2, PSend17496, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17493, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17499 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17500 = new_Send((Optr)PSend17499, SMB_truncate, 0);
    Array PThreadedCode17498 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17499, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_method_return);
    Method PMethod17497 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17498, 1, PSend17500);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17497, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17503 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17505 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17508 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17510 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17510, (Optr)&t_method_return);
    Block PBlock17507 = new_Block_with(PArray17508, empty_Array, PThreadedCode17509, 1, PSend17510);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17511 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17507);
    Array PThreadedCode17506 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17507, (Optr)&t_send1, (Optr)PSend17511, (Optr)&t_method_return);
    Block PBlock17504 = new_Block_with(PArray17505, empty_Array, PThreadedCode17506, 1, PSend17511);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17514 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17515 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17514);
    Array PThreadedCode17513 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17514, (Optr)&t_send1, (Optr)PSend17515, (Optr)&t_block_return);
    Block PBlock17512 = new_Block_with(empty_Array, empty_Array, PThreadedCode17513, 1, PSend17515);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17516 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17504, (Optr)PBlock17512);
    // contents. 
    Send PSend17517 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17502 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17503, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17504, (Optr)&t_push_closure, (Optr)PBlock17512, (Optr)&t_send2, (Optr)PSend17516, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17517, (Optr)&t_method_return);
    Method PMethod17501 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17502, 3, PSend17503, PSend17516, PSend17517);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17501, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17519 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17521 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17520 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17521, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17518 = new_Method_with(PArray17519, empty_Array, empty_Array, PThreadedCode17520, 2, PSend17521, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17518, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}

void init_Shell_ReadLine_Text_layout() {
    layout_Shell_ReadLine_Text_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Text = new_Symbol(L"Text");
    slot_Shell_ReadLine_Text_lines = (Optr)new_Slot(0, L"lines");
    slot_Shell_ReadLine_Text_stream = (Optr)new_Slot(1, L"stream");
    layout_Shell_ReadLine_Text = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Shell_ReadLine_Text)->values[0] = slot_Shell_ReadLine_Text_lines; // lines 
    ((Array)layout_Shell_ReadLine_Text)->values[1] = slot_Shell_ReadLine_Text_stream; // stream 
    Shell_ReadLine_Text_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_Text_Class_class);
    Class_set_superclass(Shell_ReadLine_Text_Class, Object_Class);
    Shell_ReadLine_Text_Class->layout = layout_Shell_ReadLine_Text;
    HEADER(Shell_ReadLine_Text_Class)->layout = layout_Shell_ReadLine_Text_Class_class;
    Shell_ReadLine_Text_Class->name = SMB_Text;
    
}

void init_Shell_ReadLine_Text_methods() {
    init_SMB_getLines();
    init_SMB_left();
    init_SMB_lines();
    init_SMB_deleteRight();
    init_SMB_position_();
    init_SMB_column();
    init_SMB_deleteLeft();
    init_SMB_initialize();
    init_SMB_line();
    init_SMB_right();
    init_SMB_endOfLine();
    init_SMB_add_();
    init_SMB_start();
    init_SMB_setLines_();
    init_SMB_onLineBefore_();
    init_SMB_addLine();
    init_SMB_clear();
    init_SMB_currentCharacter();
    init_SMB_column_();
    init_SMB_up();
    init_SMB_line_();
    init_SMB_distanceToBottom();
    init_SMB_end();
    init_SMB_down();
    init_SMB_lastColumns();
    init_SMB_do_();
    init_SMB_currentLine();
    init_SMB_position();
    init_SMB_startOfLine();
    init_SMB_deleteToEndOfLine();
    init_SMB_contents();
    init_SMB_do_separatedBy_();
    
}