#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17250 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17252 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17251 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17252, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17249 = new_Method_with(PArray17250, empty_Array, empty_Array, PThreadedCode17251, 2, PAssign17252, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17249, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17255 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17256 = new_Send((Optr)PSend17255, SMB_previous, 0);
    Array PThreadedCode17254 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17255, (Optr)&t_send0, (Optr)PSend17256, (Optr)&t_method_return);
    Method PMethod17253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17254, 1, PSend17256);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17253, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17259 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17258 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17259, (Optr)&t_method_return);
    Method PMethod17257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17258, 1, PSend17259);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17257, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17262 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17263 = new_Send((Optr)PSend17262, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17267 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17266 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17267, (Optr)&t_block_return);
    Block PBlock17265 = new_Block_with(empty_Array, empty_Array, PThreadedCode17266, 1, PSend17267);
    Array PThreadedCode17269 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17268 = new_Block_with(empty_Array, empty_Array, PThreadedCode17269, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17265, (Optr)PBlock17268);
    Array PThreadedCode17261 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17262, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17264, (Optr)PBlock17265, (Optr)PBlock17268, (Optr)&t_method_return);
    Method PMethod17260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17261, 1, PSend17264);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17260, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17271 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17272 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17275 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17277 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17278 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17281 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17280 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17281, (Optr)&t_block_return);
    Block PBlock17279 = new_Block_with(empty_Array, empty_Array, PThreadedCode17280, 1, PSend17281);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17285 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17284 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17285);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17286 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17287 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17286);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17291 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17292 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17291);
    Array PThreadedCode17290 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17291, (Optr)&t_send1, (Optr)PSend17292, (Optr)&t_block_return);
    Block PBlock17289 = new_Block_with(empty_Array, empty_Array, PThreadedCode17290, 1, PSend17292);
    // ifTrue:. 
    Send PSend17288 = new_Send((Optr)PSend17287, SMB_ifTrue_, 1, (Optr)PBlock17289);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17296 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17295 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17296);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17294 = new_Send((Optr)PSend17295, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17293 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17294);
    Array PThreadedCode17283 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17284, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17285, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17286, (Optr)&t_send1, (Optr)PSend17287, (Optr)&t_send_ifTrue_, (Optr)PSend17288, (Optr)PBlock17289, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17293, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17296, (Optr)&t_send1, (Optr)PSend17295, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17294, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17282 = new_Block_with(empty_Array, empty_Array, PThreadedCode17283, 3, PAssign17284, PSend17288, PAssign17293);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17297 = new_Send((Optr)PBlock17279, SMB_whileTrue_, 1, (Optr)PBlock17282);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17298 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17302 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17303 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17302);
    Array PThreadedCode17301 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17302, (Optr)&t_send1, (Optr)PSend17303, (Optr)&t_block_return);
    Block PBlock17300 = new_Block_with(empty_Array, empty_Array, PThreadedCode17301, 1, PSend17303);
    // ifTrue:. 
    Send PSend17299 = new_Send((Optr)PSend17298, SMB_ifTrue_, 1, (Optr)PBlock17300);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17304 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17276 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17277, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17278, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17279, (Optr)&t_push_closure, (Optr)PBlock17282, (Optr)&t_send1, (Optr)PSend17297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17298, (Optr)&t_send_ifTrue_, (Optr)PSend17299, (Optr)PBlock17300, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17304, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17274 = new_Block_with(PArray17275, empty_Array, PThreadedCode17276, 6, PAssign17277, PSend17278, PSend17297, PSend17299, PSend17304, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17305 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17274);
    Array PThreadedCode17273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17274, (Optr)&t_send1, (Optr)PSend17305, (Optr)&t_method_return);
    Method PMethod17270 = new_Method_with(PArray17271, PArray17272, empty_Array, PThreadedCode17273, 1, PSend17305);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17270, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17308 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17309 = new_Send((Optr)PSend17308, SMB_position, 0);
    Array PThreadedCode17307 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17308, (Optr)&t_send0, (Optr)PSend17309, (Optr)&t_method_return);
    Method PMethod17306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17307, 1, PSend17309);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17306, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17312 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17313 = new_Send((Optr)PSend17312, SMB_remove, 0);
    Array PThreadedCode17311 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17312, (Optr)&t_send0, (Optr)PSend17313, (Optr)&t_method_return);
    Method PMethod17310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17311, 1, PSend17313);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17310, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17317 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17316 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17317);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17320 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17319 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17320);
    Assign PAssign17318 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17319);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17321 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17315 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17316, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17317, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17318, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17320, (Optr)&t_send1, (Optr)PSend17319, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17321, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17314 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17315, 4, PAssign17316, PAssign17318, PSend17321, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17314, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17324 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17324, (Optr)&t_method_return);
    Method PMethod17322 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17323, 1, PSend17324);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17322, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17327 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17328 = new_Send((Optr)PSend17327, SMB_next, 0);
    Array PThreadedCode17326 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17327, (Optr)&t_send0, (Optr)PSend17328, (Optr)&t_method_return);
    Method PMethod17325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17326, 1, PSend17328);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17325, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17330 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17332 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17333 = new_Send((Optr)PSend17332, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17331 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17332, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17329 = new_Method_with(PArray17330, empty_Array, empty_Array, PThreadedCode17331, 2, PSend17333, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17329, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17336 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17337 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17338 = new_Send((Optr)PSend17337, SMB_start, 0);
    Array PThreadedCode17335 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17336, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17337, (Optr)&t_send0, (Optr)PSend17338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17334 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17335, 3, PSend17336, PSend17338, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17334, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17340 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17341 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17344 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17346 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17348 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17347 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17348);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17349 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17350 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17352 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17354 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17359 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17358 = new_Send((Optr)PSend17359, SMB_size, 0);
    // -. 
    Send PSend17357 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17358);
    // -. 
    Send PSend17356 = new_Send((Optr)PSend17357, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17355 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17356);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17360 = new_Send((Optr)PAssign17355, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17364 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17363 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17364, (Optr)&t_block_return);
    Block PBlock17362 = new_Block_with(empty_Array, empty_Array, PThreadedCode17363, 1, PSend17364);
    // ifTrue:. 
    Send PSend17361 = new_Send((Optr)PSend17360, SMB_ifTrue_, 1, (Optr)PBlock17362);
    Array PThreadedCode17353 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17354, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17355, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_send0, (Optr)PSend17358, (Optr)&t_send1, (Optr)PSend17357, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17356, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17360, (Optr)&t_send_ifTrue_, (Optr)PSend17361, (Optr)PBlock17362, (Optr)&t_method_return);
    Block PBlock17351 = new_Block_with(PArray17352, empty_Array, PThreadedCode17353, 2, PSend17354, PSend17361);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17365 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17350, (Optr)PBlock17351);
    // next. 
    Send PSend17366 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17367 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17368 = new_Send((Optr)PSend17367, SMB_size, 0);
    // <=. 
    Send PSend17369 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17368);
    // value. 
    Send PSend17372 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17373 = new_Send((Optr)PSend17372, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17374 = new_Send((Optr)PSend17373, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17371 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17372, (Optr)&t_send0, (Optr)PSend17373, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17374, (Optr)&t_block_return);
    Block PBlock17370 = new_Block_with(empty_Array, empty_Array, PThreadedCode17371, 1, PSend17374);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17375 = new_Send((Optr)PSend17369, SMB_and_, 1, (Optr)PBlock17370);
    Array PThreadedCode17345 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17346, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17347, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17349, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17350, (Optr)&t_push_closure, (Optr)PBlock17351, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17365, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17367, (Optr)&t_send0, (Optr)PSend17368, (Optr)&t_send1, (Optr)PSend17369, (Optr)&t_push_closure, (Optr)PBlock17370, (Optr)&t_send1, (Optr)PSend17375, (Optr)&t_method_return);
    Block PBlock17343 = new_Block_with(PArray17344, empty_Array, PThreadedCode17345, 6, PAssign17346, PAssign17347, PSend17349, PSend17365, PSend17366, PSend17375);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17376 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17343);
    Array PThreadedCode17342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17343, (Optr)&t_send1, (Optr)PSend17376, (Optr)&t_method_return);
    Method PMethod17339 = new_Method_with(PArray17340, PArray17341, empty_Array, PThreadedCode17342, 1, PSend17376);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17339, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17379 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17380 = new_Send((Optr)PSend17379, SMB_end, 0);
    Array PThreadedCode17378 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17379, (Optr)&t_send0, (Optr)PSend17380, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17378, 2, PSend17380, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17377, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17383 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17384 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17383);
    Array PThreadedCode17382 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17383, (Optr)&t_send1, (Optr)PSend17384, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17382, 2, PSend17384, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17381, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17387 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17388 = new_Send((Optr)PSend17387, SMB_truncate, 0);
    Array PThreadedCode17386 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17387, (Optr)&t_send0, (Optr)PSend17388, (Optr)&t_method_return);
    Method PMethod17385 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17386, 1, PSend17388);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17385, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17391 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17392 = new_Send((Optr)PSend17391, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17393 = new_Send((Optr)PSend17392, SMB_size, 0);
    Array PThreadedCode17390 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17391, (Optr)&t_send0, (Optr)PSend17392, (Optr)&t_send0, (Optr)PSend17393, (Optr)&t_method_return);
    Method PMethod17389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17390, 1, PSend17393);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17389, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17396 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17397 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17395 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17396, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17395, 3, PSend17396, PSend17397, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17394, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17400 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17401 = new_Send((Optr)PSend17400, SMB_start, 0);
    Array PThreadedCode17399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17400, (Optr)&t_send0, (Optr)PSend17401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17399, 2, PSend17401, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17398, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17404 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17405 = new_Send((Optr)PSend17404, SMB_value, 0);
    Array PThreadedCode17403 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17404, (Optr)&t_send0, (Optr)PSend17405, (Optr)&t_method_return);
    Method PMethod17402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17403, 1, PSend17405);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17402, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17407 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17409 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17410 = new_Send((Optr)PSend17409, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17408 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17409, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17406 = new_Method_with(PArray17407, empty_Array, empty_Array, PThreadedCode17408, 2, PSend17410, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17406, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17414 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17416 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17417 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17421 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17422 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17420 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17421, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17422, (Optr)&t_block_return);
    Block PBlock17419 = new_Block_with(empty_Array, empty_Array, PThreadedCode17420, 2, PSend17421, PSend17422);
    // ifTrue:. 
    Send PSend17418 = new_Send((Optr)PSend17417, SMB_ifTrue_, 1, (Optr)PBlock17419);
    Array PThreadedCode17415 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17416, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17417, (Optr)&t_send_ifTrue_, (Optr)PSend17418, (Optr)PBlock17419, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17413 = new_Block_with(PArray17414, empty_Array, PThreadedCode17415, 3, PSend17416, PSend17418, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17423 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17413);
    Array PThreadedCode17412 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17413, (Optr)&t_send1, (Optr)PSend17423, (Optr)&t_method_return);
    Method PMethod17411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17412, 1, PSend17423);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17411, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17425 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17427 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17426 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17427, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17424 = new_Method_with(PArray17425, empty_Array, empty_Array, PThreadedCode17426, 2, PSend17427, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17424, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17430 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17431 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17432 = new_Send((Optr)PSend17430, SMB__minus_, 1, (Optr)PSend17431);
    Array PThreadedCode17429 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17430, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17431, (Optr)&t_send1, (Optr)PSend17432, (Optr)&t_method_return);
    Method PMethod17428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17429, 1, PSend17432);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17428, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17435 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17436 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17437 = new_Send((Optr)PSend17436, SMB_end, 0);
    Array PThreadedCode17434 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17435, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17436, (Optr)&t_send0, (Optr)PSend17437, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17434, 3, PSend17435, PSend17437, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17433, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17440 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17439 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17440, (Optr)&t_method_return);
    Method PMethod17438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17439, 1, PSend17440);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17438, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17442 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17444 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17443 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17441 = new_Method_with(PArray17442, empty_Array, empty_Array, PThreadedCode17443, 2, PSend17444, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17441, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17447 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17446 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17447, (Optr)&t_method_return);
    Method PMethod17445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17446, 1, PSend17447);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17445, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17449 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17451 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17453 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17452 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17453);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17454 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17455 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17457 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17459 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17463 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17462 = new_Send((Optr)PSend17463, SMB_size, 0);
    // +. 
    Send PSend17461 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17462);
    Assign PAssign17460 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17461);
    Array PThreadedCode17458 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17459, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17460, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17463, (Optr)&t_send0, (Optr)PSend17462, (Optr)&t_send1, (Optr)PSend17461, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17456 = new_Block_with(PArray17457, empty_Array, PThreadedCode17458, 2, PSend17459, PAssign17460);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17464 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17455, (Optr)PBlock17456);
    // next. 
    Send PSend17465 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17466 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17467 = new_Send((Optr)PSend17466, SMB_position, 0);
    // +. 
    Send PSend17468 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17467);
    Array PThreadedCode17450 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17451, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17452, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17454, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17455, (Optr)&t_push_closure, (Optr)PBlock17456, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17464, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17465, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17466, (Optr)&t_send0, (Optr)PSend17467, (Optr)&t_send1, (Optr)PSend17468, (Optr)&t_method_return);
    Method PMethod17448 = new_Method_with(empty_Array, PArray17449, empty_Array, PThreadedCode17450, 6, PAssign17451, PAssign17452, PSend17454, PSend17464, PSend17465, PSend17468);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17448, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17470 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17470, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17469, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17473 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17475 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17478 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17480 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17480, (Optr)&t_method_return);
    Block PBlock17477 = new_Block_with(PArray17478, empty_Array, PThreadedCode17479, 1, PSend17480);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17481 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17477);
    Array PThreadedCode17476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17477, (Optr)&t_send1, (Optr)PSend17481, (Optr)&t_method_return);
    Block PBlock17474 = new_Block_with(PArray17475, empty_Array, PThreadedCode17476, 1, PSend17481);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17484 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17485 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17484);
    Array PThreadedCode17483 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17484, (Optr)&t_send1, (Optr)PSend17485, (Optr)&t_block_return);
    Block PBlock17482 = new_Block_with(empty_Array, empty_Array, PThreadedCode17483, 1, PSend17485);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17486 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17474, (Optr)PBlock17482);
    // contents. 
    Send PSend17487 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17472 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17473, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17474, (Optr)&t_push_closure, (Optr)PBlock17482, (Optr)&t_send2, (Optr)PSend17486, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17487, (Optr)&t_method_return);
    Method PMethod17471 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17472, 3, PSend17473, PSend17486, PSend17487);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17471, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17489 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17491 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17490 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17491, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17488 = new_Method_with(PArray17489, empty_Array, empty_Array, PThreadedCode17490, 2, PSend17491, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17488, Shell_ReadLine_Text_Class);
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
    init_SMB_setLines_();
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