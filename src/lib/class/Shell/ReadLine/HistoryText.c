#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18077 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18079 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18078 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18079);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18080 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18076 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18077, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18078, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18080, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18075 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18076, 4, PSend18077, PAssign18078, PSend18080, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18075, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18084 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18086 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18087 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18086);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18091 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18092 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18091);
    Array PThreadedCode18090 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18091, (Optr)&t_send1, (Optr)PSend18092, (Optr)&t_block_return);
    Block PBlock18089 = new_Block_with(empty_Array, empty_Array, PThreadedCode18090, 1, PSend18092);
    // ifTrue:. 
    Send PSend18088 = new_Send((Optr)PSend18087, SMB_ifTrue_, 1, (Optr)PBlock18089);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18093 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18085 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18086, (Optr)&t_send1, (Optr)PSend18087, (Optr)&t_send_ifTrue_, (Optr)PSend18088, (Optr)PBlock18089, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18093, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18083 = new_Block_with(PArray18084, empty_Array, PThreadedCode18085, 3, PSend18088, PSend18093, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18094 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18083);
    Array PThreadedCode18082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18083, (Optr)&t_send1, (Optr)PSend18094, (Optr)&t_method_return);
    Method PMethod18081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18082, 1, PSend18094);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18081, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18098 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18100 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18104 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18105 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18104);
    Array PThreadedCode18103 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18104, (Optr)&t_send1, (Optr)PSend18105, (Optr)&t_block_return);
    Block PBlock18102 = new_Block_with(empty_Array, empty_Array, PThreadedCode18103, 1, PSend18105);
    // ifFalse:. 
    Send PSend18101 = new_Send((Optr)PSend18100, SMB_ifFalse_, 1, (Optr)PBlock18102);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18106 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18099 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18100, (Optr)&t_send_ifFalse_, (Optr)PSend18101, (Optr)PBlock18102, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18106, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18097 = new_Block_with(PArray18098, empty_Array, PThreadedCode18099, 3, PSend18101, PSend18106, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18107 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18097);
    Array PThreadedCode18096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18097, (Optr)&t_send1, (Optr)PSend18107, (Optr)&t_method_return);
    Method PMethod18095 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18096, 1, PSend18107);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18095, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18111 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18110 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18111);
    Super PSuper18112 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18109 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18110, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18112, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18108 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18109, 3, PAssign18110, PSuper18112, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18108, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18116 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18118 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18121 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18120 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18121, (Optr)&t_block_return);
    Block PBlock18119 = new_Block_with(empty_Array, empty_Array, PThreadedCode18120, 1, PSend18121);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18122 = new_Send((Optr)PSend18118, SMB_or_, 1, (Optr)PBlock18119);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18126 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18125 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18126, (Optr)&t_block_return);
    Block PBlock18124 = new_Block_with(empty_Array, empty_Array, PThreadedCode18125, 1, PSend18126);
    // ifTrue:. 
    Send PSend18123 = new_Send((Optr)PSend18122, SMB_ifTrue_, 1, (Optr)PBlock18124);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18127 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18128 = new_Send((Optr)PSend18127, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18129 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18128);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18130 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18117 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18118, (Optr)&t_push_closure, (Optr)PBlock18119, (Optr)&t_send1, (Optr)PSend18122, (Optr)&t_send_ifTrue_, (Optr)PSend18123, (Optr)PBlock18124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18127, (Optr)&t_send0, (Optr)PSend18128, (Optr)&t_send1, (Optr)PSend18129, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18130, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18115 = new_Block_with(PArray18116, empty_Array, PThreadedCode18117, 4, PSend18123, PSend18129, PSend18130, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18131 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18115);
    Array PThreadedCode18114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18115, (Optr)&t_send1, (Optr)PSend18131, (Optr)&t_method_return);
    Method PMethod18113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18114, 1, PSend18131);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18113, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18135 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18137 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18141 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18140 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18141, (Optr)&t_block_return);
    Block PBlock18139 = new_Block_with(empty_Array, empty_Array, PThreadedCode18140, 1, PSend18141);
    // ifTrue:. 
    Send PSend18138 = new_Send((Optr)PSend18137, SMB_ifTrue_, 1, (Optr)PBlock18139);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18142 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18143 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18144 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18136 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18137, (Optr)&t_send_ifTrue_, (Optr)PSend18138, (Optr)PBlock18139, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18142, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18143, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18144, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18134 = new_Block_with(PArray18135, empty_Array, PThreadedCode18136, 5, PSend18138, PSend18142, PSend18143, PSend18144, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18145 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18134);
    Array PThreadedCode18133 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18134, (Optr)&t_send1, (Optr)PSend18145, (Optr)&t_method_return);
    Method PMethod18132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18133, 1, PSend18145);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18132, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18149 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18151 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18155 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18154 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18155, (Optr)&t_block_return);
    Block PBlock18153 = new_Block_with(empty_Array, empty_Array, PThreadedCode18154, 1, PSend18155);
    // ifTrue:. 
    Send PSend18152 = new_Send((Optr)PSend18151, SMB_ifTrue_, 1, (Optr)PBlock18153);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18156 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18157 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18158 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18150 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18151, (Optr)&t_send_ifTrue_, (Optr)PSend18152, (Optr)PBlock18153, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18156, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18157, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18158, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18148 = new_Block_with(PArray18149, empty_Array, PThreadedCode18150, 5, PSend18152, PSend18156, PSend18157, PSend18158, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18159 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18148);
    Array PThreadedCode18147 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18148, (Optr)&t_send1, (Optr)PSend18159, (Optr)&t_method_return);
    Method PMethod18146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18147, 1, PSend18159);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18146, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18161 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18164 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18166 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18170 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18171 = new_Send((Optr)PSend18170, SMB_contents, 0);
    // contents. 
    Send PSend18172 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18173 = new_Send((Optr)PSend18171, SMB__equals_, 1, (Optr)PSend18172);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18177 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18177, (Optr)&t_block_return);
    Block PBlock18175 = new_Block_with(empty_Array, empty_Array, PThreadedCode18176, 1, PSend18177);
    // ifTrue:. 
    Send PSend18174 = new_Send((Optr)PSend18173, SMB_ifTrue_, 1, (Optr)PBlock18175);
    Array PThreadedCode18169 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18170, (Optr)&t_send0, (Optr)PSend18171, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18172, (Optr)&t_send1, (Optr)PSend18173, (Optr)&t_send_ifTrue_, (Optr)PSend18174, (Optr)PBlock18175, (Optr)&t_block_return);
    Block PBlock18168 = new_Block_with(empty_Array, empty_Array, PThreadedCode18169, 1, PSend18174);
    // ifFalse:. 
    Send PSend18167 = new_Send((Optr)PSend18166, SMB_ifFalse_, 1, (Optr)PBlock18168);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18180 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18181 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18179 = new_Send((Optr)PSend18180, SMB_setLines_, 1, (Optr)PSend18181);
    Assign PAssign18178 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18179);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18182 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18184 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18183 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18184);
    Array PThreadedCode18165 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18166, (Optr)&t_send_ifFalse_, (Optr)PSend18167, (Optr)PBlock18168, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18178, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18180, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18181, (Optr)&t_send1, (Optr)PSend18179, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18182, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18183, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18184, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18163 = new_Block_with(PArray18164, empty_Array, PThreadedCode18165, 5, PSend18167, PAssign18178, PSend18182, PAssign18183, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18185 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18163);
    Array PThreadedCode18162 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18163, (Optr)&t_send1, (Optr)PSend18185, (Optr)&t_method_return);
    Method PMethod18160 = new_Method_with(empty_Array, PArray18161, empty_Array, PThreadedCode18162, 1, PSend18185);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18160, Shell_ReadLine_HistoryText_Class);
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