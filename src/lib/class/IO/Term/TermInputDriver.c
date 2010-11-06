#include <lib/class/IO/Term/TermInputDriver.h>


Optr layout_IO_Term_TermInputDriver_Class_class;
Optr slot_IO_Term_TermInputDriver_input;
Optr slot_IO_Term_TermInputDriver_handler;
Optr slot_IO_Term_TermInputDriver_normal;
Optr slot_IO_Term_TermInputDriver_csi;
Optr slot_IO_Term_TermInputDriver_ss3;
Optr layout_IO_Term_TermInputDriver;


static void init_SMB_initializeSS3_() {
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9074 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9076 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9079 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9078 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9079, (Optr)&t_block_return);
    Block PBlock9077 = new_Block_with(empty_Array, empty_Array, PThreadedCode9078, 1, PSend9079);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9076_Const = new_Constant((Optr)char_9076);
    // at:put:. 
    Send PSend9080 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9076_Const, (Optr)PBlock9077);
    Character char_9081 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9084 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9084, (Optr)&t_block_return);
    Block PBlock9082 = new_Block_with(empty_Array, empty_Array, PThreadedCode9083, 1, PSend9084);
    Constant char_9081_Const = new_Constant((Optr)char_9081);
    // at:put:. 
    Send PSend9085 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9081_Const, (Optr)PBlock9082);
    Character char_9086 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9089 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9089, (Optr)&t_block_return);
    Block PBlock9087 = new_Block_with(empty_Array, empty_Array, PThreadedCode9088, 1, PSend9089);
    Constant char_9086_Const = new_Constant((Optr)char_9086);
    // at:put:. 
    Send PSend9090 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9086_Const, (Optr)PBlock9087);
    Character char_9091 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9094 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9093 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9094, (Optr)&t_block_return);
    Block PBlock9092 = new_Block_with(empty_Array, empty_Array, PThreadedCode9093, 1, PSend9094);
    Constant char_9091_Const = new_Constant((Optr)char_9091);
    // at:put:. 
    Send PSend9095 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9091_Const, (Optr)PBlock9092);
    Character char_9096 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9099 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9098 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_block_return);
    Block PBlock9097 = new_Block_with(empty_Array, empty_Array, PThreadedCode9098, 1, PSend9099);
    Constant char_9096_Const = new_Constant((Optr)char_9096);
    // at:put:. 
    Send PSend9100 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9096_Const, (Optr)PBlock9097);
    Character char_9101 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9104 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9103 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9104, (Optr)&t_block_return);
    Block PBlock9102 = new_Block_with(empty_Array, empty_Array, PThreadedCode9103, 1, PSend9104);
    Constant char_9101_Const = new_Constant((Optr)char_9101);
    // at:put:. 
    Send PSend9105 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9101_Const, (Optr)PBlock9102);
    Character char_9106 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9109 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9108 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9109, (Optr)&t_block_return);
    Block PBlock9107 = new_Block_with(empty_Array, empty_Array, PThreadedCode9108, 1, PSend9109);
    Constant char_9106_Const = new_Constant((Optr)char_9106);
    // at:put:. 
    Send PSend9110 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9106_Const, (Optr)PBlock9107);
    Character char_9111 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9114 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9113 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9114, (Optr)&t_block_return);
    Block PBlock9112 = new_Block_with(empty_Array, empty_Array, PThreadedCode9113, 1, PSend9114);
    Constant char_9111_Const = new_Constant((Optr)char_9111);
    // at:put:. 
    Send PSend9115 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9111_Const, (Optr)PBlock9112);
    Character char_9116 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9119 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9118 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9119, (Optr)&t_block_return);
    Block PBlock9117 = new_Block_with(empty_Array, empty_Array, PThreadedCode9118, 1, PSend9119);
    Constant char_9116_Const = new_Constant((Optr)char_9116);
    // at:put:. 
    Send PSend9120 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9116_Const, (Optr)PBlock9117);
    Character char_9121 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9124 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9123 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9124, (Optr)&t_block_return);
    Block PBlock9122 = new_Block_with(empty_Array, empty_Array, PThreadedCode9123, 1, PSend9124);
    Constant char_9121_Const = new_Constant((Optr)char_9121);
    // at:put:. 
    Send PSend9125 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9121_Const, (Optr)PBlock9122);
    Character char_8539 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9128 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9127 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9128, (Optr)&t_block_return);
    Block PBlock9126 = new_Block_with(empty_Array, empty_Array, PThreadedCode9127, 1, PSend9128);
    Constant char_8539_Const = new_Constant((Optr)char_8539);
    // at:put:. 
    Send PSend9129 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8539_Const, (Optr)PBlock9126);
    Character char_9130 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9133 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9132 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9133, (Optr)&t_block_return);
    Block PBlock9131 = new_Block_with(empty_Array, empty_Array, PThreadedCode9132, 1, PSend9133);
    Constant char_9130_Const = new_Constant((Optr)char_9130);
    // at:put:. 
    Send PSend9134 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9130_Const, (Optr)PBlock9131);
    Character char_9135 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9138 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9137 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9138, (Optr)&t_block_return);
    Block PBlock9136 = new_Block_with(empty_Array, empty_Array, PThreadedCode9137, 1, PSend9138);
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    // at:put:. 
    Send PSend9139 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9135_Const, (Optr)PBlock9136);
    Character char_9140 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9143 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9142 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9143, (Optr)&t_block_return);
    Block PBlock9141 = new_Block_with(empty_Array, empty_Array, PThreadedCode9142, 1, PSend9143);
    Constant char_9140_Const = new_Constant((Optr)char_9140);
    // at:put:. 
    Send PSend9144 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9140_Const, (Optr)PBlock9141);
    Character char_9145 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9148 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9147 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9148, (Optr)&t_block_return);
    Block PBlock9146 = new_Block_with(empty_Array, empty_Array, PThreadedCode9147, 1, PSend9148);
    Constant char_9145_Const = new_Constant((Optr)char_9145);
    // at:put:. 
    Send PSend9149 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9145_Const, (Optr)PBlock9146);
    Character char_9150 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9153 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9152 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9153, (Optr)&t_block_return);
    Block PBlock9151 = new_Block_with(empty_Array, empty_Array, PThreadedCode9152, 1, PSend9153);
    Constant char_9150_Const = new_Constant((Optr)char_9150);
    // at:put:. 
    Send PSend9154 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9150_Const, (Optr)PBlock9151);
    Character char_9155 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9158 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9157 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9158, (Optr)&t_block_return);
    Block PBlock9156 = new_Block_with(empty_Array, empty_Array, PThreadedCode9157, 1, PSend9158);
    Constant char_9155_Const = new_Constant((Optr)char_9155);
    // at:put:. 
    Send PSend9159 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9155_Const, (Optr)PBlock9156);
    Character char_9160 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9163 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9162 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9163, (Optr)&t_block_return);
    Block PBlock9161 = new_Block_with(empty_Array, empty_Array, PThreadedCode9162, 1, PSend9163);
    Constant char_9160_Const = new_Constant((Optr)char_9160);
    // at:put:. 
    Send PSend9164 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9160_Const, (Optr)PBlock9161);
    Character char_9165 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9168 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9167 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9168, (Optr)&t_block_return);
    Block PBlock9166 = new_Block_with(empty_Array, empty_Array, PThreadedCode9167, 1, PSend9168);
    Constant char_9165_Const = new_Constant((Optr)char_9165);
    // at:put:. 
    Send PSend9169 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9165_Const, (Optr)PBlock9166);
    Character char_9170 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9173 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9172 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9173, (Optr)&t_block_return);
    Block PBlock9171 = new_Block_with(empty_Array, empty_Array, PThreadedCode9172, 1, PSend9173);
    Constant char_9170_Const = new_Constant((Optr)char_9170);
    // at:put:. 
    Send PSend9174 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9170_Const, (Optr)PBlock9171);
    Array PThreadedCode9075 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9076, (Optr)&t_push_closure, (Optr)PBlock9077, (Optr)&t_send2, (Optr)PSend9080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9081, (Optr)&t_push_closure, (Optr)PBlock9082, (Optr)&t_send2, (Optr)PSend9085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9086, (Optr)&t_push_closure, (Optr)PBlock9087, (Optr)&t_send2, (Optr)PSend9090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9091, (Optr)&t_push_closure, (Optr)PBlock9092, (Optr)&t_send2, (Optr)PSend9095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9096, (Optr)&t_push_closure, (Optr)PBlock9097, (Optr)&t_send2, (Optr)PSend9100, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9101, (Optr)&t_push_closure, (Optr)PBlock9102, (Optr)&t_send2, (Optr)PSend9105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9106, (Optr)&t_push_closure, (Optr)PBlock9107, (Optr)&t_send2, (Optr)PSend9110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9111, (Optr)&t_push_closure, (Optr)PBlock9112, (Optr)&t_send2, (Optr)PSend9115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9116, (Optr)&t_push_closure, (Optr)PBlock9117, (Optr)&t_send2, (Optr)PSend9120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9121, (Optr)&t_push_closure, (Optr)PBlock9122, (Optr)&t_send2, (Optr)PSend9125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8539, (Optr)&t_push_closure, (Optr)PBlock9126, (Optr)&t_send2, (Optr)PSend9129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9130, (Optr)&t_push_closure, (Optr)PBlock9131, (Optr)&t_send2, (Optr)PSend9134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_push_closure, (Optr)PBlock9136, (Optr)&t_send2, (Optr)PSend9139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9140, (Optr)&t_push_closure, (Optr)PBlock9141, (Optr)&t_send2, (Optr)PSend9144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9145, (Optr)&t_push_closure, (Optr)PBlock9146, (Optr)&t_send2, (Optr)PSend9149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9150, (Optr)&t_push_closure, (Optr)PBlock9151, (Optr)&t_send2, (Optr)PSend9154, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9155, (Optr)&t_push_closure, (Optr)PBlock9156, (Optr)&t_send2, (Optr)PSend9159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9160, (Optr)&t_push_closure, (Optr)PBlock9161, (Optr)&t_send2, (Optr)PSend9164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9165, (Optr)&t_push_closure, (Optr)PBlock9166, (Optr)&t_send2, (Optr)PSend9169, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9170, (Optr)&t_push_closure, (Optr)PBlock9171, (Optr)&t_send2, (Optr)PSend9174, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9073 = new_Method_with(PArray9074, empty_Array, empty_Array, PThreadedCode9075, 21, PSend9080, PSend9085, PSend9090, PSend9095, PSend9100, PSend9105, PSend9110, PSend9115, PSend9120, PSend9125, PSend9129, PSend9134, PSend9139, PSend9144, PSend9149, PSend9154, PSend9159, PSend9164, PSend9169, PSend9174, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9073, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9176 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9179 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9182 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9181 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9182);
    Character char_8457 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8457_Const = new_Constant((Optr)char_8457);
    // =. 
    Send PSend9183 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8457_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9187 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9187);
    Array PThreadedCode9186 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9187, (Optr)&t_send1, (Optr)PSend9188, (Optr)&t_block_return);
    Block PBlock9185 = new_Block_with(empty_Array, empty_Array, PThreadedCode9186, 1, PSend9188);
    // ifTrue:. 
    Send PSend9184 = new_Send((Optr)PSend9183, SMB_ifTrue_, 1, (Optr)PBlock9185);
    Character char_8830 = new_Character(L'O');
    Constant char_8830_Const = new_Constant((Optr)char_8830);
    // =. 
    Send PSend9189 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8830_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9193 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9194 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9193);
    Array PThreadedCode9192 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9193, (Optr)&t_send1, (Optr)PSend9194, (Optr)&t_block_return);
    Block PBlock9191 = new_Block_with(empty_Array, empty_Array, PThreadedCode9192, 1, PSend9194);
    // ifTrue:. 
    Send PSend9190 = new_Send((Optr)PSend9189, SMB_ifTrue_, 1, (Optr)PBlock9191);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9195 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9180 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9181, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8457, (Optr)&t_send1, (Optr)PSend9183, (Optr)&t_send_ifTrue_, (Optr)PSend9184, (Optr)PBlock9185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8830, (Optr)&t_send1, (Optr)PSend9189, (Optr)&t_send_ifTrue_, (Optr)PSend9190, (Optr)PBlock9191, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9195, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9178 = new_Block_with(PArray9179, empty_Array, PThreadedCode9180, 5, PAssign9181, PSend9184, PSend9190, PSend9195, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9196 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9178);
    Array PThreadedCode9177 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9178, (Optr)&t_send1, (Optr)PSend9196, (Optr)&t_method_return);
    Method PMethod9175 = new_Method_with(empty_Array, PArray9176, empty_Array, PThreadedCode9177, 1, PSend9196);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9175, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9198 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9200 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9200, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9197 = new_Method_with(PArray9198, empty_Array, empty_Array, PThreadedCode9199, 2, PAssign9200, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9197, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9202 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9203 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9205 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9208 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9210 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9209 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9210);
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9211 = new_Send((Optr)char_9208_Const, SMB__lt__equals_, 1, (Optr)PAssign9209);
    Character char_9214 = new_Character(L'9');
    Constant char_9214_Const = new_Constant((Optr)char_9214);
    // <=. 
    Send PSend9215 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9214_Const);
    Array PThreadedCode9213 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9214, (Optr)&t_send1, (Optr)PSend9215, (Optr)&t_block_return);
    Block PBlock9212 = new_Block_with(empty_Array, empty_Array, PThreadedCode9213, 1, PSend9215);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9216 = new_Send((Optr)PSend9211, SMB_and_, 1, (Optr)PBlock9212);
    Array PThreadedCode9207 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_push1, (Optr)PAssign9209, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9210, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9211, (Optr)&t_push_closure, (Optr)PBlock9212, (Optr)&t_send1, (Optr)PSend9216, (Optr)&t_block_return);
    Block PBlock9206 = new_Block_with(empty_Array, empty_Array, PThreadedCode9207, 1, PSend9216);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9221 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9223 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9224 = new_Send((Optr)char_9208_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9222 = new_Send((Optr)PSend9223, SMB__minus_, 1, (Optr)PSend9224);
    // +. 
    Send PSend9220 = new_Send((Optr)PSend9221, SMB__plus_, 1, (Optr)PSend9222);
    Assign PAssign9219 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9220);
    Array PThreadedCode9218 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9219, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9221, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9223, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send0, (Optr)PSend9224, (Optr)&t_send1, (Optr)PSend9222, (Optr)&t_send1, (Optr)PSend9220, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9217 = new_Block_with(empty_Array, empty_Array, PThreadedCode9218, 1, PAssign9219);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9225 = new_Send((Optr)PBlock9206, SMB_whileTrue_, 1, (Optr)PBlock9217);
    Character char_9226 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9226_Const = new_Constant((Optr)char_9226);
    // =. 
    Send PSend9227 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9226_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9231 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9231_Const = new_Constant((Optr)string_9231);
    // fail:in:. 
    Send PSend9232 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9231_Const);
    Array PThreadedCode9230 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9231, (Optr)&t_send2, (Optr)PSend9232, (Optr)&t_block_return);
    Block PBlock9229 = new_Block_with(empty_Array, empty_Array, PThreadedCode9230, 1, PSend9232);
    // ifFalse:. 
    Send PSend9228 = new_Send((Optr)PSend9227, SMB_ifFalse_, 1, (Optr)PBlock9229);
    String string_9235 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9235_Const = new_Constant((Optr)string_9235);
    // fail:in:. 
    Send PSend9236 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9235_Const);
    Array PThreadedCode9234 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9235, (Optr)&t_send2, (Optr)PSend9236, (Optr)&t_block_return);
    Block PBlock9233 = new_Block_with(empty_Array, empty_Array, PThreadedCode9234, 1, PSend9236);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9237 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9233);
    Array PThreadedCode9204 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9205, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9206, (Optr)&t_push_closure, (Optr)PBlock9217, (Optr)&t_send1, (Optr)PSend9225, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9226, (Optr)&t_send1, (Optr)PSend9227, (Optr)&t_send_ifFalse_, (Optr)PSend9228, (Optr)PBlock9229, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9233, (Optr)&t_send2, (Optr)PSend9237, (Optr)&t_method_return);
    Method PMethod9201 = new_Method_with(PArray9202, PArray9203, empty_Array, PThreadedCode9204, 4, PAssign9205, PSend9225, PSend9228, PSend9237);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9201, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9241 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9240 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9241);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9242 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9244 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9243 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9244);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9245 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9247 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9246 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9247);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9248 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9239 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9240, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9241, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9242, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9243, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9244, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9246, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9248, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9239, 7, PAssign9240, PSend9242, PAssign9243, PSend9245, PAssign9246, PSend9248, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9238, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9250 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9252 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9253 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9253_Const = new_Constant((Optr)string_9253);
    // ,. 
    Send PSend9254 = new_Send((Optr)PSend9252, SMB__append_, 1, (Optr)string_9253_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9255 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9256 = new_Send((Optr)PSend9254, SMB__append_, 1, (Optr)PSend9255);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9257 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9256);
    Array PThreadedCode9251 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9252, (Optr)&t_push1, (Optr)string_9253, (Optr)&t_send1, (Optr)PSend9254, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9255, (Optr)&t_send1, (Optr)PSend9256, (Optr)&t_send1, (Optr)PSend9257, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9249 = new_Method_with(PArray9250, empty_Array, empty_Array, PThreadedCode9251, 2, PSend9257, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9249, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9259 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9262 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9265 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9264 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9265);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9268 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9271 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9272 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9271);
    Array PThreadedCode9270 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9271, (Optr)&t_send1, (Optr)PSend9272, (Optr)&t_block_return);
    Block PBlock9269 = new_Block_with(empty_Array, empty_Array, PThreadedCode9270, 1, PSend9272);
    // at:ifAbsent:. 
    Send PSend9267 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9268, (Optr)PBlock9269);
    Assign PAssign9266 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9267);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9273 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9263 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9264, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9266, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9268, (Optr)&t_push_closure, (Optr)PBlock9269, (Optr)&t_send2, (Optr)PSend9267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9273, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9261 = new_Block_with(PArray9262, empty_Array, PThreadedCode9263, 4, PAssign9264, PAssign9266, PSend9273, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9274 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9261);
    Array PThreadedCode9260 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9261, (Optr)&t_send1, (Optr)PSend9274, (Optr)&t_method_return);
    Method PMethod9258 = new_Method_with(empty_Array, PArray9259, empty_Array, PThreadedCode9260, 1, PSend9274);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9258, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9276 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9279 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9278 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9279);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9284 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9284_Const = new_Constant((Optr)string_9284);
    // fail:in:. 
    Send PSend9285 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9284_Const);
    Array PThreadedCode9283 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9284, (Optr)&t_send2, (Optr)PSend9285, (Optr)&t_block_return);
    Block PBlock9282 = new_Block_with(empty_Array, empty_Array, PThreadedCode9283, 1, PSend9285);
    // at:ifAbsent:. 
    Send PSend9281 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9282);
    Assign PAssign9280 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9281);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9286 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9277 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9278, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9279, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9280, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9282, (Optr)&t_send2, (Optr)PSend9281, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9275 = new_Method_with(empty_Array, PArray9276, empty_Array, PThreadedCode9277, 4, PAssign9278, PAssign9280, PSend9286, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9275, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9288 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9290 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9293 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9292 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9293, (Optr)&t_block_return);
    Block PBlock9291 = new_Block_with(empty_Array, empty_Array, PThreadedCode9292, 1, PSend9293);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9290_Const = new_Constant((Optr)char_9290);
    // at:put:. 
    Send PSend9294 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9290_Const, (Optr)PBlock9291);
    Character char_8580 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9297 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9296 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9297, (Optr)&t_block_return);
    Block PBlock9295 = new_Block_with(empty_Array, empty_Array, PThreadedCode9296, 1, PSend9297);
    Constant char_8580_Const = new_Constant((Optr)char_8580);
    // at:put:. 
    Send PSend9298 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8580_Const, (Optr)PBlock9295);
    Character char_9299 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9302 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9302, (Optr)&t_block_return);
    Block PBlock9300 = new_Block_with(empty_Array, empty_Array, PThreadedCode9301, 1, PSend9302);
    Constant char_9299_Const = new_Constant((Optr)char_9299);
    // at:put:. 
    Send PSend9303 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9299_Const, (Optr)PBlock9300);
    Character char_9304 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9307 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9306 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9307, (Optr)&t_block_return);
    Block PBlock9305 = new_Block_with(empty_Array, empty_Array, PThreadedCode9306, 1, PSend9307);
    Constant char_9304_Const = new_Constant((Optr)char_9304);
    // at:put:. 
    Send PSend9308 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9304_Const, (Optr)PBlock9305);
    Character char_8511 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9311 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9310 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9311, (Optr)&t_block_return);
    Block PBlock9309 = new_Block_with(empty_Array, empty_Array, PThreadedCode9310, 1, PSend9311);
    Constant char_8511_Const = new_Constant((Optr)char_8511);
    // at:put:. 
    Send PSend9312 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8511_Const, (Optr)PBlock9309);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9315 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9315, (Optr)&t_block_return);
    Block PBlock9313 = new_Block_with(empty_Array, empty_Array, PThreadedCode9314, 1, PSend9315);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9316 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9313);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9319 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9318 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9319, (Optr)&t_block_return);
    Block PBlock9317 = new_Block_with(empty_Array, empty_Array, PThreadedCode9318, 1, PSend9319);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9320 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9317);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9323 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9322 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9323, (Optr)&t_block_return);
    Block PBlock9321 = new_Block_with(empty_Array, empty_Array, PThreadedCode9322, 1, PSend9323);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9324 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9321);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9327 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9327, (Optr)&t_block_return);
    Block PBlock9325 = new_Block_with(empty_Array, empty_Array, PThreadedCode9326, 1, PSend9327);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9328 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9325);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9331 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9330 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9331, (Optr)&t_block_return);
    Block PBlock9329 = new_Block_with(empty_Array, empty_Array, PThreadedCode9330, 1, PSend9331);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9332 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9329);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9335 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9334 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9335, (Optr)&t_block_return);
    Block PBlock9333 = new_Block_with(empty_Array, empty_Array, PThreadedCode9334, 1, PSend9335);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9336 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9333);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9339 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9338 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9339, (Optr)&t_block_return);
    Block PBlock9337 = new_Block_with(empty_Array, empty_Array, PThreadedCode9338, 1, PSend9339);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9340 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9337);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9343 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9342 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9343, (Optr)&t_block_return);
    Block PBlock9341 = new_Block_with(empty_Array, empty_Array, PThreadedCode9342, 1, PSend9343);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9344 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9341);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9347 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9346 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9347, (Optr)&t_block_return);
    Block PBlock9345 = new_Block_with(empty_Array, empty_Array, PThreadedCode9346, 1, PSend9347);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9348 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9345);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9351 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9350 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9351, (Optr)&t_block_return);
    Block PBlock9349 = new_Block_with(empty_Array, empty_Array, PThreadedCode9350, 1, PSend9351);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9352 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9349);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9355 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9355, (Optr)&t_block_return);
    Block PBlock9353 = new_Block_with(empty_Array, empty_Array, PThreadedCode9354, 1, PSend9355);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9356 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9353);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9359 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9358 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9359, (Optr)&t_block_return);
    Block PBlock9357 = new_Block_with(empty_Array, empty_Array, PThreadedCode9358, 1, PSend9359);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9360 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9357);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9363 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9362 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9363, (Optr)&t_block_return);
    Block PBlock9361 = new_Block_with(empty_Array, empty_Array, PThreadedCode9362, 1, PSend9363);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9364 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9361);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9367 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9366 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9367, (Optr)&t_block_return);
    Block PBlock9365 = new_Block_with(empty_Array, empty_Array, PThreadedCode9366, 1, PSend9367);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9368 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9365);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9371 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9370 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9371, (Optr)&t_block_return);
    Block PBlock9369 = new_Block_with(empty_Array, empty_Array, PThreadedCode9370, 1, PSend9371);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9372 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9369);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9375 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9374 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9375, (Optr)&t_block_return);
    Block PBlock9373 = new_Block_with(empty_Array, empty_Array, PThreadedCode9374, 1, PSend9375);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9376 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9373);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9379 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9378 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9379, (Optr)&t_block_return);
    Block PBlock9377 = new_Block_with(empty_Array, empty_Array, PThreadedCode9378, 1, PSend9379);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9380 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9377);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9383 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9382 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9383, (Optr)&t_block_return);
    Block PBlock9381 = new_Block_with(empty_Array, empty_Array, PThreadedCode9382, 1, PSend9383);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9384 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9381);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9387 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9386 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9387, (Optr)&t_block_return);
    Block PBlock9385 = new_Block_with(empty_Array, empty_Array, PThreadedCode9386, 1, PSend9387);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9388 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9385);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9391 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9390 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9391, (Optr)&t_block_return);
    Block PBlock9389 = new_Block_with(empty_Array, empty_Array, PThreadedCode9390, 1, PSend9391);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9392 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9389);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9395 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9394 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9395, (Optr)&t_block_return);
    Block PBlock9393 = new_Block_with(empty_Array, empty_Array, PThreadedCode9394, 1, PSend9395);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9396 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9393);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9399 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9398 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9399, (Optr)&t_block_return);
    Block PBlock9397 = new_Block_with(empty_Array, empty_Array, PThreadedCode9398, 1, PSend9399);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9400 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9397);
    Character char_8457 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9403 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9402 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9403, (Optr)&t_block_return);
    Block PBlock9401 = new_Block_with(empty_Array, empty_Array, PThreadedCode9402, 1, PSend9403);
    Constant char_8457_Const = new_Constant((Optr)char_8457);
    // at:put:. 
    Send PSend9404 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8457_Const, (Optr)PBlock9401);
    Array PThreadedCode9289 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9290, (Optr)&t_push_closure, (Optr)PBlock9291, (Optr)&t_send2, (Optr)PSend9294, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8580, (Optr)&t_push_closure, (Optr)PBlock9295, (Optr)&t_send2, (Optr)PSend9298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9299, (Optr)&t_push_closure, (Optr)PBlock9300, (Optr)&t_send2, (Optr)PSend9303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9304, (Optr)&t_push_closure, (Optr)PBlock9305, (Optr)&t_send2, (Optr)PSend9308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8511, (Optr)&t_push_closure, (Optr)PBlock9309, (Optr)&t_send2, (Optr)PSend9312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9313, (Optr)&t_send2, (Optr)PSend9316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9317, (Optr)&t_send2, (Optr)PSend9320, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9321, (Optr)&t_send2, (Optr)PSend9324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9325, (Optr)&t_send2, (Optr)PSend9328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9329, (Optr)&t_send2, (Optr)PSend9332, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9333, (Optr)&t_send2, (Optr)PSend9336, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9337, (Optr)&t_send2, (Optr)PSend9340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9341, (Optr)&t_send2, (Optr)PSend9344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9345, (Optr)&t_send2, (Optr)PSend9348, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9349, (Optr)&t_send2, (Optr)PSend9352, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9353, (Optr)&t_send2, (Optr)PSend9356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9357, (Optr)&t_send2, (Optr)PSend9360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9361, (Optr)&t_send2, (Optr)PSend9364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9365, (Optr)&t_send2, (Optr)PSend9368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9369, (Optr)&t_send2, (Optr)PSend9372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9373, (Optr)&t_send2, (Optr)PSend9376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9377, (Optr)&t_send2, (Optr)PSend9380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9381, (Optr)&t_send2, (Optr)PSend9384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9385, (Optr)&t_send2, (Optr)PSend9388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9389, (Optr)&t_send2, (Optr)PSend9392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9393, (Optr)&t_send2, (Optr)PSend9396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9397, (Optr)&t_send2, (Optr)PSend9400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8457, (Optr)&t_push_closure, (Optr)PBlock9401, (Optr)&t_send2, (Optr)PSend9404, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9287 = new_Method_with(PArray9288, empty_Array, empty_Array, PThreadedCode9289, 29, PSend9294, PSend9298, PSend9303, PSend9308, PSend9312, PSend9316, PSend9320, PSend9324, PSend9328, PSend9332, PSend9336, PSend9340, PSend9344, PSend9348, PSend9352, PSend9356, PSend9360, PSend9364, PSend9368, PSend9372, PSend9376, PSend9380, PSend9384, PSend9388, PSend9392, PSend9396, PSend9400, PSend9404, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9287, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9406 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9408 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9407 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9408, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9405 = new_Method_with(PArray9406, empty_Array, empty_Array, PThreadedCode9407, 2, PAssign9408, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9405, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9410 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9414 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9413 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9414, (Optr)&t_block_return);
    Block PBlock9412 = new_Block_with(empty_Array, empty_Array, PThreadedCode9413, 1, PSend9414);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9415 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9412);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9418 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9417 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9418, (Optr)&t_block_return);
    Block PBlock9416 = new_Block_with(empty_Array, empty_Array, PThreadedCode9417, 1, PSend9418);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9419 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9416);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9422 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9421 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9422, (Optr)&t_block_return);
    Block PBlock9420 = new_Block_with(empty_Array, empty_Array, PThreadedCode9421, 1, PSend9422);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9423 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9420);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9426 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9425 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9426, (Optr)&t_block_return);
    Block PBlock9424 = new_Block_with(empty_Array, empty_Array, PThreadedCode9425, 1, PSend9426);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9427 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9424);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9430 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9429 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9430, (Optr)&t_block_return);
    Block PBlock9428 = new_Block_with(empty_Array, empty_Array, PThreadedCode9429, 1, PSend9430);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9431 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9428);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9434 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9433 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9434, (Optr)&t_block_return);
    Block PBlock9432 = new_Block_with(empty_Array, empty_Array, PThreadedCode9433, 1, PSend9434);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9435 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9432);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9438 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9437 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9438, (Optr)&t_block_return);
    Block PBlock9436 = new_Block_with(empty_Array, empty_Array, PThreadedCode9437, 1, PSend9438);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9439 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9436);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9442 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9441 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9442, (Optr)&t_block_return);
    Block PBlock9440 = new_Block_with(empty_Array, empty_Array, PThreadedCode9441, 1, PSend9442);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9443 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9440);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9446 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9446, (Optr)&t_block_return);
    Block PBlock9444 = new_Block_with(empty_Array, empty_Array, PThreadedCode9445, 1, PSend9446);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9447 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9444);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9450 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9449 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9450, (Optr)&t_block_return);
    Block PBlock9448 = new_Block_with(empty_Array, empty_Array, PThreadedCode9449, 1, PSend9450);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9451 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9448);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9454 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9453 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9454, (Optr)&t_block_return);
    Block PBlock9452 = new_Block_with(empty_Array, empty_Array, PThreadedCode9453, 1, PSend9454);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9455 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9452);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9458 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9457 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9458, (Optr)&t_block_return);
    Block PBlock9456 = new_Block_with(empty_Array, empty_Array, PThreadedCode9457, 1, PSend9458);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9459 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9456);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9462 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9461 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9462, (Optr)&t_block_return);
    Block PBlock9460 = new_Block_with(empty_Array, empty_Array, PThreadedCode9461, 1, PSend9462);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9463 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9460);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9466 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9465 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9466, (Optr)&t_block_return);
    Block PBlock9464 = new_Block_with(empty_Array, empty_Array, PThreadedCode9465, 1, PSend9466);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9467 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9464);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9470 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9469 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9470, (Optr)&t_block_return);
    Block PBlock9468 = new_Block_with(empty_Array, empty_Array, PThreadedCode9469, 1, PSend9470);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9471 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9468);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9474 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9473 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9474, (Optr)&t_block_return);
    Block PBlock9472 = new_Block_with(empty_Array, empty_Array, PThreadedCode9473, 1, PSend9474);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9475 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9472);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9478 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9477 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9478, (Optr)&t_block_return);
    Block PBlock9476 = new_Block_with(empty_Array, empty_Array, PThreadedCode9477, 1, PSend9478);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9479 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9476);
    Array PThreadedCode9411 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9412, (Optr)&t_send2, (Optr)PSend9415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9416, (Optr)&t_send2, (Optr)PSend9419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9420, (Optr)&t_send2, (Optr)PSend9423, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9424, (Optr)&t_send2, (Optr)PSend9427, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9428, (Optr)&t_send2, (Optr)PSend9431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9432, (Optr)&t_send2, (Optr)PSend9435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9436, (Optr)&t_send2, (Optr)PSend9439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9440, (Optr)&t_send2, (Optr)PSend9443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9444, (Optr)&t_send2, (Optr)PSend9447, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9448, (Optr)&t_send2, (Optr)PSend9451, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9452, (Optr)&t_send2, (Optr)PSend9455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9456, (Optr)&t_send2, (Optr)PSend9459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9460, (Optr)&t_send2, (Optr)PSend9463, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9464, (Optr)&t_send2, (Optr)PSend9467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9468, (Optr)&t_send2, (Optr)PSend9471, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9472, (Optr)&t_send2, (Optr)PSend9475, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9476, (Optr)&t_send2, (Optr)PSend9479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9409 = new_Method_with(PArray9410, empty_Array, empty_Array, PThreadedCode9411, 18, PSend9415, PSend9419, PSend9423, PSend9427, PSend9431, PSend9435, PSend9439, PSend9443, PSend9447, PSend9451, PSend9455, PSend9459, PSend9463, PSend9467, PSend9471, PSend9475, PSend9479, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9409, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9481 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9484 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9483 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9484);
    Character char_9208 = new_Character(L'0');
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9488 = new_Send((Optr)char_9208_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9214 = new_Character(L'9');
    Constant char_9214_Const = new_Constant((Optr)char_9214);
    // <=. 
    Send PSend9491 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9214_Const);
    Array PThreadedCode9490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9214, (Optr)&t_send1, (Optr)PSend9491, (Optr)&t_block_return);
    Block PBlock9489 = new_Block_with(empty_Array, empty_Array, PThreadedCode9490, 1, PSend9491);
    // and:. 
    Send PSend9487 = new_Send((Optr)PSend9488, SMB_and_, 1, (Optr)PBlock9489);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9494 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9495 = new_Send((Optr)char_9208_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9496 = new_Send((Optr)PSend9494, SMB__minus_, 1, (Optr)PSend9495);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9497 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9496);
    Array PThreadedCode9493 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9494, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send0, (Optr)PSend9495, (Optr)&t_send1, (Optr)PSend9496, (Optr)&t_send1, (Optr)PSend9497, (Optr)&t_block_return);
    Block PBlock9492 = new_Block_with(empty_Array, empty_Array, PThreadedCode9493, 1, PSend9497);
    String string_9502 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9502_Const = new_Constant((Optr)string_9502);
    // fail:in:. 
    Send PSend9503 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9502_Const);
    Array PThreadedCode9501 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9502, (Optr)&t_send2, (Optr)PSend9503, (Optr)&t_block_return);
    Block PBlock9500 = new_Block_with(empty_Array, empty_Array, PThreadedCode9501, 1, PSend9503);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9504 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9500);
    Array PThreadedCode9499 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9500, (Optr)&t_send2, (Optr)PSend9504, (Optr)&t_block_return);
    Block PBlock9498 = new_Block_with(empty_Array, empty_Array, PThreadedCode9499, 1, PSend9504);
    // ifTrue:ifFalse:. 
    Send PSend9486 = new_Send((Optr)PSend9487, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9492, (Optr)PBlock9498);
    Assign PAssign9485 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9486);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9505 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9482 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9483, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9484, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9485, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9488, (Optr)&t_push_closure, (Optr)PBlock9489, (Optr)&t_send1, (Optr)PSend9487, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9486, (Optr)PBlock9492, (Optr)PBlock9498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9505, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9480 = new_Method_with(empty_Array, PArray9481, empty_Array, PThreadedCode9482, 4, PAssign9483, PAssign9485, PSend9505, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9480, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9507 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9509 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9510 = new_Send((Optr)PSuper9509, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9508 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9509, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9510, (Optr)&t_method_return);
    Method PMethod9506 = new_Method_with(PArray9507, empty_Array, empty_Array, PThreadedCode9508, 1, PSend9510);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9506, HEADER(IO_Term_TermInputDriver_Class));
    store_method(HEADER(IO_Term_TermInputDriver_Class), SMB_named_, MC_SMB_named_);
}

