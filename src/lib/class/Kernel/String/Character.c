#include <lib/class/Kernel/String/Character.h>


Optr layout_Kernel_String_Character_Class_class;


static void init_SMB_asCharacter() {
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    Array PThreadedCode2348 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2348, 1, self);
    
    MethodClosure MC_SMB_asCharacter = new_MethodClosure((Method)PMethod2347, Character_Class);
    store_method(Character_Class, SMB_asCharacter, MC_SMB_asCharacter);
}


static void init_SMB_asLowercase() {
    Symbol SMB_asLowercase = new_Symbol(L"asLowercase");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2350 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2353 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2356 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2355 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2356);
    SmallInt int_65 = new_SmallInt(65);
    Constant int_65_Const = new_Constant((Optr)int_65);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2357 = new_Send((Optr)int_65_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_90 = new_SmallInt(90);
    Constant int_90_Const = new_Constant((Optr)int_90);
    // <=. 
    Send PSend2360 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_90_Const);
    Array PThreadedCode2359 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_90, (Optr)&t_send1, (Optr)PSend2360, (Optr)&t_block_return);
    Block PBlock2358 = new_Block_with(empty_Array, empty_Array, PThreadedCode2359, 1, PSend2360);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2361 = new_Send((Optr)PSend2357, SMB_and_, 1, (Optr)PBlock2358);
    SmallInt int_192 = new_SmallInt(192);
    Constant int_192_Const = new_Constant((Optr)int_192);
    // <=. 
    Send PSend2364 = new_Send((Optr)int_192_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_214 = new_SmallInt(214);
    Constant int_214_Const = new_Constant((Optr)int_214);
    // <=. 
    Send PSend2367 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_214_Const);
    Array PThreadedCode2366 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_214, (Optr)&t_send1, (Optr)PSend2367, (Optr)&t_block_return);
    Block PBlock2365 = new_Block_with(empty_Array, empty_Array, PThreadedCode2366, 1, PSend2367);
    // and:. 
    Send PSend2368 = new_Send((Optr)PSend2364, SMB_and_, 1, (Optr)PBlock2365);
    Array PThreadedCode2363 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_192, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2364, (Optr)&t_push_closure, (Optr)PBlock2365, (Optr)&t_send1, (Optr)PSend2368, (Optr)&t_block_return);
    Block PBlock2362 = new_Block_with(empty_Array, empty_Array, PThreadedCode2363, 1, PSend2368);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend2369 = new_Send((Optr)PSend2361, SMB_or_, 1, (Optr)PBlock2362);
    SmallInt int_216 = new_SmallInt(216);
    Constant int_216_Const = new_Constant((Optr)int_216);
    // <=. 
    Send PSend2372 = new_Send((Optr)int_216_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_222 = new_SmallInt(222);
    Constant int_222_Const = new_Constant((Optr)int_222);
    // <=. 
    Send PSend2375 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_222_Const);
    Array PThreadedCode2374 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_222, (Optr)&t_send1, (Optr)PSend2375, (Optr)&t_block_return);
    Block PBlock2373 = new_Block_with(empty_Array, empty_Array, PThreadedCode2374, 1, PSend2375);
    // and:. 
    Send PSend2376 = new_Send((Optr)PSend2372, SMB_and_, 1, (Optr)PBlock2373);
    Array PThreadedCode2371 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_216, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2372, (Optr)&t_push_closure, (Optr)PBlock2373, (Optr)&t_send1, (Optr)PSend2376, (Optr)&t_block_return);
    Block PBlock2370 = new_Block_with(empty_Array, empty_Array, PThreadedCode2371, 1, PSend2376);
    // or:. 
    Send PSend2377 = new_Send((Optr)PSend2369, SMB_or_, 1, (Optr)PBlock2370);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2381 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Constant int_32_Const = new_Constant((Optr)int_32);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2382 = new_Send((Optr)int_32_Const, SMB__plus_, 1, (Optr)PSend2381);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2383 = new_Send((Optr)PSend2382, SMB_asCharacter, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2384 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2383);
    Array PThreadedCode2380 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2381, (Optr)&t_send1, (Optr)PSend2382, (Optr)&t_send0, (Optr)PSend2383, (Optr)&t_send1, (Optr)PSend2384, (Optr)&t_block_return);
    Block PBlock2379 = new_Block_with(empty_Array, empty_Array, PThreadedCode2380, 1, PSend2384);
    // escape:. 
    Send PSend2387 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode2386 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2387, (Optr)&t_block_return);
    Block PBlock2385 = new_Block_with(empty_Array, empty_Array, PThreadedCode2386, 1, PSend2387);
    // ifTrue:ifFalse:. 
    Send PSend2378 = new_Send((Optr)PSend2377, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2379, (Optr)PBlock2385);
    Array PThreadedCode2354 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign2355, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_65, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2357, (Optr)&t_push_closure, (Optr)PBlock2358, (Optr)&t_send1, (Optr)PSend2361, (Optr)&t_push_closure, (Optr)PBlock2362, (Optr)&t_send1, (Optr)PSend2369, (Optr)&t_push_closure, (Optr)PBlock2370, (Optr)&t_send1, (Optr)PSend2377, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2378, (Optr)PBlock2379, (Optr)PBlock2385, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock2352 = new_Block_with(PArray2353, empty_Array, PThreadedCode2354, 3, PAssign2355, PSend2378, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2388 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2352);
    Array PThreadedCode2351 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2352, (Optr)&t_send1, (Optr)PSend2388, (Optr)&t_method_return);
    Method PMethod2349 = new_Method_with(empty_Array, PArray2350, empty_Array, PThreadedCode2351, 1, PSend2388);
    
    MethodClosure MC_SMB_asLowercase = new_MethodClosure((Method)PMethod2349, Character_Class);
    store_method(Character_Class, SMB_asLowercase, MC_SMB_asLowercase);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2390 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2392 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2393 = new_Send((Optr)VAR_aCharacter_0_0, SMB__lt_, 1, (Optr)PSend2392);
    Array PThreadedCode2391 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2392, (Optr)&t_send1, (Optr)PSend2393, (Optr)&t_method_return);
    Method PMethod2389 = new_Method_with(PArray2390, empty_Array, empty_Array, PThreadedCode2391, 1, PSend2393);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod2389, Character_Class);
    store_method(Character_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_asParser() {
    Symbol SMB_asParser = new_Symbol(L"asParser");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2396 = new_Send((Optr)PEGCharacterTerminal_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode2395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGCharacterTerminal_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2396, (Optr)&t_method_return);
    Method PMethod2394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2395, 1, PSend2396);
    
    MethodClosure MC_SMB_asParser = new_MethodClosure((Method)PMethod2394, Character_Class);
    store_method(Character_Class, SMB_asParser, MC_SMB_asParser);
}


