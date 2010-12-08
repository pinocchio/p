#include <lib/class/IO/Term/TermOutputDriver.h>


Optr slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance;
Optr slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance;
Optr layout_IO_Term_TermOutputDriver_Class_class;
Optr slot_IO_Term_TermOutputDriver_termcap;
Optr slot_IO_Term_TermOutputDriver_outStream;
Optr slot_IO_Term_TermOutputDriver_currentBackground;
Optr slot_IO_Term_TermOutputDriver_currentColor;
Optr slot_IO_Term_TermOutputDriver_light;
Optr slot_IO_Term_TermOutputDriver_blink;
Optr slot_IO_Term_TermOutputDriver_shouldEcho;
Optr layout_IO_Term_TermOutputDriver;


static void init_SMB_csiEscape() {
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8703 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8704 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8703);
    Character char_8705 = new_Character(L'[');
    Constant char_8705_Const = new_Constant((Optr)char_8705);
    // <<. 
    Send PSend8706 = new_Send((Optr)PSend8704, SMB__shiftLeft_, 1, (Optr)char_8705_Const);
    Array PThreadedCode8702 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8703, (Optr)&t_send1, (Optr)PSend8704, (Optr)&t_push1, (Optr)char_8705, (Optr)&t_send1, (Optr)PSend8706, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8702, 2, PSend8706, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8701, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8708 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8710 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8709 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8710, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8707 = new_Method_with(PArray8708, empty_Array, empty_Array, PThreadedCode8709, 2, PAssign8710, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8707, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8713 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8714 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8713);
    Array PThreadedCode8712 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8713, (Optr)&t_send1, (Optr)PSend8714, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8712, 2, PSend8714, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8711, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
    Assign PAssign8717 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8717, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8716, 2, PAssign8717, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8715, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
    String string_8720 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8720_Const = new_Constant((Optr)string_8720);
    // getstr:. 
    Send PSend8721 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8720_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8722 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8721);
    Array PThreadedCode8719 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8720, (Optr)&t_send1, (Optr)PSend8721, (Optr)&t_send1, (Optr)PSend8722, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8719, 2, PSend8722, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8718, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
    Array PArray8724 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8726 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8727 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8725 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8726, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8727, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8723 = new_Method_with(PArray8724, empty_Array, empty_Array, PThreadedCode8725, 3, PAssign8726, PSend8727, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8723, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
    String string_8730 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8730_Const = new_Constant((Optr)string_8730);
    // getstr:. 
    Send PSend8731 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8730_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8732 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8731);
    Array PThreadedCode8729 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8730, (Optr)&t_send1, (Optr)PSend8731, (Optr)&t_send1, (Optr)PSend8732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8728 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8729, 2, PSend8732, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8728, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
    String string_8735 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8735_Const = new_Constant((Optr)string_8735);
    // getstr:. 
    Send PSend8736 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8735_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8737 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8736);
    Array PThreadedCode8734 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8735, (Optr)&t_send1, (Optr)PSend8736, (Optr)&t_send1, (Optr)PSend8737, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8734, 2, PSend8737, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8733, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8740 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8742 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8741 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8742);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8744 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8743 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8744);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8745 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8739 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8740, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8741, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8743, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8744, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8745, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8739, 5, PSuper8740, PAssign8741, PAssign8743, PSend8745, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8738, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
    String string_8748 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8748_Const = new_Constant((Optr)string_8748);
    // getstr:. 
    Send PSend8749 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8748_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8750 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8749);
    Array PThreadedCode8747 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8748, (Optr)&t_send1, (Optr)PSend8749, (Optr)&t_send1, (Optr)PSend8750, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8747, 2, PSend8750, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8746, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
    String string_8753 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8753_Const = new_Constant((Optr)string_8753);
    // getstr:. 
    Send PSend8754 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8753_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8755 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8754);
    Array PThreadedCode8752 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8753, (Optr)&t_send1, (Optr)PSend8754, (Optr)&t_send1, (Optr)PSend8755, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8752, 2, PSend8755, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8751, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8758 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8759 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8759_Const = new_Constant((Optr)char_8759);
    // <<. 
    Send PSend8760 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8759_Const);
    Array PThreadedCode8757 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8759, (Optr)&t_send1, (Optr)PSend8760, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8757, 3, PSend8758, PSend8760, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8756, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    String string_8763 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8763_Const = new_Constant((Optr)string_8763);
    // getstr:. 
    Send PSend8764 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8763_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8765 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8764);
    Array PThreadedCode8762 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8763, (Optr)&t_send1, (Optr)PSend8764, (Optr)&t_send1, (Optr)PSend8765, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8761 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8762, 2, PSend8765, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8761, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
    Send PSend8768 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8767 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8767, 2, PSend8768, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8766, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8771 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8775 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8775_Const = new_Constant((Optr)string_8775);
    // <<. 
    Send PSend8776 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8775_Const);
    Array PThreadedCode8774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8775, (Optr)&t_send1, (Optr)PSend8776, (Optr)&t_block_return);
    Block PBlock8773 = new_Block_with(empty_Array, empty_Array, PThreadedCode8774, 1, PSend8776);
    // ifTrue:. 
    Send PSend8772 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8773);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8777 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8778 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8777);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend8779 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8783 = new_Character(L';');
    Constant char_8783_Const = new_Constant((Optr)char_8783);
    // <<. 
    Send PSend8784 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8783_Const);
    // asString. 
    Send PSend8785 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8786 = new_Send((Optr)PSend8784, SMB__shiftLeft_, 1, (Optr)PSend8785);
    Array PThreadedCode8782 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8783, (Optr)&t_send1, (Optr)PSend8784, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8785, (Optr)&t_send1, (Optr)PSend8786, (Optr)&t_block_return);
    Block PBlock8781 = new_Block_with(empty_Array, empty_Array, PThreadedCode8782, 1, PSend8786);
    // ifFalse:. 
    Send PSend8780 = new_Send((Optr)PSend8779, SMB_ifFalse_, 1, (Optr)PBlock8781);
    Character char_8787 = new_Character(L'm');
    Constant char_8787_Const = new_Constant((Optr)char_8787);
    // <<. 
    Send PSend8788 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8787_Const);
    Array PThreadedCode8770 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8772, (Optr)PBlock8773, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8777, (Optr)&t_send1, (Optr)PSend8778, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8779, (Optr)&t_send_ifFalse_, (Optr)PSend8780, (Optr)PBlock8781, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8787, (Optr)&t_send1, (Optr)PSend8788, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8770, 6, PSend8771, PSend8772, PSend8778, PSend8780, PSend8788, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8769, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8791 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8790 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8790, 2, PSend8791, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8789, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
    Send PSend8794 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8794, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8793, 2, PSend8794, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8792, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
    Send PSend8797 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8796 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8797, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8796, 2, PSend8797, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8795, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
    String string_8800 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8800_Const = new_Constant((Optr)string_8800);
    // getstr:. 
    Send PSend8801 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8800_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8802 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8801);
    Array PThreadedCode8799 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8800, (Optr)&t_send1, (Optr)PSend8801, (Optr)&t_send1, (Optr)PSend8802, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8798 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8799, 2, PSend8802, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8798, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
    String string_8805 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8805_Const = new_Constant((Optr)string_8805);
    // getstr:. 
    Send PSend8806 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8805_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8807 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8806);
    Array PThreadedCode8804 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8805, (Optr)&t_send1, (Optr)PSend8806, (Optr)&t_send1, (Optr)PSend8807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8804, 2, PSend8807, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8803, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8810 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8811 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8812 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8813 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8809 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8810, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8811, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8812, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8813, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8808 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8809, 5, PAssign8810, PAssign8811, PAssign8812, PAssign8813, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8808, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8815 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8818 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8820 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8821 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8822 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8823 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8819 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8820, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8821, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8823, (Optr)&t_method_return);
    Block PBlock8817 = new_Block_with(PArray8818, empty_Array, PThreadedCode8819, 4, PSend8820, PSend8821, PSend8822, PSend8823);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8824 = new_Send((Optr)PBlock8817, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8817, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8814 = new_Method_with(PArray8815, empty_Array, empty_Array, PThreadedCode8816, 2, PSend8824, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8814, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8827 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8828 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8828_Const = new_Constant((Optr)char_8828);
    // <<. 
    Send PSend8829 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8828_Const);
    Array PThreadedCode8826 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8827, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8828, (Optr)&t_send1, (Optr)PSend8829, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8826, 3, PSend8827, PSend8829, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8825, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
    String string_8832 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8832_Const = new_Constant((Optr)string_8832);
    // getnum:. 
    Send PSend8833 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8832_Const);
    Array PThreadedCode8831 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8832, (Optr)&t_send1, (Optr)PSend8833, (Optr)&t_method_return);
    Method PMethod8830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8831, 1, PSend8833);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8830, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8835 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8838 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8840 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8841 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8842 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8843 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8839 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8841, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8843, (Optr)&t_method_return);
    Block PBlock8837 = new_Block_with(PArray8838, empty_Array, PThreadedCode8839, 4, PSend8840, PSend8841, PSend8842, PSend8843);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8844 = new_Send((Optr)PBlock8837, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8837, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8834 = new_Method_with(PArray8835, empty_Array, empty_Array, PThreadedCode8836, 2, PSend8844, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8834, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
    Send PSend8847 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8846 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8847, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8846, 2, PSend8847, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8845, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    String string_8850 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8850_Const = new_Constant((Optr)string_8850);
    // getstr:. 
    Send PSend8851 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8850_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8852 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8851);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8853 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8849 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8850, (Optr)&t_send1, (Optr)PSend8851, (Optr)&t_send1, (Optr)PSend8852, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8849, 3, PSend8852, PSend8853, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8848, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
    String string_8856 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8856_Const = new_Constant((Optr)string_8856);
    // getstr:. 
    Send PSend8857 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8856_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8858 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8857);
    Array PThreadedCode8855 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8856, (Optr)&t_send1, (Optr)PSend8857, (Optr)&t_send1, (Optr)PSend8858, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8855, 2, PSend8858, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8854, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    String string_8861 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8861_Const = new_Constant((Optr)string_8861);
    // getstr:. 
    Send PSend8862 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8861_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8863 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8862);
    Array PThreadedCode8860 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8861, (Optr)&t_send1, (Optr)PSend8862, (Optr)&t_send1, (Optr)PSend8863, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8860, 2, PSend8863, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8859, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8865 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8868 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8870 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8871 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8872 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8873 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8869 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8870, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8871, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8872, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8873, (Optr)&t_method_return);
    Block PBlock8867 = new_Block_with(PArray8868, empty_Array, PThreadedCode8869, 4, PSend8870, PSend8871, PSend8872, PSend8873);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8874 = new_Send((Optr)PBlock8867, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8866 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8867, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8874, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8864 = new_Method_with(PArray8865, empty_Array, empty_Array, PThreadedCode8866, 2, PSend8874, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8864, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
    String string_8877 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8877_Const = new_Constant((Optr)string_8877);
    // getstr:. 
    Send PSend8878 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8877_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8879 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8878);
    Array PThreadedCode8876 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8877, (Optr)&t_send1, (Optr)PSend8878, (Optr)&t_send1, (Optr)PSend8879, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8876, 2, PSend8879, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8875, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
    Send PSend8882 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8882, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8881, 2, PSend8882, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8880, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    String string_8885 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8885_Const = new_Constant((Optr)string_8885);
    // getstr:. 
    Send PSend8886 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8885_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8887 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8886);
    Array PThreadedCode8884 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8885, (Optr)&t_send1, (Optr)PSend8886, (Optr)&t_send1, (Optr)PSend8887, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8884, 2, PSend8887, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8883, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    String string_8890 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8890_Const = new_Constant((Optr)string_8890);
    // getstr:. 
    Send PSend8891 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8890_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8892 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8891);
    Array PThreadedCode8889 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8890, (Optr)&t_send1, (Optr)PSend8891, (Optr)&t_send1, (Optr)PSend8892, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8889, 2, PSend8892, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8888, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    String string_8895 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8895_Const = new_Constant((Optr)string_8895);
    // getnum:. 
    Send PSend8896 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8895_Const);
    Array PThreadedCode8894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8895, (Optr)&t_send1, (Optr)PSend8896, (Optr)&t_method_return);
    Method PMethod8893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8894, 1, PSend8896);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8893, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8899 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8899, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8898, 2, PSend8899, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8897, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
    String string_8902 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8902_Const = new_Constant((Optr)string_8902);
    // getstr:. 
    Send PSend8903 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8902_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8904 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8903);
    Array PThreadedCode8901 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8902, (Optr)&t_send1, (Optr)PSend8903, (Optr)&t_send1, (Optr)PSend8904, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8901, 2, PSend8904, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8900, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8906 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8908 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8909 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8910 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8907 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8908, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8909, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8905 = new_Method_with(PArray8906, empty_Array, empty_Array, PThreadedCode8907, 4, PSend8908, PSend8909, PSend8910, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8905, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
    Array PThreadedCode8912 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8912, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8911, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    String string_8915 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8915_Const = new_Constant((Optr)string_8915);
    // getstr:. 
    Send PSend8916 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8915_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8917 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8916);
    Array PThreadedCode8914 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8915, (Optr)&t_send1, (Optr)PSend8916, (Optr)&t_send1, (Optr)PSend8917, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8914, 2, PSend8917, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8913, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    String string_8920 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8920_Const = new_Constant((Optr)string_8920);
    // getstr:. 
    Send PSend8921 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8920_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8922 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8921);
    Array PThreadedCode8919 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8920, (Optr)&t_send1, (Optr)PSend8921, (Optr)&t_send1, (Optr)PSend8922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8919, 2, PSend8922, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8918, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
    String string_8925 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8925_Const = new_Constant((Optr)string_8925);
    // getstr:. 
    Send PSend8926 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8925_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8927 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8926);
    Array PThreadedCode8924 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8925, (Optr)&t_send1, (Optr)PSend8926, (Optr)&t_send1, (Optr)PSend8927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8924, 2, PSend8927, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8923, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8929 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8932 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8934 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8935 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8936 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8937 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8933 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8935, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8937, (Optr)&t_method_return);
    Block PBlock8931 = new_Block_with(PArray8932, empty_Array, PThreadedCode8933, 4, PSend8934, PSend8935, PSend8936, PSend8937);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8938 = new_Send((Optr)PBlock8931, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8930 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8931, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8938, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8928 = new_Method_with(PArray8929, empty_Array, empty_Array, PThreadedCode8930, 2, PSend8938, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8928, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8940 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8943 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8945 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8946 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8947 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8948 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8944 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8945, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8946, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8947, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8948, (Optr)&t_method_return);
    Block PBlock8942 = new_Block_with(PArray8943, empty_Array, PThreadedCode8944, 4, PSend8945, PSend8946, PSend8947, PSend8948);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8949 = new_Send((Optr)PBlock8942, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8942, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8949, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8939 = new_Method_with(PArray8940, empty_Array, empty_Array, PThreadedCode8941, 2, PSend8949, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8939, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
    String string_8952 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8952_Const = new_Constant((Optr)string_8952);
    // getstr:. 
    Send PSend8953 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8952_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8954 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8953);
    Array PThreadedCode8951 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8952, (Optr)&t_send1, (Optr)PSend8953, (Optr)&t_send1, (Optr)PSend8954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8950 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8951, 2, PSend8954, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8950, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray8956 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8958 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8957 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8958, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8955 = new_Method_with(PArray8956, empty_Array, empty_Array, PThreadedCode8957, 2, PSend8958, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8955, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
    Send PSend8961 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8960 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8961, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8960, 2, PSend8961, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8959, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    String string_8964 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8964_Const = new_Constant((Optr)string_8964);
    // getstr:. 
    Send PSend8965 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8964_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8966 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8965);
    Array PThreadedCode8963 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8964, (Optr)&t_send1, (Optr)PSend8965, (Optr)&t_send1, (Optr)PSend8966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8963, 2, PSend8966, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8962, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    String string_8969 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8969_Const = new_Constant((Optr)string_8969);
    // getstr:. 
    Send PSend8970 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8969_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8971 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8970);
    Array PThreadedCode8968 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8969, (Optr)&t_send1, (Optr)PSend8970, (Optr)&t_send1, (Optr)PSend8971, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8968, 2, PSend8971, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8967, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend8974 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8973 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8974, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8973, 2, PSend8974, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8972, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
    String string_8977 = new_String(L"1");
    String string_8978 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8978_Const = new_Constant((Optr)string_8978);
    // getstr:. 
    Send PSend8979 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8978_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8977_Const = new_Constant((Optr)string_8977);
    // parm:in:. 
    Send PSend8980 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8977_Const, (Optr)PSend8979);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8981 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8980);
    Array PThreadedCode8976 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8977, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8978, (Optr)&t_send1, (Optr)PSend8979, (Optr)&t_send2, (Optr)PSend8980, (Optr)&t_send1, (Optr)PSend8981, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8976, 2, PSend8981, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8975, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
    Send PSend8984 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8984, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8983, 2, PSend8984, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8982, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8987 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8988 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8986 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8987, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8988, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8986, 3, PSend8987, PSend8988, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8985, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8991 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8990 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8989 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8990, 2, PSend8991, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8989, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
    Array PThreadedCode8993 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8993, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8992, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8995 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8998 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend9000 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9001 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9002 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9003 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8999 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9003, (Optr)&t_method_return);
    Block PBlock8997 = new_Block_with(PArray8998, empty_Array, PThreadedCode8999, 4, PSend9000, PSend9001, PSend9002, PSend9003);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9004 = new_Send((Optr)PBlock8997, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8997, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9004, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8994 = new_Method_with(PArray8995, empty_Array, empty_Array, PThreadedCode8996, 2, PSend9004, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8994, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
    String string_9007 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_9007_Const = new_Constant((Optr)string_9007);
    // getstr:. 
    Send PSend9008 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_9007_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9009 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9008);
    Array PThreadedCode9006 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_9007, (Optr)&t_send1, (Optr)PSend9008, (Optr)&t_send1, (Optr)PSend9009, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9006, 2, PSend9009, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod9005, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    String string_9012 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_9012_Const = new_Constant((Optr)string_9012);
    // getstr:. 
    Send PSend9013 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_9012_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9014 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9013);
    Array PThreadedCode9011 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_9012, (Optr)&t_send1, (Optr)PSend9013, (Optr)&t_send1, (Optr)PSend9014, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9011, 2, PSend9014, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod9010, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    String string_9017 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_9017_Const = new_Constant((Optr)string_9017);
    // getstr:. 
    Send PSend9018 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_9017_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9019 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9018);
    Array PThreadedCode9016 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_9017, (Optr)&t_send1, (Optr)PSend9018, (Optr)&t_send1, (Optr)PSend9019, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9016, 2, PSend9019, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod9015, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9021 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9024 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend9026 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9027 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9028 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9029 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode9025 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9028, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9029, (Optr)&t_method_return);
    Block PBlock9023 = new_Block_with(PArray9024, empty_Array, PThreadedCode9025, 4, PSend9026, PSend9027, PSend9028, PSend9029);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9030 = new_Send((Optr)PBlock9023, SMB_value_, 1, (Optr)self);
    Array PThreadedCode9022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock9023, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9030, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9020 = new_Method_with(PArray9021, empty_Array, empty_Array, PThreadedCode9022, 2, PSend9030, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod9020, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
    String string_9033 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_9033_Const = new_Constant((Optr)string_9033);
    // getstr:. 
    Send PSend9034 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_9033_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9035 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9034);
    Array PThreadedCode9032 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_9033, (Optr)&t_send1, (Optr)PSend9034, (Optr)&t_send1, (Optr)PSend9035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9032, 2, PSend9035, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod9031, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend9038 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode9037 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend9038, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9037, 2, PSend9038, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9036, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray9040 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9043 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend9045 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9048 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9049, (Optr)&t_block_return);
    Block PBlock9047 = new_Block_with(empty_Array, empty_Array, PThreadedCode9048, 1, PSend9049);
    // ifTrue:. 
    Send PSend9046 = new_Send((Optr)PSend9045, SMB_ifTrue_, 1, (Optr)PBlock9047);
    Assign PAssign9050 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
    Send PSend9051 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode9044 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend9045, (Optr)&t_send_ifTrue_, (Optr)PSend9046, (Optr)PBlock9047, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9050, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend9051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9042 = new_Block_with(PArray9043, empty_Array, PThreadedCode9044, 4, PSend9046, PAssign9050, PSend9051, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9052 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9042);
    Array PThreadedCode9041 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9042, (Optr)&t_send1, (Optr)PSend9052, (Optr)&t_method_return);
    Method PMethod9039 = new_Method_with(PArray9040, empty_Array, empty_Array, PThreadedCode9041, 1, PSend9052);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod9039, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9055 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode9054 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend9055, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9054, 2, PSend9055, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod9053, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
    Send PSend9058 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode9057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend9058, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9057, 2, PSend9058, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod9056, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9060 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9063 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9065 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9066 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9067 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9068 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode9064 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9067, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9068, (Optr)&t_method_return);
    Block PBlock9062 = new_Block_with(PArray9063, empty_Array, PThreadedCode9064, 4, PSend9065, PSend9066, PSend9067, PSend9068);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9069 = new_Send((Optr)PBlock9062, SMB_value_, 1, (Optr)self);
    Array PThreadedCode9061 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock9062, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9069, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9059 = new_Method_with(PArray9060, empty_Array, empty_Array, PThreadedCode9061, 2, PSend9069, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod9059, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9072 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend9073 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode9071 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9072, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9073, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9071, 3, PSend9072, PSend9073, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod9070, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend9076 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9077 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9076);
    Character char_9078 = new_Character(L'O');
    Constant char_9078_Const = new_Constant((Optr)char_9078);
    // <<. 
    Send PSend9079 = new_Send((Optr)PSend9077, SMB__shiftLeft_, 1, (Optr)char_9078_Const);
    Array PThreadedCode9075 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9076, (Optr)&t_send1, (Optr)PSend9077, (Optr)&t_push1, (Optr)char_9078, (Optr)&t_send1, (Optr)PSend9079, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9075, 2, PSend9079, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod9074, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9082 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9083 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9082);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend9084 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode9081 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9082, (Optr)&t_send1, (Optr)PSend9083, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9084, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9081, 3, PSend9083, PSend9084, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod9080, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9090 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9089 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend9090);
    // stderr. 
    Send PSend9091 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9092 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend9091);
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9089, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9091, (Optr)&t_send1, (Optr)PSend9092, (Optr)&t_block_return);
    Block PBlock9087 = new_Block_with(empty_Array, empty_Array, PThreadedCode9088, 2, PAssign9089, PSend9092);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9093 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9087);
    Array PThreadedCode9086 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9087, (Optr)&t_send1, (Optr)PSend9093, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod9085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9086, 2, PSend9093, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod9085, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9099 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9098 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend9099);
    // stdout. 
    Send PSend9100 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9101 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend9100);
    Array PThreadedCode9097 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9098, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9100, (Optr)&t_send1, (Optr)PSend9101, (Optr)&t_block_return);
    Block PBlock9096 = new_Block_with(empty_Array, empty_Array, PThreadedCode9097, 2, PAssign9098, PSend9101);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9102 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9096);
    Array PThreadedCode9095 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9096, (Optr)&t_send1, (Optr)PSend9102, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod9094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9095, 2, PSend9102, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod9094, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stdout, MC_SMB_stdout);
}