void init_IO_Term_PVTermInputDriver_layout() {
    layout_IO_Term_TermInputDriver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TermInputDriver = new_Symbol(L"TermInputDriver");
    slot_IO_Term_TermInputDriver_input = (Optr)new_Slot(0, L"input");
    slot_IO_Term_TermInputDriver_handler = (Optr)new_Slot(1, L"handler");
    slot_IO_Term_TermInputDriver_normal = (Optr)new_Slot(2, L"normal");
    slot_IO_Term_TermInputDriver_csi = (Optr)new_Slot(3, L"csi");
    slot_IO_Term_TermInputDriver_ss3 = (Optr)new_Slot(4, L"ss3");
    layout_IO_Term_TermInputDriver = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_TermInputDriver)->values[0] = slot_IO_Term_TermInputDriver_input; // input 
    ((Array)layout_IO_Term_TermInputDriver)->values[1] = slot_IO_Term_TermInputDriver_handler; // handler 
    ((Array)layout_IO_Term_TermInputDriver)->values[2] = slot_IO_Term_TermInputDriver_normal; // normal 
    ((Array)layout_IO_Term_TermInputDriver)->values[3] = slot_IO_Term_TermInputDriver_csi; // csi 
    ((Array)layout_IO_Term_TermInputDriver)->values[4] = slot_IO_Term_TermInputDriver_ss3; // ss3 
    IO_Term_TermInputDriver_Class = (Class)new_Class(Object_Class, layout_IO_Term_TermInputDriver_Class_class);
    IO_Term_TermInputDriver_Class->layout = layout_IO_Term_TermInputDriver;
    IO_Term_TermInputDriver_Class->name = SMB_TermInputDriver;
    
}

void init_IO_Term_PVTermInputDriver_methods() {
    init_SMB_initializeSS3_();
    init_SMB_readC1();
    init_SMB_input_();
    init_SMB_continueReadCSINumber_();
    init_SMB_initialize();
    init_SMB_fail_in_();
    init_SMB_read();
    init_SMB_readSS3();
    init_SMB_initializeCSI_();
    init_SMB_handler_();
    init_SMB_initializeNormal_();
    init_SMB_readCSI();
    init_class_SMB_named_();
    
}