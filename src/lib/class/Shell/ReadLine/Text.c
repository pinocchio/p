#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17609 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17610 = new_Send((Optr)PSend17609, SMB_previous, 0);
    Array PThreadedCode17608 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17609, (Optr)&t_send0, (Optr)PSend17610, (Optr)&t_method_return);
    Method PMethod17607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17608, 1, PSend17610);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17607, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17613 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17612 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17613, (Optr)&t_method_return);
    Method PMethod17611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17612, 1, PSend17613);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17611, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17616 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17617 = new_Send((Optr)PSend17616, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17621 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17620 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17621, (Optr)&t_block_return);
    Block PBlock17619 = new_Block_with(empty_Array, empty_Array, PThreadedCode17620, 1, PSend17621);
    Array PThreadedCode17623 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17622 = new_Block_with(empty_Array, empty_Array, PThreadedCode17623, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17618 = new_Send((Optr)PSend17617, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17619, (Optr)PBlock17622);
    Array PThreadedCode17615 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17616, (Optr)&t_send0, (Optr)PSend17617, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17618, (Optr)PBlock17619, (Optr)PBlock17622, (Optr)&t_method_return);
    Method PMethod17614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17615, 1, PSend17618);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17614, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17625 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17626 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17629 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17631 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17632 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17635 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17634 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17635, (Optr)&t_block_return);
    Block PBlock17633 = new_Block_with(empty_Array, empty_Array, PThreadedCode17634, 1, PSend17635);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17639 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17638 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17639);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17640 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17641 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17640);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17645 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17646 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17645);
    Array PThreadedCode17644 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17645, (Optr)&t_send1, (Optr)PSend17646, (Optr)&t_block_return);
    Block PBlock17643 = new_Block_with(empty_Array, empty_Array, PThreadedCode17644, 1, PSend17646);
    // ifTrue:. 
    Send PSend17642 = new_Send((Optr)PSend17641, SMB_ifTrue_, 1, (Optr)PBlock17643);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17650 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17649 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17650);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17648 = new_Send((Optr)PSend17649, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17647 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17648);
    Array PThreadedCode17637 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17638, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17639, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17640, (Optr)&t_send1, (Optr)PSend17641, (Optr)&t_send_ifTrue_, (Optr)PSend17642, (Optr)PBlock17643, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17647, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17650, (Optr)&t_send1, (Optr)PSend17649, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17648, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17636 = new_Block_with(empty_Array, empty_Array, PThreadedCode17637, 3, PAssign17638, PSend17642, PAssign17647);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17651 = new_Send((Optr)PBlock17633, SMB_whileTrue_, 1, (Optr)PBlock17636);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17652 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17656 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17657 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17656);
    Array PThreadedCode17655 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17656, (Optr)&t_send1, (Optr)PSend17657, (Optr)&t_block_return);
    Block PBlock17654 = new_Block_with(empty_Array, empty_Array, PThreadedCode17655, 1, PSend17657);
    // ifTrue:. 
    Send PSend17653 = new_Send((Optr)PSend17652, SMB_ifTrue_, 1, (Optr)PBlock17654);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17658 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17630 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17631, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17632, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17633, (Optr)&t_push_closure, (Optr)PBlock17636, (Optr)&t_send1, (Optr)PSend17651, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17652, (Optr)&t_send_ifTrue_, (Optr)PSend17653, (Optr)PBlock17654, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17628 = new_Block_with(PArray17629, empty_Array, PThreadedCode17630, 6, PAssign17631, PSend17632, PSend17651, PSend17653, PSend17658, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17659 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17628);
    Array PThreadedCode17627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17628, (Optr)&t_send1, (Optr)PSend17659, (Optr)&t_method_return);
    Method PMethod17624 = new_Method_with(PArray17625, PArray17626, empty_Array, PThreadedCode17627, 1, PSend17659);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17624, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17662 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17663 = new_Send((Optr)PSend17662, SMB_position, 0);
    Array PThreadedCode17661 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17662, (Optr)&t_send0, (Optr)PSend17663, (Optr)&t_method_return);
    Method PMethod17660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17661, 1, PSend17663);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17660, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17666 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17667 = new_Send((Optr)PSend17666, SMB_remove, 0);
    Array PThreadedCode17665 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17666, (Optr)&t_send0, (Optr)PSend17667, (Optr)&t_method_return);
    Method PMethod17664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17665, 1, PSend17667);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17664, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17671 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17670 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17671);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17674 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17673 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17674);
    Assign PAssign17672 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17673);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17675 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17669 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17670, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17672, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17674, (Optr)&t_send1, (Optr)PSend17673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17675, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17669, 4, PAssign17670, PAssign17672, PSend17675, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17668, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17678 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17677 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17678, (Optr)&t_method_return);
    Method PMethod17676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17677, 1, PSend17678);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17676, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17681 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17682 = new_Send((Optr)PSend17681, SMB_next, 0);
    Array PThreadedCode17680 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17681, (Optr)&t_send0, (Optr)PSend17682, (Optr)&t_method_return);
    Method PMethod17679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17680, 1, PSend17682);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17679, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17684 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17686 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17687 = new_Send((Optr)PSend17686, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17686, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17683 = new_Method_with(PArray17684, empty_Array, empty_Array, PThreadedCode17685, 2, PSend17687, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17683, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17690 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17691 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17692 = new_Send((Optr)PSend17691, SMB_start, 0);
    Array PThreadedCode17689 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17690, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17691, (Optr)&t_send0, (Optr)PSend17692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17689, 3, PSend17690, PSend17692, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17688, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17694 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17695 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17698 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17700 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17702 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17701 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17702);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17703 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17704 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17706 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17708 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17713 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17712 = new_Send((Optr)PSend17713, SMB_size, 0);
    // -. 
    Send PSend17711 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17712);
    // -. 
    Send PSend17710 = new_Send((Optr)PSend17711, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17709 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17710);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17714 = new_Send((Optr)PAssign17709, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17718 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17717 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17718, (Optr)&t_block_return);
    Block PBlock17716 = new_Block_with(empty_Array, empty_Array, PThreadedCode17717, 1, PSend17718);
    // ifTrue:. 
    Send PSend17715 = new_Send((Optr)PSend17714, SMB_ifTrue_, 1, (Optr)PBlock17716);
    Array PThreadedCode17707 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17708, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17709, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17713, (Optr)&t_send0, (Optr)PSend17712, (Optr)&t_send1, (Optr)PSend17711, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17710, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17714, (Optr)&t_send_ifTrue_, (Optr)PSend17715, (Optr)PBlock17716, (Optr)&t_method_return);
    Block PBlock17705 = new_Block_with(PArray17706, empty_Array, PThreadedCode17707, 2, PSend17708, PSend17715);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17719 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17704, (Optr)PBlock17705);
    // next. 
    Send PSend17720 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17721 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17722 = new_Send((Optr)PSend17721, SMB_size, 0);
    // <=. 
    Send PSend17723 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17722);
    // value. 
    Send PSend17726 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17727 = new_Send((Optr)PSend17726, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17728 = new_Send((Optr)PSend17727, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17725 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17726, (Optr)&t_send0, (Optr)PSend17727, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17728, (Optr)&t_block_return);
    Block PBlock17724 = new_Block_with(empty_Array, empty_Array, PThreadedCode17725, 1, PSend17728);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17729 = new_Send((Optr)PSend17723, SMB_and_, 1, (Optr)PBlock17724);
    Array PThreadedCode17699 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17700, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17701, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17702, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17703, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17704, (Optr)&t_push_closure, (Optr)PBlock17705, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17719, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17720, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17721, (Optr)&t_send0, (Optr)PSend17722, (Optr)&t_send1, (Optr)PSend17723, (Optr)&t_push_closure, (Optr)PBlock17724, (Optr)&t_send1, (Optr)PSend17729, (Optr)&t_method_return);
    Block PBlock17697 = new_Block_with(PArray17698, empty_Array, PThreadedCode17699, 6, PAssign17700, PAssign17701, PSend17703, PSend17719, PSend17720, PSend17729);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17730 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17697);
    Array PThreadedCode17696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17697, (Optr)&t_send1, (Optr)PSend17730, (Optr)&t_method_return);
    Method PMethod17693 = new_Method_with(PArray17694, PArray17695, empty_Array, PThreadedCode17696, 1, PSend17730);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17693, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17732 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17734 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17734, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17731 = new_Method_with(PArray17732, empty_Array, empty_Array, PThreadedCode17733, 2, PAssign17734, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17731, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17737 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17738 = new_Send((Optr)PSend17737, SMB_end, 0);
    Array PThreadedCode17736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17737, (Optr)&t_send0, (Optr)PSend17738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17736, 2, PSend17738, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17735, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17741 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17742 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17741);
    Array PThreadedCode17740 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17741, (Optr)&t_send1, (Optr)PSend17742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17740, 2, PSend17742, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17739, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17745 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17746 = new_Send((Optr)PSend17745, SMB_truncate, 0);
    Array PThreadedCode17744 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17745, (Optr)&t_send0, (Optr)PSend17746, (Optr)&t_method_return);
    Method PMethod17743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17744, 1, PSend17746);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17743, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17749 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17750 = new_Send((Optr)PSend17749, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17751 = new_Send((Optr)PSend17750, SMB_size, 0);
    Array PThreadedCode17748 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17749, (Optr)&t_send0, (Optr)PSend17750, (Optr)&t_send0, (Optr)PSend17751, (Optr)&t_method_return);
    Method PMethod17747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17748, 1, PSend17751);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17747, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17754 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17755 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17753 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17754, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17755, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17752 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17753, 3, PSend17754, PSend17755, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17752, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17758 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17759 = new_Send((Optr)PSend17758, SMB_start, 0);
    Array PThreadedCode17757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17758, (Optr)&t_send0, (Optr)PSend17759, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17757, 2, PSend17759, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17756, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17762 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17763 = new_Send((Optr)PSend17762, SMB_value, 0);
    Array PThreadedCode17761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17762, (Optr)&t_send0, (Optr)PSend17763, (Optr)&t_method_return);
    Method PMethod17760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17761, 1, PSend17763);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17760, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17765 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17767 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17768 = new_Send((Optr)PSend17767, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17766 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17767, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17764 = new_Method_with(PArray17765, empty_Array, empty_Array, PThreadedCode17766, 2, PSend17768, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17764, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17772 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17774 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17775 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17779 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17780 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17778 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17780, (Optr)&t_block_return);
    Block PBlock17777 = new_Block_with(empty_Array, empty_Array, PThreadedCode17778, 2, PSend17779, PSend17780);
    // ifTrue:. 
    Send PSend17776 = new_Send((Optr)PSend17775, SMB_ifTrue_, 1, (Optr)PBlock17777);
    Array PThreadedCode17773 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17774, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17775, (Optr)&t_send_ifTrue_, (Optr)PSend17776, (Optr)PBlock17777, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17771 = new_Block_with(PArray17772, empty_Array, PThreadedCode17773, 3, PSend17774, PSend17776, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17781 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17771);
    Array PThreadedCode17770 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17771, (Optr)&t_send1, (Optr)PSend17781, (Optr)&t_method_return);
    Method PMethod17769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17770, 1, PSend17781);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17769, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17783 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17785 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17784 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17782 = new_Method_with(PArray17783, empty_Array, empty_Array, PThreadedCode17784, 2, PSend17785, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17782, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17788 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17789 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17790 = new_Send((Optr)PSend17788, SMB__minus_, 1, (Optr)PSend17789);
    Array PThreadedCode17787 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17788, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17789, (Optr)&t_send1, (Optr)PSend17790, (Optr)&t_method_return);
    Method PMethod17786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17787, 1, PSend17790);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17786, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17793 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17794 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17795 = new_Send((Optr)PSend17794, SMB_end, 0);
    Array PThreadedCode17792 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17793, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17794, (Optr)&t_send0, (Optr)PSend17795, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17792, 3, PSend17793, PSend17795, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17791, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17798 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_method_return);
    Method PMethod17796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17797, 1, PSend17798);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17796, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17800 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17802 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17801 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17799 = new_Method_with(PArray17800, empty_Array, empty_Array, PThreadedCode17801, 2, PSend17802, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17799, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17805 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17804 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17805, (Optr)&t_method_return);
    Method PMethod17803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17804, 1, PSend17805);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17803, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17807 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17809 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17810 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17811);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17812 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17813 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17815 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17817 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17821 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17820 = new_Send((Optr)PSend17821, SMB_size, 0);
    // +. 
    Send PSend17819 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17820);
    Assign PAssign17818 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17819);
    Array PThreadedCode17816 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17817, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17818, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17821, (Optr)&t_send0, (Optr)PSend17820, (Optr)&t_send1, (Optr)PSend17819, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17814 = new_Block_with(PArray17815, empty_Array, PThreadedCode17816, 2, PSend17817, PAssign17818);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17822 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17813, (Optr)PBlock17814);
    // next. 
    Send PSend17823 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17824 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17825 = new_Send((Optr)PSend17824, SMB_position, 0);
    // +. 
    Send PSend17826 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17825);
    Array PThreadedCode17808 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17809, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17810, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17812, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17813, (Optr)&t_push_closure, (Optr)PBlock17814, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17822, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17824, (Optr)&t_send0, (Optr)PSend17825, (Optr)&t_send1, (Optr)PSend17826, (Optr)&t_method_return);
    Method PMethod17806 = new_Method_with(empty_Array, PArray17807, empty_Array, PThreadedCode17808, 6, PAssign17809, PAssign17810, PSend17812, PSend17822, PSend17823, PSend17826);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17806, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17828 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17828, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17827, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17831 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17833 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17836 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17838 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17838, (Optr)&t_method_return);
    Block PBlock17835 = new_Block_with(PArray17836, empty_Array, PThreadedCode17837, 1, PSend17838);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17839 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17835);
    Array PThreadedCode17834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17835, (Optr)&t_send1, (Optr)PSend17839, (Optr)&t_method_return);
    Block PBlock17832 = new_Block_with(PArray17833, empty_Array, PThreadedCode17834, 1, PSend17839);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17842 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17842);
    Array PThreadedCode17841 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17842, (Optr)&t_send1, (Optr)PSend17843, (Optr)&t_block_return);
    Block PBlock17840 = new_Block_with(empty_Array, empty_Array, PThreadedCode17841, 1, PSend17843);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17844 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17832, (Optr)PBlock17840);
    // contents. 
    Send PSend17845 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17830 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17831, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17832, (Optr)&t_push_closure, (Optr)PBlock17840, (Optr)&t_send2, (Optr)PSend17844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17845, (Optr)&t_method_return);
    Method PMethod17829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17830, 3, PSend17831, PSend17844, PSend17845);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17829, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17847 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17849 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17848 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17849, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17846 = new_Method_with(PArray17847, empty_Array, empty_Array, PThreadedCode17848, 2, PSend17849, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17846, Shell_ReadLine_Text_Class);
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
    init_SMB_left();
    init_SMB_lines();
    init_SMB_deleteRight();
    init_SMB_position_();
    init_SMB_column();
    init_SMB_deleteLeft();
    init_SMB_initialize();
    init_SMB_line();
    init_SMB_right();
    init_SMB_add_();
    init_SMB_start();
    init_SMB_onLineBefore_();
    init_SMB_setLines_();
    init_SMB_endOfLine();
    init_SMB_addLine();
    init_SMB_deleteToEndOfLine();
    init_SMB_lastColumns();
    init_SMB_clear();
    init_SMB_startOfLine();
    init_SMB_currentCharacter();
    init_SMB_column_();
    init_SMB_up();
    init_SMB_line_();
    init_SMB_distanceToBottom();
    init_SMB_end();
    init_SMB_down();
    init_SMB_do_();
    init_SMB_currentLine();
    init_SMB_position();
    init_SMB_getLines();
    init_SMB_contents();
    init_SMB_do_separatedBy_();
    
}