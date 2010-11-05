#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18113 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18115 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18114 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18115);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18116 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18112 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18113, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18114, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18116, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18112, 4, PSend18113, PAssign18114, PSend18116, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18111, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18120 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18122 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18123 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18122);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18127 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18128 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18127);
    Array PThreadedCode18126 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18127, (Optr)&t_send1, (Optr)PSend18128, (Optr)&t_block_return);
    Block PBlock18125 = new_Block_with(empty_Array, empty_Array, PThreadedCode18126, 1, PSend18128);
    // ifTrue:. 
    Send PSend18124 = new_Send((Optr)PSend18123, SMB_ifTrue_, 1, (Optr)PBlock18125);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18129 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18121 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18122, (Optr)&t_send1, (Optr)PSend18123, (Optr)&t_send_ifTrue_, (Optr)PSend18124, (Optr)PBlock18125, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18129, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18119 = new_Block_with(PArray18120, empty_Array, PThreadedCode18121, 3, PSend18124, PSend18129, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18130 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18119);
    Array PThreadedCode18118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18119, (Optr)&t_send1, (Optr)PSend18130, (Optr)&t_method_return);
    Method PMethod18117 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18118, 1, PSend18130);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18117, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18134 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18136 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18140 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18140);
    Array PThreadedCode18139 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18140, (Optr)&t_send1, (Optr)PSend18141, (Optr)&t_block_return);
    Block PBlock18138 = new_Block_with(empty_Array, empty_Array, PThreadedCode18139, 1, PSend18141);
    // ifFalse:. 
    Send PSend18137 = new_Send((Optr)PSend18136, SMB_ifFalse_, 1, (Optr)PBlock18138);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18142 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18135 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18136, (Optr)&t_send_ifFalse_, (Optr)PSend18137, (Optr)PBlock18138, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18142, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18133 = new_Block_with(PArray18134, empty_Array, PThreadedCode18135, 3, PSend18137, PSend18142, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18143 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18133);
    Array PThreadedCode18132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18133, (Optr)&t_send1, (Optr)PSend18143, (Optr)&t_method_return);
    Method PMethod18131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18132, 1, PSend18143);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18131, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18147 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18146 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18147);
    Super PSuper18148 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18145 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18146, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18147, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18148, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18145, 3, PAssign18146, PSuper18148, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18144, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18152 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18154 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18157 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18156 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18157, (Optr)&t_block_return);
    Block PBlock18155 = new_Block_with(empty_Array, empty_Array, PThreadedCode18156, 1, PSend18157);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18158 = new_Send((Optr)PSend18154, SMB_or_, 1, (Optr)PBlock18155);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18162 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18161 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18162, (Optr)&t_block_return);
    Block PBlock18160 = new_Block_with(empty_Array, empty_Array, PThreadedCode18161, 1, PSend18162);
    // ifTrue:. 
    Send PSend18159 = new_Send((Optr)PSend18158, SMB_ifTrue_, 1, (Optr)PBlock18160);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18163 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18164 = new_Send((Optr)PSend18163, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18165 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18164);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18166 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18153 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18154, (Optr)&t_push_closure, (Optr)PBlock18155, (Optr)&t_send1, (Optr)PSend18158, (Optr)&t_send_ifTrue_, (Optr)PSend18159, (Optr)PBlock18160, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18163, (Optr)&t_send0, (Optr)PSend18164, (Optr)&t_send1, (Optr)PSend18165, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18166, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18151 = new_Block_with(PArray18152, empty_Array, PThreadedCode18153, 4, PSend18159, PSend18165, PSend18166, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18167 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18151);
    Array PThreadedCode18150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18151, (Optr)&t_send1, (Optr)PSend18167, (Optr)&t_method_return);
    Method PMethod18149 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18150, 1, PSend18167);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18149, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18171 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18173 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18177 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18176 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18177, (Optr)&t_block_return);
    Block PBlock18175 = new_Block_with(empty_Array, empty_Array, PThreadedCode18176, 1, PSend18177);
    // ifTrue:. 
    Send PSend18174 = new_Send((Optr)PSend18173, SMB_ifTrue_, 1, (Optr)PBlock18175);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18178 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18179 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18180 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18172 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18173, (Optr)&t_send_ifTrue_, (Optr)PSend18174, (Optr)PBlock18175, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18178, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18179, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18180, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18170 = new_Block_with(PArray18171, empty_Array, PThreadedCode18172, 5, PSend18174, PSend18178, PSend18179, PSend18180, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18181 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18170);
    Array PThreadedCode18169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18170, (Optr)&t_send1, (Optr)PSend18181, (Optr)&t_method_return);
    Method PMethod18168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18169, 1, PSend18181);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18168, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18185 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18187 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18191 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18190 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18191, (Optr)&t_block_return);
    Block PBlock18189 = new_Block_with(empty_Array, empty_Array, PThreadedCode18190, 1, PSend18191);
    // ifTrue:. 
    Send PSend18188 = new_Send((Optr)PSend18187, SMB_ifTrue_, 1, (Optr)PBlock18189);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18192 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18193 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18194 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18186 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18187, (Optr)&t_send_ifTrue_, (Optr)PSend18188, (Optr)PBlock18189, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18192, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18193, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18184 = new_Block_with(PArray18185, empty_Array, PThreadedCode18186, 5, PSend18188, PSend18192, PSend18193, PSend18194, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18195 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18184);
    Array PThreadedCode18183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18184, (Optr)&t_send1, (Optr)PSend18195, (Optr)&t_method_return);
    Method PMethod18182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18183, 1, PSend18195);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18182, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18197 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18200 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18202 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18206 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18207 = new_Send((Optr)PSend18206, SMB_contents, 0);
    // contents. 
    Send PSend18208 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18209 = new_Send((Optr)PSend18207, SMB__equals_, 1, (Optr)PSend18208);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18213 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18213, (Optr)&t_block_return);
    Block PBlock18211 = new_Block_with(empty_Array, empty_Array, PThreadedCode18212, 1, PSend18213);
    // ifTrue:. 
    Send PSend18210 = new_Send((Optr)PSend18209, SMB_ifTrue_, 1, (Optr)PBlock18211);
    Array PThreadedCode18205 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18206, (Optr)&t_send0, (Optr)PSend18207, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18208, (Optr)&t_send1, (Optr)PSend18209, (Optr)&t_send_ifTrue_, (Optr)PSend18210, (Optr)PBlock18211, (Optr)&t_block_return);
    Block PBlock18204 = new_Block_with(empty_Array, empty_Array, PThreadedCode18205, 1, PSend18210);
    // ifFalse:. 
    Send PSend18203 = new_Send((Optr)PSend18202, SMB_ifFalse_, 1, (Optr)PBlock18204);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18216 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18217 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18215 = new_Send((Optr)PSend18216, SMB_setLines_, 1, (Optr)PSend18217);
    Assign PAssign18214 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18215);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18218 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18220 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18219 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18220);
    Array PThreadedCode18201 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18202, (Optr)&t_send_ifFalse_, (Optr)PSend18203, (Optr)PBlock18204, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18214, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18216, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18217, (Optr)&t_send1, (Optr)PSend18215, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18218, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18219, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18199 = new_Block_with(PArray18200, empty_Array, PThreadedCode18201, 5, PSend18203, PAssign18214, PSend18218, PAssign18219, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18221 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18199);
    Array PThreadedCode18198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18199, (Optr)&t_send1, (Optr)PSend18221, (Optr)&t_method_return);
    Method PMethod18196 = new_Method_with(empty_Array, PArray18197, empty_Array, PThreadedCode18198, 1, PSend18221);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18196, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
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
    init_SMB_down();
    init_SMB_initialize();
    init_SMB_historyRestore();
    init_SMB_historyPrevious();
    init_SMB_historyNext();
    init_SMB_historyPush();
    
}