void init_IO_Term_PVTermOutputDriver_layout() {
    slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance = (Optr)new_Slot(5, L"stdoutTerminalInstance");
    slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance = (Optr)new_Slot(6, L"stderrTerminalInstance");
    layout_IO_Term_TermOutputDriver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[5] = slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance; // stdoutTerminalInstance 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[6] = slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance; // stderrTerminalInstance 
    
    Symbol  SMB_TermOutputDriver = new_Symbol(L"TermOutputDriver");
    slot_IO_Term_TermOutputDriver_termcap = (Optr)new_Slot(0, L"termcap");
    slot_IO_Term_TermOutputDriver_outStream = (Optr)new_Slot(1, L"outStream");
    slot_IO_Term_TermOutputDriver_currentBackground = (Optr)new_Slot(2, L"currentBackground");
    slot_IO_Term_TermOutputDriver_currentColor = (Optr)new_Slot(3, L"currentColor");
    slot_IO_Term_TermOutputDriver_light = (Optr)new_Slot(4, L"light");
    slot_IO_Term_TermOutputDriver_blink = (Optr)new_Slot(5, L"blink");
    slot_IO_Term_TermOutputDriver_shouldEcho = (Optr)new_Slot(6, L"shouldEcho");
    layout_IO_Term_TermOutputDriver = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver)->values[0] = slot_IO_Term_TermOutputDriver_termcap; // termcap 
    ((Array)layout_IO_Term_TermOutputDriver)->values[1] = slot_IO_Term_TermOutputDriver_outStream; // outStream 
    ((Array)layout_IO_Term_TermOutputDriver)->values[2] = slot_IO_Term_TermOutputDriver_currentBackground; // currentBackground 
    ((Array)layout_IO_Term_TermOutputDriver)->values[3] = slot_IO_Term_TermOutputDriver_currentColor; // currentColor 
    ((Array)layout_IO_Term_TermOutputDriver)->values[4] = slot_IO_Term_TermOutputDriver_light; // light 
    ((Array)layout_IO_Term_TermOutputDriver)->values[5] = slot_IO_Term_TermOutputDriver_blink; // blink 
    ((Array)layout_IO_Term_TermOutputDriver)->values[6] = slot_IO_Term_TermOutputDriver_shouldEcho; // shouldEcho 
    IO_Term_TermOutputDriver_Class = (Class)new_Class(Object_Class, layout_IO_Term_TermOutputDriver_Class_class);
    IO_Term_TermOutputDriver_Class->layout = layout_IO_Term_TermOutputDriver;
    IO_Term_TermOutputDriver_Class->name = SMB_TermOutputDriver;
    
}

