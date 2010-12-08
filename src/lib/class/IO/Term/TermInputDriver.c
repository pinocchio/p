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
    Array PArray9322 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9324 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9327 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9327, (Optr)&t_block_return);
    Block PBlock9325 = new_Block_with(empty_Array, empty_Array, PThreadedCode9326, 1, PSend9327);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9324_Const = new_Constant((Optr)char_9324);
    // at:put:. 
    Send PSend9328 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9324_Const, (Optr)PBlock9325);
    Character char_9329 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9332 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9331 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9332, (Optr)&t_block_return);
    Block PBlock9330 = new_Block_with(empty_Array, empty_Array, PThreadedCode9331, 1, PSend9332);
    Constant char_9329_Const = new_Constant((Optr)char_9329);
    // at:put:. 
    Send PSend9333 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9329_Const, (Optr)PBlock9330);
    Character char_9334 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9337 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9336 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9337, (Optr)&t_block_return);
    Block PBlock9335 = new_Block_with(empty_Array, empty_Array, PThreadedCode9336, 1, PSend9337);
    Constant char_9334_Const = new_Constant((Optr)char_9334);
    // at:put:. 
    Send PSend9338 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9334_Const, (Optr)PBlock9335);
    Character char_9339 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9342 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9341 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9342, (Optr)&t_block_return);
    Block PBlock9340 = new_Block_with(empty_Array, empty_Array, PThreadedCode9341, 1, PSend9342);
    Constant char_9339_Const = new_Constant((Optr)char_9339);
    // at:put:. 
    Send PSend9343 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9339_Const, (Optr)PBlock9340);
    Character char_9344 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9347 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9346 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9347, (Optr)&t_block_return);
    Block PBlock9345 = new_Block_with(empty_Array, empty_Array, PThreadedCode9346, 1, PSend9347);
    Constant char_9344_Const = new_Constant((Optr)char_9344);
    // at:put:. 
    Send PSend9348 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9344_Const, (Optr)PBlock9345);
    Character char_9349 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9352 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9352, (Optr)&t_block_return);
    Block PBlock9350 = new_Block_with(empty_Array, empty_Array, PThreadedCode9351, 1, PSend9352);
    Constant char_9349_Const = new_Constant((Optr)char_9349);
    // at:put:. 
    Send PSend9353 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9349_Const, (Optr)PBlock9350);
    Character char_9354 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9357 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9356 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9357, (Optr)&t_block_return);
    Block PBlock9355 = new_Block_with(empty_Array, empty_Array, PThreadedCode9356, 1, PSend9357);
    Constant char_9354_Const = new_Constant((Optr)char_9354);
    // at:put:. 
    Send PSend9358 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9354_Const, (Optr)PBlock9355);
    Character char_9359 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9362 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9362, (Optr)&t_block_return);
    Block PBlock9360 = new_Block_with(empty_Array, empty_Array, PThreadedCode9361, 1, PSend9362);
    Constant char_9359_Const = new_Constant((Optr)char_9359);
    // at:put:. 
    Send PSend9363 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9359_Const, (Optr)PBlock9360);
    Character char_9364 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9367 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9366 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9367, (Optr)&t_block_return);
    Block PBlock9365 = new_Block_with(empty_Array, empty_Array, PThreadedCode9366, 1, PSend9367);
    Constant char_9364_Const = new_Constant((Optr)char_9364);
    // at:put:. 
    Send PSend9368 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9364_Const, (Optr)PBlock9365);
    Character char_9369 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9372 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9371 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9372, (Optr)&t_block_return);
    Block PBlock9370 = new_Block_with(empty_Array, empty_Array, PThreadedCode9371, 1, PSend9372);
    Constant char_9369_Const = new_Constant((Optr)char_9369);
    // at:put:. 
    Send PSend9373 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9369_Const, (Optr)PBlock9370);
    Character char_8787 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9376 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9375 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9376, (Optr)&t_block_return);
    Block PBlock9374 = new_Block_with(empty_Array, empty_Array, PThreadedCode9375, 1, PSend9376);
    Constant char_8787_Const = new_Constant((Optr)char_8787);
    // at:put:. 
    Send PSend9377 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8787_Const, (Optr)PBlock9374);
    Character char_9378 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9381 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9380 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9381, (Optr)&t_block_return);
    Block PBlock9379 = new_Block_with(empty_Array, empty_Array, PThreadedCode9380, 1, PSend9381);
    Constant char_9378_Const = new_Constant((Optr)char_9378);
    // at:put:. 
    Send PSend9382 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9378_Const, (Optr)PBlock9379);
    Character char_9383 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9386 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9385 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9386, (Optr)&t_block_return);
    Block PBlock9384 = new_Block_with(empty_Array, empty_Array, PThreadedCode9385, 1, PSend9386);
    Constant char_9383_Const = new_Constant((Optr)char_9383);
    // at:put:. 
    Send PSend9387 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9383_Const, (Optr)PBlock9384);
    Character char_9388 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9391 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9390 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9391, (Optr)&t_block_return);
    Block PBlock9389 = new_Block_with(empty_Array, empty_Array, PThreadedCode9390, 1, PSend9391);
    Constant char_9388_Const = new_Constant((Optr)char_9388);
    // at:put:. 
    Send PSend9392 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9388_Const, (Optr)PBlock9389);
    Character char_9393 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9396 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9395 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9396, (Optr)&t_block_return);
    Block PBlock9394 = new_Block_with(empty_Array, empty_Array, PThreadedCode9395, 1, PSend9396);
    Constant char_9393_Const = new_Constant((Optr)char_9393);
    // at:put:. 
    Send PSend9397 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9393_Const, (Optr)PBlock9394);
    Character char_9398 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9401 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9400 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9401, (Optr)&t_block_return);
    Block PBlock9399 = new_Block_with(empty_Array, empty_Array, PThreadedCode9400, 1, PSend9401);
    Constant char_9398_Const = new_Constant((Optr)char_9398);
    // at:put:. 
    Send PSend9402 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9398_Const, (Optr)PBlock9399);
    Character char_9403 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9406 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9405 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9406, (Optr)&t_block_return);
    Block PBlock9404 = new_Block_with(empty_Array, empty_Array, PThreadedCode9405, 1, PSend9406);
    Constant char_9403_Const = new_Constant((Optr)char_9403);
    // at:put:. 
    Send PSend9407 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9403_Const, (Optr)PBlock9404);
    Character char_9408 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9411 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9410 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9411, (Optr)&t_block_return);
    Block PBlock9409 = new_Block_with(empty_Array, empty_Array, PThreadedCode9410, 1, PSend9411);
    Constant char_9408_Const = new_Constant((Optr)char_9408);
    // at:put:. 
    Send PSend9412 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9408_Const, (Optr)PBlock9409);
    Character char_9413 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9416 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9415 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9416, (Optr)&t_block_return);
    Block PBlock9414 = new_Block_with(empty_Array, empty_Array, PThreadedCode9415, 1, PSend9416);
    Constant char_9413_Const = new_Constant((Optr)char_9413);
    // at:put:. 
    Send PSend9417 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9413_Const, (Optr)PBlock9414);
    Character char_9418 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9421 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9420 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9421, (Optr)&t_block_return);
    Block PBlock9419 = new_Block_with(empty_Array, empty_Array, PThreadedCode9420, 1, PSend9421);
    Constant char_9418_Const = new_Constant((Optr)char_9418);
    // at:put:. 
    Send PSend9422 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9418_Const, (Optr)PBlock9419);
    Array PThreadedCode9323 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9324, (Optr)&t_push_closure, (Optr)PBlock9325, (Optr)&t_send2, (Optr)PSend9328, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9329, (Optr)&t_push_closure, (Optr)PBlock9330, (Optr)&t_send2, (Optr)PSend9333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9334, (Optr)&t_push_closure, (Optr)PBlock9335, (Optr)&t_send2, (Optr)PSend9338, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9339, (Optr)&t_push_closure, (Optr)PBlock9340, (Optr)&t_send2, (Optr)PSend9343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9344, (Optr)&t_push_closure, (Optr)PBlock9345, (Optr)&t_send2, (Optr)PSend9348, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9349, (Optr)&t_push_closure, (Optr)PBlock9350, (Optr)&t_send2, (Optr)PSend9353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9354, (Optr)&t_push_closure, (Optr)PBlock9355, (Optr)&t_send2, (Optr)PSend9358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9359, (Optr)&t_push_closure, (Optr)PBlock9360, (Optr)&t_send2, (Optr)PSend9363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9364, (Optr)&t_push_closure, (Optr)PBlock9365, (Optr)&t_send2, (Optr)PSend9368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9369, (Optr)&t_push_closure, (Optr)PBlock9370, (Optr)&t_send2, (Optr)PSend9373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8787, (Optr)&t_push_closure, (Optr)PBlock9374, (Optr)&t_send2, (Optr)PSend9377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9378, (Optr)&t_push_closure, (Optr)PBlock9379, (Optr)&t_send2, (Optr)PSend9382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9383, (Optr)&t_push_closure, (Optr)PBlock9384, (Optr)&t_send2, (Optr)PSend9387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9388, (Optr)&t_push_closure, (Optr)PBlock9389, (Optr)&t_send2, (Optr)PSend9392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9393, (Optr)&t_push_closure, (Optr)PBlock9394, (Optr)&t_send2, (Optr)PSend9397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9398, (Optr)&t_push_closure, (Optr)PBlock9399, (Optr)&t_send2, (Optr)PSend9402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9403, (Optr)&t_push_closure, (Optr)PBlock9404, (Optr)&t_send2, (Optr)PSend9407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9408, (Optr)&t_push_closure, (Optr)PBlock9409, (Optr)&t_send2, (Optr)PSend9412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9413, (Optr)&t_push_closure, (Optr)PBlock9414, (Optr)&t_send2, (Optr)PSend9417, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9418, (Optr)&t_push_closure, (Optr)PBlock9419, (Optr)&t_send2, (Optr)PSend9422, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9321 = new_Method_with(PArray9322, empty_Array, empty_Array, PThreadedCode9323, 21, PSend9328, PSend9333, PSend9338, PSend9343, PSend9348, PSend9353, PSend9358, PSend9363, PSend9368, PSend9373, PSend9377, PSend9382, PSend9387, PSend9392, PSend9397, PSend9402, PSend9407, PSend9412, PSend9417, PSend9422, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9321, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9424 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9427 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9430 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9429 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9430);
    Character char_8705 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8705_Const = new_Constant((Optr)char_8705);
    // =. 
    Send PSend9431 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8705_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9435 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9436 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9435);
    Array PThreadedCode9434 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9435, (Optr)&t_send1, (Optr)PSend9436, (Optr)&t_block_return);
    Block PBlock9433 = new_Block_with(empty_Array, empty_Array, PThreadedCode9434, 1, PSend9436);
    // ifTrue:. 
    Send PSend9432 = new_Send((Optr)PSend9431, SMB_ifTrue_, 1, (Optr)PBlock9433);
    Character char_9078 = new_Character(L'O');
    Constant char_9078_Const = new_Constant((Optr)char_9078);
    // =. 
    Send PSend9437 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_9078_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9441 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9442 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9441);
    Array PThreadedCode9440 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9441, (Optr)&t_send1, (Optr)PSend9442, (Optr)&t_block_return);
    Block PBlock9439 = new_Block_with(empty_Array, empty_Array, PThreadedCode9440, 1, PSend9442);
    // ifTrue:. 
    Send PSend9438 = new_Send((Optr)PSend9437, SMB_ifTrue_, 1, (Optr)PBlock9439);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9443 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9428 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9429, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9430, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8705, (Optr)&t_send1, (Optr)PSend9431, (Optr)&t_send_ifTrue_, (Optr)PSend9432, (Optr)PBlock9433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_9078, (Optr)&t_send1, (Optr)PSend9437, (Optr)&t_send_ifTrue_, (Optr)PSend9438, (Optr)PBlock9439, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9443, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9426 = new_Block_with(PArray9427, empty_Array, PThreadedCode9428, 5, PAssign9429, PSend9432, PSend9438, PSend9443, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9444 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9426);
    Array PThreadedCode9425 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9426, (Optr)&t_send1, (Optr)PSend9444, (Optr)&t_method_return);
    Method PMethod9423 = new_Method_with(empty_Array, PArray9424, empty_Array, PThreadedCode9425, 1, PSend9444);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9423, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9446 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9448 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9447 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9448, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9445 = new_Method_with(PArray9446, empty_Array, empty_Array, PThreadedCode9447, 2, PAssign9448, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9445, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9450 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9451 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9453 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9456 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9458 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9457 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9458);
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9459 = new_Send((Optr)char_9456_Const, SMB__lt__equals_, 1, (Optr)PAssign9457);
    Character char_9462 = new_Character(L'9');
    Constant char_9462_Const = new_Constant((Optr)char_9462);
    // <=. 
    Send PSend9463 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9462_Const);
    Array PThreadedCode9461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9462, (Optr)&t_send1, (Optr)PSend9463, (Optr)&t_block_return);
    Block PBlock9460 = new_Block_with(empty_Array, empty_Array, PThreadedCode9461, 1, PSend9463);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9464 = new_Send((Optr)PSend9459, SMB_and_, 1, (Optr)PBlock9460);
    Array PThreadedCode9455 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_push1, (Optr)PAssign9457, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9458, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9459, (Optr)&t_push_closure, (Optr)PBlock9460, (Optr)&t_send1, (Optr)PSend9464, (Optr)&t_block_return);
    Block PBlock9454 = new_Block_with(empty_Array, empty_Array, PThreadedCode9455, 1, PSend9464);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9469 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9471 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9472 = new_Send((Optr)char_9456_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9470 = new_Send((Optr)PSend9471, SMB__minus_, 1, (Optr)PSend9472);
    // +. 
    Send PSend9468 = new_Send((Optr)PSend9469, SMB__plus_, 1, (Optr)PSend9470);
    Assign PAssign9467 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9468);
    Array PThreadedCode9466 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9467, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9469, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9471, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send0, (Optr)PSend9472, (Optr)&t_send1, (Optr)PSend9470, (Optr)&t_send1, (Optr)PSend9468, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9465 = new_Block_with(empty_Array, empty_Array, PThreadedCode9466, 1, PAssign9467);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9473 = new_Send((Optr)PBlock9454, SMB_whileTrue_, 1, (Optr)PBlock9465);
    Character char_9474 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9474_Const = new_Constant((Optr)char_9474);
    // =. 
    Send PSend9475 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9474_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9479 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9479_Const = new_Constant((Optr)string_9479);
    // fail:in:. 
    Send PSend9480 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9479_Const);
    Array PThreadedCode9478 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9479, (Optr)&t_send2, (Optr)PSend9480, (Optr)&t_block_return);
    Block PBlock9477 = new_Block_with(empty_Array, empty_Array, PThreadedCode9478, 1, PSend9480);
    // ifFalse:. 
    Send PSend9476 = new_Send((Optr)PSend9475, SMB_ifFalse_, 1, (Optr)PBlock9477);
    String string_9483 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9483_Const = new_Constant((Optr)string_9483);
    // fail:in:. 
    Send PSend9484 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9483_Const);
    Array PThreadedCode9482 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9483, (Optr)&t_send2, (Optr)PSend9484, (Optr)&t_block_return);
    Block PBlock9481 = new_Block_with(empty_Array, empty_Array, PThreadedCode9482, 1, PSend9484);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9485 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9481);
    Array PThreadedCode9452 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9453, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9454, (Optr)&t_push_closure, (Optr)PBlock9465, (Optr)&t_send1, (Optr)PSend9473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9474, (Optr)&t_send1, (Optr)PSend9475, (Optr)&t_send_ifFalse_, (Optr)PSend9476, (Optr)PBlock9477, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9481, (Optr)&t_send2, (Optr)PSend9485, (Optr)&t_method_return);
    Method PMethod9449 = new_Method_with(PArray9450, PArray9451, empty_Array, PThreadedCode9452, 4, PAssign9453, PSend9473, PSend9476, PSend9485);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9449, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9489 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9488 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9489);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9490 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9492 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9491 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9492);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9493 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9495 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9494 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9495);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9496 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9487 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9488, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9489, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9490, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9491, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9492, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9493, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9494, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9496, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9487, 7, PAssign9488, PSend9490, PAssign9491, PSend9493, PAssign9494, PSend9496, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9486, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9498 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9500 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9501 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9501_Const = new_Constant((Optr)string_9501);
    // ,. 
    Send PSend9502 = new_Send((Optr)PSend9500, SMB__append_, 1, (Optr)string_9501_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9503 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9504 = new_Send((Optr)PSend9502, SMB__append_, 1, (Optr)PSend9503);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9505 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9504);
    Array PThreadedCode9499 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9500, (Optr)&t_push1, (Optr)string_9501, (Optr)&t_send1, (Optr)PSend9502, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9503, (Optr)&t_send1, (Optr)PSend9504, (Optr)&t_send1, (Optr)PSend9505, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9497 = new_Method_with(PArray9498, empty_Array, empty_Array, PThreadedCode9499, 2, PSend9505, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9497, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9507 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9510 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9513 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9512 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9513);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9516 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9519 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9520 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9519);
    Array PThreadedCode9518 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9519, (Optr)&t_send1, (Optr)PSend9520, (Optr)&t_block_return);
    Block PBlock9517 = new_Block_with(empty_Array, empty_Array, PThreadedCode9518, 1, PSend9520);
    // at:ifAbsent:. 
    Send PSend9515 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9516, (Optr)PBlock9517);
    Assign PAssign9514 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9515);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9521 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9511 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9512, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9513, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9514, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9516, (Optr)&t_push_closure, (Optr)PBlock9517, (Optr)&t_send2, (Optr)PSend9515, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9521, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9509 = new_Block_with(PArray9510, empty_Array, PThreadedCode9511, 4, PAssign9512, PAssign9514, PSend9521, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9522 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9509);
    Array PThreadedCode9508 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9509, (Optr)&t_send1, (Optr)PSend9522, (Optr)&t_method_return);
    Method PMethod9506 = new_Method_with(empty_Array, PArray9507, empty_Array, PThreadedCode9508, 1, PSend9522);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9506, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9524 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9527 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9526 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9527);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9532 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9532_Const = new_Constant((Optr)string_9532);
    // fail:in:. 
    Send PSend9533 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9532_Const);
    Array PThreadedCode9531 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9532, (Optr)&t_send2, (Optr)PSend9533, (Optr)&t_block_return);
    Block PBlock9530 = new_Block_with(empty_Array, empty_Array, PThreadedCode9531, 1, PSend9533);
    // at:ifAbsent:. 
    Send PSend9529 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9530);
    Assign PAssign9528 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9529);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9534 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9525 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9526, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9527, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9528, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9530, (Optr)&t_send2, (Optr)PSend9529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9534, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9523 = new_Method_with(empty_Array, PArray9524, empty_Array, PThreadedCode9525, 4, PAssign9526, PAssign9528, PSend9534, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9523, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9536 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9538 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9541 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9540 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9541, (Optr)&t_block_return);
    Block PBlock9539 = new_Block_with(empty_Array, empty_Array, PThreadedCode9540, 1, PSend9541);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9538_Const = new_Constant((Optr)char_9538);
    // at:put:. 
    Send PSend9542 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9538_Const, (Optr)PBlock9539);
    Character char_8828 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9545 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9544 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9545, (Optr)&t_block_return);
    Block PBlock9543 = new_Block_with(empty_Array, empty_Array, PThreadedCode9544, 1, PSend9545);
    Constant char_8828_Const = new_Constant((Optr)char_8828);
    // at:put:. 
    Send PSend9546 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8828_Const, (Optr)PBlock9543);
    Character char_9547 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9550 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9549 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9550, (Optr)&t_block_return);
    Block PBlock9548 = new_Block_with(empty_Array, empty_Array, PThreadedCode9549, 1, PSend9550);
    Constant char_9547_Const = new_Constant((Optr)char_9547);
    // at:put:. 
    Send PSend9551 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9547_Const, (Optr)PBlock9548);
    Character char_9552 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9555 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9555, (Optr)&t_block_return);
    Block PBlock9553 = new_Block_with(empty_Array, empty_Array, PThreadedCode9554, 1, PSend9555);
    Constant char_9552_Const = new_Constant((Optr)char_9552);
    // at:put:. 
    Send PSend9556 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9552_Const, (Optr)PBlock9553);
    Character char_8759 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9559 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9558 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9559, (Optr)&t_block_return);
    Block PBlock9557 = new_Block_with(empty_Array, empty_Array, PThreadedCode9558, 1, PSend9559);
    Constant char_8759_Const = new_Constant((Optr)char_8759);
    // at:put:. 
    Send PSend9560 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8759_Const, (Optr)PBlock9557);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9563 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9562 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9563, (Optr)&t_block_return);
    Block PBlock9561 = new_Block_with(empty_Array, empty_Array, PThreadedCode9562, 1, PSend9563);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9564 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9561);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9567 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9566 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9567, (Optr)&t_block_return);
    Block PBlock9565 = new_Block_with(empty_Array, empty_Array, PThreadedCode9566, 1, PSend9567);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9568 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9565);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9571 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9570 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9571, (Optr)&t_block_return);
    Block PBlock9569 = new_Block_with(empty_Array, empty_Array, PThreadedCode9570, 1, PSend9571);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9572 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9569);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9575 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9574 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9575, (Optr)&t_block_return);
    Block PBlock9573 = new_Block_with(empty_Array, empty_Array, PThreadedCode9574, 1, PSend9575);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9576 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9573);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9579 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9578 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9579, (Optr)&t_block_return);
    Block PBlock9577 = new_Block_with(empty_Array, empty_Array, PThreadedCode9578, 1, PSend9579);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9580 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9577);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9583 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9582 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9583, (Optr)&t_block_return);
    Block PBlock9581 = new_Block_with(empty_Array, empty_Array, PThreadedCode9582, 1, PSend9583);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9584 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9581);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9587 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9586 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9587, (Optr)&t_block_return);
    Block PBlock9585 = new_Block_with(empty_Array, empty_Array, PThreadedCode9586, 1, PSend9587);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9588 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9585);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9591 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9590 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9591, (Optr)&t_block_return);
    Block PBlock9589 = new_Block_with(empty_Array, empty_Array, PThreadedCode9590, 1, PSend9591);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9592 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9589);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9595 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9594 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9595, (Optr)&t_block_return);
    Block PBlock9593 = new_Block_with(empty_Array, empty_Array, PThreadedCode9594, 1, PSend9595);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9596 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9593);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9599 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9598 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9599, (Optr)&t_block_return);
    Block PBlock9597 = new_Block_with(empty_Array, empty_Array, PThreadedCode9598, 1, PSend9599);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9600 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9597);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9603 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9602 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9603, (Optr)&t_block_return);
    Block PBlock9601 = new_Block_with(empty_Array, empty_Array, PThreadedCode9602, 1, PSend9603);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9604 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9601);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9607 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9606 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9607, (Optr)&t_block_return);
    Block PBlock9605 = new_Block_with(empty_Array, empty_Array, PThreadedCode9606, 1, PSend9607);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9608 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9605);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9611 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9610 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9611, (Optr)&t_block_return);
    Block PBlock9609 = new_Block_with(empty_Array, empty_Array, PThreadedCode9610, 1, PSend9611);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9612 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9609);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9615 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9615, (Optr)&t_block_return);
    Block PBlock9613 = new_Block_with(empty_Array, empty_Array, PThreadedCode9614, 1, PSend9615);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9616 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9613);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9619 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9618 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9619, (Optr)&t_block_return);
    Block PBlock9617 = new_Block_with(empty_Array, empty_Array, PThreadedCode9618, 1, PSend9619);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9620 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9617);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9623 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9622 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9623, (Optr)&t_block_return);
    Block PBlock9621 = new_Block_with(empty_Array, empty_Array, PThreadedCode9622, 1, PSend9623);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9624 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9621);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9627 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9626 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9627, (Optr)&t_block_return);
    Block PBlock9625 = new_Block_with(empty_Array, empty_Array, PThreadedCode9626, 1, PSend9627);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9628 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9625);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9631 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9630 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9631, (Optr)&t_block_return);
    Block PBlock9629 = new_Block_with(empty_Array, empty_Array, PThreadedCode9630, 1, PSend9631);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9632 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9629);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9635 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9634 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9635, (Optr)&t_block_return);
    Block PBlock9633 = new_Block_with(empty_Array, empty_Array, PThreadedCode9634, 1, PSend9635);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9636 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9633);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9639 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9639, (Optr)&t_block_return);
    Block PBlock9637 = new_Block_with(empty_Array, empty_Array, PThreadedCode9638, 1, PSend9639);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9640 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9637);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9643 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9642 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9643, (Optr)&t_block_return);
    Block PBlock9641 = new_Block_with(empty_Array, empty_Array, PThreadedCode9642, 1, PSend9643);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9644 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9641);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9647 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9646 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9647, (Optr)&t_block_return);
    Block PBlock9645 = new_Block_with(empty_Array, empty_Array, PThreadedCode9646, 1, PSend9647);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9648 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9645);
    Character char_8705 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9651 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9650 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9651, (Optr)&t_block_return);
    Block PBlock9649 = new_Block_with(empty_Array, empty_Array, PThreadedCode9650, 1, PSend9651);
    Constant char_8705_Const = new_Constant((Optr)char_8705);
    // at:put:. 
    Send PSend9652 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8705_Const, (Optr)PBlock9649);
    Array PThreadedCode9537 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9538, (Optr)&t_push_closure, (Optr)PBlock9539, (Optr)&t_send2, (Optr)PSend9542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8828, (Optr)&t_push_closure, (Optr)PBlock9543, (Optr)&t_send2, (Optr)PSend9546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9547, (Optr)&t_push_closure, (Optr)PBlock9548, (Optr)&t_send2, (Optr)PSend9551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9552, (Optr)&t_push_closure, (Optr)PBlock9553, (Optr)&t_send2, (Optr)PSend9556, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8759, (Optr)&t_push_closure, (Optr)PBlock9557, (Optr)&t_send2, (Optr)PSend9560, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9561, (Optr)&t_send2, (Optr)PSend9564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9565, (Optr)&t_send2, (Optr)PSend9568, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9569, (Optr)&t_send2, (Optr)PSend9572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9573, (Optr)&t_send2, (Optr)PSend9576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9577, (Optr)&t_send2, (Optr)PSend9580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9581, (Optr)&t_send2, (Optr)PSend9584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9585, (Optr)&t_send2, (Optr)PSend9588, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9589, (Optr)&t_send2, (Optr)PSend9592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9593, (Optr)&t_send2, (Optr)PSend9596, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9597, (Optr)&t_send2, (Optr)PSend9600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9601, (Optr)&t_send2, (Optr)PSend9604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9605, (Optr)&t_send2, (Optr)PSend9608, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9609, (Optr)&t_send2, (Optr)PSend9612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9613, (Optr)&t_send2, (Optr)PSend9616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9617, (Optr)&t_send2, (Optr)PSend9620, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9621, (Optr)&t_send2, (Optr)PSend9624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9625, (Optr)&t_send2, (Optr)PSend9628, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9629, (Optr)&t_send2, (Optr)PSend9632, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9633, (Optr)&t_send2, (Optr)PSend9636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9637, (Optr)&t_send2, (Optr)PSend9640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9641, (Optr)&t_send2, (Optr)PSend9644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9645, (Optr)&t_send2, (Optr)PSend9648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8705, (Optr)&t_push_closure, (Optr)PBlock9649, (Optr)&t_send2, (Optr)PSend9652, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9535 = new_Method_with(PArray9536, empty_Array, empty_Array, PThreadedCode9537, 29, PSend9542, PSend9546, PSend9551, PSend9556, PSend9560, PSend9564, PSend9568, PSend9572, PSend9576, PSend9580, PSend9584, PSend9588, PSend9592, PSend9596, PSend9600, PSend9604, PSend9608, PSend9612, PSend9616, PSend9620, PSend9624, PSend9628, PSend9632, PSend9636, PSend9640, PSend9644, PSend9648, PSend9652, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9535, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9654 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9656 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9655 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9656, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9653 = new_Method_with(PArray9654, empty_Array, empty_Array, PThreadedCode9655, 2, PAssign9656, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9653, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9658 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9662 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9661 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9662, (Optr)&t_block_return);
    Block PBlock9660 = new_Block_with(empty_Array, empty_Array, PThreadedCode9661, 1, PSend9662);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9663 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9660);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9666 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9665 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9666, (Optr)&t_block_return);
    Block PBlock9664 = new_Block_with(empty_Array, empty_Array, PThreadedCode9665, 1, PSend9666);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9667 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9664);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9670 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9669 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9670, (Optr)&t_block_return);
    Block PBlock9668 = new_Block_with(empty_Array, empty_Array, PThreadedCode9669, 1, PSend9670);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9671 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9668);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9674 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9673 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9674, (Optr)&t_block_return);
    Block PBlock9672 = new_Block_with(empty_Array, empty_Array, PThreadedCode9673, 1, PSend9674);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9675 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9672);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9678 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9677 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9678, (Optr)&t_block_return);
    Block PBlock9676 = new_Block_with(empty_Array, empty_Array, PThreadedCode9677, 1, PSend9678);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9679 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9676);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9682 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9681 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9682, (Optr)&t_block_return);
    Block PBlock9680 = new_Block_with(empty_Array, empty_Array, PThreadedCode9681, 1, PSend9682);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9683 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9680);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9686 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9685 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9686, (Optr)&t_block_return);
    Block PBlock9684 = new_Block_with(empty_Array, empty_Array, PThreadedCode9685, 1, PSend9686);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9687 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9684);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9690 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9689 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9690, (Optr)&t_block_return);
    Block PBlock9688 = new_Block_with(empty_Array, empty_Array, PThreadedCode9689, 1, PSend9690);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9691 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9688);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9694 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9693 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9694, (Optr)&t_block_return);
    Block PBlock9692 = new_Block_with(empty_Array, empty_Array, PThreadedCode9693, 1, PSend9694);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9695 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9692);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9698 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9697 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9698, (Optr)&t_block_return);
    Block PBlock9696 = new_Block_with(empty_Array, empty_Array, PThreadedCode9697, 1, PSend9698);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9699 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9696);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9702 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9701 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9702, (Optr)&t_block_return);
    Block PBlock9700 = new_Block_with(empty_Array, empty_Array, PThreadedCode9701, 1, PSend9702);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9703 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9700);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9706 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9705 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9706, (Optr)&t_block_return);
    Block PBlock9704 = new_Block_with(empty_Array, empty_Array, PThreadedCode9705, 1, PSend9706);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9707 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9704);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9710 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9709 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9710, (Optr)&t_block_return);
    Block PBlock9708 = new_Block_with(empty_Array, empty_Array, PThreadedCode9709, 1, PSend9710);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9711 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9708);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9714 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9713 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9714, (Optr)&t_block_return);
    Block PBlock9712 = new_Block_with(empty_Array, empty_Array, PThreadedCode9713, 1, PSend9714);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9715 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9712);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9718 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9717 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9718, (Optr)&t_block_return);
    Block PBlock9716 = new_Block_with(empty_Array, empty_Array, PThreadedCode9717, 1, PSend9718);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9719 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9716);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9722 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9721 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9722, (Optr)&t_block_return);
    Block PBlock9720 = new_Block_with(empty_Array, empty_Array, PThreadedCode9721, 1, PSend9722);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9723 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9720);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9726 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9725 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9726, (Optr)&t_block_return);
    Block PBlock9724 = new_Block_with(empty_Array, empty_Array, PThreadedCode9725, 1, PSend9726);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9727 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9724);
    Array PThreadedCode9659 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9660, (Optr)&t_send2, (Optr)PSend9663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9664, (Optr)&t_send2, (Optr)PSend9667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9668, (Optr)&t_send2, (Optr)PSend9671, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9672, (Optr)&t_send2, (Optr)PSend9675, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9676, (Optr)&t_send2, (Optr)PSend9679, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9680, (Optr)&t_send2, (Optr)PSend9683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9684, (Optr)&t_send2, (Optr)PSend9687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9688, (Optr)&t_send2, (Optr)PSend9691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9692, (Optr)&t_send2, (Optr)PSend9695, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9696, (Optr)&t_send2, (Optr)PSend9699, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9700, (Optr)&t_send2, (Optr)PSend9703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9704, (Optr)&t_send2, (Optr)PSend9707, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9708, (Optr)&t_send2, (Optr)PSend9711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9712, (Optr)&t_send2, (Optr)PSend9715, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9716, (Optr)&t_send2, (Optr)PSend9719, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9720, (Optr)&t_send2, (Optr)PSend9723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9724, (Optr)&t_send2, (Optr)PSend9727, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9657 = new_Method_with(PArray9658, empty_Array, empty_Array, PThreadedCode9659, 18, PSend9663, PSend9667, PSend9671, PSend9675, PSend9679, PSend9683, PSend9687, PSend9691, PSend9695, PSend9699, PSend9703, PSend9707, PSend9711, PSend9715, PSend9719, PSend9723, PSend9727, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9657, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9729 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9732 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9731 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9732);
    Character char_9456 = new_Character(L'0');
    Constant char_9456_Const = new_Constant((Optr)char_9456);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9736 = new_Send((Optr)char_9456_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9462 = new_Character(L'9');
    Constant char_9462_Const = new_Constant((Optr)char_9462);
    // <=. 
    Send PSend9739 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9462_Const);
    Array PThreadedCode9738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9462, (Optr)&t_send1, (Optr)PSend9739, (Optr)&t_block_return);
    Block PBlock9737 = new_Block_with(empty_Array, empty_Array, PThreadedCode9738, 1, PSend9739);
    // and:. 
    Send PSend9735 = new_Send((Optr)PSend9736, SMB_and_, 1, (Optr)PBlock9737);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9742 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9743 = new_Send((Optr)char_9456_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9744 = new_Send((Optr)PSend9742, SMB__minus_, 1, (Optr)PSend9743);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9745 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9744);
    Array PThreadedCode9741 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9742, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_send0, (Optr)PSend9743, (Optr)&t_send1, (Optr)PSend9744, (Optr)&t_send1, (Optr)PSend9745, (Optr)&t_block_return);
    Block PBlock9740 = new_Block_with(empty_Array, empty_Array, PThreadedCode9741, 1, PSend9745);
    String string_9750 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9750_Const = new_Constant((Optr)string_9750);
    // fail:in:. 
    Send PSend9751 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9750_Const);
    Array PThreadedCode9749 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9750, (Optr)&t_send2, (Optr)PSend9751, (Optr)&t_block_return);
    Block PBlock9748 = new_Block_with(empty_Array, empty_Array, PThreadedCode9749, 1, PSend9751);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9752 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9748);
    Array PThreadedCode9747 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9748, (Optr)&t_send2, (Optr)PSend9752, (Optr)&t_block_return);
    Block PBlock9746 = new_Block_with(empty_Array, empty_Array, PThreadedCode9747, 1, PSend9752);
    // ifTrue:ifFalse:. 
    Send PSend9734 = new_Send((Optr)PSend9735, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9740, (Optr)PBlock9746);
    Assign PAssign9733 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9734);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9753 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9730 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9731, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9732, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9733, (Optr)&t_push1, (Optr)char_9456, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9736, (Optr)&t_push_closure, (Optr)PBlock9737, (Optr)&t_send1, (Optr)PSend9735, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9734, (Optr)PBlock9740, (Optr)PBlock9746, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9753, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9728 = new_Method_with(empty_Array, PArray9729, empty_Array, PThreadedCode9730, 4, PAssign9731, PAssign9733, PSend9753, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9728, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9755 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9757 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9758 = new_Send((Optr)PSuper9757, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9756 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9757, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9758, (Optr)&t_method_return);
    Method PMethod9754 = new_Method_with(PArray9755, empty_Array, empty_Array, PThreadedCode9756, 1, PSend9758);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9754, HEADER(IO_Term_TermInputDriver_Class));
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