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
    Send PSend8386 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8387 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8386);
    Character char_8388 = new_Character(L'[');
    Constant char_8388_Const = new_Constant((Optr)char_8388);
    // <<. 
    Send PSend8389 = new_Send((Optr)PSend8387, SMB__shiftLeft_, 1, (Optr)char_8388_Const);
    Array PThreadedCode8385 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8386, (Optr)&t_send1, (Optr)PSend8387, (Optr)&t_push1, (Optr)char_8388, (Optr)&t_send1, (Optr)PSend8389, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8385, 2, PSend8389, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8384, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8391 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8393 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8392 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8393, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8390 = new_Method_with(PArray8391, empty_Array, empty_Array, PThreadedCode8392, 2, PAssign8393, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8390, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8396 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8397 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8396);
    Array PThreadedCode8395 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8396, (Optr)&t_send1, (Optr)PSend8397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8395, 2, PSend8397, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8394, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
    Assign PAssign8400 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8399 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8400, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8399, 2, PAssign8400, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8398, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
    String string_8403 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8403_Const = new_Constant((Optr)string_8403);
    // getstr:. 
    Send PSend8404 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8403_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8405 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8404);
    Array PThreadedCode8402 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8403, (Optr)&t_send1, (Optr)PSend8404, (Optr)&t_send1, (Optr)PSend8405, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8401 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8402, 2, PSend8405, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8401, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
    Array PArray8407 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8409 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8410 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8408 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8409, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8406 = new_Method_with(PArray8407, empty_Array, empty_Array, PThreadedCode8408, 3, PAssign8409, PSend8410, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8406, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
    String string_8413 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8413_Const = new_Constant((Optr)string_8413);
    // getstr:. 
    Send PSend8414 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8413_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8415 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8414);
    Array PThreadedCode8412 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8413, (Optr)&t_send1, (Optr)PSend8414, (Optr)&t_send1, (Optr)PSend8415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8411 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8412, 2, PSend8415, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8411, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
    String string_8418 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8418_Const = new_Constant((Optr)string_8418);
    // getstr:. 
    Send PSend8419 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8418_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8420 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8419);
    Array PThreadedCode8417 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8418, (Optr)&t_send1, (Optr)PSend8419, (Optr)&t_send1, (Optr)PSend8420, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8416 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8417, 2, PSend8420, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8416, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8423 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8425 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8424 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8425);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8427 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8426 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8427);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8428 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8422 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8423, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8424, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8426, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8427, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8428, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8422, 5, PSuper8423, PAssign8424, PAssign8426, PSend8428, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8421, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
    String string_8431 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8431_Const = new_Constant((Optr)string_8431);
    // getstr:. 
    Send PSend8432 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8431_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8433 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8432);
    Array PThreadedCode8430 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8431, (Optr)&t_send1, (Optr)PSend8432, (Optr)&t_send1, (Optr)PSend8433, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8430, 2, PSend8433, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8429, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
    String string_8436 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8436_Const = new_Constant((Optr)string_8436);
    // getstr:. 
    Send PSend8437 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8436_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8438 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8437);
    Array PThreadedCode8435 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8436, (Optr)&t_send1, (Optr)PSend8437, (Optr)&t_send1, (Optr)PSend8438, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8434 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8435, 2, PSend8438, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8434, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8441 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8442 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8442_Const = new_Constant((Optr)char_8442);
    // <<. 
    Send PSend8443 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8442_Const);
    Array PThreadedCode8440 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8441, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8442, (Optr)&t_send1, (Optr)PSend8443, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8440, 3, PSend8441, PSend8443, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8439, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    String string_8446 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8446_Const = new_Constant((Optr)string_8446);
    // getstr:. 
    Send PSend8447 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8446_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8448 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8447);
    Array PThreadedCode8445 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8446, (Optr)&t_send1, (Optr)PSend8447, (Optr)&t_send1, (Optr)PSend8448, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8444 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8445, 2, PSend8448, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8444, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
    Send PSend8451 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8450 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8451, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8450, 2, PSend8451, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8449, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8454 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8458 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8458_Const = new_Constant((Optr)string_8458);
    // <<. 
    Send PSend8459 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8458_Const);
    Array PThreadedCode8457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8458, (Optr)&t_send1, (Optr)PSend8459, (Optr)&t_block_return);
    Block PBlock8456 = new_Block_with(empty_Array, empty_Array, PThreadedCode8457, 1, PSend8459);
    // ifTrue:. 
    Send PSend8455 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8456);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8460 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8461 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8460);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend8462 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8466 = new_Character(L';');
    Constant char_8466_Const = new_Constant((Optr)char_8466);
    // <<. 
    Send PSend8467 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8466_Const);
    // asString. 
    Send PSend8468 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8469 = new_Send((Optr)PSend8467, SMB__shiftLeft_, 1, (Optr)PSend8468);
    Array PThreadedCode8465 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8466, (Optr)&t_send1, (Optr)PSend8467, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8468, (Optr)&t_send1, (Optr)PSend8469, (Optr)&t_block_return);
    Block PBlock8464 = new_Block_with(empty_Array, empty_Array, PThreadedCode8465, 1, PSend8469);
    // ifFalse:. 
    Send PSend8463 = new_Send((Optr)PSend8462, SMB_ifFalse_, 1, (Optr)PBlock8464);
    Character char_8470 = new_Character(L'm');
    Constant char_8470_Const = new_Constant((Optr)char_8470);
    // <<. 
    Send PSend8471 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8470_Const);
    Array PThreadedCode8453 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8454, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8455, (Optr)PBlock8456, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8460, (Optr)&t_send1, (Optr)PSend8461, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8462, (Optr)&t_send_ifFalse_, (Optr)PSend8463, (Optr)PBlock8464, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8470, (Optr)&t_send1, (Optr)PSend8471, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8453, 6, PSend8454, PSend8455, PSend8461, PSend8463, PSend8471, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8452, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8474 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8473 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8474, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8473, 2, PSend8474, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8472, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
    Send PSend8477 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8477, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8476, 2, PSend8477, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8475, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
    Send PSend8480 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8480, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8479, 2, PSend8480, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8478, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
    String string_8483 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8483_Const = new_Constant((Optr)string_8483);
    // getstr:. 
    Send PSend8484 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8483_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8485 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8484);
    Array PThreadedCode8482 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8483, (Optr)&t_send1, (Optr)PSend8484, (Optr)&t_send1, (Optr)PSend8485, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8482, 2, PSend8485, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8481, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
    String string_8488 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8488_Const = new_Constant((Optr)string_8488);
    // getstr:. 
    Send PSend8489 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8488_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8490 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8489);
    Array PThreadedCode8487 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8488, (Optr)&t_send1, (Optr)PSend8489, (Optr)&t_send1, (Optr)PSend8490, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8487, 2, PSend8490, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8486, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8493 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8494 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8495 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8496 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8492 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8493, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8494, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8495, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8496, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8492, 5, PAssign8493, PAssign8494, PAssign8495, PAssign8496, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8491, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8498 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8501 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8503 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8504 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8505 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8506 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8502 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8506, (Optr)&t_method_return);
    Block PBlock8500 = new_Block_with(PArray8501, empty_Array, PThreadedCode8502, 4, PSend8503, PSend8504, PSend8505, PSend8506);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8507 = new_Send((Optr)PBlock8500, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8499 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8500, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8507, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8497 = new_Method_with(PArray8498, empty_Array, empty_Array, PThreadedCode8499, 2, PSend8507, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8497, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8510 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8511 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8511_Const = new_Constant((Optr)char_8511);
    // <<. 
    Send PSend8512 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8511_Const);
    Array PThreadedCode8509 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8510, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8511, (Optr)&t_send1, (Optr)PSend8512, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8509, 3, PSend8510, PSend8512, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8508, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
    String string_8515 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8515_Const = new_Constant((Optr)string_8515);
    // getnum:. 
    Send PSend8516 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8515_Const);
    Array PThreadedCode8514 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8515, (Optr)&t_send1, (Optr)PSend8516, (Optr)&t_method_return);
    Method PMethod8513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8514, 1, PSend8516);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8513, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8518 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8521 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8523 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8524 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8525 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8526 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8522 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8523, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8525, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8526, (Optr)&t_method_return);
    Block PBlock8520 = new_Block_with(PArray8521, empty_Array, PThreadedCode8522, 4, PSend8523, PSend8524, PSend8525, PSend8526);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8527 = new_Send((Optr)PBlock8520, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8520, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8527, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8517 = new_Method_with(PArray8518, empty_Array, empty_Array, PThreadedCode8519, 2, PSend8527, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8517, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
    Send PSend8530 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8530, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8529, 2, PSend8530, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8528, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    String string_8533 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8533_Const = new_Constant((Optr)string_8533);
    // getstr:. 
    Send PSend8534 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8533_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8535 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8534);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8536 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8532 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8533, (Optr)&t_send1, (Optr)PSend8534, (Optr)&t_send1, (Optr)PSend8535, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8532, 3, PSend8535, PSend8536, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8531, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
    String string_8539 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8539_Const = new_Constant((Optr)string_8539);
    // getstr:. 
    Send PSend8540 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8539_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8541 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8540);
    Array PThreadedCode8538 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8539, (Optr)&t_send1, (Optr)PSend8540, (Optr)&t_send1, (Optr)PSend8541, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8538, 2, PSend8541, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8537, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    String string_8544 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8544_Const = new_Constant((Optr)string_8544);
    // getstr:. 
    Send PSend8545 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8544_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8546 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8545);
    Array PThreadedCode8543 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8544, (Optr)&t_send1, (Optr)PSend8545, (Optr)&t_send1, (Optr)PSend8546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8543, 2, PSend8546, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8542, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8548 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8551 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8553 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8554 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8555 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8556 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8552 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8553, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8554, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8556, (Optr)&t_method_return);
    Block PBlock8550 = new_Block_with(PArray8551, empty_Array, PThreadedCode8552, 4, PSend8553, PSend8554, PSend8555, PSend8556);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8557 = new_Send((Optr)PBlock8550, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8549 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8550, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8547 = new_Method_with(PArray8548, empty_Array, empty_Array, PThreadedCode8549, 2, PSend8557, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8547, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
    String string_8560 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8560_Const = new_Constant((Optr)string_8560);
    // getstr:. 
    Send PSend8561 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8560_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8562 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8561);
    Array PThreadedCode8559 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8560, (Optr)&t_send1, (Optr)PSend8561, (Optr)&t_send1, (Optr)PSend8562, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8559, 2, PSend8562, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8558, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
    Send PSend8565 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8565, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8564, 2, PSend8565, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8563, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    String string_8568 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8568_Const = new_Constant((Optr)string_8568);
    // getstr:. 
    Send PSend8569 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8568_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8570 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8569);
    Array PThreadedCode8567 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8568, (Optr)&t_send1, (Optr)PSend8569, (Optr)&t_send1, (Optr)PSend8570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8567, 2, PSend8570, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8566, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    String string_8573 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8573_Const = new_Constant((Optr)string_8573);
    // getstr:. 
    Send PSend8574 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8573_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8575 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8574);
    Array PThreadedCode8572 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8573, (Optr)&t_send1, (Optr)PSend8574, (Optr)&t_send1, (Optr)PSend8575, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8572, 2, PSend8575, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8571, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    String string_8578 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8578_Const = new_Constant((Optr)string_8578);
    // getnum:. 
    Send PSend8579 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8578_Const);
    Array PThreadedCode8577 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8578, (Optr)&t_send1, (Optr)PSend8579, (Optr)&t_method_return);
    Method PMethod8576 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8577, 1, PSend8579);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8576, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8582 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8581 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8581, 2, PSend8582, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8580, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
    String string_8585 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8585_Const = new_Constant((Optr)string_8585);
    // getstr:. 
    Send PSend8586 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8585_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8587 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8586);
    Array PThreadedCode8584 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8585, (Optr)&t_send1, (Optr)PSend8586, (Optr)&t_send1, (Optr)PSend8587, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8583 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8584, 2, PSend8587, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8583, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8589 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8591 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8592 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8593 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8590 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8591, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8592, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8593, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8588 = new_Method_with(PArray8589, empty_Array, empty_Array, PThreadedCode8590, 4, PSend8591, PSend8592, PSend8593, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8588, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
    Array PThreadedCode8595 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8594 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8595, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8594, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    String string_8598 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8598_Const = new_Constant((Optr)string_8598);
    // getstr:. 
    Send PSend8599 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8598_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8600 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8599);
    Array PThreadedCode8597 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8598, (Optr)&t_send1, (Optr)PSend8599, (Optr)&t_send1, (Optr)PSend8600, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8597, 2, PSend8600, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8596, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    String string_8603 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8603_Const = new_Constant((Optr)string_8603);
    // getstr:. 
    Send PSend8604 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8603_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8605 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8604);
    Array PThreadedCode8602 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8603, (Optr)&t_send1, (Optr)PSend8604, (Optr)&t_send1, (Optr)PSend8605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8602, 2, PSend8605, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8601, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
    String string_8608 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8608_Const = new_Constant((Optr)string_8608);
    // getstr:. 
    Send PSend8609 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8608_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8610 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8609);
    Array PThreadedCode8607 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8608, (Optr)&t_send1, (Optr)PSend8609, (Optr)&t_send1, (Optr)PSend8610, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8607, 2, PSend8610, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8606, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8612 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8615 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8617 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8618 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8619 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8620 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8616 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8617, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8619, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8620, (Optr)&t_method_return);
    Block PBlock8614 = new_Block_with(PArray8615, empty_Array, PThreadedCode8616, 4, PSend8617, PSend8618, PSend8619, PSend8620);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8621 = new_Send((Optr)PBlock8614, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8613 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8614, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8621, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8611 = new_Method_with(PArray8612, empty_Array, empty_Array, PThreadedCode8613, 2, PSend8621, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8611, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8623 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8626 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8628 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8629 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8630 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8631 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8627 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8629, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8631, (Optr)&t_method_return);
    Block PBlock8625 = new_Block_with(PArray8626, empty_Array, PThreadedCode8627, 4, PSend8628, PSend8629, PSend8630, PSend8631);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8632 = new_Send((Optr)PBlock8625, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8625, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8632, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8622 = new_Method_with(PArray8623, empty_Array, empty_Array, PThreadedCode8624, 2, PSend8632, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8622, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
    String string_8635 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8635_Const = new_Constant((Optr)string_8635);
    // getstr:. 
    Send PSend8636 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8635_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8637 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8636);
    Array PThreadedCode8634 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8635, (Optr)&t_send1, (Optr)PSend8636, (Optr)&t_send1, (Optr)PSend8637, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8634, 2, PSend8637, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8633, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray8639 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8641 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8640 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8641, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8638 = new_Method_with(PArray8639, empty_Array, empty_Array, PThreadedCode8640, 2, PSend8641, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8638, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
    Send PSend8644 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8643 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8643, 2, PSend8644, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8642, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    String string_8647 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8647_Const = new_Constant((Optr)string_8647);
    // getstr:. 
    Send PSend8648 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8647_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8649 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8648);
    Array PThreadedCode8646 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8647, (Optr)&t_send1, (Optr)PSend8648, (Optr)&t_send1, (Optr)PSend8649, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8646, 2, PSend8649, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8645, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    String string_8652 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8652_Const = new_Constant((Optr)string_8652);
    // getstr:. 
    Send PSend8653 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8652_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8654 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8653);
    Array PThreadedCode8651 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8652, (Optr)&t_send1, (Optr)PSend8653, (Optr)&t_send1, (Optr)PSend8654, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8651, 2, PSend8654, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8650, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend8657 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8656 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8657, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8655 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8656, 2, PSend8657, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8655, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
    String string_8660 = new_String(L"1");
    String string_8661 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8661_Const = new_Constant((Optr)string_8661);
    // getstr:. 
    Send PSend8662 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8661_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8660_Const = new_Constant((Optr)string_8660);
    // parm:in:. 
    Send PSend8663 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8660_Const, (Optr)PSend8662);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8664 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8663);
    Array PThreadedCode8659 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8660, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8661, (Optr)&t_send1, (Optr)PSend8662, (Optr)&t_send2, (Optr)PSend8663, (Optr)&t_send1, (Optr)PSend8664, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8659, 2, PSend8664, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8658, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
    Send PSend8667 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8666 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8666, 2, PSend8667, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8665, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8670 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8671 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8669 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8670, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8671, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8669, 3, PSend8670, PSend8671, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8668, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8674 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8673 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8674, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8673, 2, PSend8674, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8672, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
    Array PThreadedCode8676 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8676, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8675, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8678 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8681 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8683 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8684 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8685 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8686 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8682 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8685, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8686, (Optr)&t_method_return);
    Block PBlock8680 = new_Block_with(PArray8681, empty_Array, PThreadedCode8682, 4, PSend8683, PSend8684, PSend8685, PSend8686);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8687 = new_Send((Optr)PBlock8680, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8680, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8677 = new_Method_with(PArray8678, empty_Array, empty_Array, PThreadedCode8679, 2, PSend8687, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8677, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
    String string_8690 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8690_Const = new_Constant((Optr)string_8690);
    // getstr:. 
    Send PSend8691 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8690_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8692 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8691);
    Array PThreadedCode8689 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8690, (Optr)&t_send1, (Optr)PSend8691, (Optr)&t_send1, (Optr)PSend8692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8689, 2, PSend8692, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8688, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    String string_8695 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8695_Const = new_Constant((Optr)string_8695);
    // getstr:. 
    Send PSend8696 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8695_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8697 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8696);
    Array PThreadedCode8694 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8695, (Optr)&t_send1, (Optr)PSend8696, (Optr)&t_send1, (Optr)PSend8697, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8694, 2, PSend8697, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8693, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    String string_8700 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8700_Const = new_Constant((Optr)string_8700);
    // getstr:. 
    Send PSend8701 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8700_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8702 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8701);
    Array PThreadedCode8699 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8700, (Optr)&t_send1, (Optr)PSend8701, (Optr)&t_send1, (Optr)PSend8702, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8699, 2, PSend8702, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8698, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8704 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8707 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8709 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8710 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8711 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8712 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8708 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8709, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8710, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8712, (Optr)&t_method_return);
    Block PBlock8706 = new_Block_with(PArray8707, empty_Array, PThreadedCode8708, 4, PSend8709, PSend8710, PSend8711, PSend8712);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8713 = new_Send((Optr)PBlock8706, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8705 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8706, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8713, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8703 = new_Method_with(PArray8704, empty_Array, empty_Array, PThreadedCode8705, 2, PSend8713, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8703, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
    String string_8716 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8716_Const = new_Constant((Optr)string_8716);
    // getstr:. 
    Send PSend8717 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8716_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8718 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8717);
    Array PThreadedCode8715 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8716, (Optr)&t_send1, (Optr)PSend8717, (Optr)&t_send1, (Optr)PSend8718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8715, 2, PSend8718, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod8714, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend8721 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode8720 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8720, 2, PSend8721, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod8719, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray8723 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8726 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8728 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8731 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8732, (Optr)&t_block_return);
    Block PBlock8730 = new_Block_with(empty_Array, empty_Array, PThreadedCode8731, 1, PSend8732);
    // ifTrue:. 
    Send PSend8729 = new_Send((Optr)PSend8728, SMB_ifTrue_, 1, (Optr)PBlock8730);
    Assign PAssign8733 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
    Send PSend8734 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode8727 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend8728, (Optr)&t_send_ifTrue_, (Optr)PSend8729, (Optr)PBlock8730, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8733, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend8734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8725 = new_Block_with(PArray8726, empty_Array, PThreadedCode8727, 4, PSend8729, PAssign8733, PSend8734, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8735 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8725);
    Array PThreadedCode8724 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8725, (Optr)&t_send1, (Optr)PSend8735, (Optr)&t_method_return);
    Method PMethod8722 = new_Method_with(PArray8723, empty_Array, empty_Array, PThreadedCode8724, 1, PSend8735);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod8722, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8738 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode8737 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8738, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8737, 2, PSend8738, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8736, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
    Send PSend8741 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode8740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend8741, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8740, 2, PSend8741, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod8739, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8743 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8746 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8748 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8749 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8750 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8751 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8747 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8748, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8749, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8750, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8751, (Optr)&t_method_return);
    Block PBlock8745 = new_Block_with(PArray8746, empty_Array, PThreadedCode8747, 4, PSend8748, PSend8749, PSend8750, PSend8751);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8752 = new_Send((Optr)PBlock8745, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8744 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8745, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8752, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8742 = new_Method_with(PArray8743, empty_Array, empty_Array, PThreadedCode8744, 2, PSend8752, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod8742, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8755 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend8756 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode8754 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8754, 3, PSend8755, PSend8756, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod8753, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8759 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8760 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8759);
    Character char_8761 = new_Character(L'O');
    Constant char_8761_Const = new_Constant((Optr)char_8761);
    // <<. 
    Send PSend8762 = new_Send((Optr)PSend8760, SMB__shiftLeft_, 1, (Optr)char_8761_Const);
    Array PThreadedCode8758 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8759, (Optr)&t_send1, (Optr)PSend8760, (Optr)&t_push1, (Optr)char_8761, (Optr)&t_send1, (Optr)PSend8762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8758, 2, PSend8762, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod8757, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend8765 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8766 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8765);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend8767 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode8764 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8765, (Optr)&t_send1, (Optr)PSend8766, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8764, 3, PSend8766, PSend8767, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod8763, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8773 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8772 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend8773);
    // stderr. 
    Send PSend8774 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8775 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend8774);
    Array PThreadedCode8771 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8772, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8774, (Optr)&t_send1, (Optr)PSend8775, (Optr)&t_block_return);
    Block PBlock8770 = new_Block_with(empty_Array, empty_Array, PThreadedCode8771, 2, PAssign8772, PSend8775);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8776 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8770);
    Array PThreadedCode8769 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8770, (Optr)&t_send1, (Optr)PSend8776, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod8768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8769, 2, PSend8776, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod8768, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8782 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8781 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend8782);
    // stdout. 
    Send PSend8783 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8784 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend8783);
    Array PThreadedCode8780 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8781, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8782, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8783, (Optr)&t_send1, (Optr)PSend8784, (Optr)&t_block_return);
    Block PBlock8779 = new_Block_with(empty_Array, empty_Array, PThreadedCode8780, 2, PAssign8781, PSend8784);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8785 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8779);
    Array PThreadedCode8778 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8779, (Optr)&t_send1, (Optr)PSend8785, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod8777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8778, 2, PSend8785, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod8777, HEADER(IO_Term_TermOutputDriver_Class));
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