static void init_SMB_asUppercase() {
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2398 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2401 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2404 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2403 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2404);
    SmallInt int_97 = new_SmallInt(97);
    Constant int_97_Const = new_Constant((Optr)int_97);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2405 = new_Send((Optr)int_97_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_122 = new_SmallInt(122);
    Constant int_122_Const = new_Constant((Optr)int_122);
    // <=. 
    Send PSend2408 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_122_Const);
    Array PThreadedCode2407 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_122, (Optr)&t_send1, (Optr)PSend2408, (Optr)&t_block_return);
    Block PBlock2406 = new_Block_with(empty_Array, empty_Array, PThreadedCode2407, 1, PSend2408);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend2409 = new_Send((Optr)PSend2405, SMB_and_, 1, (Optr)PBlock2406);
    SmallInt int_224 = new_SmallInt(224);
    Constant int_224_Const = new_Constant((Optr)int_224);
    // <=. 
    Send PSend2412 = new_Send((Optr)int_224_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_246 = new_SmallInt(246);
    Constant int_246_Const = new_Constant((Optr)int_246);
    // <=. 
    Send PSend2415 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_246_Const);
    Array PThreadedCode2414 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_246, (Optr)&t_send1, (Optr)PSend2415, (Optr)&t_block_return);
    Block PBlock2413 = new_Block_with(empty_Array, empty_Array, PThreadedCode2414, 1, PSend2415);
    // and:. 
    Send PSend2416 = new_Send((Optr)PSend2412, SMB_and_, 1, (Optr)PBlock2413);
    Array PThreadedCode2411 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_224, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2412, (Optr)&t_push_closure, (Optr)PBlock2413, (Optr)&t_send1, (Optr)PSend2416, (Optr)&t_block_return);
    Block PBlock2410 = new_Block_with(empty_Array, empty_Array, PThreadedCode2411, 1, PSend2416);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend2417 = new_Send((Optr)PSend2409, SMB_or_, 1, (Optr)PBlock2410);
    SmallInt int_248 = new_SmallInt(248);
    Constant int_248_Const = new_Constant((Optr)int_248);
    // <=. 
    Send PSend2420 = new_Send((Optr)int_248_Const, SMB__lt__equals_, 1, (Optr)VAR_v_0_0);
    SmallInt int_254 = new_SmallInt(254);
    Constant int_254_Const = new_Constant((Optr)int_254);
    // <=. 
    Send PSend2423 = new_Send((Optr)VAR_v_0_0, SMB__lt__equals_, 1, (Optr)int_254_Const);
    Array PThreadedCode2422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_254, (Optr)&t_send1, (Optr)PSend2423, (Optr)&t_block_return);
    Block PBlock2421 = new_Block_with(empty_Array, empty_Array, PThreadedCode2422, 1, PSend2423);
    // and:. 
    Send PSend2424 = new_Send((Optr)PSend2420, SMB_and_, 1, (Optr)PBlock2421);
    Array PThreadedCode2419 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_248, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2420, (Optr)&t_push_closure, (Optr)PBlock2421, (Optr)&t_send1, (Optr)PSend2424, (Optr)&t_block_return);
    Block PBlock2418 = new_Block_with(empty_Array, empty_Array, PThreadedCode2419, 1, PSend2424);
    // or:. 
    Send PSend2425 = new_Send((Optr)PSend2417, SMB_or_, 1, (Optr)PBlock2418);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    SmallInt int_n32 = new_SmallInt(-32);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2429 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Constant int_n32_Const = new_Constant((Optr)int_n32);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend2430 = new_Send((Optr)int_n32_Const, SMB__plus_, 1, (Optr)PSend2429);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2431 = new_Send((Optr)PSend2430, SMB_asCharacter, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2432 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend2431);
    Array PThreadedCode2428 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)int_n32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2429, (Optr)&t_send1, (Optr)PSend2430, (Optr)&t_send0, (Optr)PSend2431, (Optr)&t_send1, (Optr)PSend2432, (Optr)&t_block_return);
    Block PBlock2427 = new_Block_with(empty_Array, empty_Array, PThreadedCode2428, 1, PSend2432);
    // escape:. 
    Send PSend2435 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode2434 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2435, (Optr)&t_block_return);
    Block PBlock2433 = new_Block_with(empty_Array, empty_Array, PThreadedCode2434, 1, PSend2435);
    // ifTrue:ifFalse:. 
    Send PSend2426 = new_Send((Optr)PSend2425, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2427, (Optr)PBlock2433);
    Array PThreadedCode2402 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign2403, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)int_97, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_send1, (Optr)PSend2405, (Optr)&t_push_closure, (Optr)PBlock2406, (Optr)&t_send1, (Optr)PSend2409, (Optr)&t_push_closure, (Optr)PBlock2410, (Optr)&t_send1, (Optr)PSend2417, (Optr)&t_push_closure, (Optr)PBlock2418, (Optr)&t_send1, (Optr)PSend2425, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2426, (Optr)PBlock2427, (Optr)PBlock2433, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock2400 = new_Block_with(PArray2401, empty_Array, PThreadedCode2402, 3, PAssign2403, PSend2426, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2436 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2400);
    Array PThreadedCode2399 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2400, (Optr)&t_send1, (Optr)PSend2436, (Optr)&t_method_return);
    Method PMethod2397 = new_Method_with(empty_Array, PArray2398, empty_Array, PThreadedCode2399, 1, PSend2436);
    
    MethodClosure MC_SMB_asUppercase = new_MethodClosure((Method)PMethod2397, Character_Class);
    store_method(Character_Class, SMB_asUppercase, MC_SMB_asUppercase);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2438 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2440 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend2441 = new_Send((Optr)VAR_aCharacter_0_0, SMB__lt__equals_, 1, (Optr)PSend2440);
    Array PThreadedCode2439 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2440, (Optr)&t_send1, (Optr)PSend2441, (Optr)&t_method_return);
    Method PMethod2437 = new_Method_with(PArray2438, empty_Array, empty_Array, PThreadedCode2439, 1, PSend2441);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod2437, Character_Class);
    store_method(Character_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_min_() {
    Symbol SMB_min_ = new_Symbol(L"min:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray2443 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend2445 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode2448 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock2447 = new_Block_with(empty_Array, empty_Array, PThreadedCode2448, 1, self);
    Array PThreadedCode2450 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock2449 = new_Block_with(empty_Array, empty_Array, PThreadedCode2450, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend2446 = new_Send((Optr)PSend2445, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2447, (Optr)PBlock2449);
    Array PThreadedCode2444 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend2445, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2446, (Optr)PBlock2447, (Optr)PBlock2449, (Optr)&t_method_return);
    Method PMethod2442 = new_Method_with(PArray2443, empty_Array, empty_Array, PThreadedCode2444, 1, PSend2446);
    
    MethodClosure MC_SMB_min_ = new_MethodClosure((Method)PMethod2442, Character_Class);
    store_method(Character_Class, SMB_min_, MC_SMB_min_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2452 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2454 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2455 = new_Send((Optr)VAR_aCharacter_0_0, SMB__gt_, 1, (Optr)PSend2454);
    Array PThreadedCode2453 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2454, (Optr)&t_send1, (Optr)PSend2455, (Optr)&t_method_return);
    Method PMethod2451 = new_Method_with(PArray2452, empty_Array, empty_Array, PThreadedCode2453, 1, PSend2455);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod2451, Character_Class);
    store_method(Character_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2458 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSymbol, (Optr)SMB_Type_minus_Character);
    Array PArray2457 = new_Array_with(1, (Optr)PAnnotation2458);
    Super PSuper2460 = new_Super(SMB_asSymbol, 0);
    Array PThreadedCode2459 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2460, (Optr)&t_method_return);
    NativeMethod PNativeMethod2456 = new_NativeMethod_with(empty_Array, empty_Array, PArray2457, PThreadedCode2459, 1, PSuper2460);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PNativeMethod2456, Character_Class);
    store_method(Character_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_max_() {
    Symbol SMB_max_ = new_Symbol(L"max:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray2462 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend2464 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode2467 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock2466 = new_Block_with(empty_Array, empty_Array, PThreadedCode2467, 1, self);
    Array PThreadedCode2469 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock2468 = new_Block_with(empty_Array, empty_Array, PThreadedCode2469, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend2465 = new_Send((Optr)PSend2464, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2466, (Optr)PBlock2468);
    Array PThreadedCode2463 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend2464, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2465, (Optr)PBlock2466, (Optr)PBlock2468, (Optr)&t_method_return);
    Method PMethod2461 = new_Method_with(PArray2462, empty_Array, empty_Array, PThreadedCode2463, 1, PSend2465);
    
    MethodClosure MC_SMB_max_ = new_MethodClosure((Method)PMethod2461, Character_Class);
    store_method(Character_Class, SMB_max_, MC_SMB_max_);
}


static void init_SMB_split_() {
    Symbol SMB_split_ = new_Symbol(L"split:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray2471 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_current_0_2 = new_Variable_named(L"current", 0);
    Array PArray2472 = new_Array_with(2, (Optr)VAR_result_0_1, (Optr)VAR_current_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend2475 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2474 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend2475);
    // new. 
    Send PSend2477 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign2476 = new_Assign((Optr)VAR_current_0_2, (Optr)PSend2477);
    Variable VAR_c_1_0 = new_Variable_named(L"c", 1);
    Array PArray2479 = new_Array_with(1, (Optr)VAR_c_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2481 = new_Send((Optr)VAR_c_1_0, SMB__equals_, 1, (Optr)self);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2485 = new_Send((Optr)String_classReference, SMB_newFrom_, 1, (Optr)VAR_current_0_2);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend2486 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend2485);
    Array PThreadedCode2484 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_variable, (Optr)VAR_current_0_2, (Optr)&t_send1, (Optr)PSend2485, (Optr)&t_send1, (Optr)PSend2486, (Optr)&t_block_return);
    Block PBlock2483 = new_Block_with(empty_Array, empty_Array, PThreadedCode2484, 1, PSend2486);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend2489 = new_Send((Optr)VAR_current_0_2, SMB_addLast_, 1, (Optr)VAR_c_1_0);
    Array PThreadedCode2488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_current_0_2, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_send1, (Optr)PSend2489, (Optr)&t_block_return);
    Block PBlock2487 = new_Block_with(empty_Array, empty_Array, PThreadedCode2488, 1, PSend2489);
    // ifTrue:ifFalse:. 
    Send PSend2482 = new_Send((Optr)PSend2481, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock2483, (Optr)PBlock2487);
    Array PThreadedCode2480 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_c_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2481, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend2482, (Optr)PBlock2483, (Optr)PBlock2487, (Optr)&t_method_return);
    Block PBlock2478 = new_Block_with(PArray2479, empty_Array, PThreadedCode2480, 1, PSend2482);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend2490 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock2478);
    Array PThreadedCode2473 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign2474, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign2476, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend2477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock2478, (Optr)&t_send1, (Optr)PSend2490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod2470 = new_Method_with(PArray2471, PArray2472, empty_Array, PThreadedCode2473, 4, PAssign2474, PAssign2476, PSend2490, VAR_result_0_1);
    
    MethodClosure MC_SMB_split_ = new_MethodClosure((Method)PMethod2470, Character_Class);
    store_method(Character_Class, SMB_split_, MC_SMB_split_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray2492 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend2494 = new_Send((Optr)VAR_aStream_0_0, SMB_write_, 1, (Optr)self);
    Array PThreadedCode2493 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2494, (Optr)&t_method_return);
    Method PMethod2491 = new_Method_with(PArray2492, empty_Array, empty_Array, PThreadedCode2493, 1, PSend2494);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod2491, Character_Class);
    store_method(Character_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_isCharacter() {
    Symbol SMB_isCharacter = new_Symbol(L"isCharacter");
    Array PThreadedCode2496 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod2495 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2496, 1, true_Const);
    
    MethodClosure MC_SMB_isCharacter = new_MethodClosure((Method)PMethod2495, Character_Class);
    store_method(Character_Class, SMB_isCharacter, MC_SMB_isCharacter);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2499 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSmallInt, (Optr)SMB_Type_minus_Character);
    Array PArray2498 = new_Array_with(1, (Optr)PAnnotation2499);
    Super PSuper2501 = new_Super(SMB_asSmallInt, 0);
    Array PThreadedCode2500 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2501, (Optr)&t_method_return);
    NativeMethod PNativeMethod2497 = new_NativeMethod_with(empty_Array, empty_Array, PArray2498, PThreadedCode2500, 1, PSuper2501);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PNativeMethod2497, Character_Class);
    store_method(Character_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_isUppercase() {
    Symbol SMB_isUppercase = new_Symbol(L"isUppercase");
    Symbol SMB_asUppercase = new_Symbol(L"asUppercase");
    // asUppercase. 
    Send PSend2504 = new_Send((Optr)self, SMB_asUppercase, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend2505 = new_Send((Optr)self, SMB__equals_, 1, (Optr)PSend2504);
    Array PThreadedCode2503 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2504, (Optr)&t_send1, (Optr)PSend2505, (Optr)&t_method_return);
    Method PMethod2502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2503, 1, PSend2505);
    
    MethodClosure MC_SMB_isUppercase = new_MethodClosure((Method)PMethod2502, Character_Class);
    store_method(Character_Class, SMB_isUppercase, MC_SMB_isUppercase);
}


