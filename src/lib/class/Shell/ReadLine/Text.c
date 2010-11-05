#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17337 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17337, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17336, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17340 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17341 = new_Send((Optr)PSend17340, SMB_previous, 0);
    Array PThreadedCode17339 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17340, (Optr)&t_send0, (Optr)PSend17341, (Optr)&t_method_return);
    Method PMethod17338 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17339, 1, PSend17341);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17338, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17344 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17343 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17344, (Optr)&t_method_return);
    Method PMethod17342 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17343, 1, PSend17344);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17342, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17347 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17348 = new_Send((Optr)PSend17347, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17352 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17351 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17352, (Optr)&t_block_return);
    Block PBlock17350 = new_Block_with(empty_Array, empty_Array, PThreadedCode17351, 1, PSend17352);
    Array PThreadedCode17354 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17353 = new_Block_with(empty_Array, empty_Array, PThreadedCode17354, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17349 = new_Send((Optr)PSend17348, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17350, (Optr)PBlock17353);
    Array PThreadedCode17346 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17347, (Optr)&t_send0, (Optr)PSend17348, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17349, (Optr)PBlock17350, (Optr)PBlock17353, (Optr)&t_method_return);
    Method PMethod17345 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17346, 1, PSend17349);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17345, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17356 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17357 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17360 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17362 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17363 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17366 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17365 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17366, (Optr)&t_block_return);
    Block PBlock17364 = new_Block_with(empty_Array, empty_Array, PThreadedCode17365, 1, PSend17366);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17370 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17369 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17370);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17371 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17372 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17371);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17376 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17376);
    Array PThreadedCode17375 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17376, (Optr)&t_send1, (Optr)PSend17377, (Optr)&t_block_return);
    Block PBlock17374 = new_Block_with(empty_Array, empty_Array, PThreadedCode17375, 1, PSend17377);
    // ifTrue:. 
    Send PSend17373 = new_Send((Optr)PSend17372, SMB_ifTrue_, 1, (Optr)PBlock17374);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17381 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17380 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17381);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17379 = new_Send((Optr)PSend17380, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17378 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17379);
    Array PThreadedCode17368 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17369, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17370, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_send1, (Optr)PSend17372, (Optr)&t_send_ifTrue_, (Optr)PSend17373, (Optr)PBlock17374, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17378, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17381, (Optr)&t_send1, (Optr)PSend17380, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17379, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17367 = new_Block_with(empty_Array, empty_Array, PThreadedCode17368, 3, PAssign17369, PSend17373, PAssign17378);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17382 = new_Send((Optr)PBlock17364, SMB_whileTrue_, 1, (Optr)PBlock17367);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17383 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17387 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17388 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17387);
    Array PThreadedCode17386 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_send1, (Optr)PSend17388, (Optr)&t_block_return);
    Block PBlock17385 = new_Block_with(empty_Array, empty_Array, PThreadedCode17386, 1, PSend17388);
    // ifTrue:. 
    Send PSend17384 = new_Send((Optr)PSend17383, SMB_ifTrue_, 1, (Optr)PBlock17385);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17389 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17361 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17362, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17363, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17364, (Optr)&t_push_closure, (Optr)PBlock17367, (Optr)&t_send1, (Optr)PSend17382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17383, (Optr)&t_send_ifTrue_, (Optr)PSend17384, (Optr)PBlock17385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17389, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17359 = new_Block_with(PArray17360, empty_Array, PThreadedCode17361, 6, PAssign17362, PSend17363, PSend17382, PSend17384, PSend17389, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17390 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17359);
    Array PThreadedCode17358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17359, (Optr)&t_send1, (Optr)PSend17390, (Optr)&t_method_return);
    Method PMethod17355 = new_Method_with(PArray17356, PArray17357, empty_Array, PThreadedCode17358, 1, PSend17390);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17355, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17393 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17394 = new_Send((Optr)PSend17393, SMB_position, 0);
    Array PThreadedCode17392 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_send0, (Optr)PSend17394, (Optr)&t_method_return);
    Method PMethod17391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17392, 1, PSend17394);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17391, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17397 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17398 = new_Send((Optr)PSend17397, SMB_remove, 0);
    Array PThreadedCode17396 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_send0, (Optr)PSend17398, (Optr)&t_method_return);
    Method PMethod17395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17396, 1, PSend17398);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17395, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17402 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17401 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17402);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17405 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17404 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17405);
    Assign PAssign17403 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17404);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17406 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17400 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17401, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17403, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17405, (Optr)&t_send1, (Optr)PSend17404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17406, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17400, 4, PAssign17401, PAssign17403, PSend17406, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17399, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17409 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17408 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_method_return);
    Method PMethod17407 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17408, 1, PSend17409);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17407, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17412 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17413 = new_Send((Optr)PSend17412, SMB_next, 0);
    Array PThreadedCode17411 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17412, (Optr)&t_send0, (Optr)PSend17413, (Optr)&t_method_return);
    Method PMethod17410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17411, 1, PSend17413);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17410, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17416 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17417 = new_Send((Optr)PSend17416, SMB_end, 0);
    Array PThreadedCode17415 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17416, (Optr)&t_send0, (Optr)PSend17417, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17415, 2, PSend17417, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17414, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17419 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17421 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17422 = new_Send((Optr)PSend17421, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17420 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17421, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17422, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17418 = new_Method_with(PArray17419, empty_Array, empty_Array, PThreadedCode17420, 2, PSend17422, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17418, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17425 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17426 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17427 = new_Send((Optr)PSend17426, SMB_start, 0);
    Array PThreadedCode17424 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17426, (Optr)&t_send0, (Optr)PSend17427, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17424, 3, PSend17425, PSend17427, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17423, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17429 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17431 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17430 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17431, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17428 = new_Method_with(PArray17429, empty_Array, empty_Array, PThreadedCode17430, 2, PAssign17431, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17428, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17433 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17434 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17437 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17439 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17441 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17440 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17441);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17442 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17443 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17445 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17447 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17452 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17451 = new_Send((Optr)PSend17452, SMB_size, 0);
    // -. 
    Send PSend17450 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17451);
    // -. 
    Send PSend17449 = new_Send((Optr)PSend17450, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17448 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17449);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17453 = new_Send((Optr)PAssign17448, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17457 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17456 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17457, (Optr)&t_block_return);
    Block PBlock17455 = new_Block_with(empty_Array, empty_Array, PThreadedCode17456, 1, PSend17457);
    // ifTrue:. 
    Send PSend17454 = new_Send((Optr)PSend17453, SMB_ifTrue_, 1, (Optr)PBlock17455);
    Array PThreadedCode17446 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17447, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17448, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17452, (Optr)&t_send0, (Optr)PSend17451, (Optr)&t_send1, (Optr)PSend17450, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17449, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17453, (Optr)&t_send_ifTrue_, (Optr)PSend17454, (Optr)PBlock17455, (Optr)&t_method_return);
    Block PBlock17444 = new_Block_with(PArray17445, empty_Array, PThreadedCode17446, 2, PSend17447, PSend17454);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17458 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17443, (Optr)PBlock17444);
    // next. 
    Send PSend17459 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17460 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17461 = new_Send((Optr)PSend17460, SMB_size, 0);
    // <=. 
    Send PSend17462 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17461);
    // value. 
    Send PSend17465 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17466 = new_Send((Optr)PSend17465, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17467 = new_Send((Optr)PSend17466, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17464 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17465, (Optr)&t_send0, (Optr)PSend17466, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17467, (Optr)&t_block_return);
    Block PBlock17463 = new_Block_with(empty_Array, empty_Array, PThreadedCode17464, 1, PSend17467);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17468 = new_Send((Optr)PSend17462, SMB_and_, 1, (Optr)PBlock17463);
    Array PThreadedCode17438 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17439, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17440, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17442, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17443, (Optr)&t_push_closure, (Optr)PBlock17444, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17458, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17460, (Optr)&t_send0, (Optr)PSend17461, (Optr)&t_send1, (Optr)PSend17462, (Optr)&t_push_closure, (Optr)PBlock17463, (Optr)&t_send1, (Optr)PSend17468, (Optr)&t_method_return);
    Block PBlock17436 = new_Block_with(PArray17437, empty_Array, PThreadedCode17438, 6, PAssign17439, PAssign17440, PSend17442, PSend17458, PSend17459, PSend17468);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17469 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17436);
    Array PThreadedCode17435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17436, (Optr)&t_send1, (Optr)PSend17469, (Optr)&t_method_return);
    Method PMethod17432 = new_Method_with(PArray17433, PArray17434, empty_Array, PThreadedCode17435, 1, PSend17469);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17432, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17472 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17473 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17472);
    Array PThreadedCode17471 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17472, (Optr)&t_send1, (Optr)PSend17473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17471, 2, PSend17473, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17470, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17476 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17477 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17475 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17476, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17477, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17474 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17475, 3, PSend17476, PSend17477, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17474, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17480 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17481 = new_Send((Optr)PSend17480, SMB_value, 0);
    Array PThreadedCode17479 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17480, (Optr)&t_send0, (Optr)PSend17481, (Optr)&t_method_return);
    Method PMethod17478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17479, 1, PSend17481);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17478, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17483 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17485 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17486 = new_Send((Optr)PSend17485, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17484 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17485, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17486, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17482 = new_Method_with(PArray17483, empty_Array, empty_Array, PThreadedCode17484, 2, PSend17486, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17482, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17490 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17492 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17493 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17497 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17498 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17496 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17497, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17498, (Optr)&t_block_return);
    Block PBlock17495 = new_Block_with(empty_Array, empty_Array, PThreadedCode17496, 2, PSend17497, PSend17498);
    // ifTrue:. 
    Send PSend17494 = new_Send((Optr)PSend17493, SMB_ifTrue_, 1, (Optr)PBlock17495);
    Array PThreadedCode17491 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17492, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17493, (Optr)&t_send_ifTrue_, (Optr)PSend17494, (Optr)PBlock17495, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17489 = new_Block_with(PArray17490, empty_Array, PThreadedCode17491, 3, PSend17492, PSend17494, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17499 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17489);
    Array PThreadedCode17488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17489, (Optr)&t_send1, (Optr)PSend17499, (Optr)&t_method_return);
    Method PMethod17487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17488, 1, PSend17499);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17487, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17501 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17503 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17502 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17503, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17500 = new_Method_with(PArray17501, empty_Array, empty_Array, PThreadedCode17502, 2, PSend17503, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17500, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17506 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17507 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17508 = new_Send((Optr)PSend17506, SMB__minus_, 1, (Optr)PSend17507);
    Array PThreadedCode17505 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17506, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17507, (Optr)&t_send1, (Optr)PSend17508, (Optr)&t_method_return);
    Method PMethod17504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17505, 1, PSend17508);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17504, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17511 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17512 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17513 = new_Send((Optr)PSend17512, SMB_end, 0);
    Array PThreadedCode17510 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17511, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17512, (Optr)&t_send0, (Optr)PSend17513, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17510, 3, PSend17511, PSend17513, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17509, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17516 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17515 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17516, (Optr)&t_method_return);
    Method PMethod17514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17515, 1, PSend17516);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17514, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17519 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17520 = new_Send((Optr)PSend17519, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17521 = new_Send((Optr)PSend17520, SMB_size, 0);
    Array PThreadedCode17518 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17519, (Optr)&t_send0, (Optr)PSend17520, (Optr)&t_send0, (Optr)PSend17521, (Optr)&t_method_return);
    Method PMethod17517 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17518, 1, PSend17521);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17517, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17523 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17525 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17524 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17525, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17522 = new_Method_with(PArray17523, empty_Array, empty_Array, PThreadedCode17524, 2, PSend17525, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17522, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17528 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17527 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17528, (Optr)&t_method_return);
    Method PMethod17526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17527, 1, PSend17528);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17526, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17530 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17532 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17534 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17533 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17534);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17535 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17536 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17538 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17540 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17544 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17543 = new_Send((Optr)PSend17544, SMB_size, 0);
    // +. 
    Send PSend17542 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17543);
    Assign PAssign17541 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17542);
    Array PThreadedCode17539 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17540, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17541, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17544, (Optr)&t_send0, (Optr)PSend17543, (Optr)&t_send1, (Optr)PSend17542, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17537 = new_Block_with(PArray17538, empty_Array, PThreadedCode17539, 2, PSend17540, PAssign17541);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17545 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17536, (Optr)PBlock17537);
    // next. 
    Send PSend17546 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17547 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17548 = new_Send((Optr)PSend17547, SMB_position, 0);
    // +. 
    Send PSend17549 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17548);
    Array PThreadedCode17531 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17532, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17533, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17536, (Optr)&t_push_closure, (Optr)PBlock17537, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17545, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17547, (Optr)&t_send0, (Optr)PSend17548, (Optr)&t_send1, (Optr)PSend17549, (Optr)&t_method_return);
    Method PMethod17529 = new_Method_with(empty_Array, PArray17530, empty_Array, PThreadedCode17531, 6, PAssign17532, PAssign17533, PSend17535, PSend17545, PSend17546, PSend17549);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17529, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17552 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17553 = new_Send((Optr)PSend17552, SMB_start, 0);
    Array PThreadedCode17551 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17552, (Optr)&t_send0, (Optr)PSend17553, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17551, 2, PSend17553, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17550, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17556 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17557 = new_Send((Optr)PSend17556, SMB_truncate, 0);
    Array PThreadedCode17555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_send0, (Optr)PSend17557, (Optr)&t_method_return);
    Method PMethod17554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17555, 1, PSend17557);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17554, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17560 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17562 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17565 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17567 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17566 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17567, (Optr)&t_method_return);
    Block PBlock17564 = new_Block_with(PArray17565, empty_Array, PThreadedCode17566, 1, PSend17567);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17568 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17564);
    Array PThreadedCode17563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17564, (Optr)&t_send1, (Optr)PSend17568, (Optr)&t_method_return);
    Block PBlock17561 = new_Block_with(PArray17562, empty_Array, PThreadedCode17563, 1, PSend17568);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17571 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17572 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17571);
    Array PThreadedCode17570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17571, (Optr)&t_send1, (Optr)PSend17572, (Optr)&t_block_return);
    Block PBlock17569 = new_Block_with(empty_Array, empty_Array, PThreadedCode17570, 1, PSend17572);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17573 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17561, (Optr)PBlock17569);
    // contents. 
    Send PSend17574 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17559 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17560, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17561, (Optr)&t_push_closure, (Optr)PBlock17569, (Optr)&t_send2, (Optr)PSend17573, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17574, (Optr)&t_method_return);
    Method PMethod17558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17559, 3, PSend17560, PSend17573, PSend17574);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17558, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17576 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17578 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17577 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17578, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17575 = new_Method_with(PArray17576, empty_Array, empty_Array, PThreadedCode17577, 2, PSend17578, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17575, Shell_ReadLine_Text_Class);
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