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
    Send PSend8644 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8645 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8644);
    Character char_8646 = new_Character(L'[');
    Constant char_8646_Const = new_Constant((Optr)char_8646);
    // <<. 
    Send PSend8647 = new_Send((Optr)PSend8645, SMB__shiftLeft_, 1, (Optr)char_8646_Const);
    Array PThreadedCode8643 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8644, (Optr)&t_send1, (Optr)PSend8645, (Optr)&t_push1, (Optr)char_8646, (Optr)&t_send1, (Optr)PSend8647, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8643, 2, PSend8647, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8642, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8649 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8651 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8651, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8648 = new_Method_with(PArray8649, empty_Array, empty_Array, PThreadedCode8650, 2, PAssign8651, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8648, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8654 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8655 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8654);
    Array PThreadedCode8653 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8654, (Optr)&t_send1, (Optr)PSend8655, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8653, 2, PSend8655, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8652, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
    Assign PAssign8658 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8657 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8658, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8656 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8657, 2, PAssign8658, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8656, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
    String string_8661 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8661_Const = new_Constant((Optr)string_8661);
    // getstr:. 
    Send PSend8662 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8661_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8663 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8662);
    Array PThreadedCode8660 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8661, (Optr)&t_send1, (Optr)PSend8662, (Optr)&t_send1, (Optr)PSend8663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8660, 2, PSend8663, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8659, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
    Array PArray8665 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8667 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8668 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8666 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8667, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8668, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8664 = new_Method_with(PArray8665, empty_Array, empty_Array, PThreadedCode8666, 3, PAssign8667, PSend8668, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8664, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
    String string_8671 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8671_Const = new_Constant((Optr)string_8671);
    // getstr:. 
    Send PSend8672 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8671_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8673 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8672);
    Array PThreadedCode8670 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8671, (Optr)&t_send1, (Optr)PSend8672, (Optr)&t_send1, (Optr)PSend8673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8670, 2, PSend8673, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8669, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
    String string_8676 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8676_Const = new_Constant((Optr)string_8676);
    // getstr:. 
    Send PSend8677 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8676_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8678 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8677);
    Array PThreadedCode8675 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8676, (Optr)&t_send1, (Optr)PSend8677, (Optr)&t_send1, (Optr)PSend8678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8675, 2, PSend8678, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8674, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8681 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8683 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8682 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8683);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8685 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8684 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8685);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8686 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8680 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8681, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8682, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8684, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8685, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8686, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8680, 5, PSuper8681, PAssign8682, PAssign8684, PSend8686, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8679, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
    String string_8689 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8689_Const = new_Constant((Optr)string_8689);
    // getstr:. 
    Send PSend8690 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8689_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8691 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8690);
    Array PThreadedCode8688 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8689, (Optr)&t_send1, (Optr)PSend8690, (Optr)&t_send1, (Optr)PSend8691, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8687 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8688, 2, PSend8691, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8687, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
    String string_8694 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8694_Const = new_Constant((Optr)string_8694);
    // getstr:. 
    Send PSend8695 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8694_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8696 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8695);
    Array PThreadedCode8693 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8694, (Optr)&t_send1, (Optr)PSend8695, (Optr)&t_send1, (Optr)PSend8696, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8692 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8693, 2, PSend8696, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8692, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8699 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8700 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8700_Const = new_Constant((Optr)char_8700);
    // <<. 
    Send PSend8701 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8700_Const);
    Array PThreadedCode8698 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8699, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8700, (Optr)&t_send1, (Optr)PSend8701, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8698, 3, PSend8699, PSend8701, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8697, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    String string_8704 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8704_Const = new_Constant((Optr)string_8704);
    // getstr:. 
    Send PSend8705 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8704_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8706 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8705);
    Array PThreadedCode8703 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8704, (Optr)&t_send1, (Optr)PSend8705, (Optr)&t_send1, (Optr)PSend8706, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8703, 2, PSend8706, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8702, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
    Send PSend8709 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8709, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8708, 2, PSend8709, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8707, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8712 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8716 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8716_Const = new_Constant((Optr)string_8716);
    // <<. 
    Send PSend8717 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8716_Const);
    Array PThreadedCode8715 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8716, (Optr)&t_send1, (Optr)PSend8717, (Optr)&t_block_return);
    Block PBlock8714 = new_Block_with(empty_Array, empty_Array, PThreadedCode8715, 1, PSend8717);
    // ifTrue:. 
    Send PSend8713 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8714);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8718 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8719 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8718);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend8720 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8724 = new_Character(L';');
    Constant char_8724_Const = new_Constant((Optr)char_8724);
    // <<. 
    Send PSend8725 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8724_Const);
    // asString. 
    Send PSend8726 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8727 = new_Send((Optr)PSend8725, SMB__shiftLeft_, 1, (Optr)PSend8726);
    Array PThreadedCode8723 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8724, (Optr)&t_send1, (Optr)PSend8725, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8726, (Optr)&t_send1, (Optr)PSend8727, (Optr)&t_block_return);
    Block PBlock8722 = new_Block_with(empty_Array, empty_Array, PThreadedCode8723, 1, PSend8727);
    // ifFalse:. 
    Send PSend8721 = new_Send((Optr)PSend8720, SMB_ifFalse_, 1, (Optr)PBlock8722);
    Character char_8728 = new_Character(L'm');
    Constant char_8728_Const = new_Constant((Optr)char_8728);
    // <<. 
    Send PSend8729 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8728_Const);
    Array PThreadedCode8711 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8712, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8713, (Optr)PBlock8714, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8718, (Optr)&t_send1, (Optr)PSend8719, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8720, (Optr)&t_send_ifFalse_, (Optr)PSend8721, (Optr)PBlock8722, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8728, (Optr)&t_send1, (Optr)PSend8729, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8711, 6, PSend8712, PSend8713, PSend8719, PSend8721, PSend8729, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8710, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8732 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8731 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8731, 2, PSend8732, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8730, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
    Send PSend8735 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8734 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8735, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8734, 2, PSend8735, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8733, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
    Send PSend8738 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8737, 2, PSend8738, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8736, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
    String string_8741 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8741_Const = new_Constant((Optr)string_8741);
    // getstr:. 
    Send PSend8742 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8741_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8743 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8742);
    Array PThreadedCode8740 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8741, (Optr)&t_send1, (Optr)PSend8742, (Optr)&t_send1, (Optr)PSend8743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8740, 2, PSend8743, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8739, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
    String string_8746 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8746_Const = new_Constant((Optr)string_8746);
    // getstr:. 
    Send PSend8747 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8746_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8748 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8747);
    Array PThreadedCode8745 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8746, (Optr)&t_send1, (Optr)PSend8747, (Optr)&t_send1, (Optr)PSend8748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8745, 2, PSend8748, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8744, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8751 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8752 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8753 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8754 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8750 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8751, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8752, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8753, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8754, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8749 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8750, 5, PAssign8751, PAssign8752, PAssign8753, PAssign8754, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8749, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8756 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8759 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8761 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8762 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8763 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8764 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8760 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8764, (Optr)&t_method_return);
    Block PBlock8758 = new_Block_with(PArray8759, empty_Array, PThreadedCode8760, 4, PSend8761, PSend8762, PSend8763, PSend8764);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8765 = new_Send((Optr)PBlock8758, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8758, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8765, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8755 = new_Method_with(PArray8756, empty_Array, empty_Array, PThreadedCode8757, 2, PSend8765, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8755, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8768 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8769 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8769_Const = new_Constant((Optr)char_8769);
    // <<. 
    Send PSend8770 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8769_Const);
    Array PThreadedCode8767 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8768, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8769, (Optr)&t_send1, (Optr)PSend8770, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8767, 3, PSend8768, PSend8770, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8766, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
    String string_8773 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8773_Const = new_Constant((Optr)string_8773);
    // getnum:. 
    Send PSend8774 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8773_Const);
    Array PThreadedCode8772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8773, (Optr)&t_send1, (Optr)PSend8774, (Optr)&t_method_return);
    Method PMethod8771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8772, 1, PSend8774);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8771, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8776 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8779 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8781 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8782 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8783 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8784 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8780 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8782, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8783, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8784, (Optr)&t_method_return);
    Block PBlock8778 = new_Block_with(PArray8779, empty_Array, PThreadedCode8780, 4, PSend8781, PSend8782, PSend8783, PSend8784);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8785 = new_Send((Optr)PBlock8778, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8777 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8778, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8775 = new_Method_with(PArray8776, empty_Array, empty_Array, PThreadedCode8777, 2, PSend8785, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8775, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
    Send PSend8788 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8788, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8787, 2, PSend8788, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8786, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    String string_8791 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8791_Const = new_Constant((Optr)string_8791);
    // getstr:. 
    Send PSend8792 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8791_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8793 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8792);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8794 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8790 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8791, (Optr)&t_send1, (Optr)PSend8792, (Optr)&t_send1, (Optr)PSend8793, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8794, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8790, 3, PSend8793, PSend8794, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8789, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
    String string_8797 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8797_Const = new_Constant((Optr)string_8797);
    // getstr:. 
    Send PSend8798 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8797_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8799 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8798);
    Array PThreadedCode8796 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8797, (Optr)&t_send1, (Optr)PSend8798, (Optr)&t_send1, (Optr)PSend8799, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8796, 2, PSend8799, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8795, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    String string_8802 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8802_Const = new_Constant((Optr)string_8802);
    // getstr:. 
    Send PSend8803 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8802_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8804 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8803);
    Array PThreadedCode8801 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8802, (Optr)&t_send1, (Optr)PSend8803, (Optr)&t_send1, (Optr)PSend8804, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8801, 2, PSend8804, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8800, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8806 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8809 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8811 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8812 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8813 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8814 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8810 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8811, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8814, (Optr)&t_method_return);
    Block PBlock8808 = new_Block_with(PArray8809, empty_Array, PThreadedCode8810, 4, PSend8811, PSend8812, PSend8813, PSend8814);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8815 = new_Send((Optr)PBlock8808, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8807 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8808, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8815, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8805 = new_Method_with(PArray8806, empty_Array, empty_Array, PThreadedCode8807, 2, PSend8815, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8805, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
    String string_8818 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8818_Const = new_Constant((Optr)string_8818);
    // getstr:. 
    Send PSend8819 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8818_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8820 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8819);
    Array PThreadedCode8817 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8818, (Optr)&t_send1, (Optr)PSend8819, (Optr)&t_send1, (Optr)PSend8820, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8817, 2, PSend8820, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8816, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
    Send PSend8823 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8822 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8823, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8822, 2, PSend8823, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8821, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    String string_8826 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8826_Const = new_Constant((Optr)string_8826);
    // getstr:. 
    Send PSend8827 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8826_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8828 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8827);
    Array PThreadedCode8825 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8826, (Optr)&t_send1, (Optr)PSend8827, (Optr)&t_send1, (Optr)PSend8828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8824 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8825, 2, PSend8828, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8824, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    String string_8831 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8831_Const = new_Constant((Optr)string_8831);
    // getstr:. 
    Send PSend8832 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8831_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8833 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8832);
    Array PThreadedCode8830 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8831, (Optr)&t_send1, (Optr)PSend8832, (Optr)&t_send1, (Optr)PSend8833, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8830, 2, PSend8833, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8829, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    String string_8836 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8836_Const = new_Constant((Optr)string_8836);
    // getnum:. 
    Send PSend8837 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8836_Const);
    Array PThreadedCode8835 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8836, (Optr)&t_send1, (Optr)PSend8837, (Optr)&t_method_return);
    Method PMethod8834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8835, 1, PSend8837);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8834, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8840 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8840, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8839, 2, PSend8840, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8838, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
    String string_8843 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8843_Const = new_Constant((Optr)string_8843);
    // getstr:. 
    Send PSend8844 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8843_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8845 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8844);
    Array PThreadedCode8842 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8843, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_send1, (Optr)PSend8845, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8842, 2, PSend8845, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8841, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8847 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8849 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8850 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8851 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8848 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8849, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8850, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8851, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8846 = new_Method_with(PArray8847, empty_Array, empty_Array, PThreadedCode8848, 4, PSend8849, PSend8850, PSend8851, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8846, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
    Array PThreadedCode8853 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8853, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8852, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    String string_8856 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8856_Const = new_Constant((Optr)string_8856);
    // getstr:. 
    Send PSend8857 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8856_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8858 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8857);
    Array PThreadedCode8855 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8856, (Optr)&t_send1, (Optr)PSend8857, (Optr)&t_send1, (Optr)PSend8858, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8855, 2, PSend8858, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8854, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    String string_8861 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8861_Const = new_Constant((Optr)string_8861);
    // getstr:. 
    Send PSend8862 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8861_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8863 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8862);
    Array PThreadedCode8860 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8861, (Optr)&t_send1, (Optr)PSend8862, (Optr)&t_send1, (Optr)PSend8863, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8860, 2, PSend8863, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8859, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
    String string_8866 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8866_Const = new_Constant((Optr)string_8866);
    // getstr:. 
    Send PSend8867 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8866_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8868 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8867);
    Array PThreadedCode8865 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8866, (Optr)&t_send1, (Optr)PSend8867, (Optr)&t_send1, (Optr)PSend8868, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8865, 2, PSend8868, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8864, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8870 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8873 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8875 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8876 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8877 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8878 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8874 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8875, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8876, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8877, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8878, (Optr)&t_method_return);
    Block PBlock8872 = new_Block_with(PArray8873, empty_Array, PThreadedCode8874, 4, PSend8875, PSend8876, PSend8877, PSend8878);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8879 = new_Send((Optr)PBlock8872, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8871 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8872, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8879, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8869 = new_Method_with(PArray8870, empty_Array, empty_Array, PThreadedCode8871, 2, PSend8879, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8869, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8881 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8884 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8886 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8887 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8888 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8889 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8885 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8886, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8887, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8888, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8889, (Optr)&t_method_return);
    Block PBlock8883 = new_Block_with(PArray8884, empty_Array, PThreadedCode8885, 4, PSend8886, PSend8887, PSend8888, PSend8889);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8890 = new_Send((Optr)PBlock8883, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8882 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8883, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8890, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8880 = new_Method_with(PArray8881, empty_Array, empty_Array, PThreadedCode8882, 2, PSend8890, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8880, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
    String string_8893 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8893_Const = new_Constant((Optr)string_8893);
    // getstr:. 
    Send PSend8894 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8893_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8895 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8894);
    Array PThreadedCode8892 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8893, (Optr)&t_send1, (Optr)PSend8894, (Optr)&t_send1, (Optr)PSend8895, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8892, 2, PSend8895, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8891, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray8897 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8899 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8899, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8896 = new_Method_with(PArray8897, empty_Array, empty_Array, PThreadedCode8898, 2, PSend8899, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8896, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
    Send PSend8902 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8901 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8902, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8901, 2, PSend8902, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8900, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    String string_8905 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8905_Const = new_Constant((Optr)string_8905);
    // getstr:. 
    Send PSend8906 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8905_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8907 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8906);
    Array PThreadedCode8904 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8905, (Optr)&t_send1, (Optr)PSend8906, (Optr)&t_send1, (Optr)PSend8907, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8904, 2, PSend8907, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8903, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    String string_8910 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8910_Const = new_Constant((Optr)string_8910);
    // getstr:. 
    Send PSend8911 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8910_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8912 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8911);
    Array PThreadedCode8909 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8910, (Optr)&t_send1, (Optr)PSend8911, (Optr)&t_send1, (Optr)PSend8912, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8908 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8909, 2, PSend8912, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8908, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend8915 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8914 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8915, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8914, 2, PSend8915, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8913, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
    String string_8918 = new_String(L"1");
    String string_8919 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8919_Const = new_Constant((Optr)string_8919);
    // getstr:. 
    Send PSend8920 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8919_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8918_Const = new_Constant((Optr)string_8918);
    // parm:in:. 
    Send PSend8921 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8918_Const, (Optr)PSend8920);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8922 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8921);
    Array PThreadedCode8917 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8918, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8919, (Optr)&t_send1, (Optr)PSend8920, (Optr)&t_send2, (Optr)PSend8921, (Optr)&t_send1, (Optr)PSend8922, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8916 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8917, 2, PSend8922, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8916, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
    Send PSend8925 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8924, 2, PSend8925, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8923, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8928 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8929 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8927 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8928, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8929, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8927, 3, PSend8928, PSend8929, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8926, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8932 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8931 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8932, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8931, 2, PSend8932, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8930, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
    Array PThreadedCode8934 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8934, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8933, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8936 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8939 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8941 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8942 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8943 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8944 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8940 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8943, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8944, (Optr)&t_method_return);
    Block PBlock8938 = new_Block_with(PArray8939, empty_Array, PThreadedCode8940, 4, PSend8941, PSend8942, PSend8943, PSend8944);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8945 = new_Send((Optr)PBlock8938, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8938, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8945, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8935 = new_Method_with(PArray8936, empty_Array, empty_Array, PThreadedCode8937, 2, PSend8945, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8935, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
    String string_8948 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8948_Const = new_Constant((Optr)string_8948);
    // getstr:. 
    Send PSend8949 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8948_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8950 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8949);
    Array PThreadedCode8947 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8948, (Optr)&t_send1, (Optr)PSend8949, (Optr)&t_send1, (Optr)PSend8950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8947, 2, PSend8950, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8946, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    String string_8953 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8953_Const = new_Constant((Optr)string_8953);
    // getstr:. 
    Send PSend8954 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8953_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8955 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8954);
    Array PThreadedCode8952 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8953, (Optr)&t_send1, (Optr)PSend8954, (Optr)&t_send1, (Optr)PSend8955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8952, 2, PSend8955, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8951, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    String string_8958 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8958_Const = new_Constant((Optr)string_8958);
    // getstr:. 
    Send PSend8959 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8958_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8960 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8959);
    Array PThreadedCode8957 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8958, (Optr)&t_send1, (Optr)PSend8959, (Optr)&t_send1, (Optr)PSend8960, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8957, 2, PSend8960, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8956, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8962 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8965 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8967 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8968 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8969 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8970 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8966 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8968, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8970, (Optr)&t_method_return);
    Block PBlock8964 = new_Block_with(PArray8965, empty_Array, PThreadedCode8966, 4, PSend8967, PSend8968, PSend8969, PSend8970);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8971 = new_Send((Optr)PBlock8964, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8964, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8971, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8961 = new_Method_with(PArray8962, empty_Array, empty_Array, PThreadedCode8963, 2, PSend8971, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8961, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
    String string_8974 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8974_Const = new_Constant((Optr)string_8974);
    // getstr:. 
    Send PSend8975 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8974_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8976 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8975);
    Array PThreadedCode8973 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8974, (Optr)&t_send1, (Optr)PSend8975, (Optr)&t_send1, (Optr)PSend8976, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8973, 2, PSend8976, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod8972, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend8979 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode8978 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8979, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8977 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8978, 2, PSend8979, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod8977, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray8981 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8984 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8986 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8989 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8990, (Optr)&t_block_return);
    Block PBlock8988 = new_Block_with(empty_Array, empty_Array, PThreadedCode8989, 1, PSend8990);
    // ifTrue:. 
    Send PSend8987 = new_Send((Optr)PSend8986, SMB_ifTrue_, 1, (Optr)PBlock8988);
    Assign PAssign8991 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
    Send PSend8992 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode8985 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend8986, (Optr)&t_send_ifTrue_, (Optr)PSend8987, (Optr)PBlock8988, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8991, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend8992, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8983 = new_Block_with(PArray8984, empty_Array, PThreadedCode8985, 4, PSend8987, PAssign8991, PSend8992, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8993 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8983);
    Array PThreadedCode8982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8983, (Optr)&t_send1, (Optr)PSend8993, (Optr)&t_method_return);
    Method PMethod8980 = new_Method_with(PArray8981, empty_Array, empty_Array, PThreadedCode8982, 1, PSend8993);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod8980, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8996 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode8995 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8996, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8995, 2, PSend8996, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8994, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
    Send PSend8999 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode8998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend8999, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8998, 2, PSend8999, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod8997, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9001 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9004 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9006 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9007 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend9008 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend9009 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode9005 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9007, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9008, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9009, (Optr)&t_method_return);
    Block PBlock9003 = new_Block_with(PArray9004, empty_Array, PThreadedCode9005, 4, PSend9006, PSend9007, PSend9008, PSend9009);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9010 = new_Send((Optr)PBlock9003, SMB_value_, 1, (Optr)self);
    Array PThreadedCode9002 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock9003, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9010, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9000 = new_Method_with(PArray9001, empty_Array, empty_Array, PThreadedCode9002, 2, PSend9010, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod9000, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend9013 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend9014 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode9012 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9013, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9014, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9012, 3, PSend9013, PSend9014, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod9011, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend9017 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9018 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9017);
    Character char_9019 = new_Character(L'O');
    Constant char_9019_Const = new_Constant((Optr)char_9019);
    // <<. 
    Send PSend9020 = new_Send((Optr)PSend9018, SMB__shiftLeft_, 1, (Optr)char_9019_Const);
    Array PThreadedCode9016 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9017, (Optr)&t_send1, (Optr)PSend9018, (Optr)&t_push1, (Optr)char_9019, (Optr)&t_send1, (Optr)PSend9020, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9016, 2, PSend9020, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod9015, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9023 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend9024 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend9023);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend9025 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode9022 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9023, (Optr)&t_send1, (Optr)PSend9024, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9025, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9022, 3, PSend9024, PSend9025, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod9021, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9031 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9030 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend9031);
    // stderr. 
    Send PSend9032 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9033 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend9032);
    Array PThreadedCode9029 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9030, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9032, (Optr)&t_send1, (Optr)PSend9033, (Optr)&t_block_return);
    Block PBlock9028 = new_Block_with(empty_Array, empty_Array, PThreadedCode9029, 2, PAssign9030, PSend9033);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9034 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9028);
    Array PThreadedCode9027 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9028, (Optr)&t_send1, (Optr)PSend9034, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod9026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9027, 2, PSend9034, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod9026, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9040 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign9039 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend9040);
    // stdout. 
    Send PSend9041 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend9042 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend9041);
    Array PThreadedCode9038 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9039, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend9040, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend9041, (Optr)&t_send1, (Optr)PSend9042, (Optr)&t_block_return);
    Block PBlock9037 = new_Block_with(empty_Array, empty_Array, PThreadedCode9038, 2, PAssign9039, PSend9042);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9043 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock9037);
    Array PThreadedCode9036 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock9037, (Optr)&t_send1, (Optr)PSend9043, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod9035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9036, 2, PSend9043, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod9035, HEADER(IO_Term_TermOutputDriver_Class));
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