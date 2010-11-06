#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17421, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17420, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17424 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17425 = new_Send((Optr)PSend17424, SMB_previous, 0);
    Array PThreadedCode17423 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17424, (Optr)&t_send0, (Optr)PSend17425, (Optr)&t_method_return);
    Method PMethod17422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17423, 1, PSend17425);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17422, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17428 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17427 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17428, (Optr)&t_method_return);
    Method PMethod17426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17427, 1, PSend17428);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17426, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17431 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17432 = new_Send((Optr)PSend17431, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17436 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17435 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_block_return);
    Block PBlock17434 = new_Block_with(empty_Array, empty_Array, PThreadedCode17435, 1, PSend17436);
    Array PThreadedCode17438 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17437 = new_Block_with(empty_Array, empty_Array, PThreadedCode17438, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17433 = new_Send((Optr)PSend17432, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17434, (Optr)PBlock17437);
    Array PThreadedCode17430 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17431, (Optr)&t_send0, (Optr)PSend17432, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17433, (Optr)PBlock17434, (Optr)PBlock17437, (Optr)&t_method_return);
    Method PMethod17429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17430, 1, PSend17433);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17429, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17440 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17441 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17444 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17446 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17447 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17450 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17449 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17450, (Optr)&t_block_return);
    Block PBlock17448 = new_Block_with(empty_Array, empty_Array, PThreadedCode17449, 1, PSend17450);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17454 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17453 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17454);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17455 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17456 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17455);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17460 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17461 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17460);
    Array PThreadedCode17459 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17460, (Optr)&t_send1, (Optr)PSend17461, (Optr)&t_block_return);
    Block PBlock17458 = new_Block_with(empty_Array, empty_Array, PThreadedCode17459, 1, PSend17461);
    // ifTrue:. 
    Send PSend17457 = new_Send((Optr)PSend17456, SMB_ifTrue_, 1, (Optr)PBlock17458);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17465 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17464 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17465);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17463 = new_Send((Optr)PSend17464, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17462 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17463);
    Array PThreadedCode17452 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17453, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17455, (Optr)&t_send1, (Optr)PSend17456, (Optr)&t_send_ifTrue_, (Optr)PSend17457, (Optr)PBlock17458, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17462, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17465, (Optr)&t_send1, (Optr)PSend17464, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17463, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17451 = new_Block_with(empty_Array, empty_Array, PThreadedCode17452, 3, PAssign17453, PSend17457, PAssign17462);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17466 = new_Send((Optr)PBlock17448, SMB_whileTrue_, 1, (Optr)PBlock17451);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17467 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17471 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17472 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17471);
    Array PThreadedCode17470 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17471, (Optr)&t_send1, (Optr)PSend17472, (Optr)&t_block_return);
    Block PBlock17469 = new_Block_with(empty_Array, empty_Array, PThreadedCode17470, 1, PSend17472);
    // ifTrue:. 
    Send PSend17468 = new_Send((Optr)PSend17467, SMB_ifTrue_, 1, (Optr)PBlock17469);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17473 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17445 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17446, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17447, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17448, (Optr)&t_push_closure, (Optr)PBlock17451, (Optr)&t_send1, (Optr)PSend17466, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17467, (Optr)&t_send_ifTrue_, (Optr)PSend17468, (Optr)PBlock17469, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17443 = new_Block_with(PArray17444, empty_Array, PThreadedCode17445, 6, PAssign17446, PSend17447, PSend17466, PSend17468, PSend17473, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17474 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17443);
    Array PThreadedCode17442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17443, (Optr)&t_send1, (Optr)PSend17474, (Optr)&t_method_return);
    Method PMethod17439 = new_Method_with(PArray17440, PArray17441, empty_Array, PThreadedCode17442, 1, PSend17474);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17439, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17477 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17478 = new_Send((Optr)PSend17477, SMB_position, 0);
    Array PThreadedCode17476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17477, (Optr)&t_send0, (Optr)PSend17478, (Optr)&t_method_return);
    Method PMethod17475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17476, 1, PSend17478);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17475, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17481 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17482 = new_Send((Optr)PSend17481, SMB_remove, 0);
    Array PThreadedCode17480 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17481, (Optr)&t_send0, (Optr)PSend17482, (Optr)&t_method_return);
    Method PMethod17479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17480, 1, PSend17482);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17479, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17486 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17485 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17486);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17489 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17488 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17489);
    Assign PAssign17487 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17488);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17490 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17484 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17485, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17487, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17489, (Optr)&t_send1, (Optr)PSend17488, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17484, 4, PAssign17485, PAssign17487, PSend17490, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17483, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17493 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17492 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17493, (Optr)&t_method_return);
    Method PMethod17491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17492, 1, PSend17493);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17491, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17496 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17497 = new_Send((Optr)PSend17496, SMB_next, 0);
    Array PThreadedCode17495 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17496, (Optr)&t_send0, (Optr)PSend17497, (Optr)&t_method_return);
    Method PMethod17494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17495, 1, PSend17497);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17494, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17500 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17501 = new_Send((Optr)PSend17500, SMB_end, 0);
    Array PThreadedCode17499 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17500, (Optr)&t_send0, (Optr)PSend17501, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17499, 2, PSend17501, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17498, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17503 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17505 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17506 = new_Send((Optr)PSend17505, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17504 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17505, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17502 = new_Method_with(PArray17503, empty_Array, empty_Array, PThreadedCode17504, 2, PSend17506, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17502, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17509 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17510 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17511 = new_Send((Optr)PSend17510, SMB_start, 0);
    Array PThreadedCode17508 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17509, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17510, (Optr)&t_send0, (Optr)PSend17511, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17508, 3, PSend17509, PSend17511, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17507, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17513 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17515 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17514 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17515, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17512 = new_Method_with(PArray17513, empty_Array, empty_Array, PThreadedCode17514, 2, PAssign17515, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17512, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17517 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17518 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17521 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17523 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17525 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17524 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17525);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17526 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17527 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17529 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17531 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17536 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17535 = new_Send((Optr)PSend17536, SMB_size, 0);
    // -. 
    Send PSend17534 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17535);
    // -. 
    Send PSend17533 = new_Send((Optr)PSend17534, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17532 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17533);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17537 = new_Send((Optr)PAssign17532, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17541 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17540 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17541, (Optr)&t_block_return);
    Block PBlock17539 = new_Block_with(empty_Array, empty_Array, PThreadedCode17540, 1, PSend17541);
    // ifTrue:. 
    Send PSend17538 = new_Send((Optr)PSend17537, SMB_ifTrue_, 1, (Optr)PBlock17539);
    Array PThreadedCode17530 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17531, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17532, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17536, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_send1, (Optr)PSend17534, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17533, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17537, (Optr)&t_send_ifTrue_, (Optr)PSend17538, (Optr)PBlock17539, (Optr)&t_method_return);
    Block PBlock17528 = new_Block_with(PArray17529, empty_Array, PThreadedCode17530, 2, PSend17531, PSend17538);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17542 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17527, (Optr)PBlock17528);
    // next. 
    Send PSend17543 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17544 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17545 = new_Send((Optr)PSend17544, SMB_size, 0);
    // <=. 
    Send PSend17546 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17545);
    // value. 
    Send PSend17549 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17550 = new_Send((Optr)PSend17549, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17551 = new_Send((Optr)PSend17550, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17548 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17549, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17551, (Optr)&t_block_return);
    Block PBlock17547 = new_Block_with(empty_Array, empty_Array, PThreadedCode17548, 1, PSend17551);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17552 = new_Send((Optr)PSend17546, SMB_and_, 1, (Optr)PBlock17547);
    Array PThreadedCode17522 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17523, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17524, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17527, (Optr)&t_push_closure, (Optr)PBlock17528, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17542, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17544, (Optr)&t_send0, (Optr)PSend17545, (Optr)&t_send1, (Optr)PSend17546, (Optr)&t_push_closure, (Optr)PBlock17547, (Optr)&t_send1, (Optr)PSend17552, (Optr)&t_method_return);
    Block PBlock17520 = new_Block_with(PArray17521, empty_Array, PThreadedCode17522, 6, PAssign17523, PAssign17524, PSend17526, PSend17542, PSend17543, PSend17552);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17553 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17520);
    Array PThreadedCode17519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17520, (Optr)&t_send1, (Optr)PSend17553, (Optr)&t_method_return);
    Method PMethod17516 = new_Method_with(PArray17517, PArray17518, empty_Array, PThreadedCode17519, 1, PSend17553);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17516, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17556 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17557 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17556);
    Array PThreadedCode17555 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_send1, (Optr)PSend17557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17555, 2, PSend17557, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17554, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17560 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17561 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17559 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17560, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17561, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17559, 3, PSend17560, PSend17561, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17558, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17564 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17565 = new_Send((Optr)PSend17564, SMB_value, 0);
    Array PThreadedCode17563 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17564, (Optr)&t_send0, (Optr)PSend17565, (Optr)&t_method_return);
    Method PMethod17562 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17563, 1, PSend17565);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17562, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17567 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17569 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17570 = new_Send((Optr)PSend17569, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17569, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17566 = new_Method_with(PArray17567, empty_Array, empty_Array, PThreadedCode17568, 2, PSend17570, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17566, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17574 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17576 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17577 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17581 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17582 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17580 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17582, (Optr)&t_block_return);
    Block PBlock17579 = new_Block_with(empty_Array, empty_Array, PThreadedCode17580, 2, PSend17581, PSend17582);
    // ifTrue:. 
    Send PSend17578 = new_Send((Optr)PSend17577, SMB_ifTrue_, 1, (Optr)PBlock17579);
    Array PThreadedCode17575 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17576, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17577, (Optr)&t_send_ifTrue_, (Optr)PSend17578, (Optr)PBlock17579, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17573 = new_Block_with(PArray17574, empty_Array, PThreadedCode17575, 3, PSend17576, PSend17578, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17583 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17573);
    Array PThreadedCode17572 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17573, (Optr)&t_send1, (Optr)PSend17583, (Optr)&t_method_return);
    Method PMethod17571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17572, 1, PSend17583);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17571, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17585 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17587 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17586 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17587, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17584 = new_Method_with(PArray17585, empty_Array, empty_Array, PThreadedCode17586, 2, PSend17587, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17584, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17590 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17591 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17592 = new_Send((Optr)PSend17590, SMB__minus_, 1, (Optr)PSend17591);
    Array PThreadedCode17589 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17590, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17591, (Optr)&t_send1, (Optr)PSend17592, (Optr)&t_method_return);
    Method PMethod17588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17589, 1, PSend17592);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17588, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17595 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17596 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17597 = new_Send((Optr)PSend17596, SMB_end, 0);
    Array PThreadedCode17594 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17595, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17596, (Optr)&t_send0, (Optr)PSend17597, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17594, 3, PSend17595, PSend17597, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17593, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17600 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17599 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17600, (Optr)&t_method_return);
    Method PMethod17598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17599, 1, PSend17600);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17598, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17603 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17604 = new_Send((Optr)PSend17603, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17605 = new_Send((Optr)PSend17604, SMB_size, 0);
    Array PThreadedCode17602 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17603, (Optr)&t_send0, (Optr)PSend17604, (Optr)&t_send0, (Optr)PSend17605, (Optr)&t_method_return);
    Method PMethod17601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17602, 1, PSend17605);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17601, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17607 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17609 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17608 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17606 = new_Method_with(PArray17607, empty_Array, empty_Array, PThreadedCode17608, 2, PSend17609, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17606, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17612 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17611 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17612, (Optr)&t_method_return);
    Method PMethod17610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17611, 1, PSend17612);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17610, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17614 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17616 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17618 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17617 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17618);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17619 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17620 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17622 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17624 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17628 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17627 = new_Send((Optr)PSend17628, SMB_size, 0);
    // +. 
    Send PSend17626 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17627);
    Assign PAssign17625 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17626);
    Array PThreadedCode17623 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17624, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17625, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17628, (Optr)&t_send0, (Optr)PSend17627, (Optr)&t_send1, (Optr)PSend17626, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17621 = new_Block_with(PArray17622, empty_Array, PThreadedCode17623, 2, PSend17624, PAssign17625);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17629 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17620, (Optr)PBlock17621);
    // next. 
    Send PSend17630 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17631 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17632 = new_Send((Optr)PSend17631, SMB_position, 0);
    // +. 
    Send PSend17633 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17632);
    Array PThreadedCode17615 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17616, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17617, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17618, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17619, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17620, (Optr)&t_push_closure, (Optr)PBlock17621, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17629, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17631, (Optr)&t_send0, (Optr)PSend17632, (Optr)&t_send1, (Optr)PSend17633, (Optr)&t_method_return);
    Method PMethod17613 = new_Method_with(empty_Array, PArray17614, empty_Array, PThreadedCode17615, 6, PAssign17616, PAssign17617, PSend17619, PSend17629, PSend17630, PSend17633);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17613, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17636 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17637 = new_Send((Optr)PSend17636, SMB_start, 0);
    Array PThreadedCode17635 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17636, (Optr)&t_send0, (Optr)PSend17637, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17635, 2, PSend17637, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17634, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17640 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17641 = new_Send((Optr)PSend17640, SMB_truncate, 0);
    Array PThreadedCode17639 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17640, (Optr)&t_send0, (Optr)PSend17641, (Optr)&t_method_return);
    Method PMethod17638 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17639, 1, PSend17641);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17638, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17644 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17646 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17649 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17651 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17651, (Optr)&t_method_return);
    Block PBlock17648 = new_Block_with(PArray17649, empty_Array, PThreadedCode17650, 1, PSend17651);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17652 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17648);
    Array PThreadedCode17647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17648, (Optr)&t_send1, (Optr)PSend17652, (Optr)&t_method_return);
    Block PBlock17645 = new_Block_with(PArray17646, empty_Array, PThreadedCode17647, 1, PSend17652);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17655 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17656 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17655);
    Array PThreadedCode17654 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17655, (Optr)&t_send1, (Optr)PSend17656, (Optr)&t_block_return);
    Block PBlock17653 = new_Block_with(empty_Array, empty_Array, PThreadedCode17654, 1, PSend17656);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17657 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17645, (Optr)PBlock17653);
    // contents. 
    Send PSend17658 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17643 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17644, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17645, (Optr)&t_push_closure, (Optr)PBlock17653, (Optr)&t_send2, (Optr)PSend17657, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17658, (Optr)&t_method_return);
    Method PMethod17642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17643, 3, PSend17644, PSend17657, PSend17658);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17642, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17660 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17662 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17661 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17662, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17659 = new_Method_with(PArray17660, empty_Array, empty_Array, PThreadedCode17661, 2, PSend17662, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17659, Shell_ReadLine_Text_Class);
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