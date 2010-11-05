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
    Array PArray8990 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_8992 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend8995 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode8994 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend8995, (Optr)&t_block_return);
    Block PBlock8993 = new_Block_with(empty_Array, empty_Array, PThreadedCode8994, 1, PSend8995);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_8992_Const = new_Constant((Optr)char_8992);
    // at:put:. 
    Send PSend8996 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8992_Const, (Optr)PBlock8993);
    Character char_8997 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9000 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode8999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9000, (Optr)&t_block_return);
    Block PBlock8998 = new_Block_with(empty_Array, empty_Array, PThreadedCode8999, 1, PSend9000);
    Constant char_8997_Const = new_Constant((Optr)char_8997);
    // at:put:. 
    Send PSend9001 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8997_Const, (Optr)PBlock8998);
    Character char_9002 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9005 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9004 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9005, (Optr)&t_block_return);
    Block PBlock9003 = new_Block_with(empty_Array, empty_Array, PThreadedCode9004, 1, PSend9005);
    Constant char_9002_Const = new_Constant((Optr)char_9002);
    // at:put:. 
    Send PSend9006 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9002_Const, (Optr)PBlock9003);
    Character char_9007 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9010 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9010, (Optr)&t_block_return);
    Block PBlock9008 = new_Block_with(empty_Array, empty_Array, PThreadedCode9009, 1, PSend9010);
    Constant char_9007_Const = new_Constant((Optr)char_9007);
    // at:put:. 
    Send PSend9011 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9007_Const, (Optr)PBlock9008);
    Character char_9012 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9015 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9014 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9015, (Optr)&t_block_return);
    Block PBlock9013 = new_Block_with(empty_Array, empty_Array, PThreadedCode9014, 1, PSend9015);
    Constant char_9012_Const = new_Constant((Optr)char_9012);
    // at:put:. 
    Send PSend9016 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9012_Const, (Optr)PBlock9013);
    Character char_9017 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9020 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9019 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9020, (Optr)&t_block_return);
    Block PBlock9018 = new_Block_with(empty_Array, empty_Array, PThreadedCode9019, 1, PSend9020);
    Constant char_9017_Const = new_Constant((Optr)char_9017);
    // at:put:. 
    Send PSend9021 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9017_Const, (Optr)PBlock9018);
    Character char_9022 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9025 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9024 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9025, (Optr)&t_block_return);
    Block PBlock9023 = new_Block_with(empty_Array, empty_Array, PThreadedCode9024, 1, PSend9025);
    Constant char_9022_Const = new_Constant((Optr)char_9022);
    // at:put:. 
    Send PSend9026 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9022_Const, (Optr)PBlock9023);
    Character char_9027 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9030 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9029 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9030, (Optr)&t_block_return);
    Block PBlock9028 = new_Block_with(empty_Array, empty_Array, PThreadedCode9029, 1, PSend9030);
    Constant char_9027_Const = new_Constant((Optr)char_9027);
    // at:put:. 
    Send PSend9031 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9027_Const, (Optr)PBlock9028);
    Character char_9032 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9035 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9034 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9035, (Optr)&t_block_return);
    Block PBlock9033 = new_Block_with(empty_Array, empty_Array, PThreadedCode9034, 1, PSend9035);
    Constant char_9032_Const = new_Constant((Optr)char_9032);
    // at:put:. 
    Send PSend9036 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9032_Const, (Optr)PBlock9033);
    Character char_9037 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9040 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9039 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9040, (Optr)&t_block_return);
    Block PBlock9038 = new_Block_with(empty_Array, empty_Array, PThreadedCode9039, 1, PSend9040);
    Constant char_9037_Const = new_Constant((Optr)char_9037);
    // at:put:. 
    Send PSend9041 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9037_Const, (Optr)PBlock9038);
    Character char_8455 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9044 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9043 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9044, (Optr)&t_block_return);
    Block PBlock9042 = new_Block_with(empty_Array, empty_Array, PThreadedCode9043, 1, PSend9044);
    Constant char_8455_Const = new_Constant((Optr)char_8455);
    // at:put:. 
    Send PSend9045 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8455_Const, (Optr)PBlock9042);
    Character char_9046 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9049 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9048 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9049, (Optr)&t_block_return);
    Block PBlock9047 = new_Block_with(empty_Array, empty_Array, PThreadedCode9048, 1, PSend9049);
    Constant char_9046_Const = new_Constant((Optr)char_9046);
    // at:put:. 
    Send PSend9050 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9046_Const, (Optr)PBlock9047);
    Character char_9051 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9054 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9053 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9054, (Optr)&t_block_return);
    Block PBlock9052 = new_Block_with(empty_Array, empty_Array, PThreadedCode9053, 1, PSend9054);
    Constant char_9051_Const = new_Constant((Optr)char_9051);
    // at:put:. 
    Send PSend9055 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9051_Const, (Optr)PBlock9052);
    Character char_9056 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9059 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9058 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9059, (Optr)&t_block_return);
    Block PBlock9057 = new_Block_with(empty_Array, empty_Array, PThreadedCode9058, 1, PSend9059);
    Constant char_9056_Const = new_Constant((Optr)char_9056);
    // at:put:. 
    Send PSend9060 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9056_Const, (Optr)PBlock9057);
    Character char_9061 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9064 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9063 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9064, (Optr)&t_block_return);
    Block PBlock9062 = new_Block_with(empty_Array, empty_Array, PThreadedCode9063, 1, PSend9064);
    Constant char_9061_Const = new_Constant((Optr)char_9061);
    // at:put:. 
    Send PSend9065 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9061_Const, (Optr)PBlock9062);
    Character char_9066 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9069 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9068 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9069, (Optr)&t_block_return);
    Block PBlock9067 = new_Block_with(empty_Array, empty_Array, PThreadedCode9068, 1, PSend9069);
    Constant char_9066_Const = new_Constant((Optr)char_9066);
    // at:put:. 
    Send PSend9070 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9066_Const, (Optr)PBlock9067);
    Character char_9071 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9074 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9073 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9074, (Optr)&t_block_return);
    Block PBlock9072 = new_Block_with(empty_Array, empty_Array, PThreadedCode9073, 1, PSend9074);
    Constant char_9071_Const = new_Constant((Optr)char_9071);
    // at:put:. 
    Send PSend9075 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9071_Const, (Optr)PBlock9072);
    Character char_9076 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9079 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9078 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9079, (Optr)&t_block_return);
    Block PBlock9077 = new_Block_with(empty_Array, empty_Array, PThreadedCode9078, 1, PSend9079);
    Constant char_9076_Const = new_Constant((Optr)char_9076);
    // at:put:. 
    Send PSend9080 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9076_Const, (Optr)PBlock9077);
    Character char_9081 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9084 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9084, (Optr)&t_block_return);
    Block PBlock9082 = new_Block_with(empty_Array, empty_Array, PThreadedCode9083, 1, PSend9084);
    Constant char_9081_Const = new_Constant((Optr)char_9081);
    // at:put:. 
    Send PSend9085 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9081_Const, (Optr)PBlock9082);
    Character char_9086 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9089 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9089, (Optr)&t_block_return);
    Block PBlock9087 = new_Block_with(empty_Array, empty_Array, PThreadedCode9088, 1, PSend9089);
    Constant char_9086_Const = new_Constant((Optr)char_9086);
    // at:put:. 
    Send PSend9090 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9086_Const, (Optr)PBlock9087);
    Array PThreadedCode8991 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8992, (Optr)&t_push_closure, (Optr)PBlock8993, (Optr)&t_send2, (Optr)PSend8996, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8997, (Optr)&t_push_closure, (Optr)PBlock8998, (Optr)&t_send2, (Optr)PSend9001, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9002, (Optr)&t_push_closure, (Optr)PBlock9003, (Optr)&t_send2, (Optr)PSend9006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9007, (Optr)&t_push_closure, (Optr)PBlock9008, (Optr)&t_send2, (Optr)PSend9011, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9012, (Optr)&t_push_closure, (Optr)PBlock9013, (Optr)&t_send2, (Optr)PSend9016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9017, (Optr)&t_push_closure, (Optr)PBlock9018, (Optr)&t_send2, (Optr)PSend9021, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9022, (Optr)&t_push_closure, (Optr)PBlock9023, (Optr)&t_send2, (Optr)PSend9026, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9027, (Optr)&t_push_closure, (Optr)PBlock9028, (Optr)&t_send2, (Optr)PSend9031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9032, (Optr)&t_push_closure, (Optr)PBlock9033, (Optr)&t_send2, (Optr)PSend9036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9037, (Optr)&t_push_closure, (Optr)PBlock9038, (Optr)&t_send2, (Optr)PSend9041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8455, (Optr)&t_push_closure, (Optr)PBlock9042, (Optr)&t_send2, (Optr)PSend9045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9046, (Optr)&t_push_closure, (Optr)PBlock9047, (Optr)&t_send2, (Optr)PSend9050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9051, (Optr)&t_push_closure, (Optr)PBlock9052, (Optr)&t_send2, (Optr)PSend9055, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9056, (Optr)&t_push_closure, (Optr)PBlock9057, (Optr)&t_send2, (Optr)PSend9060, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9061, (Optr)&t_push_closure, (Optr)PBlock9062, (Optr)&t_send2, (Optr)PSend9065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9066, (Optr)&t_push_closure, (Optr)PBlock9067, (Optr)&t_send2, (Optr)PSend9070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9071, (Optr)&t_push_closure, (Optr)PBlock9072, (Optr)&t_send2, (Optr)PSend9075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9076, (Optr)&t_push_closure, (Optr)PBlock9077, (Optr)&t_send2, (Optr)PSend9080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9081, (Optr)&t_push_closure, (Optr)PBlock9082, (Optr)&t_send2, (Optr)PSend9085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9086, (Optr)&t_push_closure, (Optr)PBlock9087, (Optr)&t_send2, (Optr)PSend9090, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8989 = new_Method_with(PArray8990, empty_Array, empty_Array, PThreadedCode8991, 21, PSend8996, PSend9001, PSend9006, PSend9011, PSend9016, PSend9021, PSend9026, PSend9031, PSend9036, PSend9041, PSend9045, PSend9050, PSend9055, PSend9060, PSend9065, PSend9070, PSend9075, PSend9080, PSend9085, PSend9090, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod8989, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9092 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9095 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9098 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9097 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9098);
    Character char_8373 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8373_Const = new_Constant((Optr)char_8373);
    // =. 
    Send PSend9099 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8373_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9103 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9104 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9103);
    Array PThreadedCode9102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9103, (Optr)&t_send1, (Optr)PSend9104, (Optr)&t_block_return);
    Block PBlock9101 = new_Block_with(empty_Array, empty_Array, PThreadedCode9102, 1, PSend9104);
    // ifTrue:. 
    Send PSend9100 = new_Send((Optr)PSend9099, SMB_ifTrue_, 1, (Optr)PBlock9101);
    Character char_8746 = new_Character(L'O');
    Constant char_8746_Const = new_Constant((Optr)char_8746);
    // =. 
    Send PSend9105 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8746_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9109 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9110 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9109);
    Array PThreadedCode9108 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9109, (Optr)&t_send1, (Optr)PSend9110, (Optr)&t_block_return);
    Block PBlock9107 = new_Block_with(empty_Array, empty_Array, PThreadedCode9108, 1, PSend9110);
    // ifTrue:. 
    Send PSend9106 = new_Send((Optr)PSend9105, SMB_ifTrue_, 1, (Optr)PBlock9107);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9111 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9096 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9097, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8373, (Optr)&t_send1, (Optr)PSend9099, (Optr)&t_send_ifTrue_, (Optr)PSend9100, (Optr)PBlock9101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8746, (Optr)&t_send1, (Optr)PSend9105, (Optr)&t_send_ifTrue_, (Optr)PSend9106, (Optr)PBlock9107, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9111, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9094 = new_Block_with(PArray9095, empty_Array, PThreadedCode9096, 5, PAssign9097, PSend9100, PSend9106, PSend9111, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9112 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9094);
    Array PThreadedCode9093 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9094, (Optr)&t_send1, (Optr)PSend9112, (Optr)&t_method_return);
    Method PMethod9091 = new_Method_with(empty_Array, PArray9092, empty_Array, PThreadedCode9093, 1, PSend9112);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9091, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9114 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9116 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9115 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9116, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9113 = new_Method_with(PArray9114, empty_Array, empty_Array, PThreadedCode9115, 2, PAssign9116, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9113, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9118 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9119 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9121 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9124 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9126 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9125 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9126);
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9127 = new_Send((Optr)char_9124_Const, SMB__lt__equals_, 1, (Optr)PAssign9125);
    Character char_9130 = new_Character(L'9');
    Constant char_9130_Const = new_Constant((Optr)char_9130);
    // <=. 
    Send PSend9131 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9130_Const);
    Array PThreadedCode9129 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9130, (Optr)&t_send1, (Optr)PSend9131, (Optr)&t_block_return);
    Block PBlock9128 = new_Block_with(empty_Array, empty_Array, PThreadedCode9129, 1, PSend9131);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9132 = new_Send((Optr)PSend9127, SMB_and_, 1, (Optr)PBlock9128);
    Array PThreadedCode9123 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_push1, (Optr)PAssign9125, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9126, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9127, (Optr)&t_push_closure, (Optr)PBlock9128, (Optr)&t_send1, (Optr)PSend9132, (Optr)&t_block_return);
    Block PBlock9122 = new_Block_with(empty_Array, empty_Array, PThreadedCode9123, 1, PSend9132);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9137 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9139 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9140 = new_Send((Optr)char_9124_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9138 = new_Send((Optr)PSend9139, SMB__minus_, 1, (Optr)PSend9140);
    // +. 
    Send PSend9136 = new_Send((Optr)PSend9137, SMB__plus_, 1, (Optr)PSend9138);
    Assign PAssign9135 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9136);
    Array PThreadedCode9134 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9135, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9137, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9139, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send0, (Optr)PSend9140, (Optr)&t_send1, (Optr)PSend9138, (Optr)&t_send1, (Optr)PSend9136, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9133 = new_Block_with(empty_Array, empty_Array, PThreadedCode9134, 1, PAssign9135);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9141 = new_Send((Optr)PBlock9122, SMB_whileTrue_, 1, (Optr)PBlock9133);
    Character char_9142 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9142_Const = new_Constant((Optr)char_9142);
    // =. 
    Send PSend9143 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9142_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9147 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9147_Const = new_Constant((Optr)string_9147);
    // fail:in:. 
    Send PSend9148 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9147_Const);
    Array PThreadedCode9146 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9147, (Optr)&t_send2, (Optr)PSend9148, (Optr)&t_block_return);
    Block PBlock9145 = new_Block_with(empty_Array, empty_Array, PThreadedCode9146, 1, PSend9148);
    // ifFalse:. 
    Send PSend9144 = new_Send((Optr)PSend9143, SMB_ifFalse_, 1, (Optr)PBlock9145);
    String string_9151 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9151_Const = new_Constant((Optr)string_9151);
    // fail:in:. 
    Send PSend9152 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9151_Const);
    Array PThreadedCode9150 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9151, (Optr)&t_send2, (Optr)PSend9152, (Optr)&t_block_return);
    Block PBlock9149 = new_Block_with(empty_Array, empty_Array, PThreadedCode9150, 1, PSend9152);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9153 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9149);
    Array PThreadedCode9120 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9121, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9122, (Optr)&t_push_closure, (Optr)PBlock9133, (Optr)&t_send1, (Optr)PSend9141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9142, (Optr)&t_send1, (Optr)PSend9143, (Optr)&t_send_ifFalse_, (Optr)PSend9144, (Optr)PBlock9145, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9149, (Optr)&t_send2, (Optr)PSend9153, (Optr)&t_method_return);
    Method PMethod9117 = new_Method_with(PArray9118, PArray9119, empty_Array, PThreadedCode9120, 4, PAssign9121, PSend9141, PSend9144, PSend9153);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9117, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9157 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9156 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9157);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9158 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9160 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9159 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9160);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9161 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9163 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9162 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9163);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9164 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9155 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9156, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9157, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9158, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9159, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9160, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9161, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9162, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9164, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9155, 7, PAssign9156, PSend9158, PAssign9159, PSend9161, PAssign9162, PSend9164, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9154, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9166 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9168 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9169 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9169_Const = new_Constant((Optr)string_9169);
    // ,. 
    Send PSend9170 = new_Send((Optr)PSend9168, SMB__append_, 1, (Optr)string_9169_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9171 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9172 = new_Send((Optr)PSend9170, SMB__append_, 1, (Optr)PSend9171);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9173 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9172);
    Array PThreadedCode9167 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9168, (Optr)&t_push1, (Optr)string_9169, (Optr)&t_send1, (Optr)PSend9170, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9171, (Optr)&t_send1, (Optr)PSend9172, (Optr)&t_send1, (Optr)PSend9173, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9165 = new_Method_with(PArray9166, empty_Array, empty_Array, PThreadedCode9167, 2, PSend9173, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9165, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9175 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9178 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9181 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9180 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9181);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9184 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9187 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9188 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9187);
    Array PThreadedCode9186 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9187, (Optr)&t_send1, (Optr)PSend9188, (Optr)&t_block_return);
    Block PBlock9185 = new_Block_with(empty_Array, empty_Array, PThreadedCode9186, 1, PSend9188);
    // at:ifAbsent:. 
    Send PSend9183 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9184, (Optr)PBlock9185);
    Assign PAssign9182 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9183);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9189 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9179 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9180, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9181, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9182, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9184, (Optr)&t_push_closure, (Optr)PBlock9185, (Optr)&t_send2, (Optr)PSend9183, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9189, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9177 = new_Block_with(PArray9178, empty_Array, PThreadedCode9179, 4, PAssign9180, PAssign9182, PSend9189, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9190 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9177);
    Array PThreadedCode9176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9177, (Optr)&t_send1, (Optr)PSend9190, (Optr)&t_method_return);
    Method PMethod9174 = new_Method_with(empty_Array, PArray9175, empty_Array, PThreadedCode9176, 1, PSend9190);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9174, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9192 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9195 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9194 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9195);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9200 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9200_Const = new_Constant((Optr)string_9200);
    // fail:in:. 
    Send PSend9201 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9200_Const);
    Array PThreadedCode9199 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9200, (Optr)&t_send2, (Optr)PSend9201, (Optr)&t_block_return);
    Block PBlock9198 = new_Block_with(empty_Array, empty_Array, PThreadedCode9199, 1, PSend9201);
    // at:ifAbsent:. 
    Send PSend9197 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9198);
    Assign PAssign9196 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9197);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9202 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9193 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9194, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9196, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9198, (Optr)&t_send2, (Optr)PSend9197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9202, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9191 = new_Method_with(empty_Array, PArray9192, empty_Array, PThreadedCode9193, 4, PAssign9194, PAssign9196, PSend9202, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9191, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9204 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9206 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9209 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9208 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9209, (Optr)&t_block_return);
    Block PBlock9207 = new_Block_with(empty_Array, empty_Array, PThreadedCode9208, 1, PSend9209);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9206_Const = new_Constant((Optr)char_9206);
    // at:put:. 
    Send PSend9210 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9206_Const, (Optr)PBlock9207);
    Character char_8496 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9213 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9212 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9213, (Optr)&t_block_return);
    Block PBlock9211 = new_Block_with(empty_Array, empty_Array, PThreadedCode9212, 1, PSend9213);
    Constant char_8496_Const = new_Constant((Optr)char_8496);
    // at:put:. 
    Send PSend9214 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8496_Const, (Optr)PBlock9211);
    Character char_9215 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9218 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9217 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9218, (Optr)&t_block_return);
    Block PBlock9216 = new_Block_with(empty_Array, empty_Array, PThreadedCode9217, 1, PSend9218);
    Constant char_9215_Const = new_Constant((Optr)char_9215);
    // at:put:. 
    Send PSend9219 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9215_Const, (Optr)PBlock9216);
    Character char_9220 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9223 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9222 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9223, (Optr)&t_block_return);
    Block PBlock9221 = new_Block_with(empty_Array, empty_Array, PThreadedCode9222, 1, PSend9223);
    Constant char_9220_Const = new_Constant((Optr)char_9220);
    // at:put:. 
    Send PSend9224 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9220_Const, (Optr)PBlock9221);
    Character char_8427 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9227 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9226 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9227, (Optr)&t_block_return);
    Block PBlock9225 = new_Block_with(empty_Array, empty_Array, PThreadedCode9226, 1, PSend9227);
    Constant char_8427_Const = new_Constant((Optr)char_8427);
    // at:put:. 
    Send PSend9228 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8427_Const, (Optr)PBlock9225);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9231 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9230 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9231, (Optr)&t_block_return);
    Block PBlock9229 = new_Block_with(empty_Array, empty_Array, PThreadedCode9230, 1, PSend9231);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9232 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9229);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9235 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9234 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9235, (Optr)&t_block_return);
    Block PBlock9233 = new_Block_with(empty_Array, empty_Array, PThreadedCode9234, 1, PSend9235);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9236 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9233);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9239 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9238 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9239, (Optr)&t_block_return);
    Block PBlock9237 = new_Block_with(empty_Array, empty_Array, PThreadedCode9238, 1, PSend9239);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9240 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9237);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9243 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9242 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9243, (Optr)&t_block_return);
    Block PBlock9241 = new_Block_with(empty_Array, empty_Array, PThreadedCode9242, 1, PSend9243);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9244 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9241);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9247 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9246 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9247, (Optr)&t_block_return);
    Block PBlock9245 = new_Block_with(empty_Array, empty_Array, PThreadedCode9246, 1, PSend9247);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9248 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9245);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9251 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9250 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9251, (Optr)&t_block_return);
    Block PBlock9249 = new_Block_with(empty_Array, empty_Array, PThreadedCode9250, 1, PSend9251);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9252 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9249);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9255 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9254 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9255, (Optr)&t_block_return);
    Block PBlock9253 = new_Block_with(empty_Array, empty_Array, PThreadedCode9254, 1, PSend9255);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9256 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9253);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9259 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9258 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9259, (Optr)&t_block_return);
    Block PBlock9257 = new_Block_with(empty_Array, empty_Array, PThreadedCode9258, 1, PSend9259);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9260 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9257);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9263 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9262 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9263, (Optr)&t_block_return);
    Block PBlock9261 = new_Block_with(empty_Array, empty_Array, PThreadedCode9262, 1, PSend9263);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9264 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9261);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9267 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9266 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9267, (Optr)&t_block_return);
    Block PBlock9265 = new_Block_with(empty_Array, empty_Array, PThreadedCode9266, 1, PSend9267);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9268 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9265);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9271 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9270 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9271, (Optr)&t_block_return);
    Block PBlock9269 = new_Block_with(empty_Array, empty_Array, PThreadedCode9270, 1, PSend9271);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9272 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9269);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9275 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9274 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9275, (Optr)&t_block_return);
    Block PBlock9273 = new_Block_with(empty_Array, empty_Array, PThreadedCode9274, 1, PSend9275);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9276 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9273);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9279 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9278 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9279, (Optr)&t_block_return);
    Block PBlock9277 = new_Block_with(empty_Array, empty_Array, PThreadedCode9278, 1, PSend9279);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9280 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9277);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9283 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9282 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9283, (Optr)&t_block_return);
    Block PBlock9281 = new_Block_with(empty_Array, empty_Array, PThreadedCode9282, 1, PSend9283);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9284 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9281);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9287 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9286 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9287, (Optr)&t_block_return);
    Block PBlock9285 = new_Block_with(empty_Array, empty_Array, PThreadedCode9286, 1, PSend9287);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9288 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9285);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9291 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9291, (Optr)&t_block_return);
    Block PBlock9289 = new_Block_with(empty_Array, empty_Array, PThreadedCode9290, 1, PSend9291);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9292 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9289);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9295 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9294 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9295, (Optr)&t_block_return);
    Block PBlock9293 = new_Block_with(empty_Array, empty_Array, PThreadedCode9294, 1, PSend9295);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9296 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9293);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9299 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9298 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9299, (Optr)&t_block_return);
    Block PBlock9297 = new_Block_with(empty_Array, empty_Array, PThreadedCode9298, 1, PSend9299);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9300 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9297);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9303 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9302 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9303, (Optr)&t_block_return);
    Block PBlock9301 = new_Block_with(empty_Array, empty_Array, PThreadedCode9302, 1, PSend9303);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9304 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9301);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9307 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9306 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9307, (Optr)&t_block_return);
    Block PBlock9305 = new_Block_with(empty_Array, empty_Array, PThreadedCode9306, 1, PSend9307);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9308 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9305);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9311 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9310 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9311, (Optr)&t_block_return);
    Block PBlock9309 = new_Block_with(empty_Array, empty_Array, PThreadedCode9310, 1, PSend9311);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9312 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9309);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9315 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9315, (Optr)&t_block_return);
    Block PBlock9313 = new_Block_with(empty_Array, empty_Array, PThreadedCode9314, 1, PSend9315);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9316 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9313);
    Character char_8373 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9319 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9318 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9319, (Optr)&t_block_return);
    Block PBlock9317 = new_Block_with(empty_Array, empty_Array, PThreadedCode9318, 1, PSend9319);
    Constant char_8373_Const = new_Constant((Optr)char_8373);
    // at:put:. 
    Send PSend9320 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8373_Const, (Optr)PBlock9317);
    Array PThreadedCode9205 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9206, (Optr)&t_push_closure, (Optr)PBlock9207, (Optr)&t_send2, (Optr)PSend9210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8496, (Optr)&t_push_closure, (Optr)PBlock9211, (Optr)&t_send2, (Optr)PSend9214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9215, (Optr)&t_push_closure, (Optr)PBlock9216, (Optr)&t_send2, (Optr)PSend9219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9220, (Optr)&t_push_closure, (Optr)PBlock9221, (Optr)&t_send2, (Optr)PSend9224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8427, (Optr)&t_push_closure, (Optr)PBlock9225, (Optr)&t_send2, (Optr)PSend9228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9229, (Optr)&t_send2, (Optr)PSend9232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9233, (Optr)&t_send2, (Optr)PSend9236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9237, (Optr)&t_send2, (Optr)PSend9240, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9241, (Optr)&t_send2, (Optr)PSend9244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9245, (Optr)&t_send2, (Optr)PSend9248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9249, (Optr)&t_send2, (Optr)PSend9252, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9253, (Optr)&t_send2, (Optr)PSend9256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9257, (Optr)&t_send2, (Optr)PSend9260, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9261, (Optr)&t_send2, (Optr)PSend9264, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9265, (Optr)&t_send2, (Optr)PSend9268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9269, (Optr)&t_send2, (Optr)PSend9272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9273, (Optr)&t_send2, (Optr)PSend9276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9277, (Optr)&t_send2, (Optr)PSend9280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9281, (Optr)&t_send2, (Optr)PSend9284, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9285, (Optr)&t_send2, (Optr)PSend9288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9289, (Optr)&t_send2, (Optr)PSend9292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9293, (Optr)&t_send2, (Optr)PSend9296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9297, (Optr)&t_send2, (Optr)PSend9300, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9301, (Optr)&t_send2, (Optr)PSend9304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9305, (Optr)&t_send2, (Optr)PSend9308, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9309, (Optr)&t_send2, (Optr)PSend9312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9313, (Optr)&t_send2, (Optr)PSend9316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8373, (Optr)&t_push_closure, (Optr)PBlock9317, (Optr)&t_send2, (Optr)PSend9320, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9203 = new_Method_with(PArray9204, empty_Array, empty_Array, PThreadedCode9205, 29, PSend9210, PSend9214, PSend9219, PSend9224, PSend9228, PSend9232, PSend9236, PSend9240, PSend9244, PSend9248, PSend9252, PSend9256, PSend9260, PSend9264, PSend9268, PSend9272, PSend9276, PSend9280, PSend9284, PSend9288, PSend9292, PSend9296, PSend9300, PSend9304, PSend9308, PSend9312, PSend9316, PSend9320, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9203, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9322 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9324 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9323 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9324, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9321 = new_Method_with(PArray9322, empty_Array, empty_Array, PThreadedCode9323, 2, PAssign9324, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9321, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9326 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9330 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9329 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9330, (Optr)&t_block_return);
    Block PBlock9328 = new_Block_with(empty_Array, empty_Array, PThreadedCode9329, 1, PSend9330);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9331 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9328);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9334 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9333 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9334, (Optr)&t_block_return);
    Block PBlock9332 = new_Block_with(empty_Array, empty_Array, PThreadedCode9333, 1, PSend9334);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9335 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9332);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9338 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9337 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9338, (Optr)&t_block_return);
    Block PBlock9336 = new_Block_with(empty_Array, empty_Array, PThreadedCode9337, 1, PSend9338);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9339 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9336);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9342 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9341 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9342, (Optr)&t_block_return);
    Block PBlock9340 = new_Block_with(empty_Array, empty_Array, PThreadedCode9341, 1, PSend9342);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9343 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9340);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9346 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9345 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9346, (Optr)&t_block_return);
    Block PBlock9344 = new_Block_with(empty_Array, empty_Array, PThreadedCode9345, 1, PSend9346);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9347 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9344);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9350 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9349 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9350, (Optr)&t_block_return);
    Block PBlock9348 = new_Block_with(empty_Array, empty_Array, PThreadedCode9349, 1, PSend9350);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9351 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9348);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9354 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9353 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9354, (Optr)&t_block_return);
    Block PBlock9352 = new_Block_with(empty_Array, empty_Array, PThreadedCode9353, 1, PSend9354);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9355 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9352);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9358 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9357 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9358, (Optr)&t_block_return);
    Block PBlock9356 = new_Block_with(empty_Array, empty_Array, PThreadedCode9357, 1, PSend9358);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9359 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9356);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9362 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9362, (Optr)&t_block_return);
    Block PBlock9360 = new_Block_with(empty_Array, empty_Array, PThreadedCode9361, 1, PSend9362);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9363 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9360);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9366 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9365 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9366, (Optr)&t_block_return);
    Block PBlock9364 = new_Block_with(empty_Array, empty_Array, PThreadedCode9365, 1, PSend9366);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9367 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9364);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9370 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9369 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9370, (Optr)&t_block_return);
    Block PBlock9368 = new_Block_with(empty_Array, empty_Array, PThreadedCode9369, 1, PSend9370);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9371 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9368);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9374 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9373 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9374, (Optr)&t_block_return);
    Block PBlock9372 = new_Block_with(empty_Array, empty_Array, PThreadedCode9373, 1, PSend9374);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9375 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9372);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9378 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9377 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9378, (Optr)&t_block_return);
    Block PBlock9376 = new_Block_with(empty_Array, empty_Array, PThreadedCode9377, 1, PSend9378);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9379 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9376);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9382 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9381 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9382, (Optr)&t_block_return);
    Block PBlock9380 = new_Block_with(empty_Array, empty_Array, PThreadedCode9381, 1, PSend9382);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9383 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9380);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9386 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9385 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9386, (Optr)&t_block_return);
    Block PBlock9384 = new_Block_with(empty_Array, empty_Array, PThreadedCode9385, 1, PSend9386);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9387 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9384);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9390 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9389 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9390, (Optr)&t_block_return);
    Block PBlock9388 = new_Block_with(empty_Array, empty_Array, PThreadedCode9389, 1, PSend9390);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9391 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9388);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9394 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9393 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9394, (Optr)&t_block_return);
    Block PBlock9392 = new_Block_with(empty_Array, empty_Array, PThreadedCode9393, 1, PSend9394);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9395 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9392);
    Array PThreadedCode9327 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9328, (Optr)&t_send2, (Optr)PSend9331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9332, (Optr)&t_send2, (Optr)PSend9335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9336, (Optr)&t_send2, (Optr)PSend9339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9340, (Optr)&t_send2, (Optr)PSend9343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9344, (Optr)&t_send2, (Optr)PSend9347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9348, (Optr)&t_send2, (Optr)PSend9351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9352, (Optr)&t_send2, (Optr)PSend9355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9356, (Optr)&t_send2, (Optr)PSend9359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9360, (Optr)&t_send2, (Optr)PSend9363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9364, (Optr)&t_send2, (Optr)PSend9367, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9368, (Optr)&t_send2, (Optr)PSend9371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9372, (Optr)&t_send2, (Optr)PSend9375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9376, (Optr)&t_send2, (Optr)PSend9379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9380, (Optr)&t_send2, (Optr)PSend9383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9384, (Optr)&t_send2, (Optr)PSend9387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9388, (Optr)&t_send2, (Optr)PSend9391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9392, (Optr)&t_send2, (Optr)PSend9395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9325 = new_Method_with(PArray9326, empty_Array, empty_Array, PThreadedCode9327, 18, PSend9331, PSend9335, PSend9339, PSend9343, PSend9347, PSend9351, PSend9355, PSend9359, PSend9363, PSend9367, PSend9371, PSend9375, PSend9379, PSend9383, PSend9387, PSend9391, PSend9395, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9325, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9397 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9400 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9399 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9400);
    Character char_9124 = new_Character(L'0');
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9404 = new_Send((Optr)char_9124_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9130 = new_Character(L'9');
    Constant char_9130_Const = new_Constant((Optr)char_9130);
    // <=. 
    Send PSend9407 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9130_Const);
    Array PThreadedCode9406 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9130, (Optr)&t_send1, (Optr)PSend9407, (Optr)&t_block_return);
    Block PBlock9405 = new_Block_with(empty_Array, empty_Array, PThreadedCode9406, 1, PSend9407);
    // and:. 
    Send PSend9403 = new_Send((Optr)PSend9404, SMB_and_, 1, (Optr)PBlock9405);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9410 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9411 = new_Send((Optr)char_9124_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9412 = new_Send((Optr)PSend9410, SMB__minus_, 1, (Optr)PSend9411);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9413 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9412);
    Array PThreadedCode9409 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9410, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_send0, (Optr)PSend9411, (Optr)&t_send1, (Optr)PSend9412, (Optr)&t_send1, (Optr)PSend9413, (Optr)&t_block_return);
    Block PBlock9408 = new_Block_with(empty_Array, empty_Array, PThreadedCode9409, 1, PSend9413);
    String string_9418 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9418_Const = new_Constant((Optr)string_9418);
    // fail:in:. 
    Send PSend9419 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9418_Const);
    Array PThreadedCode9417 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9418, (Optr)&t_send2, (Optr)PSend9419, (Optr)&t_block_return);
    Block PBlock9416 = new_Block_with(empty_Array, empty_Array, PThreadedCode9417, 1, PSend9419);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9420 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9416);
    Array PThreadedCode9415 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9416, (Optr)&t_send2, (Optr)PSend9420, (Optr)&t_block_return);
    Block PBlock9414 = new_Block_with(empty_Array, empty_Array, PThreadedCode9415, 1, PSend9420);
    // ifTrue:ifFalse:. 
    Send PSend9402 = new_Send((Optr)PSend9403, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9408, (Optr)PBlock9414);
    Assign PAssign9401 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9402);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9421 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9398 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9399, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9401, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9404, (Optr)&t_push_closure, (Optr)PBlock9405, (Optr)&t_send1, (Optr)PSend9403, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9402, (Optr)PBlock9408, (Optr)PBlock9414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9396 = new_Method_with(empty_Array, PArray9397, empty_Array, PThreadedCode9398, 4, PAssign9399, PAssign9401, PSend9421, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9396, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9423 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9425 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9426 = new_Send((Optr)PSuper9425, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9424 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9425, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9426, (Optr)&t_method_return);
    Method PMethod9422 = new_Method_with(PArray9423, empty_Array, empty_Array, PThreadedCode9424, 1, PSend9426);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9422, HEADER(IO_Term_TermInputDriver_Class));
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