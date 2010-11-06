#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18088 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18090 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18089 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18090);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18091 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18087 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18088, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18089, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18091, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18086 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18087, 4, PSend18088, PAssign18089, PSend18091, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18086, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18095 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18097 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18098 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18097);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18102 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18103 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18102);
    Array PThreadedCode18101 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18102, (Optr)&t_send1, (Optr)PSend18103, (Optr)&t_block_return);
    Block PBlock18100 = new_Block_with(empty_Array, empty_Array, PThreadedCode18101, 1, PSend18103);
    // ifTrue:. 
    Send PSend18099 = new_Send((Optr)PSend18098, SMB_ifTrue_, 1, (Optr)PBlock18100);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18104 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18096 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18097, (Optr)&t_send1, (Optr)PSend18098, (Optr)&t_send_ifTrue_, (Optr)PSend18099, (Optr)PBlock18100, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18104, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18094 = new_Block_with(PArray18095, empty_Array, PThreadedCode18096, 3, PSend18099, PSend18104, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18105 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18094);
    Array PThreadedCode18093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18094, (Optr)&t_send1, (Optr)PSend18105, (Optr)&t_method_return);
    Method PMethod18092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18093, 1, PSend18105);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18092, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18109 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18111 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18115 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18115);
    Array PThreadedCode18114 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18115, (Optr)&t_send1, (Optr)PSend18116, (Optr)&t_block_return);
    Block PBlock18113 = new_Block_with(empty_Array, empty_Array, PThreadedCode18114, 1, PSend18116);
    // ifFalse:. 
    Send PSend18112 = new_Send((Optr)PSend18111, SMB_ifFalse_, 1, (Optr)PBlock18113);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18117 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18110 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18111, (Optr)&t_send_ifFalse_, (Optr)PSend18112, (Optr)PBlock18113, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18117, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18108 = new_Block_with(PArray18109, empty_Array, PThreadedCode18110, 3, PSend18112, PSend18117, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18118 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18108);
    Array PThreadedCode18107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18108, (Optr)&t_send1, (Optr)PSend18118, (Optr)&t_method_return);
    Method PMethod18106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18107, 1, PSend18118);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18106, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18122 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18121 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18122);
    Super PSuper18123 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18120 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18121, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18122, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18123, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18120, 3, PAssign18121, PSuper18123, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18119, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18127 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18129 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18132 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18131 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18132, (Optr)&t_block_return);
    Block PBlock18130 = new_Block_with(empty_Array, empty_Array, PThreadedCode18131, 1, PSend18132);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18133 = new_Send((Optr)PSend18129, SMB_or_, 1, (Optr)PBlock18130);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18137 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18137, (Optr)&t_block_return);
    Block PBlock18135 = new_Block_with(empty_Array, empty_Array, PThreadedCode18136, 1, PSend18137);
    // ifTrue:. 
    Send PSend18134 = new_Send((Optr)PSend18133, SMB_ifTrue_, 1, (Optr)PBlock18135);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18138 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18139 = new_Send((Optr)PSend18138, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18140 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18139);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18141 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18128 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18129, (Optr)&t_push_closure, (Optr)PBlock18130, (Optr)&t_send1, (Optr)PSend18133, (Optr)&t_send_ifTrue_, (Optr)PSend18134, (Optr)PBlock18135, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18138, (Optr)&t_send0, (Optr)PSend18139, (Optr)&t_send1, (Optr)PSend18140, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18141, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18126 = new_Block_with(PArray18127, empty_Array, PThreadedCode18128, 4, PSend18134, PSend18140, PSend18141, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18142 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18126);
    Array PThreadedCode18125 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18126, (Optr)&t_send1, (Optr)PSend18142, (Optr)&t_method_return);
    Method PMethod18124 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18125, 1, PSend18142);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18124, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18146 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18148 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18152 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18151 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18152, (Optr)&t_block_return);
    Block PBlock18150 = new_Block_with(empty_Array, empty_Array, PThreadedCode18151, 1, PSend18152);
    // ifTrue:. 
    Send PSend18149 = new_Send((Optr)PSend18148, SMB_ifTrue_, 1, (Optr)PBlock18150);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18153 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18154 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18155 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18147 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18148, (Optr)&t_send_ifTrue_, (Optr)PSend18149, (Optr)PBlock18150, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18153, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18154, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18155, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18145 = new_Block_with(PArray18146, empty_Array, PThreadedCode18147, 5, PSend18149, PSend18153, PSend18154, PSend18155, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18156 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18145);
    Array PThreadedCode18144 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18145, (Optr)&t_send1, (Optr)PSend18156, (Optr)&t_method_return);
    Method PMethod18143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18144, 1, PSend18156);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18143, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18162 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18166, (Optr)&t_block_return);
    Block PBlock18164 = new_Block_with(empty_Array, empty_Array, PThreadedCode18165, 1, PSend18166);
    // ifTrue:. 
    Send PSend18163 = new_Send((Optr)PSend18162, SMB_ifTrue_, 1, (Optr)PBlock18164);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18167 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18168 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18169 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18161 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18162, (Optr)&t_send_ifTrue_, (Optr)PSend18163, (Optr)PBlock18164, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18167, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18168, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18169, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18159 = new_Block_with(PArray18160, empty_Array, PThreadedCode18161, 5, PSend18163, PSend18167, PSend18168, PSend18169, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18170 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18159);
    Array PThreadedCode18158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18159, (Optr)&t_send1, (Optr)PSend18170, (Optr)&t_method_return);
    Method PMethod18157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18158, 1, PSend18170);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18157, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18172 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18175 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18177 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18181 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18182 = new_Send((Optr)PSend18181, SMB_contents, 0);
    // contents. 
    Send PSend18183 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18184 = new_Send((Optr)PSend18182, SMB__equals_, 1, (Optr)PSend18183);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18188, (Optr)&t_block_return);
    Block PBlock18186 = new_Block_with(empty_Array, empty_Array, PThreadedCode18187, 1, PSend18188);
    // ifTrue:. 
    Send PSend18185 = new_Send((Optr)PSend18184, SMB_ifTrue_, 1, (Optr)PBlock18186);
    Array PThreadedCode18180 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18181, (Optr)&t_send0, (Optr)PSend18182, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18183, (Optr)&t_send1, (Optr)PSend18184, (Optr)&t_send_ifTrue_, (Optr)PSend18185, (Optr)PBlock18186, (Optr)&t_block_return);
    Block PBlock18179 = new_Block_with(empty_Array, empty_Array, PThreadedCode18180, 1, PSend18185);
    // ifFalse:. 
    Send PSend18178 = new_Send((Optr)PSend18177, SMB_ifFalse_, 1, (Optr)PBlock18179);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18191 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18192 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18190 = new_Send((Optr)PSend18191, SMB_setLines_, 1, (Optr)PSend18192);
    Assign PAssign18189 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18190);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18193 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18195 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18194 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18195);
    Array PThreadedCode18176 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18177, (Optr)&t_send_ifFalse_, (Optr)PSend18178, (Optr)PBlock18179, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18189, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18191, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18192, (Optr)&t_send1, (Optr)PSend18190, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18193, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18194, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18174 = new_Block_with(PArray18175, empty_Array, PThreadedCode18176, 5, PSend18178, PAssign18189, PSend18193, PAssign18194, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18196 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18174);
    Array PThreadedCode18173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18174, (Optr)&t_send1, (Optr)PSend18196, (Optr)&t_method_return);
    Method PMethod18171 = new_Method_with(empty_Array, PArray18172, empty_Array, PThreadedCode18173, 1, PSend18196);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18171, Shell_ReadLine_HistoryText_Class);
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