static void init_SMB_asSmallInt() {
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2508 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asSmallInt, (Optr)SMB_Type_minus_Character);
    Array PArray2507 = new_Array_with(1, (Optr)PAnnotation2508);
    Super PSuper2510 = new_Super(SMB_asSmallInt, 0);
    Array PThreadedCode2509 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2510, (Optr)&t_method_return);
    NativeMethod PNativeMethod2506 = new_NativeMethod_with(empty_Array, empty_Array, PArray2507, PThreadedCode2509, 1, PSuper2510);
    
    MethodClosure MC_SMB_asSmallInt = new_MethodClosure((Method)PNativeMethod2506, Character_Class);
    store_method(Character_Class, SMB_asSmallInt, MC_SMB_asSmallInt);
}


static void init_SMB_charCode() {
    Symbol SMB_charCode = new_Symbol(L"charCode");
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2513 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Array PThreadedCode2512 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2513, (Optr)&t_method_return);
    Method PMethod2511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2512, 1, PSend2513);
    
    MethodClosure MC_SMB_charCode = new_MethodClosure((Method)PMethod2511, Character_Class);
    store_method(Character_Class, SMB_charCode, MC_SMB_charCode);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2515 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitCharacter_ = new_Symbol(L"visitCharacter:");
    // visitCharacter:. 
    Send PSend2517 = new_Send((Optr)VAR_visitor_0_0, SMB_visitCharacter_, 1, (Optr)self);
    Array PThreadedCode2516 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2517, (Optr)&t_method_return);
    Method PMethod2514 = new_Method_with(PArray2515, empty_Array, empty_Array, PThreadedCode2516, 1, PSend2517);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2514, Character_Class);
    store_method(Character_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray2519 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_2521 = new_Character(L'$');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2521_Const = new_Constant((Optr)char_2521);
    // <<. 
    Send PSend2522 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2521_Const);
    // <<. 
    Send PSend2523 = new_Send((Optr)PSend2522, SMB__shiftLeft_, 1, (Optr)self);
    Array PThreadedCode2520 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2521, (Optr)&t_send1, (Optr)PSend2522, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2523, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2518 = new_Method_with(PArray2519, empty_Array, empty_Array, PThreadedCode2520, 2, PSend2523, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2518, Character_Class);
    store_method(Character_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2525 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2527 = new_Send((Optr)self, SMB_asSmallInt, 0);
    // =. 
    Send PSend2528 = new_Send((Optr)VAR_other_0_0, SMB__equals_, 1, (Optr)PSend2527);
    Array PThreadedCode2526 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2527, (Optr)&t_send1, (Optr)PSend2528, (Optr)&t_method_return);
    Method PMethod2524 = new_Method_with(PArray2525, empty_Array, empty_Array, PThreadedCode2526, 1, PSend2528);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod2524, Character_Class);
    store_method(Character_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_isSeparator() {
    Symbol SMB_isSeparator = new_Symbol(L"isSeparator");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray2530 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray2533 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_charCode = new_Symbol(L"charCode");
    // charCode. 
    Send PSend2536 = new_Send((Optr)self, SMB_charCode, 0);
    Assign PAssign2535 = new_Assign((Optr)VAR_v_0_0, (Optr)PSend2536);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // =. 
    Send PSend2537 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_32_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend2541 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2540 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2541, (Optr)&t_block_return);
    Block PBlock2539 = new_Block_with(empty_Array, empty_Array, PThreadedCode2540, 1, PSend2541);
    // ifTrue:. 
    Send PSend2538 = new_Send((Optr)PSend2537, SMB_ifTrue_, 1, (Optr)PBlock2539);
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // =. 
    Send PSend2542 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_13_Const);
    // escape:. 
    Send PSend2546 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2545 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2546, (Optr)&t_block_return);
    Block PBlock2544 = new_Block_with(empty_Array, empty_Array, PThreadedCode2545, 1, PSend2546);
    // ifTrue:. 
    Send PSend2543 = new_Send((Optr)PSend2542, SMB_ifTrue_, 1, (Optr)PBlock2544);
    SmallInt int_9 = new_SmallInt(9);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // =. 
    Send PSend2547 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_9_Const);
    // escape:. 
    Send PSend2551 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2550 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2551, (Optr)&t_block_return);
    Block PBlock2549 = new_Block_with(empty_Array, empty_Array, PThreadedCode2550, 1, PSend2551);
    // ifTrue:. 
    Send PSend2548 = new_Send((Optr)PSend2547, SMB_ifTrue_, 1, (Optr)PBlock2549);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // =. 
    Send PSend2552 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_10_Const);
    // escape:. 
    Send PSend2556 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2556, (Optr)&t_block_return);
    Block PBlock2554 = new_Block_with(empty_Array, empty_Array, PThreadedCode2555, 1, PSend2556);
    // ifTrue:. 
    Send PSend2553 = new_Send((Optr)PSend2552, SMB_ifTrue_, 1, (Optr)PBlock2554);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // =. 
    Send PSend2557 = new_Send((Optr)VAR_v_0_0, SMB__equals_, 1, (Optr)int_12_Const);
    // escape:. 
    Send PSend2561 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode2560 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend2561, (Optr)&t_block_return);
    Block PBlock2559 = new_Block_with(empty_Array, empty_Array, PThreadedCode2560, 1, PSend2561);
    // ifTrue:. 
    Send PSend2558 = new_Send((Optr)PSend2557, SMB_ifTrue_, 1, (Optr)PBlock2559);
    Array PThreadedCode2534 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push1, (Optr)PAssign2535, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2536, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend2537, (Optr)&t_send_ifTrue_, (Optr)PSend2538, (Optr)PBlock2539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send1, (Optr)PSend2542, (Optr)&t_send_ifTrue_, (Optr)PSend2543, (Optr)PBlock2544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send1, (Optr)PSend2547, (Optr)&t_send_ifTrue_, (Optr)PSend2548, (Optr)PBlock2549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend2552, (Optr)&t_send_ifTrue_, (Optr)PSend2553, (Optr)PBlock2554, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend2557, (Optr)&t_send_ifTrue_, (Optr)PSend2558, (Optr)PBlock2559, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock2532 = new_Block_with(PArray2533, empty_Array, PThreadedCode2534, 7, PAssign2535, PSend2538, PSend2543, PSend2548, PSend2553, PSend2558, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend2562 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock2532);
    Array PThreadedCode2531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock2532, (Optr)&t_send1, (Optr)PSend2562, (Optr)&t_method_return);
    Method PMethod2529 = new_Method_with(empty_Array, PArray2530, empty_Array, PThreadedCode2531, 1, PSend2562);
    
    MethodClosure MC_SMB_isSeparator = new_MethodClosure((Method)PMethod2529, Character_Class);
    store_method(Character_Class, SMB_isSeparator, MC_SMB_isSeparator);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray2564 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_asSmallInt = new_Symbol(L"asSmallInt");
    // asSmallInt. 
    Send PSend2566 = new_Send((Optr)self, SMB_asSmallInt, 0);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend2567 = new_Send((Optr)VAR_aCharacter_0_0, SMB__gt__equals_, 1, (Optr)PSend2566);
    Array PThreadedCode2565 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2566, (Optr)&t_send1, (Optr)PSend2567, (Optr)&t_method_return);
    Method PMethod2563 = new_Method_with(PArray2564, empty_Array, empty_Array, PThreadedCode2565, 1, PSend2567);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod2563, Character_Class);
    store_method(Character_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Type_minus_Character = new_Symbol(L"Type.Character");
    Annotation PAnnotation2570 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Type_minus_Character);
    Array PArray2569 = new_Array_with(1, (Optr)PAnnotation2570);
    Super PSuper2572 = new_Super(SMB_asString, 0);
    Array PThreadedCode2571 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper2572, (Optr)&t_method_return);
    NativeMethod PNativeMethod2568 = new_NativeMethod_with(empty_Array, empty_Array, PArray2569, PThreadedCode2571, 1, PSuper2572);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod2568, Character_Class);
    store_method(Character_Class, SMB_asString, MC_SMB_asString);
}


