#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17410 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17410, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17409, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17413 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17414 = new_Send((Optr)PSend17413, SMB_previous, 0);
    Array PThreadedCode17412 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17413, (Optr)&t_send0, (Optr)PSend17414, (Optr)&t_method_return);
    Method PMethod17411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17412, 1, PSend17414);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17411, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17417 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17416 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17417, (Optr)&t_method_return);
    Method PMethod17415 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17416, 1, PSend17417);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17415, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17420 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17421 = new_Send((Optr)PSend17420, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17425 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17424 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17425, (Optr)&t_block_return);
    Block PBlock17423 = new_Block_with(empty_Array, empty_Array, PThreadedCode17424, 1, PSend17425);
    Array PThreadedCode17427 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17426 = new_Block_with(empty_Array, empty_Array, PThreadedCode17427, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17422 = new_Send((Optr)PSend17421, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17423, (Optr)PBlock17426);
    Array PThreadedCode17419 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17420, (Optr)&t_send0, (Optr)PSend17421, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17422, (Optr)PBlock17423, (Optr)PBlock17426, (Optr)&t_method_return);
    Method PMethod17418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17419, 1, PSend17422);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17418, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17429 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17430 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17435 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17436 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17439 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17438 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17439, (Optr)&t_block_return);
    Block PBlock17437 = new_Block_with(empty_Array, empty_Array, PThreadedCode17438, 1, PSend17439);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17443 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17442 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17443);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17444 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17445 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17444);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17449 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17450 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17449);
    Array PThreadedCode17448 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17449, (Optr)&t_send1, (Optr)PSend17450, (Optr)&t_block_return);
    Block PBlock17447 = new_Block_with(empty_Array, empty_Array, PThreadedCode17448, 1, PSend17450);
    // ifTrue:. 
    Send PSend17446 = new_Send((Optr)PSend17445, SMB_ifTrue_, 1, (Optr)PBlock17447);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17454 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17453 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17454);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17452 = new_Send((Optr)PSend17453, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17451 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17452);
    Array PThreadedCode17441 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17442, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17443, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17444, (Optr)&t_send1, (Optr)PSend17445, (Optr)&t_send_ifTrue_, (Optr)PSend17446, (Optr)PBlock17447, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17451, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17454, (Optr)&t_send1, (Optr)PSend17453, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17452, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17440 = new_Block_with(empty_Array, empty_Array, PThreadedCode17441, 3, PAssign17442, PSend17446, PAssign17451);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17455 = new_Send((Optr)PBlock17437, SMB_whileTrue_, 1, (Optr)PBlock17440);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17456 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17460 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17461 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17460);
    Array PThreadedCode17459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17460, (Optr)&t_send1, (Optr)PSend17461, (Optr)&t_block_return);
    Block PBlock17458 = new_Block_with(empty_Array, empty_Array, PThreadedCode17459, 1, PSend17461);
    // ifTrue:. 
    Send PSend17457 = new_Send((Optr)PSend17456, SMB_ifTrue_, 1, (Optr)PBlock17458);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17462 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17434 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17435, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17437, (Optr)&t_push_closure, (Optr)PBlock17440, (Optr)&t_send1, (Optr)PSend17455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17456, (Optr)&t_send_ifTrue_, (Optr)PSend17457, (Optr)PBlock17458, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17462, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17432 = new_Block_with(PArray17433, empty_Array, PThreadedCode17434, 6, PAssign17435, PSend17436, PSend17455, PSend17457, PSend17462, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17463 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17432);
    Array PThreadedCode17431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17432, (Optr)&t_send1, (Optr)PSend17463, (Optr)&t_method_return);
    Method PMethod17428 = new_Method_with(PArray17429, PArray17430, empty_Array, PThreadedCode17431, 1, PSend17463);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17428, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17466 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17467 = new_Send((Optr)PSend17466, SMB_position, 0);
    Array PThreadedCode17465 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17466, (Optr)&t_send0, (Optr)PSend17467, (Optr)&t_method_return);
    Method PMethod17464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17465, 1, PSend17467);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17464, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17470 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17471 = new_Send((Optr)PSend17470, SMB_remove, 0);
    Array PThreadedCode17469 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17470, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_method_return);
    Method PMethod17468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17469, 1, PSend17471);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17468, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17475 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17474 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17475);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17478 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17477 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17478);
    Assign PAssign17476 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17477);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17479 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17473 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17474, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17476, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17478, (Optr)&t_send1, (Optr)PSend17477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17473, 4, PAssign17474, PAssign17476, PSend17479, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17472, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17482 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17481 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17482, (Optr)&t_method_return);
    Method PMethod17480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17481, 1, PSend17482);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17480, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17485 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17486 = new_Send((Optr)PSend17485, SMB_next, 0);
    Array PThreadedCode17484 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17485, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_method_return);
    Method PMethod17483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17484, 1, PSend17486);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17483, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17489 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17490 = new_Send((Optr)PSend17489, SMB_end, 0);
    Array PThreadedCode17488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17489, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17488, 2, PSend17490, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17487, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17492 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17494 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17495 = new_Send((Optr)PSend17494, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17493 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17494, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17495, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17491 = new_Method_with(PArray17492, empty_Array, empty_Array, PThreadedCode17493, 2, PSend17495, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17491, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17498 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17499 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17500 = new_Send((Optr)PSend17499, SMB_start, 0);
    Array PThreadedCode17497 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17498, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17499, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17497, 3, PSend17498, PSend17500, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17496, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17502 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17504 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17503 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17504, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17501 = new_Method_with(PArray17502, empty_Array, empty_Array, PThreadedCode17503, 2, PAssign17504, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17501, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17506 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17507 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17510 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17512 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17514 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17513 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17514);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17515 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17516 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17518 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17520 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17525 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17524 = new_Send((Optr)PSend17525, SMB_size, 0);
    // -. 
    Send PSend17523 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17524);
    // -. 
    Send PSend17522 = new_Send((Optr)PSend17523, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17521 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17522);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17526 = new_Send((Optr)PAssign17521, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17530 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17529 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17530, (Optr)&t_block_return);
    Block PBlock17528 = new_Block_with(empty_Array, empty_Array, PThreadedCode17529, 1, PSend17530);
    // ifTrue:. 
    Send PSend17527 = new_Send((Optr)PSend17526, SMB_ifTrue_, 1, (Optr)PBlock17528);
    Array PThreadedCode17519 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17520, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17521, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17525, (Optr)&t_send0, (Optr)PSend17524, (Optr)&t_send1, (Optr)PSend17523, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17522, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17526, (Optr)&t_send_ifTrue_, (Optr)PSend17527, (Optr)PBlock17528, (Optr)&t_method_return);
    Block PBlock17517 = new_Block_with(PArray17518, empty_Array, PThreadedCode17519, 2, PSend17520, PSend17527);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17531 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17516, (Optr)PBlock17517);
    // next. 
    Send PSend17532 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17533 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17534 = new_Send((Optr)PSend17533, SMB_size, 0);
    // <=. 
    Send PSend17535 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17534);
    // value. 
    Send PSend17538 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17539 = new_Send((Optr)PSend17538, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17540 = new_Send((Optr)PSend17539, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17537 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17538, (Optr)&t_send0, (Optr)PSend17539, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17540, (Optr)&t_block_return);
    Block PBlock17536 = new_Block_with(empty_Array, empty_Array, PThreadedCode17537, 1, PSend17540);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17541 = new_Send((Optr)PSend17535, SMB_and_, 1, (Optr)PBlock17536);
    Array PThreadedCode17511 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17512, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17513, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17515, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17516, (Optr)&t_push_closure, (Optr)PBlock17517, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17531, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17533, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_send1, (Optr)PSend17535, (Optr)&t_push_closure, (Optr)PBlock17536, (Optr)&t_send1, (Optr)PSend17541, (Optr)&t_method_return);
    Block PBlock17509 = new_Block_with(PArray17510, empty_Array, PThreadedCode17511, 6, PAssign17512, PAssign17513, PSend17515, PSend17531, PSend17532, PSend17541);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17542 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17509);
    Array PThreadedCode17508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17509, (Optr)&t_send1, (Optr)PSend17542, (Optr)&t_method_return);
    Method PMethod17505 = new_Method_with(PArray17506, PArray17507, empty_Array, PThreadedCode17508, 1, PSend17542);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17505, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17545 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17546 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17545);
    Array PThreadedCode17544 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17545, (Optr)&t_send1, (Optr)PSend17546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17544, 2, PSend17546, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17543, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17549 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17550 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17548 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17549, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17548, 3, PSend17549, PSend17550, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17547, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17553 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17554 = new_Send((Optr)PSend17553, SMB_value, 0);
    Array PThreadedCode17552 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17553, (Optr)&t_send0, (Optr)PSend17554, (Optr)&t_method_return);
    Method PMethod17551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17552, 1, PSend17554);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17551, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17556 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17558 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17559 = new_Send((Optr)PSend17558, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17557 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17558, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17555 = new_Method_with(PArray17556, empty_Array, empty_Array, PThreadedCode17557, 2, PSend17559, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17555, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17563 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17565 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17566 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17570 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17569 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17571, (Optr)&t_block_return);
    Block PBlock17568 = new_Block_with(empty_Array, empty_Array, PThreadedCode17569, 2, PSend17570, PSend17571);
    // ifTrue:. 
    Send PSend17567 = new_Send((Optr)PSend17566, SMB_ifTrue_, 1, (Optr)PBlock17568);
    Array PThreadedCode17564 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17565, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17566, (Optr)&t_send_ifTrue_, (Optr)PSend17567, (Optr)PBlock17568, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17562 = new_Block_with(PArray17563, empty_Array, PThreadedCode17564, 3, PSend17565, PSend17567, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17572 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17562);
    Array PThreadedCode17561 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17562, (Optr)&t_send1, (Optr)PSend17572, (Optr)&t_method_return);
    Method PMethod17560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17561, 1, PSend17572);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17560, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17574 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17576 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17575 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17576, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17573 = new_Method_with(PArray17574, empty_Array, empty_Array, PThreadedCode17575, 2, PSend17576, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17573, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17579 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17580 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17581 = new_Send((Optr)PSend17579, SMB__minus_, 1, (Optr)PSend17580);
    Array PThreadedCode17578 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17579, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17580, (Optr)&t_send1, (Optr)PSend17581, (Optr)&t_method_return);
    Method PMethod17577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17578, 1, PSend17581);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17577, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17584 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17585 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17586 = new_Send((Optr)PSend17585, SMB_end, 0);
    Array PThreadedCode17583 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17584, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17585, (Optr)&t_send0, (Optr)PSend17586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17583, 3, PSend17584, PSend17586, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17582, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17589 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17588 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17589, (Optr)&t_method_return);
    Method PMethod17587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17588, 1, PSend17589);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17587, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17592 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17593 = new_Send((Optr)PSend17592, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17594 = new_Send((Optr)PSend17593, SMB_size, 0);
    Array PThreadedCode17591 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17592, (Optr)&t_send0, (Optr)PSend17593, (Optr)&t_send0, (Optr)PSend17594, (Optr)&t_method_return);
    Method PMethod17590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17591, 1, PSend17594);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17590, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17596 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17598 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17597 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17598, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17595 = new_Method_with(PArray17596, empty_Array, empty_Array, PThreadedCode17597, 2, PSend17598, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17595, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17601 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17600 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17601, (Optr)&t_method_return);
    Method PMethod17599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17600, 1, PSend17601);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17599, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17603 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17605 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17607 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17606 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17607);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17608 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17609 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17611 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17613 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17617 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17616 = new_Send((Optr)PSend17617, SMB_size, 0);
    // +. 
    Send PSend17615 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17616);
    Assign PAssign17614 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17615);
    Array PThreadedCode17612 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17613, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17614, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17617, (Optr)&t_send0, (Optr)PSend17616, (Optr)&t_send1, (Optr)PSend17615, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17610 = new_Block_with(PArray17611, empty_Array, PThreadedCode17612, 2, PSend17613, PAssign17614);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17618 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17609, (Optr)PBlock17610);
    // next. 
    Send PSend17619 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17620 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17621 = new_Send((Optr)PSend17620, SMB_position, 0);
    // +. 
    Send PSend17622 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17621);
    Array PThreadedCode17604 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17605, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17606, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17607, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17608, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17609, (Optr)&t_push_closure, (Optr)PBlock17610, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17618, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17619, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17620, (Optr)&t_send0, (Optr)PSend17621, (Optr)&t_send1, (Optr)PSend17622, (Optr)&t_method_return);
    Method PMethod17602 = new_Method_with(empty_Array, PArray17603, empty_Array, PThreadedCode17604, 6, PAssign17605, PAssign17606, PSend17608, PSend17618, PSend17619, PSend17622);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17602, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17625 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17626 = new_Send((Optr)PSend17625, SMB_start, 0);
    Array PThreadedCode17624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17625, (Optr)&t_send0, (Optr)PSend17626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17624, 2, PSend17626, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17623, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17629 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17630 = new_Send((Optr)PSend17629, SMB_truncate, 0);
    Array PThreadedCode17628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17629, (Optr)&t_send0, (Optr)PSend17630, (Optr)&t_method_return);
    Method PMethod17627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17628, 1, PSend17630);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17627, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17633 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17635 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17638 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17640 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17639 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17640, (Optr)&t_method_return);
    Block PBlock17637 = new_Block_with(PArray17638, empty_Array, PThreadedCode17639, 1, PSend17640);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17641 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17637);
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17637, (Optr)&t_send1, (Optr)PSend17641, (Optr)&t_method_return);
    Block PBlock17634 = new_Block_with(PArray17635, empty_Array, PThreadedCode17636, 1, PSend17641);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17644 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17645 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17644);
    Array PThreadedCode17643 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17644, (Optr)&t_send1, (Optr)PSend17645, (Optr)&t_block_return);
    Block PBlock17642 = new_Block_with(empty_Array, empty_Array, PThreadedCode17643, 1, PSend17645);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17646 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17634, (Optr)PBlock17642);
    // contents. 
    Send PSend17647 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17632 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17633, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17634, (Optr)&t_push_closure, (Optr)PBlock17642, (Optr)&t_send2, (Optr)PSend17646, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17647, (Optr)&t_method_return);
    Method PMethod17631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17632, 3, PSend17633, PSend17646, PSend17647);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17631, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17649 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17651 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17650 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17651, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17648 = new_Method_with(PArray17649, empty_Array, empty_Array, PThreadedCode17650, 2, PSend17651, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17648, Shell_ReadLine_Text_Class);
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