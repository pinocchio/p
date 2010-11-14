#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17611 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17612 = new_Send((Optr)PSend17611, SMB_previous, 0);
    Array PThreadedCode17610 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17611, (Optr)&t_send0, (Optr)PSend17612, (Optr)&t_method_return);
    Method PMethod17609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17610, 1, PSend17612);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17609, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17615 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17615, (Optr)&t_method_return);
    Method PMethod17613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17614, 1, PSend17615);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17613, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17618 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17619 = new_Send((Optr)PSend17618, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17623 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17622 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17623, (Optr)&t_block_return);
    Block PBlock17621 = new_Block_with(empty_Array, empty_Array, PThreadedCode17622, 1, PSend17623);
    Array PThreadedCode17625 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17624 = new_Block_with(empty_Array, empty_Array, PThreadedCode17625, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17620 = new_Send((Optr)PSend17619, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17621, (Optr)PBlock17624);
    Array PThreadedCode17617 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17618, (Optr)&t_send0, (Optr)PSend17619, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17620, (Optr)PBlock17621, (Optr)PBlock17624, (Optr)&t_method_return);
    Method PMethod17616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17617, 1, PSend17620);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17616, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17627 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17628 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17631 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17633 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17634 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17637 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17637, (Optr)&t_block_return);
    Block PBlock17635 = new_Block_with(empty_Array, empty_Array, PThreadedCode17636, 1, PSend17637);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17641 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17640 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17641);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17642 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17643 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17642);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17647 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17648 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17647);
    Array PThreadedCode17646 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17647, (Optr)&t_send1, (Optr)PSend17648, (Optr)&t_block_return);
    Block PBlock17645 = new_Block_with(empty_Array, empty_Array, PThreadedCode17646, 1, PSend17648);
    // ifTrue:. 
    Send PSend17644 = new_Send((Optr)PSend17643, SMB_ifTrue_, 1, (Optr)PBlock17645);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17652 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17651 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17652);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17650 = new_Send((Optr)PSend17651, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17649 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17650);
    Array PThreadedCode17639 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17640, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17641, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17642, (Optr)&t_send1, (Optr)PSend17643, (Optr)&t_send_ifTrue_, (Optr)PSend17644, (Optr)PBlock17645, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17649, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17652, (Optr)&t_send1, (Optr)PSend17651, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17650, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17638 = new_Block_with(empty_Array, empty_Array, PThreadedCode17639, 3, PAssign17640, PSend17644, PAssign17649);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17653 = new_Send((Optr)PBlock17635, SMB_whileTrue_, 1, (Optr)PBlock17638);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17654 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17658 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17659 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17658);
    Array PThreadedCode17657 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17658, (Optr)&t_send1, (Optr)PSend17659, (Optr)&t_block_return);
    Block PBlock17656 = new_Block_with(empty_Array, empty_Array, PThreadedCode17657, 1, PSend17659);
    // ifTrue:. 
    Send PSend17655 = new_Send((Optr)PSend17654, SMB_ifTrue_, 1, (Optr)PBlock17656);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17660 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17632 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17633, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17634, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17635, (Optr)&t_push_closure, (Optr)PBlock17638, (Optr)&t_send1, (Optr)PSend17653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17654, (Optr)&t_send_ifTrue_, (Optr)PSend17655, (Optr)PBlock17656, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17660, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17630 = new_Block_with(PArray17631, empty_Array, PThreadedCode17632, 6, PAssign17633, PSend17634, PSend17653, PSend17655, PSend17660, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17661 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17630);
    Array PThreadedCode17629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17630, (Optr)&t_send1, (Optr)PSend17661, (Optr)&t_method_return);
    Method PMethod17626 = new_Method_with(PArray17627, PArray17628, empty_Array, PThreadedCode17629, 1, PSend17661);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17626, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17664 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17665 = new_Send((Optr)PSend17664, SMB_position, 0);
    Array PThreadedCode17663 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17664, (Optr)&t_send0, (Optr)PSend17665, (Optr)&t_method_return);
    Method PMethod17662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17663, 1, PSend17665);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17662, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17668 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17669 = new_Send((Optr)PSend17668, SMB_remove, 0);
    Array PThreadedCode17667 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17668, (Optr)&t_send0, (Optr)PSend17669, (Optr)&t_method_return);
    Method PMethod17666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17667, 1, PSend17669);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17666, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17673 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17672 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17673);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17676 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17675 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17676);
    Assign PAssign17674 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17675);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17677 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17671 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17672, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17674, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17676, (Optr)&t_send1, (Optr)PSend17675, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17677, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17671, 4, PAssign17672, PAssign17674, PSend17677, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17670, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17680 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17679 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17680, (Optr)&t_method_return);
    Method PMethod17678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17679, 1, PSend17680);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17678, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17683 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17684 = new_Send((Optr)PSend17683, SMB_next, 0);
    Array PThreadedCode17682 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17683, (Optr)&t_send0, (Optr)PSend17684, (Optr)&t_method_return);
    Method PMethod17681 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17682, 1, PSend17684);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17681, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17686 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17688 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17689 = new_Send((Optr)PSend17688, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17687 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17688, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17685 = new_Method_with(PArray17686, empty_Array, empty_Array, PThreadedCode17687, 2, PSend17689, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17685, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17692 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17693 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17694 = new_Send((Optr)PSend17693, SMB_start, 0);
    Array PThreadedCode17691 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17692, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17693, (Optr)&t_send0, (Optr)PSend17694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17691, 3, PSend17692, PSend17694, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17690, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17696 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17697 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17700 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17702 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17704 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17703 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17704);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17705 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17706 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17708 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17710 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17715 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17714 = new_Send((Optr)PSend17715, SMB_size, 0);
    // -. 
    Send PSend17713 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17714);
    // -. 
    Send PSend17712 = new_Send((Optr)PSend17713, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17711 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17712);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17716 = new_Send((Optr)PAssign17711, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17720 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17719 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17720, (Optr)&t_block_return);
    Block PBlock17718 = new_Block_with(empty_Array, empty_Array, PThreadedCode17719, 1, PSend17720);
    // ifTrue:. 
    Send PSend17717 = new_Send((Optr)PSend17716, SMB_ifTrue_, 1, (Optr)PBlock17718);
    Array PThreadedCode17709 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17710, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17711, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17715, (Optr)&t_send0, (Optr)PSend17714, (Optr)&t_send1, (Optr)PSend17713, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17712, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17716, (Optr)&t_send_ifTrue_, (Optr)PSend17717, (Optr)PBlock17718, (Optr)&t_method_return);
    Block PBlock17707 = new_Block_with(PArray17708, empty_Array, PThreadedCode17709, 2, PSend17710, PSend17717);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17721 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17706, (Optr)PBlock17707);
    // next. 
    Send PSend17722 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17723 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17724 = new_Send((Optr)PSend17723, SMB_size, 0);
    // <=. 
    Send PSend17725 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17724);
    // value. 
    Send PSend17728 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17729 = new_Send((Optr)PSend17728, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17730 = new_Send((Optr)PSend17729, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17727 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17728, (Optr)&t_send0, (Optr)PSend17729, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17730, (Optr)&t_block_return);
    Block PBlock17726 = new_Block_with(empty_Array, empty_Array, PThreadedCode17727, 1, PSend17730);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17731 = new_Send((Optr)PSend17725, SMB_and_, 1, (Optr)PBlock17726);
    Array PThreadedCode17701 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17702, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17703, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17705, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17706, (Optr)&t_push_closure, (Optr)PBlock17707, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17721, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17722, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17723, (Optr)&t_send0, (Optr)PSend17724, (Optr)&t_send1, (Optr)PSend17725, (Optr)&t_push_closure, (Optr)PBlock17726, (Optr)&t_send1, (Optr)PSend17731, (Optr)&t_method_return);
    Block PBlock17699 = new_Block_with(PArray17700, empty_Array, PThreadedCode17701, 6, PAssign17702, PAssign17703, PSend17705, PSend17721, PSend17722, PSend17731);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17732 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17699);
    Array PThreadedCode17698 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17699, (Optr)&t_send1, (Optr)PSend17732, (Optr)&t_method_return);
    Method PMethod17695 = new_Method_with(PArray17696, PArray17697, empty_Array, PThreadedCode17698, 1, PSend17732);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17695, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17734 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17736 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17736, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17733 = new_Method_with(PArray17734, empty_Array, empty_Array, PThreadedCode17735, 2, PAssign17736, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17733, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17739 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17740 = new_Send((Optr)PSend17739, SMB_end, 0);
    Array PThreadedCode17738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17739, (Optr)&t_send0, (Optr)PSend17740, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17738, 2, PSend17740, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17737, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17743 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17744 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17743);
    Array PThreadedCode17742 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17743, (Optr)&t_send1, (Optr)PSend17744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17742, 2, PSend17744, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17741, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17747 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17748 = new_Send((Optr)PSend17747, SMB_truncate, 0);
    Array PThreadedCode17746 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17747, (Optr)&t_send0, (Optr)PSend17748, (Optr)&t_method_return);
    Method PMethod17745 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17746, 1, PSend17748);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17745, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17751 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17752 = new_Send((Optr)PSend17751, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17753 = new_Send((Optr)PSend17752, SMB_size, 0);
    Array PThreadedCode17750 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17751, (Optr)&t_send0, (Optr)PSend17752, (Optr)&t_send0, (Optr)PSend17753, (Optr)&t_method_return);
    Method PMethod17749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17750, 1, PSend17753);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17749, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17756 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17757 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17755 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17756, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17757, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17755, 3, PSend17756, PSend17757, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17754, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17760 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17761 = new_Send((Optr)PSend17760, SMB_start, 0);
    Array PThreadedCode17759 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17760, (Optr)&t_send0, (Optr)PSend17761, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17759, 2, PSend17761, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17758, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17764 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17765 = new_Send((Optr)PSend17764, SMB_value, 0);
    Array PThreadedCode17763 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17764, (Optr)&t_send0, (Optr)PSend17765, (Optr)&t_method_return);
    Method PMethod17762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17763, 1, PSend17765);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17762, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17767 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17769 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17770 = new_Send((Optr)PSend17769, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17768 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17769, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17770, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17766 = new_Method_with(PArray17767, empty_Array, empty_Array, PThreadedCode17768, 2, PSend17770, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17766, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17774 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17776 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17777 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17781 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17780 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17782, (Optr)&t_block_return);
    Block PBlock17779 = new_Block_with(empty_Array, empty_Array, PThreadedCode17780, 2, PSend17781, PSend17782);
    // ifTrue:. 
    Send PSend17778 = new_Send((Optr)PSend17777, SMB_ifTrue_, 1, (Optr)PBlock17779);
    Array PThreadedCode17775 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17776, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17777, (Optr)&t_send_ifTrue_, (Optr)PSend17778, (Optr)PBlock17779, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17773 = new_Block_with(PArray17774, empty_Array, PThreadedCode17775, 3, PSend17776, PSend17778, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17783 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17773);
    Array PThreadedCode17772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17773, (Optr)&t_send1, (Optr)PSend17783, (Optr)&t_method_return);
    Method PMethod17771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17772, 1, PSend17783);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17771, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17785 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17787 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17786 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17784 = new_Method_with(PArray17785, empty_Array, empty_Array, PThreadedCode17786, 2, PSend17787, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17784, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17790 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17791 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17792 = new_Send((Optr)PSend17790, SMB__minus_, 1, (Optr)PSend17791);
    Array PThreadedCode17789 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17790, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17791, (Optr)&t_send1, (Optr)PSend17792, (Optr)&t_method_return);
    Method PMethod17788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17789, 1, PSend17792);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17788, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17795 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17796 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17797 = new_Send((Optr)PSend17796, SMB_end, 0);
    Array PThreadedCode17794 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17795, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17796, (Optr)&t_send0, (Optr)PSend17797, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17794, 3, PSend17795, PSend17797, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17793, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17800 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17799 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17800, (Optr)&t_method_return);
    Method PMethod17798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17799, 1, PSend17800);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17798, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17802 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17804 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17803 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17804, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17801 = new_Method_with(PArray17802, empty_Array, empty_Array, PThreadedCode17803, 2, PSend17804, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17801, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17807 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17806 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17807, (Optr)&t_method_return);
    Method PMethod17805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17806, 1, PSend17807);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17805, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17809 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17811 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17813 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17812 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17813);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17814 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17815 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17817 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17819 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17823 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17822 = new_Send((Optr)PSend17823, SMB_size, 0);
    // +. 
    Send PSend17821 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17822);
    Assign PAssign17820 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17821);
    Array PThreadedCode17818 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17819, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17820, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17823, (Optr)&t_send0, (Optr)PSend17822, (Optr)&t_send1, (Optr)PSend17821, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17816 = new_Block_with(PArray17817, empty_Array, PThreadedCode17818, 2, PSend17819, PAssign17820);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17824 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17815, (Optr)PBlock17816);
    // next. 
    Send PSend17825 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17826 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17827 = new_Send((Optr)PSend17826, SMB_position, 0);
    // +. 
    Send PSend17828 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17827);
    Array PThreadedCode17810 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17811, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17812, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17814, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17815, (Optr)&t_push_closure, (Optr)PBlock17816, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17824, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17826, (Optr)&t_send0, (Optr)PSend17827, (Optr)&t_send1, (Optr)PSend17828, (Optr)&t_method_return);
    Method PMethod17808 = new_Method_with(empty_Array, PArray17809, empty_Array, PThreadedCode17810, 6, PAssign17811, PAssign17812, PSend17814, PSend17824, PSend17825, PSend17828);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17808, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17830 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17830, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17829, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17833 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17835 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17838 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17840 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17840, (Optr)&t_method_return);
    Block PBlock17837 = new_Block_with(PArray17838, empty_Array, PThreadedCode17839, 1, PSend17840);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17841 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17837);
    Array PThreadedCode17836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17837, (Optr)&t_send1, (Optr)PSend17841, (Optr)&t_method_return);
    Block PBlock17834 = new_Block_with(PArray17835, empty_Array, PThreadedCode17836, 1, PSend17841);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17844 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17845 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17844);
    Array PThreadedCode17843 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17844, (Optr)&t_send1, (Optr)PSend17845, (Optr)&t_block_return);
    Block PBlock17842 = new_Block_with(empty_Array, empty_Array, PThreadedCode17843, 1, PSend17845);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17846 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17834, (Optr)PBlock17842);
    // contents. 
    Send PSend17847 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17832 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17833, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17834, (Optr)&t_push_closure, (Optr)PBlock17842, (Optr)&t_send2, (Optr)PSend17846, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17847, (Optr)&t_method_return);
    Method PMethod17831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17832, 3, PSend17833, PSend17846, PSend17847);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17831, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17849 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17851 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17850 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17851, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17848 = new_Method_with(PArray17849, empty_Array, empty_Array, PThreadedCode17850, 2, PSend17851, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17848, Shell_ReadLine_Text_Class);
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