static void init_class_SMB_arrowRight() {
    Symbol SMB_arrowRight = new_Symbol(L"arrowRight");
    SmallInt int_29 = new_SmallInt(29);
    Constant int_29_Const = new_Constant((Optr)int_29);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2575 = new_Send((Optr)int_29_Const, SMB_asCharacter, 0);
    Array PThreadedCode2574 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_29, (Optr)&t_send0, (Optr)PSend2575, (Optr)&t_method_return);
    Method PMethod2573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2574, 1, PSend2575);
    
    MethodClosure MC_SMB_arrowRight = new_MethodClosure((Method)PMethod2573, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowRight, MC_SMB_arrowRight);
}


static void init_class_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    SmallInt int_8 = new_SmallInt(8);
    Constant int_8_Const = new_Constant((Optr)int_8);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2578 = new_Send((Optr)int_8_Const, SMB_asCharacter, 0);
    Array PThreadedCode2577 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_8, (Optr)&t_send0, (Optr)PSend2578, (Optr)&t_method_return);
    Method PMethod2576 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2577, 1, PSend2578);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod2576, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    SmallInt int_9 = new_SmallInt(9);
    Constant int_9_Const = new_Constant((Optr)int_9);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2581 = new_Send((Optr)int_9_Const, SMB_asCharacter, 0);
    Array PThreadedCode2580 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_9, (Optr)&t_send0, (Optr)PSend2581, (Optr)&t_method_return);
    Method PMethod2579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2580, 1, PSend2581);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod2579, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2584 = new_Send((Optr)int_10_Const, SMB_asCharacter, 0);
    Array PThreadedCode2583 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend2584, (Optr)&t_method_return);
    Method PMethod2582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2583, 1, PSend2584);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod2582, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_lf, MC_SMB_lf);
}