void init_IO_Term_PVTermOutputDriver_methods() {
    init_SMB_csiEscape();
    init_SMB_outStream_();
    init_SMB_escape();
    init_SMB_light();
    init_SMB_normal();
    init_SMB_color_();
    init_SMB_underlineOff();
    init_SMB_bold();
    init_SMB_initialize();
    init_SMB_insertCharacter();
    init_SMB_cursorInvisible();
    init_SMB_here();
    init_SMB_home();
    init_SMB_yellow();
    init_SMB_colorEscape();
    init_SMB_noEcho();
    init_SMB_black();
    init_SMB_green();
    init_SMB_underline();
    init_SMB_invisible();
    init_SMB_reset();
    init_SMB_yellow_();
    init_SMB_down();
    init_SMB_columns();
    init_SMB_cyan_();
    init_SMB_red();
    init_SMB_insertLine();
    init_SMB_blinking();
    init_SMB_clearToEnd();
    init_SMB_pink_();
    init_SMB_deleteLine();
    init_SMB_white();
    init_SMB_left();
    init_SMB_deleteCharacter();
    init_SMB_lines();
    init_SMB_echo();
    init_SMB_cursorNormal();
    init_SMB__shiftLeft_();
    init_SMB_outStream();
    init_SMB_right();
    init_SMB_insertMode();
    init_SMB_scrollBackward();
    init_SMB_black_();
    init_SMB_green_();
    init_SMB_scrollForward();
    init_SMB_overwrite_();
    init_SMB_pink();
    init_SMB_reverse();
    init_SMB_cr();
    init_SMB_tab();
    init_SMB_erase();
    init_SMB_blue();
    init_SMB_clear();
    init_SMB_lf();
    init_SMB_width();
    init_SMB_white_();
    init_SMB_cursorEnhanced();
    init_SMB_endInsertMode();
    init_SMB_up();
    init_SMB_blue_();
    init_SMB_clearFromBeginning();
    init_SMB_space();
    init_SMB_echo_();
    init_SMB_flush();
    init_SMB_cyan();
    init_SMB_red_();
    init_SMB_errorColor();
    init_SMB_ss3Escape();
    init_SMB_backspace();
    init_class_SMB_stderr();
    init_class_SMB_stdout();
    
}