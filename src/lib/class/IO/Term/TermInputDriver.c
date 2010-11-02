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
    Array PArray9001 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9003 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9006 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9005 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9006, (Optr)&t_block_return);
    Block PBlock9004 = new_Block_with(empty_Array, empty_Array, PThreadedCode9005, 1, PSend9006);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9003_Const = new_Constant((Optr)char_9003);
    // at:put:. 
    Send PSend9007 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9003_Const, (Optr)PBlock9004);
    Character char_9008 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9011 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9010 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9011, (Optr)&t_block_return);
    Block PBlock9009 = new_Block_with(empty_Array, empty_Array, PThreadedCode9010, 1, PSend9011);
    Constant char_9008_Const = new_Constant((Optr)char_9008);
    // at:put:. 
    Send PSend9012 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9008_Const, (Optr)PBlock9009);
    Character char_9013 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9016 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9015 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9016, (Optr)&t_block_return);
    Block PBlock9014 = new_Block_with(empty_Array, empty_Array, PThreadedCode9015, 1, PSend9016);
    Constant char_9013_Const = new_Constant((Optr)char_9013);
    // at:put:. 
    Send PSend9017 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9013_Const, (Optr)PBlock9014);
    Character char_9018 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9021 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9020 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9021, (Optr)&t_block_return);
    Block PBlock9019 = new_Block_with(empty_Array, empty_Array, PThreadedCode9020, 1, PSend9021);
    Constant char_9018_Const = new_Constant((Optr)char_9018);
    // at:put:. 
    Send PSend9022 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9018_Const, (Optr)PBlock9019);
    Character char_9023 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9026 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9025 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9026, (Optr)&t_block_return);
    Block PBlock9024 = new_Block_with(empty_Array, empty_Array, PThreadedCode9025, 1, PSend9026);
    Constant char_9023_Const = new_Constant((Optr)char_9023);
    // at:put:. 
    Send PSend9027 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9023_Const, (Optr)PBlock9024);
    Character char_9028 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9031 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9030 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9031, (Optr)&t_block_return);
    Block PBlock9029 = new_Block_with(empty_Array, empty_Array, PThreadedCode9030, 1, PSend9031);
    Constant char_9028_Const = new_Constant((Optr)char_9028);
    // at:put:. 
    Send PSend9032 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9028_Const, (Optr)PBlock9029);
    Character char_9033 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9036 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9035 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9036, (Optr)&t_block_return);
    Block PBlock9034 = new_Block_with(empty_Array, empty_Array, PThreadedCode9035, 1, PSend9036);
    Constant char_9033_Const = new_Constant((Optr)char_9033);
    // at:put:. 
    Send PSend9037 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9033_Const, (Optr)PBlock9034);
    Character char_9038 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9041 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9040 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9041, (Optr)&t_block_return);
    Block PBlock9039 = new_Block_with(empty_Array, empty_Array, PThreadedCode9040, 1, PSend9041);
    Constant char_9038_Const = new_Constant((Optr)char_9038);
    // at:put:. 
    Send PSend9042 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9038_Const, (Optr)PBlock9039);
    Character char_9043 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9046 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9046, (Optr)&t_block_return);
    Block PBlock9044 = new_Block_with(empty_Array, empty_Array, PThreadedCode9045, 1, PSend9046);
    Constant char_9043_Const = new_Constant((Optr)char_9043);
    // at:put:. 
    Send PSend9047 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9043_Const, (Optr)PBlock9044);
    Character char_9048 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9051 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9050 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9051, (Optr)&t_block_return);
    Block PBlock9049 = new_Block_with(empty_Array, empty_Array, PThreadedCode9050, 1, PSend9051);
    Constant char_9048_Const = new_Constant((Optr)char_9048);
    // at:put:. 
    Send PSend9052 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9048_Const, (Optr)PBlock9049);
    Character char_8470 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9055 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9055, (Optr)&t_block_return);
    Block PBlock9053 = new_Block_with(empty_Array, empty_Array, PThreadedCode9054, 1, PSend9055);
    Constant char_8470_Const = new_Constant((Optr)char_8470);
    // at:put:. 
    Send PSend9056 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8470_Const, (Optr)PBlock9053);
    Character char_9057 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9060 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9060, (Optr)&t_block_return);
    Block PBlock9058 = new_Block_with(empty_Array, empty_Array, PThreadedCode9059, 1, PSend9060);
    Constant char_9057_Const = new_Constant((Optr)char_9057);
    // at:put:. 
    Send PSend9061 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9057_Const, (Optr)PBlock9058);
    Character char_9062 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9065 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9065, (Optr)&t_block_return);
    Block PBlock9063 = new_Block_with(empty_Array, empty_Array, PThreadedCode9064, 1, PSend9065);
    Constant char_9062_Const = new_Constant((Optr)char_9062);
    // at:put:. 
    Send PSend9066 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9062_Const, (Optr)PBlock9063);
    Character char_9067 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9070 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9069 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9070, (Optr)&t_block_return);
    Block PBlock9068 = new_Block_with(empty_Array, empty_Array, PThreadedCode9069, 1, PSend9070);
    Constant char_9067_Const = new_Constant((Optr)char_9067);
    // at:put:. 
    Send PSend9071 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9067_Const, (Optr)PBlock9068);
    Character char_9072 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9075 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9074 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9075, (Optr)&t_block_return);
    Block PBlock9073 = new_Block_with(empty_Array, empty_Array, PThreadedCode9074, 1, PSend9075);
    Constant char_9072_Const = new_Constant((Optr)char_9072);
    // at:put:. 
    Send PSend9076 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9072_Const, (Optr)PBlock9073);
    Character char_9077 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9080 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9079 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9080, (Optr)&t_block_return);
    Block PBlock9078 = new_Block_with(empty_Array, empty_Array, PThreadedCode9079, 1, PSend9080);
    Constant char_9077_Const = new_Constant((Optr)char_9077);
    // at:put:. 
    Send PSend9081 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9077_Const, (Optr)PBlock9078);
    Character char_9082 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9085 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9084 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9085, (Optr)&t_block_return);
    Block PBlock9083 = new_Block_with(empty_Array, empty_Array, PThreadedCode9084, 1, PSend9085);
    Constant char_9082_Const = new_Constant((Optr)char_9082);
    // at:put:. 
    Send PSend9086 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9082_Const, (Optr)PBlock9083);
    Character char_9087 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9090 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9089 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9090, (Optr)&t_block_return);
    Block PBlock9088 = new_Block_with(empty_Array, empty_Array, PThreadedCode9089, 1, PSend9090);
    Constant char_9087_Const = new_Constant((Optr)char_9087);
    // at:put:. 
    Send PSend9091 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9087_Const, (Optr)PBlock9088);
    Character char_9092 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9095 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9094 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9095, (Optr)&t_block_return);
    Block PBlock9093 = new_Block_with(empty_Array, empty_Array, PThreadedCode9094, 1, PSend9095);
    Constant char_9092_Const = new_Constant((Optr)char_9092);
    // at:put:. 
    Send PSend9096 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9092_Const, (Optr)PBlock9093);
    Character char_9097 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9100 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9099 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9100, (Optr)&t_block_return);
    Block PBlock9098 = new_Block_with(empty_Array, empty_Array, PThreadedCode9099, 1, PSend9100);
    Constant char_9097_Const = new_Constant((Optr)char_9097);
    // at:put:. 
    Send PSend9101 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9097_Const, (Optr)PBlock9098);
    Array PThreadedCode9002 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9003, (Optr)&t_push_closure, (Optr)PBlock9004, (Optr)&t_send2, (Optr)PSend9007, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9008, (Optr)&t_push_closure, (Optr)PBlock9009, (Optr)&t_send2, (Optr)PSend9012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9013, (Optr)&t_push_closure, (Optr)PBlock9014, (Optr)&t_send2, (Optr)PSend9017, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9018, (Optr)&t_push_closure, (Optr)PBlock9019, (Optr)&t_send2, (Optr)PSend9022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9023, (Optr)&t_push_closure, (Optr)PBlock9024, (Optr)&t_send2, (Optr)PSend9027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9028, (Optr)&t_push_closure, (Optr)PBlock9029, (Optr)&t_send2, (Optr)PSend9032, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9033, (Optr)&t_push_closure, (Optr)PBlock9034, (Optr)&t_send2, (Optr)PSend9037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9038, (Optr)&t_push_closure, (Optr)PBlock9039, (Optr)&t_send2, (Optr)PSend9042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9043, (Optr)&t_push_closure, (Optr)PBlock9044, (Optr)&t_send2, (Optr)PSend9047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9048, (Optr)&t_push_closure, (Optr)PBlock9049, (Optr)&t_send2, (Optr)PSend9052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8470, (Optr)&t_push_closure, (Optr)PBlock9053, (Optr)&t_send2, (Optr)PSend9056, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9057, (Optr)&t_push_closure, (Optr)PBlock9058, (Optr)&t_send2, (Optr)PSend9061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9062, (Optr)&t_push_closure, (Optr)PBlock9063, (Optr)&t_send2, (Optr)PSend9066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9067, (Optr)&t_push_closure, (Optr)PBlock9068, (Optr)&t_send2, (Optr)PSend9071, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9072, (Optr)&t_push_closure, (Optr)PBlock9073, (Optr)&t_send2, (Optr)PSend9076, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9077, (Optr)&t_push_closure, (Optr)PBlock9078, (Optr)&t_send2, (Optr)PSend9081, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9082, (Optr)&t_push_closure, (Optr)PBlock9083, (Optr)&t_send2, (Optr)PSend9086, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9087, (Optr)&t_push_closure, (Optr)PBlock9088, (Optr)&t_send2, (Optr)PSend9091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9092, (Optr)&t_push_closure, (Optr)PBlock9093, (Optr)&t_send2, (Optr)PSend9096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9097, (Optr)&t_push_closure, (Optr)PBlock9098, (Optr)&t_send2, (Optr)PSend9101, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9000 = new_Method_with(PArray9001, empty_Array, empty_Array, PThreadedCode9002, 21, PSend9007, PSend9012, PSend9017, PSend9022, PSend9027, PSend9032, PSend9037, PSend9042, PSend9047, PSend9052, PSend9056, PSend9061, PSend9066, PSend9071, PSend9076, PSend9081, PSend9086, PSend9091, PSend9096, PSend9101, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9000, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9103 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9106 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9109 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9108 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9109);
    Character char_8388 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8388_Const = new_Constant((Optr)char_8388);
    // =. 
    Send PSend9110 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8388_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9114 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9114);
    Array PThreadedCode9113 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9114, (Optr)&t_send1, (Optr)PSend9115, (Optr)&t_block_return);
    Block PBlock9112 = new_Block_with(empty_Array, empty_Array, PThreadedCode9113, 1, PSend9115);
    // ifTrue:. 
    Send PSend9111 = new_Send((Optr)PSend9110, SMB_ifTrue_, 1, (Optr)PBlock9112);
    Character char_8761 = new_Character(L'O');
    Constant char_8761_Const = new_Constant((Optr)char_8761);
    // =. 
    Send PSend9116 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8761_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9120 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9121 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9120);
    Array PThreadedCode9119 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9120, (Optr)&t_send1, (Optr)PSend9121, (Optr)&t_block_return);
    Block PBlock9118 = new_Block_with(empty_Array, empty_Array, PThreadedCode9119, 1, PSend9121);
    // ifTrue:. 
    Send PSend9117 = new_Send((Optr)PSend9116, SMB_ifTrue_, 1, (Optr)PBlock9118);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9122 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9107 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9108, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9109, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8388, (Optr)&t_send1, (Optr)PSend9110, (Optr)&t_send_ifTrue_, (Optr)PSend9111, (Optr)PBlock9112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8761, (Optr)&t_send1, (Optr)PSend9116, (Optr)&t_send_ifTrue_, (Optr)PSend9117, (Optr)PBlock9118, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9122, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9105 = new_Block_with(PArray9106, empty_Array, PThreadedCode9107, 5, PAssign9108, PSend9111, PSend9117, PSend9122, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9123 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9105);
    Array PThreadedCode9104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9105, (Optr)&t_send1, (Optr)PSend9123, (Optr)&t_method_return);
    Method PMethod9102 = new_Method_with(empty_Array, PArray9103, empty_Array, PThreadedCode9104, 1, PSend9123);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9102, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9125 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9127 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9127, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9124 = new_Method_with(PArray9125, empty_Array, empty_Array, PThreadedCode9126, 2, PAssign9127, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9124, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9129 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9130 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9132 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9135 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9137 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9136 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9137);
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9138 = new_Send((Optr)char_9135_Const, SMB__lt__equals_, 1, (Optr)PAssign9136);
    Character char_9141 = new_Character(L'9');
    Constant char_9141_Const = new_Constant((Optr)char_9141);
    // <=. 
    Send PSend9142 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9141_Const);
    Array PThreadedCode9140 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9141, (Optr)&t_send1, (Optr)PSend9142, (Optr)&t_block_return);
    Block PBlock9139 = new_Block_with(empty_Array, empty_Array, PThreadedCode9140, 1, PSend9142);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9143 = new_Send((Optr)PSend9138, SMB_and_, 1, (Optr)PBlock9139);
    Array PThreadedCode9134 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_push1, (Optr)PAssign9136, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9137, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9138, (Optr)&t_push_closure, (Optr)PBlock9139, (Optr)&t_send1, (Optr)PSend9143, (Optr)&t_block_return);
    Block PBlock9133 = new_Block_with(empty_Array, empty_Array, PThreadedCode9134, 1, PSend9143);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9148 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9150 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9151 = new_Send((Optr)char_9135_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9149 = new_Send((Optr)PSend9150, SMB__minus_, 1, (Optr)PSend9151);
    // +. 
    Send PSend9147 = new_Send((Optr)PSend9148, SMB__plus_, 1, (Optr)PSend9149);
    Assign PAssign9146 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9147);
    Array PThreadedCode9145 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9146, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9148, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9150, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send0, (Optr)PSend9151, (Optr)&t_send1, (Optr)PSend9149, (Optr)&t_send1, (Optr)PSend9147, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9144 = new_Block_with(empty_Array, empty_Array, PThreadedCode9145, 1, PAssign9146);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9152 = new_Send((Optr)PBlock9133, SMB_whileTrue_, 1, (Optr)PBlock9144);
    Character char_9153 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9153_Const = new_Constant((Optr)char_9153);
    // =. 
    Send PSend9154 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9153_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9158 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9158_Const = new_Constant((Optr)string_9158);
    // fail:in:. 
    Send PSend9159 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9158_Const);
    Array PThreadedCode9157 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9158, (Optr)&t_send2, (Optr)PSend9159, (Optr)&t_block_return);
    Block PBlock9156 = new_Block_with(empty_Array, empty_Array, PThreadedCode9157, 1, PSend9159);
    // ifFalse:. 
    Send PSend9155 = new_Send((Optr)PSend9154, SMB_ifFalse_, 1, (Optr)PBlock9156);
    String string_9162 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9162_Const = new_Constant((Optr)string_9162);
    // fail:in:. 
    Send PSend9163 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9162_Const);
    Array PThreadedCode9161 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9162, (Optr)&t_send2, (Optr)PSend9163, (Optr)&t_block_return);
    Block PBlock9160 = new_Block_with(empty_Array, empty_Array, PThreadedCode9161, 1, PSend9163);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9164 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9160);
    Array PThreadedCode9131 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9132, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9133, (Optr)&t_push_closure, (Optr)PBlock9144, (Optr)&t_send1, (Optr)PSend9152, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9153, (Optr)&t_send1, (Optr)PSend9154, (Optr)&t_send_ifFalse_, (Optr)PSend9155, (Optr)PBlock9156, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9160, (Optr)&t_send2, (Optr)PSend9164, (Optr)&t_method_return);
    Method PMethod9128 = new_Method_with(PArray9129, PArray9130, empty_Array, PThreadedCode9131, 4, PAssign9132, PSend9152, PSend9155, PSend9164);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9128, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9168 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9167 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9168);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9169 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9171 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9170 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9171);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9172 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9174 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9173 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9174);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9175 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9166 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9167, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9169, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9170, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9172, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9173, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9174, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9175, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9165 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9166, 7, PAssign9167, PSend9169, PAssign9170, PSend9172, PAssign9173, PSend9175, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9165, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9177 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9179 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9180 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9180_Const = new_Constant((Optr)string_9180);
    // ,. 
    Send PSend9181 = new_Send((Optr)PSend9179, SMB__append_, 1, (Optr)string_9180_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9182 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9183 = new_Send((Optr)PSend9181, SMB__append_, 1, (Optr)PSend9182);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9184 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9183);
    Array PThreadedCode9178 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9179, (Optr)&t_push1, (Optr)string_9180, (Optr)&t_send1, (Optr)PSend9181, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9182, (Optr)&t_send1, (Optr)PSend9183, (Optr)&t_send1, (Optr)PSend9184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9176 = new_Method_with(PArray9177, empty_Array, empty_Array, PThreadedCode9178, 2, PSend9184, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9176, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9186 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9189 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9192 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9191 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9192);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9195 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9198 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9199 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9198);
    Array PThreadedCode9197 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9198, (Optr)&t_send1, (Optr)PSend9199, (Optr)&t_block_return);
    Block PBlock9196 = new_Block_with(empty_Array, empty_Array, PThreadedCode9197, 1, PSend9199);
    // at:ifAbsent:. 
    Send PSend9194 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9195, (Optr)PBlock9196);
    Assign PAssign9193 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9194);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9200 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9190 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9191, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9193, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9195, (Optr)&t_push_closure, (Optr)PBlock9196, (Optr)&t_send2, (Optr)PSend9194, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9200, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9188 = new_Block_with(PArray9189, empty_Array, PThreadedCode9190, 4, PAssign9191, PAssign9193, PSend9200, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9201 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9188);
    Array PThreadedCode9187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9188, (Optr)&t_send1, (Optr)PSend9201, (Optr)&t_method_return);
    Method PMethod9185 = new_Method_with(empty_Array, PArray9186, empty_Array, PThreadedCode9187, 1, PSend9201);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9185, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9203 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9206 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9205 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9206);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9211 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9211_Const = new_Constant((Optr)string_9211);
    // fail:in:. 
    Send PSend9212 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9211_Const);
    Array PThreadedCode9210 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9211, (Optr)&t_send2, (Optr)PSend9212, (Optr)&t_block_return);
    Block PBlock9209 = new_Block_with(empty_Array, empty_Array, PThreadedCode9210, 1, PSend9212);
    // at:ifAbsent:. 
    Send PSend9208 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9209);
    Assign PAssign9207 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9208);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9213 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9204 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9205, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9206, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9207, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9209, (Optr)&t_send2, (Optr)PSend9208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9213, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9202 = new_Method_with(empty_Array, PArray9203, empty_Array, PThreadedCode9204, 4, PAssign9205, PAssign9207, PSend9213, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9202, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9215 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9217 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9220 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9219 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9220, (Optr)&t_block_return);
    Block PBlock9218 = new_Block_with(empty_Array, empty_Array, PThreadedCode9219, 1, PSend9220);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9217_Const = new_Constant((Optr)char_9217);
    // at:put:. 
    Send PSend9221 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9217_Const, (Optr)PBlock9218);
    Character char_8511 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9224 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9223 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9224, (Optr)&t_block_return);
    Block PBlock9222 = new_Block_with(empty_Array, empty_Array, PThreadedCode9223, 1, PSend9224);
    Constant char_8511_Const = new_Constant((Optr)char_8511);
    // at:put:. 
    Send PSend9225 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8511_Const, (Optr)PBlock9222);
    Character char_9226 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9229 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9228 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9229, (Optr)&t_block_return);
    Block PBlock9227 = new_Block_with(empty_Array, empty_Array, PThreadedCode9228, 1, PSend9229);
    Constant char_9226_Const = new_Constant((Optr)char_9226);
    // at:put:. 
    Send PSend9230 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9226_Const, (Optr)PBlock9227);
    Character char_9231 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9234 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9233 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9234, (Optr)&t_block_return);
    Block PBlock9232 = new_Block_with(empty_Array, empty_Array, PThreadedCode9233, 1, PSend9234);
    Constant char_9231_Const = new_Constant((Optr)char_9231);
    // at:put:. 
    Send PSend9235 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9231_Const, (Optr)PBlock9232);
    Character char_8442 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9238 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9237 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9238, (Optr)&t_block_return);
    Block PBlock9236 = new_Block_with(empty_Array, empty_Array, PThreadedCode9237, 1, PSend9238);
    Constant char_8442_Const = new_Constant((Optr)char_8442);
    // at:put:. 
    Send PSend9239 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8442_Const, (Optr)PBlock9236);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9242 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9241 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9242, (Optr)&t_block_return);
    Block PBlock9240 = new_Block_with(empty_Array, empty_Array, PThreadedCode9241, 1, PSend9242);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9243 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9240);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9246 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9245 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9246, (Optr)&t_block_return);
    Block PBlock9244 = new_Block_with(empty_Array, empty_Array, PThreadedCode9245, 1, PSend9246);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9247 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9244);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9250 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9249 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9250, (Optr)&t_block_return);
    Block PBlock9248 = new_Block_with(empty_Array, empty_Array, PThreadedCode9249, 1, PSend9250);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9251 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9248);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9254 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9253 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9254, (Optr)&t_block_return);
    Block PBlock9252 = new_Block_with(empty_Array, empty_Array, PThreadedCode9253, 1, PSend9254);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9255 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9252);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9258 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9257 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9258, (Optr)&t_block_return);
    Block PBlock9256 = new_Block_with(empty_Array, empty_Array, PThreadedCode9257, 1, PSend9258);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9259 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9256);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9262 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9261 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9262, (Optr)&t_block_return);
    Block PBlock9260 = new_Block_with(empty_Array, empty_Array, PThreadedCode9261, 1, PSend9262);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9263 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9260);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9266 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9265 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9266, (Optr)&t_block_return);
    Block PBlock9264 = new_Block_with(empty_Array, empty_Array, PThreadedCode9265, 1, PSend9266);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9267 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9264);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9270 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9269 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9270, (Optr)&t_block_return);
    Block PBlock9268 = new_Block_with(empty_Array, empty_Array, PThreadedCode9269, 1, PSend9270);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9271 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9268);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9274 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9274, (Optr)&t_block_return);
    Block PBlock9272 = new_Block_with(empty_Array, empty_Array, PThreadedCode9273, 1, PSend9274);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9275 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9272);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9278 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9277 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9278, (Optr)&t_block_return);
    Block PBlock9276 = new_Block_with(empty_Array, empty_Array, PThreadedCode9277, 1, PSend9278);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9279 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9276);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9282 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9282, (Optr)&t_block_return);
    Block PBlock9280 = new_Block_with(empty_Array, empty_Array, PThreadedCode9281, 1, PSend9282);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9283 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9280);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9286 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9286, (Optr)&t_block_return);
    Block PBlock9284 = new_Block_with(empty_Array, empty_Array, PThreadedCode9285, 1, PSend9286);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9287 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9284);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9290 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9289 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9290, (Optr)&t_block_return);
    Block PBlock9288 = new_Block_with(empty_Array, empty_Array, PThreadedCode9289, 1, PSend9290);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9291 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9288);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9294 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9293 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9294, (Optr)&t_block_return);
    Block PBlock9292 = new_Block_with(empty_Array, empty_Array, PThreadedCode9293, 1, PSend9294);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9295 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9292);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9298 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9297 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9298, (Optr)&t_block_return);
    Block PBlock9296 = new_Block_with(empty_Array, empty_Array, PThreadedCode9297, 1, PSend9298);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9299 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9296);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9302 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9302, (Optr)&t_block_return);
    Block PBlock9300 = new_Block_with(empty_Array, empty_Array, PThreadedCode9301, 1, PSend9302);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9303 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9300);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9306 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9305 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9306, (Optr)&t_block_return);
    Block PBlock9304 = new_Block_with(empty_Array, empty_Array, PThreadedCode9305, 1, PSend9306);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9307 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9304);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9310 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9309 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9310, (Optr)&t_block_return);
    Block PBlock9308 = new_Block_with(empty_Array, empty_Array, PThreadedCode9309, 1, PSend9310);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9311 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9308);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9314 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9313 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9314, (Optr)&t_block_return);
    Block PBlock9312 = new_Block_with(empty_Array, empty_Array, PThreadedCode9313, 1, PSend9314);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9315 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9312);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9318 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9317 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9318, (Optr)&t_block_return);
    Block PBlock9316 = new_Block_with(empty_Array, empty_Array, PThreadedCode9317, 1, PSend9318);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9319 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9316);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9322 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9321 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9322, (Optr)&t_block_return);
    Block PBlock9320 = new_Block_with(empty_Array, empty_Array, PThreadedCode9321, 1, PSend9322);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9323 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9320);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9326 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9325 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9326, (Optr)&t_block_return);
    Block PBlock9324 = new_Block_with(empty_Array, empty_Array, PThreadedCode9325, 1, PSend9326);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9327 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9324);
    Character char_8388 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9330 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9329 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9330, (Optr)&t_block_return);
    Block PBlock9328 = new_Block_with(empty_Array, empty_Array, PThreadedCode9329, 1, PSend9330);
    Constant char_8388_Const = new_Constant((Optr)char_8388);
    // at:put:. 
    Send PSend9331 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8388_Const, (Optr)PBlock9328);
    Array PThreadedCode9216 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9217, (Optr)&t_push_closure, (Optr)PBlock9218, (Optr)&t_send2, (Optr)PSend9221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8511, (Optr)&t_push_closure, (Optr)PBlock9222, (Optr)&t_send2, (Optr)PSend9225, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9226, (Optr)&t_push_closure, (Optr)PBlock9227, (Optr)&t_send2, (Optr)PSend9230, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9231, (Optr)&t_push_closure, (Optr)PBlock9232, (Optr)&t_send2, (Optr)PSend9235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8442, (Optr)&t_push_closure, (Optr)PBlock9236, (Optr)&t_send2, (Optr)PSend9239, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9240, (Optr)&t_send2, (Optr)PSend9243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9244, (Optr)&t_send2, (Optr)PSend9247, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9248, (Optr)&t_send2, (Optr)PSend9251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9252, (Optr)&t_send2, (Optr)PSend9255, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9256, (Optr)&t_send2, (Optr)PSend9259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9260, (Optr)&t_send2, (Optr)PSend9263, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9264, (Optr)&t_send2, (Optr)PSend9267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9268, (Optr)&t_send2, (Optr)PSend9271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9272, (Optr)&t_send2, (Optr)PSend9275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9276, (Optr)&t_send2, (Optr)PSend9279, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9280, (Optr)&t_send2, (Optr)PSend9283, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9284, (Optr)&t_send2, (Optr)PSend9287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9288, (Optr)&t_send2, (Optr)PSend9291, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9292, (Optr)&t_send2, (Optr)PSend9295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9296, (Optr)&t_send2, (Optr)PSend9299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9300, (Optr)&t_send2, (Optr)PSend9303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9304, (Optr)&t_send2, (Optr)PSend9307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9308, (Optr)&t_send2, (Optr)PSend9311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9312, (Optr)&t_send2, (Optr)PSend9315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9316, (Optr)&t_send2, (Optr)PSend9319, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9320, (Optr)&t_send2, (Optr)PSend9323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9324, (Optr)&t_send2, (Optr)PSend9327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8388, (Optr)&t_push_closure, (Optr)PBlock9328, (Optr)&t_send2, (Optr)PSend9331, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9214 = new_Method_with(PArray9215, empty_Array, empty_Array, PThreadedCode9216, 29, PSend9221, PSend9225, PSend9230, PSend9235, PSend9239, PSend9243, PSend9247, PSend9251, PSend9255, PSend9259, PSend9263, PSend9267, PSend9271, PSend9275, PSend9279, PSend9283, PSend9287, PSend9291, PSend9295, PSend9299, PSend9303, PSend9307, PSend9311, PSend9315, PSend9319, PSend9323, PSend9327, PSend9331, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9214, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9333 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9335 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9335, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9332 = new_Method_with(PArray9333, empty_Array, empty_Array, PThreadedCode9334, 2, PAssign9335, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9332, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9337 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9341 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9340 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9341, (Optr)&t_block_return);
    Block PBlock9339 = new_Block_with(empty_Array, empty_Array, PThreadedCode9340, 1, PSend9341);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9342 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9339);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9345 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9344 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9345, (Optr)&t_block_return);
    Block PBlock9343 = new_Block_with(empty_Array, empty_Array, PThreadedCode9344, 1, PSend9345);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9346 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9343);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9349 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9348 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9349, (Optr)&t_block_return);
    Block PBlock9347 = new_Block_with(empty_Array, empty_Array, PThreadedCode9348, 1, PSend9349);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9350 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9347);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9353 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9352 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9353, (Optr)&t_block_return);
    Block PBlock9351 = new_Block_with(empty_Array, empty_Array, PThreadedCode9352, 1, PSend9353);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9354 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9351);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9357 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9357, (Optr)&t_block_return);
    Block PBlock9355 = new_Block_with(empty_Array, empty_Array, PThreadedCode9356, 1, PSend9357);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9358 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9355);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9361 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9360 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9361, (Optr)&t_block_return);
    Block PBlock9359 = new_Block_with(empty_Array, empty_Array, PThreadedCode9360, 1, PSend9361);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9362 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9359);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9365 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9364 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9365, (Optr)&t_block_return);
    Block PBlock9363 = new_Block_with(empty_Array, empty_Array, PThreadedCode9364, 1, PSend9365);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9366 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9363);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9369 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9368 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9369, (Optr)&t_block_return);
    Block PBlock9367 = new_Block_with(empty_Array, empty_Array, PThreadedCode9368, 1, PSend9369);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9370 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9367);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9373 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9372 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9373, (Optr)&t_block_return);
    Block PBlock9371 = new_Block_with(empty_Array, empty_Array, PThreadedCode9372, 1, PSend9373);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9374 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9371);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9377 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9376 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9377, (Optr)&t_block_return);
    Block PBlock9375 = new_Block_with(empty_Array, empty_Array, PThreadedCode9376, 1, PSend9377);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9378 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9375);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9381 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9380 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9381, (Optr)&t_block_return);
    Block PBlock9379 = new_Block_with(empty_Array, empty_Array, PThreadedCode9380, 1, PSend9381);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9382 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9379);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9385 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9384 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9385, (Optr)&t_block_return);
    Block PBlock9383 = new_Block_with(empty_Array, empty_Array, PThreadedCode9384, 1, PSend9385);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9386 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9383);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9389 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9388 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9389, (Optr)&t_block_return);
    Block PBlock9387 = new_Block_with(empty_Array, empty_Array, PThreadedCode9388, 1, PSend9389);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9390 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9387);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9393 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9392 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9393, (Optr)&t_block_return);
    Block PBlock9391 = new_Block_with(empty_Array, empty_Array, PThreadedCode9392, 1, PSend9393);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9394 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9391);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9397 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9396 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9397, (Optr)&t_block_return);
    Block PBlock9395 = new_Block_with(empty_Array, empty_Array, PThreadedCode9396, 1, PSend9397);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9398 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9395);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9401 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9400 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9401, (Optr)&t_block_return);
    Block PBlock9399 = new_Block_with(empty_Array, empty_Array, PThreadedCode9400, 1, PSend9401);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9402 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9399);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9405 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9404 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9405, (Optr)&t_block_return);
    Block PBlock9403 = new_Block_with(empty_Array, empty_Array, PThreadedCode9404, 1, PSend9405);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9406 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9403);
    Array PThreadedCode9338 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9339, (Optr)&t_send2, (Optr)PSend9342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9343, (Optr)&t_send2, (Optr)PSend9346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9347, (Optr)&t_send2, (Optr)PSend9350, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9351, (Optr)&t_send2, (Optr)PSend9354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9355, (Optr)&t_send2, (Optr)PSend9358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9359, (Optr)&t_send2, (Optr)PSend9362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9363, (Optr)&t_send2, (Optr)PSend9366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9367, (Optr)&t_send2, (Optr)PSend9370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9371, (Optr)&t_send2, (Optr)PSend9374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9375, (Optr)&t_send2, (Optr)PSend9378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9379, (Optr)&t_send2, (Optr)PSend9382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9383, (Optr)&t_send2, (Optr)PSend9386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9387, (Optr)&t_send2, (Optr)PSend9390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9391, (Optr)&t_send2, (Optr)PSend9394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9395, (Optr)&t_send2, (Optr)PSend9398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9399, (Optr)&t_send2, (Optr)PSend9402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9403, (Optr)&t_send2, (Optr)PSend9406, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9336 = new_Method_with(PArray9337, empty_Array, empty_Array, PThreadedCode9338, 18, PSend9342, PSend9346, PSend9350, PSend9354, PSend9358, PSend9362, PSend9366, PSend9370, PSend9374, PSend9378, PSend9382, PSend9386, PSend9390, PSend9394, PSend9398, PSend9402, PSend9406, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9336, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9408 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9411 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9410 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9411);
    Character char_9135 = new_Character(L'0');
    Constant char_9135_Const = new_Constant((Optr)char_9135);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9415 = new_Send((Optr)char_9135_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9141 = new_Character(L'9');
    Constant char_9141_Const = new_Constant((Optr)char_9141);
    // <=. 
    Send PSend9418 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9141_Const);
    Array PThreadedCode9417 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9141, (Optr)&t_send1, (Optr)PSend9418, (Optr)&t_block_return);
    Block PBlock9416 = new_Block_with(empty_Array, empty_Array, PThreadedCode9417, 1, PSend9418);
    // and:. 
    Send PSend9414 = new_Send((Optr)PSend9415, SMB_and_, 1, (Optr)PBlock9416);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9421 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9422 = new_Send((Optr)char_9135_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9423 = new_Send((Optr)PSend9421, SMB__minus_, 1, (Optr)PSend9422);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9424 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9423);
    Array PThreadedCode9420 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9421, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_send0, (Optr)PSend9422, (Optr)&t_send1, (Optr)PSend9423, (Optr)&t_send1, (Optr)PSend9424, (Optr)&t_block_return);
    Block PBlock9419 = new_Block_with(empty_Array, empty_Array, PThreadedCode9420, 1, PSend9424);
    String string_9429 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9429_Const = new_Constant((Optr)string_9429);
    // fail:in:. 
    Send PSend9430 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9429_Const);
    Array PThreadedCode9428 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9429, (Optr)&t_send2, (Optr)PSend9430, (Optr)&t_block_return);
    Block PBlock9427 = new_Block_with(empty_Array, empty_Array, PThreadedCode9428, 1, PSend9430);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9431 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9427);
    Array PThreadedCode9426 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9427, (Optr)&t_send2, (Optr)PSend9431, (Optr)&t_block_return);
    Block PBlock9425 = new_Block_with(empty_Array, empty_Array, PThreadedCode9426, 1, PSend9431);
    // ifTrue:ifFalse:. 
    Send PSend9413 = new_Send((Optr)PSend9414, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9419, (Optr)PBlock9425);
    Assign PAssign9412 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9413);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9432 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9409 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9410, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9411, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9412, (Optr)&t_push1, (Optr)char_9135, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9415, (Optr)&t_push_closure, (Optr)PBlock9416, (Optr)&t_send1, (Optr)PSend9414, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9413, (Optr)PBlock9419, (Optr)PBlock9425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9432, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9407 = new_Method_with(empty_Array, PArray9408, empty_Array, PThreadedCode9409, 4, PAssign9410, PAssign9412, PSend9432, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9407, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9434 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9436 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9437 = new_Send((Optr)PSuper9436, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9435 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9436, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9437, (Optr)&t_method_return);
    Method PMethod9433 = new_Method_with(PArray9434, empty_Array, empty_Array, PThreadedCode9435, 1, PSend9437);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9433, HEADER(IO_Term_TermInputDriver_Class));
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