static void init_class_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    SmallInt int_27 = new_SmallInt(27);
    Constant int_27_Const = new_Constant((Optr)int_27);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2587 = new_Send((Optr)int_27_Const, SMB_asCharacter, 0);
    Array PThreadedCode2586 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_27, (Optr)&t_send0, (Optr)PSend2587, (Optr)&t_method_return);
    Method PMethod2585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2586, 1, PSend2587);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod2585, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_escape, MC_SMB_escape);
}


static void init_class_SMB_arrowDown() {
    Symbol SMB_arrowDown = new_Symbol(L"arrowDown");
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2590 = new_Send((Optr)int_31_Const, SMB_asCharacter, 0);
    Array PThreadedCode2589 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send0, (Optr)PSend2590, (Optr)&t_method_return);
    Method PMethod2588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2589, 1, PSend2590);
    
    MethodClosure MC_SMB_arrowDown = new_MethodClosure((Method)PMethod2588, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowDown, MC_SMB_arrowDown);
}


static void init_class_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2593 = new_Send((Optr)int_4_Const, SMB_asCharacter, 0);
    Array PThreadedCode2592 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send0, (Optr)PSend2593, (Optr)&t_method_return);
    Method PMethod2591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2592, 1, PSend2593);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod2591, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_end, MC_SMB_end);
}


