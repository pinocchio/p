#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16418 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16422 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16423 = new_Send((Optr)PSend16422, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16424 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16423);
    Array PThreadedCode16421 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16422, (Optr)&t_send0, (Optr)PSend16423, (Optr)&t_send1, (Optr)PSend16424, (Optr)&t_block_return);
    Block PBlock16420 = new_Block_with(empty_Array, empty_Array, PThreadedCode16421, 1, PSend16424);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16426 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16428 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16429 = new_Send((Optr)PSend16428, SMB_red, 0);
    // stderr. 
    Send PSend16430 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16431 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16430);
    // stderr. 
    Send PSend16432 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16433 = new_Send((Optr)PSend16432, SMB_normal, 0);
    // stderr. 
    Send PSend16434 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16435 = new_Send((Optr)PSend16434, SMB_lf, 0);
    Array PThreadedCode16427 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16428, (Optr)&t_send0, (Optr)PSend16429, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16430, (Optr)&t_send1, (Optr)PSend16431, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16432, (Optr)&t_send0, (Optr)PSend16433, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16434, (Optr)&t_send0, (Optr)PSend16435, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16425 = new_Block_with(PArray16426, empty_Array, PThreadedCode16427, 5, PSend16429, PSend16431, PSend16433, PSend16435, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16436 = new_Send((Optr)PBlock16420, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16425);
    Array PThreadedCode16419 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16420, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16425, (Optr)&t_send2, (Optr)PSend16436, (Optr)&t_method_return);
    Method PMethod16417 = new_Method_with(PArray16418, empty_Array, empty_Array, PThreadedCode16419, 1, PSend16436);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16417, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16439 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16443 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16443, (Optr)&t_block_return);
    Block PBlock16441 = new_Block_with(empty_Array, empty_Array, PThreadedCode16442, 1, PSend16443);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16446 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16447 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16446);
    Array PThreadedCode16445 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16446, (Optr)&t_send1, (Optr)PSend16447, (Optr)&t_block_return);
    Block PBlock16444 = new_Block_with(empty_Array, empty_Array, PThreadedCode16445, 1, PSend16447);
    // ifTrue:ifFalse:. 
    Send PSend16440 = new_Send((Optr)PSend16439, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16441, (Optr)PBlock16444);
    Array PThreadedCode16438 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16439, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16440, (Optr)PBlock16441, (Optr)PBlock16444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16438, 2, PSend16440, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16437, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16449 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16451 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16452 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16451);
    Array PThreadedCode16450 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16451, (Optr)&t_send1, (Optr)PSend16452, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16448 = new_Method_with(PArray16449, empty_Array, empty_Array, PThreadedCode16450, 2, PSend16452, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16448, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16454 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16456 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16455 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16456, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16453 = new_Method_with(PArray16454, empty_Array, empty_Array, PThreadedCode16455, 2, PAssign16456, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16453, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16458 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16457 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16458, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16457, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16460 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16461 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16467 = new_String(L"DoIt ^[");
    Constant string_16467_Const = new_Constant((Optr)string_16467);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16469 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16468 = new_Send((Optr)PSend16469, SMB_asString, 0);
    // ,. 
    Send PSend16466 = new_Send((Optr)string_16467_Const, SMB__append_, 1, (Optr)PSend16468);
    // ,. 
    Send PSend16465 = new_Send((Optr)PSend16466, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16470 = new_String(L"] value");
    Constant string_16470_Const = new_Constant((Optr)string_16470);
    // ,. 
    Send PSend16464 = new_Send((Optr)PSend16465, SMB__append_, 1, (Optr)string_16470_Const);
    Assign PAssign16463 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16464);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16473 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16472 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16473);
    Assign PAssign16471 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16472);
    // class. 
    Send PSend16474 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16475 = new_Send((Optr)PSend16474, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16476 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16477 = new_Send((Optr)PSend16475, SMB_at_put_, 2, (Optr)PSend16476, (Optr)VAR_method_0_2);
    Array PThreadedCode16462 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16463, (Optr)&t_push1, (Optr)string_16467, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16469, (Optr)&t_send0, (Optr)PSend16468, (Optr)&t_send1, (Optr)PSend16466, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16465, (Optr)&t_push1, (Optr)string_16470, (Optr)&t_send1, (Optr)PSend16464, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16471, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16473, (Optr)&t_send2, (Optr)PSend16472, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16474, (Optr)&t_send0, (Optr)PSend16475, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16476, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16477, (Optr)&t_method_return);
    Method PMethod16459 = new_Method_with(PArray16460, PArray16461, empty_Array, PThreadedCode16462, 3, PAssign16463, PAssign16471, PSend16477);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16459, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16479 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16480 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16484 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16483 = new_Send((Optr)PSend16484, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16482 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16483);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16485 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16481 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16482, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16484, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16483, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16485, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16478 = new_Method_with(PArray16479, PArray16480, empty_Array, PThreadedCode16481, 3, PAssign16482, PSend16485, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16478, HEADER(Interpretation_Main_Class));
    store_method(HEADER(Interpretation_Main_Class), SMB_main_, MC_SMB_main_);
}

void init_Interpretation_PMain_layout() {
    layout_Interpretation_Main_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Main_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Main_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Main_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Main_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Main_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Main = new_Symbol(L"Main");
    slot_Interpretation_Main_args = (Optr)new_Slot(2, L"args");
    layout_Interpretation_Main = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Interpretation_Main)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Main)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_Main)->values[2] = slot_Interpretation_Main_args; // args 
    Interpretation_Main_Class = (Class)new_Class(Interpretation_Interpreter_Class, layout_Interpretation_Main_Class_class);
    Interpretation_Main_Class->layout = layout_Interpretation_Main;
    Interpretation_Main_Class->name = SMB_Main;
    
}

void init_Interpretation_PMain_methods() {
    init_SMB_interpret_();
    init_SMB_run();
    init_SMB_interpretFile_();
    init_SMB_args_();
    init_SMB_args();
    init_SMB_compile_();
    init_class_SMB_main_();
    
}