#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17642 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17642, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17641, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17645 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17646 = new_Send((Optr)PSend17645, SMB_previous, 0);
    Array PThreadedCode17644 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17645, (Optr)&t_send0, (Optr)PSend17646, (Optr)&t_method_return);
    Method PMethod17643 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17644, 1, PSend17646);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17643, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17649 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17648 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17649, (Optr)&t_method_return);
    Method PMethod17647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17648, 1, PSend17649);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17647, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17652 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17653 = new_Send((Optr)PSend17652, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17657 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17656 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17657, (Optr)&t_block_return);
    Block PBlock17655 = new_Block_with(empty_Array, empty_Array, PThreadedCode17656, 1, PSend17657);
    Array PThreadedCode17659 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17658 = new_Block_with(empty_Array, empty_Array, PThreadedCode17659, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17654 = new_Send((Optr)PSend17653, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17655, (Optr)PBlock17658);
    Array PThreadedCode17651 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17652, (Optr)&t_send0, (Optr)PSend17653, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17654, (Optr)PBlock17655, (Optr)PBlock17658, (Optr)&t_method_return);
    Method PMethod17650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17651, 1, PSend17654);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17650, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17661 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17662 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17665 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17667 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17668 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17671 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17670 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17671, (Optr)&t_block_return);
    Block PBlock17669 = new_Block_with(empty_Array, empty_Array, PThreadedCode17670, 1, PSend17671);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17675 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17674 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17675);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17676 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17677 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17676);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17681 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17682 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17681);
    Array PThreadedCode17680 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17681, (Optr)&t_send1, (Optr)PSend17682, (Optr)&t_block_return);
    Block PBlock17679 = new_Block_with(empty_Array, empty_Array, PThreadedCode17680, 1, PSend17682);
    // ifTrue:. 
    Send PSend17678 = new_Send((Optr)PSend17677, SMB_ifTrue_, 1, (Optr)PBlock17679);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17686 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17685 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17686);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17684 = new_Send((Optr)PSend17685, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17683 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17684);
    Array PThreadedCode17673 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17674, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17675, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17676, (Optr)&t_send1, (Optr)PSend17677, (Optr)&t_send_ifTrue_, (Optr)PSend17678, (Optr)PBlock17679, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17683, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17686, (Optr)&t_send1, (Optr)PSend17685, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17684, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17672 = new_Block_with(empty_Array, empty_Array, PThreadedCode17673, 3, PAssign17674, PSend17678, PAssign17683);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17687 = new_Send((Optr)PBlock17669, SMB_whileTrue_, 1, (Optr)PBlock17672);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17688 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17692 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17693 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17692);
    Array PThreadedCode17691 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17692, (Optr)&t_send1, (Optr)PSend17693, (Optr)&t_block_return);
    Block PBlock17690 = new_Block_with(empty_Array, empty_Array, PThreadedCode17691, 1, PSend17693);
    // ifTrue:. 
    Send PSend17689 = new_Send((Optr)PSend17688, SMB_ifTrue_, 1, (Optr)PBlock17690);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17694 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17666 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17667, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17668, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17669, (Optr)&t_push_closure, (Optr)PBlock17672, (Optr)&t_send1, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17688, (Optr)&t_send_ifTrue_, (Optr)PSend17689, (Optr)PBlock17690, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17694, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17664 = new_Block_with(PArray17665, empty_Array, PThreadedCode17666, 6, PAssign17667, PSend17668, PSend17687, PSend17689, PSend17694, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17695 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17664);
    Array PThreadedCode17663 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17664, (Optr)&t_send1, (Optr)PSend17695, (Optr)&t_method_return);
    Method PMethod17660 = new_Method_with(PArray17661, PArray17662, empty_Array, PThreadedCode17663, 1, PSend17695);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17660, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17698 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17699 = new_Send((Optr)PSend17698, SMB_position, 0);
    Array PThreadedCode17697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17698, (Optr)&t_send0, (Optr)PSend17699, (Optr)&t_method_return);
    Method PMethod17696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17697, 1, PSend17699);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17696, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17702 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17703 = new_Send((Optr)PSend17702, SMB_remove, 0);
    Array PThreadedCode17701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17702, (Optr)&t_send0, (Optr)PSend17703, (Optr)&t_method_return);
    Method PMethod17700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17701, 1, PSend17703);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17700, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17707 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17706 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17707);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17710 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17709 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17710);
    Assign PAssign17708 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17709);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17711 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17705 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17706, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17708, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17710, (Optr)&t_send1, (Optr)PSend17709, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17704 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17705, 4, PAssign17706, PAssign17708, PSend17711, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17704, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17714 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17713 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17714, (Optr)&t_method_return);
    Method PMethod17712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17713, 1, PSend17714);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17712, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17717 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17718 = new_Send((Optr)PSend17717, SMB_next, 0);
    Array PThreadedCode17716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17717, (Optr)&t_send0, (Optr)PSend17718, (Optr)&t_method_return);
    Method PMethod17715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17716, 1, PSend17718);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17715, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17721 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17722 = new_Send((Optr)PSend17721, SMB_end, 0);
    Array PThreadedCode17720 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17721, (Optr)&t_send0, (Optr)PSend17722, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17720, 2, PSend17722, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17719, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17724 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17726 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17727 = new_Send((Optr)PSend17726, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17725 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17726, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17727, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17723 = new_Method_with(PArray17724, empty_Array, empty_Array, PThreadedCode17725, 2, PSend17727, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17723, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17730 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17731 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17732 = new_Send((Optr)PSend17731, SMB_start, 0);
    Array PThreadedCode17729 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17730, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17731, (Optr)&t_send0, (Optr)PSend17732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17728 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17729, 3, PSend17730, PSend17732, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17728, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
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


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17738 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17739 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17742 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17744 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17746 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17745 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17746);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17747 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17748 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17750 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17752 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17757 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17756 = new_Send((Optr)PSend17757, SMB_size, 0);
    // -. 
    Send PSend17755 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17756);
    // -. 
    Send PSend17754 = new_Send((Optr)PSend17755, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17753 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17754);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17758 = new_Send((Optr)PAssign17753, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17762 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17762, (Optr)&t_block_return);
    Block PBlock17760 = new_Block_with(empty_Array, empty_Array, PThreadedCode17761, 1, PSend17762);
    // ifTrue:. 
    Send PSend17759 = new_Send((Optr)PSend17758, SMB_ifTrue_, 1, (Optr)PBlock17760);
    Array PThreadedCode17751 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17752, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17753, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17757, (Optr)&t_send0, (Optr)PSend17756, (Optr)&t_send1, (Optr)PSend17755, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17754, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17758, (Optr)&t_send_ifTrue_, (Optr)PSend17759, (Optr)PBlock17760, (Optr)&t_method_return);
    Block PBlock17749 = new_Block_with(PArray17750, empty_Array, PThreadedCode17751, 2, PSend17752, PSend17759);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17763 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17748, (Optr)PBlock17749);
    // next. 
    Send PSend17764 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17765 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17766 = new_Send((Optr)PSend17765, SMB_size, 0);
    // <=. 
    Send PSend17767 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17766);
    // value. 
    Send PSend17770 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17771 = new_Send((Optr)PSend17770, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17772 = new_Send((Optr)PSend17771, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17769 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17770, (Optr)&t_send0, (Optr)PSend17771, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17772, (Optr)&t_block_return);
    Block PBlock17768 = new_Block_with(empty_Array, empty_Array, PThreadedCode17769, 1, PSend17772);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17773 = new_Send((Optr)PSend17767, SMB_and_, 1, (Optr)PBlock17768);
    Array PThreadedCode17743 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17744, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17745, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17747, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17748, (Optr)&t_push_closure, (Optr)PBlock17749, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17763, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17765, (Optr)&t_send0, (Optr)PSend17766, (Optr)&t_send1, (Optr)PSend17767, (Optr)&t_push_closure, (Optr)PBlock17768, (Optr)&t_send1, (Optr)PSend17773, (Optr)&t_method_return);
    Block PBlock17741 = new_Block_with(PArray17742, empty_Array, PThreadedCode17743, 6, PAssign17744, PAssign17745, PSend17747, PSend17763, PSend17764, PSend17773);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17774 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17741);
    Array PThreadedCode17740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17741, (Optr)&t_send1, (Optr)PSend17774, (Optr)&t_method_return);
    Method PMethod17737 = new_Method_with(PArray17738, PArray17739, empty_Array, PThreadedCode17740, 1, PSend17774);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17737, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17777 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17778 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17777);
    Array PThreadedCode17776 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17777, (Optr)&t_send1, (Optr)PSend17778, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17776, 2, PSend17778, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17775, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17781 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17782 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17780 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17781, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17782, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17780, 3, PSend17781, PSend17782, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17779, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17785 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17786 = new_Send((Optr)PSend17785, SMB_value, 0);
    Array PThreadedCode17784 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17785, (Optr)&t_send0, (Optr)PSend17786, (Optr)&t_method_return);
    Method PMethod17783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17784, 1, PSend17786);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17783, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17788 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17790 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17791 = new_Send((Optr)PSend17790, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17789 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17790, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17787 = new_Method_with(PArray17788, empty_Array, empty_Array, PThreadedCode17789, 2, PSend17791, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17787, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17795 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17797 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17798 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17802 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17803 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17801 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17803, (Optr)&t_block_return);
    Block PBlock17800 = new_Block_with(empty_Array, empty_Array, PThreadedCode17801, 2, PSend17802, PSend17803);
    // ifTrue:. 
    Send PSend17799 = new_Send((Optr)PSend17798, SMB_ifTrue_, 1, (Optr)PBlock17800);
    Array PThreadedCode17796 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17797, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_send_ifTrue_, (Optr)PSend17799, (Optr)PBlock17800, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17794 = new_Block_with(PArray17795, empty_Array, PThreadedCode17796, 3, PSend17797, PSend17799, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17804 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17794);
    Array PThreadedCode17793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17794, (Optr)&t_send1, (Optr)PSend17804, (Optr)&t_method_return);
    Method PMethod17792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17793, 1, PSend17804);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17792, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17806 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17808 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17807 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17808, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17805 = new_Method_with(PArray17806, empty_Array, empty_Array, PThreadedCode17807, 2, PSend17808, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17805, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17812 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17813 = new_Send((Optr)PSend17811, SMB__minus_, 1, (Optr)PSend17812);
    Array PThreadedCode17810 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17811, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17812, (Optr)&t_send1, (Optr)PSend17813, (Optr)&t_method_return);
    Method PMethod17809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17810, 1, PSend17813);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17809, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17816 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17817 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17818 = new_Send((Optr)PSend17817, SMB_end, 0);
    Array PThreadedCode17815 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17816, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17817, (Optr)&t_send0, (Optr)PSend17818, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17815, 3, PSend17816, PSend17818, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17814, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17821 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17820 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17821, (Optr)&t_method_return);
    Method PMethod17819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17820, 1, PSend17821);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17819, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17824 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17825 = new_Send((Optr)PSend17824, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17826 = new_Send((Optr)PSend17825, SMB_size, 0);
    Array PThreadedCode17823 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17824, (Optr)&t_send0, (Optr)PSend17825, (Optr)&t_send0, (Optr)PSend17826, (Optr)&t_method_return);
    Method PMethod17822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17823, 1, PSend17826);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17822, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17828 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17830 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17829 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17830, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17827 = new_Method_with(PArray17828, empty_Array, empty_Array, PThreadedCode17829, 2, PSend17830, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17827, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17833 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17833, (Optr)&t_method_return);
    Method PMethod17831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17832, 1, PSend17833);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17831, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17835 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17837 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17839 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17838 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17839);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17840 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17841 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17843 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17845 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17849 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17848 = new_Send((Optr)PSend17849, SMB_size, 0);
    // +. 
    Send PSend17847 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17848);
    Assign PAssign17846 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17847);
    Array PThreadedCode17844 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17845, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17846, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17849, (Optr)&t_send0, (Optr)PSend17848, (Optr)&t_send1, (Optr)PSend17847, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17842 = new_Block_with(PArray17843, empty_Array, PThreadedCode17844, 2, PSend17845, PAssign17846);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17850 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17841, (Optr)PBlock17842);
    // next. 
    Send PSend17851 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17852 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17853 = new_Send((Optr)PSend17852, SMB_position, 0);
    // +. 
    Send PSend17854 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17853);
    Array PThreadedCode17836 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17837, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17838, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17839, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17840, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17841, (Optr)&t_push_closure, (Optr)PBlock17842, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17850, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17851, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17852, (Optr)&t_send0, (Optr)PSend17853, (Optr)&t_send1, (Optr)PSend17854, (Optr)&t_method_return);
    Method PMethod17834 = new_Method_with(empty_Array, PArray17835, empty_Array, PThreadedCode17836, 6, PAssign17837, PAssign17838, PSend17840, PSend17850, PSend17851, PSend17854);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17834, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17857 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17858 = new_Send((Optr)PSend17857, SMB_start, 0);
    Array PThreadedCode17856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17857, (Optr)&t_send0, (Optr)PSend17858, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17856, 2, PSend17858, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17855, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17861 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17862 = new_Send((Optr)PSend17861, SMB_truncate, 0);
    Array PThreadedCode17860 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17861, (Optr)&t_send0, (Optr)PSend17862, (Optr)&t_method_return);
    Method PMethod17859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17860, 1, PSend17862);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17859, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17865 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17867 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17870 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17872 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17871 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17872, (Optr)&t_method_return);
    Block PBlock17869 = new_Block_with(PArray17870, empty_Array, PThreadedCode17871, 1, PSend17872);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17873 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17869);
    Array PThreadedCode17868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17869, (Optr)&t_send1, (Optr)PSend17873, (Optr)&t_method_return);
    Block PBlock17866 = new_Block_with(PArray17867, empty_Array, PThreadedCode17868, 1, PSend17873);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17876 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17877 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17876);
    Array PThreadedCode17875 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17876, (Optr)&t_send1, (Optr)PSend17877, (Optr)&t_block_return);
    Block PBlock17874 = new_Block_with(empty_Array, empty_Array, PThreadedCode17875, 1, PSend17877);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17878 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17866, (Optr)PBlock17874);
    // contents. 
    Send PSend17879 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17864 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17865, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17866, (Optr)&t_push_closure, (Optr)PBlock17874, (Optr)&t_send2, (Optr)PSend17878, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17879, (Optr)&t_method_return);
    Method PMethod17863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17864, 3, PSend17865, PSend17878, PSend17879);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17863, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17881 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17883 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17882 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17883, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17880 = new_Method_with(PArray17881, empty_Array, empty_Array, PThreadedCode17882, 2, PSend17883, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17880, Shell_ReadLine_Text_Class);
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