static void init_class_SMB_pageUp() {
    Symbol SMB_pageUp = new_Symbol(L"pageUp");
    SmallInt int_11 = new_SmallInt(11);
    Constant int_11_Const = new_Constant((Optr)int_11);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2596 = new_Send((Optr)int_11_Const, SMB_asCharacter, 0);
    Array PThreadedCode2595 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_11, (Optr)&t_send0, (Optr)PSend2596, (Optr)&t_method_return);
    Method PMethod2594 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2595, 1, PSend2596);
    
    MethodClosure MC_SMB_pageUp = new_MethodClosure((Method)PMethod2594, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_pageUp, MC_SMB_pageUp);
}


static void init_class_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    SmallInt int_32 = new_SmallInt(32);
    Constant int_32_Const = new_Constant((Optr)int_32);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2599 = new_Send((Optr)int_32_Const, SMB_asCharacter, 0);
    Array PThreadedCode2598 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send0, (Optr)PSend2599, (Optr)&t_method_return);
    Method PMethod2597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2598, 1, PSend2599);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod2597, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_space, MC_SMB_space);
}


static void init_class_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2602 = new_Send((Optr)int_5_Const, SMB_asCharacter, 0);
    Array PThreadedCode2601 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send0, (Optr)PSend2602, (Optr)&t_method_return);
    Method PMethod2600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2601, 1, PSend2602);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod2600, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_insert, MC_SMB_insert);
}


