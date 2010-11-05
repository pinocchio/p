#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16288 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16292 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16293 = new_Send((Optr)PSend16292, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16294 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16293);
    Array PThreadedCode16291 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16292, (Optr)&t_send0, (Optr)PSend16293, (Optr)&t_send1, (Optr)PSend16294, (Optr)&t_block_return);
    Block PBlock16290 = new_Block_with(empty_Array, empty_Array, PThreadedCode16291, 1, PSend16294);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16296 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16298 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16299 = new_Send((Optr)PSend16298, SMB_red, 0);
    // stderr. 
    Send PSend16300 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16301 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16300);
    // stderr. 
    Send PSend16302 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16303 = new_Send((Optr)PSend16302, SMB_normal, 0);
    // stderr. 
    Send PSend16304 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16305 = new_Send((Optr)PSend16304, SMB_lf, 0);
    Array PThreadedCode16297 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16298, (Optr)&t_send0, (Optr)PSend16299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16300, (Optr)&t_send1, (Optr)PSend16301, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16302, (Optr)&t_send0, (Optr)PSend16303, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16304, (Optr)&t_send0, (Optr)PSend16305, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16295 = new_Block_with(PArray16296, empty_Array, PThreadedCode16297, 5, PSend16299, PSend16301, PSend16303, PSend16305, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16306 = new_Send((Optr)PBlock16290, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16295);
    Array PThreadedCode16289 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16290, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16295, (Optr)&t_send2, (Optr)PSend16306, (Optr)&t_method_return);
    Method PMethod16287 = new_Method_with(PArray16288, empty_Array, empty_Array, PThreadedCode16289, 1, PSend16306);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16287, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16309 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16313 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16312 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16313, (Optr)&t_block_return);
    Block PBlock16311 = new_Block_with(empty_Array, empty_Array, PThreadedCode16312, 1, PSend16313);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16316 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16317 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16316);
    Array PThreadedCode16315 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16316, (Optr)&t_send1, (Optr)PSend16317, (Optr)&t_block_return);
    Block PBlock16314 = new_Block_with(empty_Array, empty_Array, PThreadedCode16315, 1, PSend16317);
    // ifTrue:ifFalse:. 
    Send PSend16310 = new_Send((Optr)PSend16309, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16311, (Optr)PBlock16314);
    Array PThreadedCode16308 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16309, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16310, (Optr)PBlock16311, (Optr)PBlock16314, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16308, 2, PSend16310, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16307, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16319 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16321 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16322 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16321);
    Array PThreadedCode16320 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16321, (Optr)&t_send1, (Optr)PSend16322, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16318 = new_Method_with(PArray16319, empty_Array, empty_Array, PThreadedCode16320, 2, PSend16322, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16318, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16324 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16326 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16325 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16326, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16323 = new_Method_with(PArray16324, empty_Array, empty_Array, PThreadedCode16325, 2, PAssign16326, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16323, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16328, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16327, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16330 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16331 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16337 = new_String(L"DoIt ^[");
    Constant string_16337_Const = new_Constant((Optr)string_16337);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16339 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16338 = new_Send((Optr)PSend16339, SMB_asString, 0);
    // ,. 
    Send PSend16336 = new_Send((Optr)string_16337_Const, SMB__append_, 1, (Optr)PSend16338);
    // ,. 
    Send PSend16335 = new_Send((Optr)PSend16336, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16340 = new_String(L"] value");
    Constant string_16340_Const = new_Constant((Optr)string_16340);
    // ,. 
    Send PSend16334 = new_Send((Optr)PSend16335, SMB__append_, 1, (Optr)string_16340_Const);
    Assign PAssign16333 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16334);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16343 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16342 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16343);
    Assign PAssign16341 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16342);
    // class. 
    Send PSend16344 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16345 = new_Send((Optr)PSend16344, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16346 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16347 = new_Send((Optr)PSend16345, SMB_at_put_, 2, (Optr)PSend16346, (Optr)VAR_method_0_2);
    Array PThreadedCode16332 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16333, (Optr)&t_push1, (Optr)string_16337, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16339, (Optr)&t_send0, (Optr)PSend16338, (Optr)&t_send1, (Optr)PSend16336, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16335, (Optr)&t_push1, (Optr)string_16340, (Optr)&t_send1, (Optr)PSend16334, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16341, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16343, (Optr)&t_send2, (Optr)PSend16342, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16344, (Optr)&t_send0, (Optr)PSend16345, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16346, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16347, (Optr)&t_method_return);
    Method PMethod16329 = new_Method_with(PArray16330, PArray16331, empty_Array, PThreadedCode16332, 3, PAssign16333, PAssign16341, PSend16347);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16329, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16349 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16350 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16354 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16353 = new_Send((Optr)PSend16354, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16352 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16353);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16355 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16351 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16352, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16354, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16353, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16355, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16348 = new_Method_with(PArray16349, PArray16350, empty_Array, PThreadedCode16351, 3, PAssign16352, PSend16355, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16348, HEADER(Interpretation_Main_Class));
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