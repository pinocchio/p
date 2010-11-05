#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17446 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17446, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17445, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17449 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17450 = new_Send((Optr)PSend17449, SMB_previous, 0);
    Array PThreadedCode17448 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17449, (Optr)&t_send0, (Optr)PSend17450, (Optr)&t_method_return);
    Method PMethod17447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17448, 1, PSend17450);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17447, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17453 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17452 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17453, (Optr)&t_method_return);
    Method PMethod17451 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17452, 1, PSend17453);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17451, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17456 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17457 = new_Send((Optr)PSend17456, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17461 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17460 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17461, (Optr)&t_block_return);
    Block PBlock17459 = new_Block_with(empty_Array, empty_Array, PThreadedCode17460, 1, PSend17461);
    Array PThreadedCode17463 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17462 = new_Block_with(empty_Array, empty_Array, PThreadedCode17463, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17458 = new_Send((Optr)PSend17457, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17459, (Optr)PBlock17462);
    Array PThreadedCode17455 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17456, (Optr)&t_send0, (Optr)PSend17457, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17458, (Optr)PBlock17459, (Optr)PBlock17462, (Optr)&t_method_return);
    Method PMethod17454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17455, 1, PSend17458);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17454, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17465 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17466 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17469 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17471 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17472 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17475 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17474 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17475, (Optr)&t_block_return);
    Block PBlock17473 = new_Block_with(empty_Array, empty_Array, PThreadedCode17474, 1, PSend17475);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17479 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17478 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17479);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17480 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17481 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17480);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17485 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17486 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17485);
    Array PThreadedCode17484 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_send1, (Optr)PSend17486, (Optr)&t_block_return);
    Block PBlock17483 = new_Block_with(empty_Array, empty_Array, PThreadedCode17484, 1, PSend17486);
    // ifTrue:. 
    Send PSend17482 = new_Send((Optr)PSend17481, SMB_ifTrue_, 1, (Optr)PBlock17483);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17490 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17489 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17490);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17488 = new_Send((Optr)PSend17489, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17487 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17488);
    Array PThreadedCode17477 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17478, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17479, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17480, (Optr)&t_send1, (Optr)PSend17481, (Optr)&t_send_ifTrue_, (Optr)PSend17482, (Optr)PBlock17483, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17487, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17490, (Optr)&t_send1, (Optr)PSend17489, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17488, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17476 = new_Block_with(empty_Array, empty_Array, PThreadedCode17477, 3, PAssign17478, PSend17482, PAssign17487);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17491 = new_Send((Optr)PBlock17473, SMB_whileTrue_, 1, (Optr)PBlock17476);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17492 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17496 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17497 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17496);
    Array PThreadedCode17495 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17496, (Optr)&t_send1, (Optr)PSend17497, (Optr)&t_block_return);
    Block PBlock17494 = new_Block_with(empty_Array, empty_Array, PThreadedCode17495, 1, PSend17497);
    // ifTrue:. 
    Send PSend17493 = new_Send((Optr)PSend17492, SMB_ifTrue_, 1, (Optr)PBlock17494);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17498 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17470 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17471, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17472, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17473, (Optr)&t_push_closure, (Optr)PBlock17476, (Optr)&t_send1, (Optr)PSend17491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17492, (Optr)&t_send_ifTrue_, (Optr)PSend17493, (Optr)PBlock17494, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17498, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17468 = new_Block_with(PArray17469, empty_Array, PThreadedCode17470, 6, PAssign17471, PSend17472, PSend17491, PSend17493, PSend17498, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17499 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17468);
    Array PThreadedCode17467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17468, (Optr)&t_send1, (Optr)PSend17499, (Optr)&t_method_return);
    Method PMethod17464 = new_Method_with(PArray17465, PArray17466, empty_Array, PThreadedCode17467, 1, PSend17499);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17464, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17502 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17503 = new_Send((Optr)PSend17502, SMB_position, 0);
    Array PThreadedCode17501 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17502, (Optr)&t_send0, (Optr)PSend17503, (Optr)&t_method_return);
    Method PMethod17500 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17501, 1, PSend17503);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17500, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17506 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17507 = new_Send((Optr)PSend17506, SMB_remove, 0);
    Array PThreadedCode17505 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17506, (Optr)&t_send0, (Optr)PSend17507, (Optr)&t_method_return);
    Method PMethod17504 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17505, 1, PSend17507);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17504, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17511 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17510 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17511);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17514 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17513 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17514);
    Assign PAssign17512 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17513);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17515 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17509 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17510, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17511, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17512, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17514, (Optr)&t_send1, (Optr)PSend17513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17515, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17509, 4, PAssign17510, PAssign17512, PSend17515, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17508, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17518 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17517 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17518, (Optr)&t_method_return);
    Method PMethod17516 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17517, 1, PSend17518);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17516, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17521 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17522 = new_Send((Optr)PSend17521, SMB_next, 0);
    Array PThreadedCode17520 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17521, (Optr)&t_send0, (Optr)PSend17522, (Optr)&t_method_return);
    Method PMethod17519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17520, 1, PSend17522);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17519, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17525 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17526 = new_Send((Optr)PSend17525, SMB_end, 0);
    Array PThreadedCode17524 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17525, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17524, 2, PSend17526, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17523, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17528 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17530 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17531 = new_Send((Optr)PSend17530, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17529 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17530, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17527 = new_Method_with(PArray17528, empty_Array, empty_Array, PThreadedCode17529, 2, PSend17531, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17527, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17534 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17535 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17536 = new_Send((Optr)PSend17535, SMB_start, 0);
    Array PThreadedCode17533 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17535, (Optr)&t_send0, (Optr)PSend17536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17533, 3, PSend17534, PSend17536, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17532, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17538 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17540 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17540, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17537 = new_Method_with(PArray17538, empty_Array, empty_Array, PThreadedCode17539, 2, PAssign17540, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17537, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17542 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17543 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17546 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17548 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17550 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17549 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17550);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17551 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17552 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17554 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17556 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17561 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17560 = new_Send((Optr)PSend17561, SMB_size, 0);
    // -. 
    Send PSend17559 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17560);
    // -. 
    Send PSend17558 = new_Send((Optr)PSend17559, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17557 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17558);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17562 = new_Send((Optr)PAssign17557, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17566 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17565 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17566, (Optr)&t_block_return);
    Block PBlock17564 = new_Block_with(empty_Array, empty_Array, PThreadedCode17565, 1, PSend17566);
    // ifTrue:. 
    Send PSend17563 = new_Send((Optr)PSend17562, SMB_ifTrue_, 1, (Optr)PBlock17564);
    Array PThreadedCode17555 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17557, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17561, (Optr)&t_send0, (Optr)PSend17560, (Optr)&t_send1, (Optr)PSend17559, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17558, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17562, (Optr)&t_send_ifTrue_, (Optr)PSend17563, (Optr)PBlock17564, (Optr)&t_method_return);
    Block PBlock17553 = new_Block_with(PArray17554, empty_Array, PThreadedCode17555, 2, PSend17556, PSend17563);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17567 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17552, (Optr)PBlock17553);
    // next. 
    Send PSend17568 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17569 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17570 = new_Send((Optr)PSend17569, SMB_size, 0);
    // <=. 
    Send PSend17571 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17570);
    // value. 
    Send PSend17574 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17575 = new_Send((Optr)PSend17574, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17576 = new_Send((Optr)PSend17575, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17573 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17574, (Optr)&t_send0, (Optr)PSend17575, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17576, (Optr)&t_block_return);
    Block PBlock17572 = new_Block_with(empty_Array, empty_Array, PThreadedCode17573, 1, PSend17576);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17577 = new_Send((Optr)PSend17571, SMB_and_, 1, (Optr)PBlock17572);
    Array PThreadedCode17547 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17548, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17549, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17551, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17552, (Optr)&t_push_closure, (Optr)PBlock17553, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17567, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17569, (Optr)&t_send0, (Optr)PSend17570, (Optr)&t_send1, (Optr)PSend17571, (Optr)&t_push_closure, (Optr)PBlock17572, (Optr)&t_send1, (Optr)PSend17577, (Optr)&t_method_return);
    Block PBlock17545 = new_Block_with(PArray17546, empty_Array, PThreadedCode17547, 6, PAssign17548, PAssign17549, PSend17551, PSend17567, PSend17568, PSend17577);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17578 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17545);
    Array PThreadedCode17544 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17545, (Optr)&t_send1, (Optr)PSend17578, (Optr)&t_method_return);
    Method PMethod17541 = new_Method_with(PArray17542, PArray17543, empty_Array, PThreadedCode17544, 1, PSend17578);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17541, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17581 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17582 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17581);
    Array PThreadedCode17580 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17581, (Optr)&t_send1, (Optr)PSend17582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17580, 2, PSend17582, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17579, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17585 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17586 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17584 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17585, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17583 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17584, 3, PSend17585, PSend17586, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17583, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17589 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17590 = new_Send((Optr)PSend17589, SMB_value, 0);
    Array PThreadedCode17588 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17589, (Optr)&t_send0, (Optr)PSend17590, (Optr)&t_method_return);
    Method PMethod17587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17588, 1, PSend17590);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17587, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17592 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17594 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17595 = new_Send((Optr)PSend17594, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17593 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17594, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17595, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17591 = new_Method_with(PArray17592, empty_Array, empty_Array, PThreadedCode17593, 2, PSend17595, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17591, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17599 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17601 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17602 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17606 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17607 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17605 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17607, (Optr)&t_block_return);
    Block PBlock17604 = new_Block_with(empty_Array, empty_Array, PThreadedCode17605, 2, PSend17606, PSend17607);
    // ifTrue:. 
    Send PSend17603 = new_Send((Optr)PSend17602, SMB_ifTrue_, 1, (Optr)PBlock17604);
    Array PThreadedCode17600 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17601, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17602, (Optr)&t_send_ifTrue_, (Optr)PSend17603, (Optr)PBlock17604, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17598 = new_Block_with(PArray17599, empty_Array, PThreadedCode17600, 3, PSend17601, PSend17603, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17608 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17598);
    Array PThreadedCode17597 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17598, (Optr)&t_send1, (Optr)PSend17608, (Optr)&t_method_return);
    Method PMethod17596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17597, 1, PSend17608);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17596, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17610 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17612 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17611 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17612, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17609 = new_Method_with(PArray17610, empty_Array, empty_Array, PThreadedCode17611, 2, PSend17612, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17609, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17615 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17616 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17617 = new_Send((Optr)PSend17615, SMB__minus_, 1, (Optr)PSend17616);
    Array PThreadedCode17614 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17615, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17616, (Optr)&t_send1, (Optr)PSend17617, (Optr)&t_method_return);
    Method PMethod17613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17614, 1, PSend17617);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17613, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17620 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17621 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17622 = new_Send((Optr)PSend17621, SMB_end, 0);
    Array PThreadedCode17619 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17620, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17621, (Optr)&t_send0, (Optr)PSend17622, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17619, 3, PSend17620, PSend17622, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17618, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17625 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17624 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17625, (Optr)&t_method_return);
    Method PMethod17623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17624, 1, PSend17625);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17623, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17628 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17629 = new_Send((Optr)PSend17628, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17630 = new_Send((Optr)PSend17629, SMB_size, 0);
    Array PThreadedCode17627 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17628, (Optr)&t_send0, (Optr)PSend17629, (Optr)&t_send0, (Optr)PSend17630, (Optr)&t_method_return);
    Method PMethod17626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17627, 1, PSend17630);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17626, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17632 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17634 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17633 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17634, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17631 = new_Method_with(PArray17632, empty_Array, empty_Array, PThreadedCode17633, 2, PSend17634, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17631, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17637 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17637, (Optr)&t_method_return);
    Method PMethod17635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17636, 1, PSend17637);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17635, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17639 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17641 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17643 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17642 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17643);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17644 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17645 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17647 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17649 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17653 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17652 = new_Send((Optr)PSend17653, SMB_size, 0);
    // +. 
    Send PSend17651 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17652);
    Assign PAssign17650 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17651);
    Array PThreadedCode17648 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17649, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17650, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17653, (Optr)&t_send0, (Optr)PSend17652, (Optr)&t_send1, (Optr)PSend17651, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17646 = new_Block_with(PArray17647, empty_Array, PThreadedCode17648, 2, PSend17649, PAssign17650);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17654 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17645, (Optr)PBlock17646);
    // next. 
    Send PSend17655 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17656 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17657 = new_Send((Optr)PSend17656, SMB_position, 0);
    // +. 
    Send PSend17658 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17657);
    Array PThreadedCode17640 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17641, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17642, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17644, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17645, (Optr)&t_push_closure, (Optr)PBlock17646, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17654, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17655, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17656, (Optr)&t_send0, (Optr)PSend17657, (Optr)&t_send1, (Optr)PSend17658, (Optr)&t_method_return);
    Method PMethod17638 = new_Method_with(empty_Array, PArray17639, empty_Array, PThreadedCode17640, 6, PAssign17641, PAssign17642, PSend17644, PSend17654, PSend17655, PSend17658);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17638, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17661 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17662 = new_Send((Optr)PSend17661, SMB_start, 0);
    Array PThreadedCode17660 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17661, (Optr)&t_send0, (Optr)PSend17662, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17660, 2, PSend17662, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17659, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17665 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17666 = new_Send((Optr)PSend17665, SMB_truncate, 0);
    Array PThreadedCode17664 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17665, (Optr)&t_send0, (Optr)PSend17666, (Optr)&t_method_return);
    Method PMethod17663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17664, 1, PSend17666);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17663, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17669 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17671 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17674 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17676 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17676, (Optr)&t_method_return);
    Block PBlock17673 = new_Block_with(PArray17674, empty_Array, PThreadedCode17675, 1, PSend17676);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17677 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17673);
    Array PThreadedCode17672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17673, (Optr)&t_send1, (Optr)PSend17677, (Optr)&t_method_return);
    Block PBlock17670 = new_Block_with(PArray17671, empty_Array, PThreadedCode17672, 1, PSend17677);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17680 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17681 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17680);
    Array PThreadedCode17679 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17680, (Optr)&t_send1, (Optr)PSend17681, (Optr)&t_block_return);
    Block PBlock17678 = new_Block_with(empty_Array, empty_Array, PThreadedCode17679, 1, PSend17681);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17682 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17670, (Optr)PBlock17678);
    // contents. 
    Send PSend17683 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17668 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17669, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17670, (Optr)&t_push_closure, (Optr)PBlock17678, (Optr)&t_send2, (Optr)PSend17682, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17683, (Optr)&t_method_return);
    Method PMethod17667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17668, 3, PSend17669, PSend17682, PSend17683);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17667, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17685 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17687 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17686 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17684 = new_Method_with(PArray17685, empty_Array, empty_Array, PThreadedCode17686, 2, PSend17687, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17684, Shell_ReadLine_Text_Class);
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