static void init_class_SMB_arrowLeft() {
    Symbol SMB_arrowLeft = new_Symbol(L"arrowLeft");
    SmallInt int_28 = new_SmallInt(28);
    Constant int_28_Const = new_Constant((Optr)int_28);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2605 = new_Send((Optr)int_28_Const, SMB_asCharacter, 0);
    Array PThreadedCode2604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_28, (Optr)&t_send0, (Optr)PSend2605, (Optr)&t_method_return);
    Method PMethod2603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2604, 1, PSend2605);
    
    MethodClosure MC_SMB_arrowLeft = new_MethodClosure((Method)PMethod2603, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowLeft, MC_SMB_arrowLeft);
}


static void init_class_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray2607 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2609 = new_Send((Optr)VAR_anInteger_0_0, SMB_asCharacter, 0);
    Array PThreadedCode2608 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend2609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2606 = new_Method_with(PArray2607, empty_Array, empty_Array, PThreadedCode2608, 2, PSend2609, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod2606, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    SmallInt int_127 = new_SmallInt(127);
    Constant int_127_Const = new_Constant((Optr)int_127);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2612 = new_Send((Optr)int_127_Const, SMB_asCharacter, 0);
    Array PThreadedCode2611 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_127, (Optr)&t_send0, (Optr)PSend2612, (Optr)&t_method_return);
    Method PMethod2610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2611, 1, PSend2612);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod2610, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_delete, MC_SMB_delete);
}


static void init_class_SMB_arrowUp() {
    Symbol SMB_arrowUp = new_Symbol(L"arrowUp");
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2615 = new_Send((Optr)int_30_Const, SMB_asCharacter, 0);
    Array PThreadedCode2614 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send0, (Optr)PSend2615, (Optr)&t_method_return);
    Method PMethod2613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2614, 1, PSend2615);
    
    MethodClosure MC_SMB_arrowUp = new_MethodClosure((Method)PMethod2613, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_arrowUp, MC_SMB_arrowUp);
}


static void init_class_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2618 = new_Send((Optr)int_1_Const, SMB_asCharacter, 0);
    Array PThreadedCode2617 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend2618, (Optr)&t_method_return);
    Method PMethod2616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2617, 1, PSend2618);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod2616, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_home, MC_SMB_home);
}


static void init_class_SMB_pageDown() {
    Symbol SMB_pageDown = new_Symbol(L"pageDown");
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2621 = new_Send((Optr)int_12_Const, SMB_asCharacter, 0);
    Array PThreadedCode2620 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send0, (Optr)PSend2621, (Optr)&t_method_return);
    Method PMethod2619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2620, 1, PSend2621);
    
    MethodClosure MC_SMB_pageDown = new_MethodClosure((Method)PMethod2619, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_pageDown, MC_SMB_pageDown);
}


static void init_class_SMB_nbsp() {
    Symbol SMB_nbsp = new_Symbol(L"nbsp");
    SmallInt int_160 = new_SmallInt(160);
    Constant int_160_Const = new_Constant((Optr)int_160);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2624 = new_Send((Optr)int_160_Const, SMB_asCharacter, 0);
    Array PThreadedCode2623 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_160, (Optr)&t_send0, (Optr)PSend2624, (Optr)&t_method_return);
    Method PMethod2622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2623, 1, PSend2624);
    
    MethodClosure MC_SMB_nbsp = new_MethodClosure((Method)PMethod2622, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_nbsp, MC_SMB_nbsp);
}


static void init_class_SMB_newPage() {
    Symbol SMB_newPage = new_Symbol(L"newPage");
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2627 = new_Send((Optr)int_12_Const, SMB_asCharacter, 0);
    Array PThreadedCode2626 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send0, (Optr)PSend2627, (Optr)&t_method_return);
    Method PMethod2625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2626, 1, PSend2627);
    
    MethodClosure MC_SMB_newPage = new_MethodClosure((Method)PMethod2625, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_newPage, MC_SMB_newPage);
}


static void init_class_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2630 = new_Send((Optr)int_13_Const, SMB_asCharacter, 0);
    Array PThreadedCode2629 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send0, (Optr)PSend2630, (Optr)&t_method_return);
    Method PMethod2628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2629, 1, PSend2630);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod2628, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_cr, MC_SMB_cr);
}


static void init_class_SMB_enter() {
    Symbol SMB_enter = new_Symbol(L"enter");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend2633 = new_Send((Optr)int_3_Const, SMB_asCharacter, 0);
    Array PThreadedCode2632 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send0, (Optr)PSend2633, (Optr)&t_method_return);
    Method PMethod2631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2632, 1, PSend2633);
    
    MethodClosure MC_SMB_enter = new_MethodClosure((Method)PMethod2631, HEADER(Character_Class));
    store_method(HEADER(Character_Class), SMB_enter, MC_SMB_enter);
}

void init_Kernel_String_Character_layout() {
    layout_Kernel_String_Character_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_String_Character_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_String_Character_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_String_Character_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_String_Character_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_String_Character_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Character = new_Symbol(L"Character");
    Character_Class = (Class)new_Class(Object_Class, layout_Kernel_String_Character_Class_class);
    Class_set_superclass(Character_Class, Object_Class);
    HEADER(Character_Class)->layout = layout_Kernel_String_Character_Class_class;
    Character_Class->name = SMB_Character;
    
}

void init_Kernel_String_Character_methods() {
    init_SMB_asCharacter();
    init_SMB_asLowercase();
    init_SMB__gt_();
    init_SMB_asParser();
    init_SMB_asUppercase();
    init_SMB__gt__equals_();
    init_SMB_min_();
    init_SMB__lt_();
    init_SMB_asSymbol();
    init_SMB_max_();
    init_SMB_split_();
    init_SMB_putOn_();
    init_SMB_isCharacter();
    init_SMB_asInteger();
    init_SMB_isUppercase();
    init_SMB_asSmallInt();
    init_SMB_charCode();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB__equals_();
    init_SMB_isSeparator();
    init_SMB__lt__equals_();
    init_SMB_asString();
    init_class_SMB_arrowRight();
    init_class_SMB_backspace();
    init_class_SMB_tab();
    init_class_SMB_lf();
    init_class_SMB_escape();
    init_class_SMB_arrowDown();
    init_class_SMB_end();
    init_class_SMB_pageUp();
    init_class_SMB_space();
    init_class_SMB_insert();
    init_class_SMB_arrowLeft();
    init_class_SMB_value_();
    init_class_SMB_delete();
    init_class_SMB_arrowUp();
    init_class_SMB_home();
    init_class_SMB_pageDown();
    init_class_SMB_nbsp();
    init_class_SMB_newPage();
    init_class_SMB_cr();
    init_class_SMB_enter();
    
}