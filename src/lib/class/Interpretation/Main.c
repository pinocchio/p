#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16258 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16262 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16263 = new_Send((Optr)PSend16262, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16264 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16263);
    Array PThreadedCode16261 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16262, (Optr)&t_send0, (Optr)PSend16263, (Optr)&t_send1, (Optr)PSend16264, (Optr)&t_block_return);
    Block PBlock16260 = new_Block_with(empty_Array, empty_Array, PThreadedCode16261, 1, PSend16264);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16266 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16268 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16269 = new_Send((Optr)PSend16268, SMB_red, 0);
    // stderr. 
    Send PSend16270 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16271 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16270);
    // stderr. 
    Send PSend16272 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16273 = new_Send((Optr)PSend16272, SMB_normal, 0);
    // stderr. 
    Send PSend16274 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16275 = new_Send((Optr)PSend16274, SMB_lf, 0);
    Array PThreadedCode16267 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16268, (Optr)&t_send0, (Optr)PSend16269, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16270, (Optr)&t_send1, (Optr)PSend16271, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16272, (Optr)&t_send0, (Optr)PSend16273, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16274, (Optr)&t_send0, (Optr)PSend16275, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16265 = new_Block_with(PArray16266, empty_Array, PThreadedCode16267, 5, PSend16269, PSend16271, PSend16273, PSend16275, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16276 = new_Send((Optr)PBlock16260, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16265);
    Array PThreadedCode16259 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16260, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16265, (Optr)&t_send2, (Optr)PSend16276, (Optr)&t_method_return);
    Method PMethod16257 = new_Method_with(PArray16258, empty_Array, empty_Array, PThreadedCode16259, 1, PSend16276);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16257, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16279 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16283 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16282 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16283, (Optr)&t_block_return);
    Block PBlock16281 = new_Block_with(empty_Array, empty_Array, PThreadedCode16282, 1, PSend16283);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16286 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16287 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16286);
    Array PThreadedCode16285 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16286, (Optr)&t_send1, (Optr)PSend16287, (Optr)&t_block_return);
    Block PBlock16284 = new_Block_with(empty_Array, empty_Array, PThreadedCode16285, 1, PSend16287);
    // ifTrue:ifFalse:. 
    Send PSend16280 = new_Send((Optr)PSend16279, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16281, (Optr)PBlock16284);
    Array PThreadedCode16278 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16279, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16280, (Optr)PBlock16281, (Optr)PBlock16284, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16278, 2, PSend16280, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16277, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16289 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16291 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16292 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16291);
    Array PThreadedCode16290 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16291, (Optr)&t_send1, (Optr)PSend16292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16288 = new_Method_with(PArray16289, empty_Array, empty_Array, PThreadedCode16290, 2, PSend16292, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16288, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16294 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16296 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16295 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16296, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16293 = new_Method_with(PArray16294, empty_Array, empty_Array, PThreadedCode16295, 2, PAssign16296, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16293, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16298 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16298, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16297, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16300 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16301 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16307 = new_String(L"DoIt ^[");
    Constant string_16307_Const = new_Constant((Optr)string_16307);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16309 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16308 = new_Send((Optr)PSend16309, SMB_asString, 0);
    // ,. 
    Send PSend16306 = new_Send((Optr)string_16307_Const, SMB__append_, 1, (Optr)PSend16308);
    // ,. 
    Send PSend16305 = new_Send((Optr)PSend16306, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16310 = new_String(L"] value");
    Constant string_16310_Const = new_Constant((Optr)string_16310);
    // ,. 
    Send PSend16304 = new_Send((Optr)PSend16305, SMB__append_, 1, (Optr)string_16310_Const);
    Assign PAssign16303 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16304);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16313 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16312 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16313);
    Assign PAssign16311 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16312);
    // class. 
    Send PSend16314 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16315 = new_Send((Optr)PSend16314, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16316 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16317 = new_Send((Optr)PSend16315, SMB_at_put_, 2, (Optr)PSend16316, (Optr)VAR_method_0_2);
    Array PThreadedCode16302 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16303, (Optr)&t_push1, (Optr)string_16307, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16309, (Optr)&t_send0, (Optr)PSend16308, (Optr)&t_send1, (Optr)PSend16306, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16305, (Optr)&t_push1, (Optr)string_16310, (Optr)&t_send1, (Optr)PSend16304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16311, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16313, (Optr)&t_send2, (Optr)PSend16312, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16314, (Optr)&t_send0, (Optr)PSend16315, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16316, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16317, (Optr)&t_method_return);
    Method PMethod16299 = new_Method_with(PArray16300, PArray16301, empty_Array, PThreadedCode16302, 3, PAssign16303, PAssign16311, PSend16317);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16299, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16319 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16320 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16324 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16323 = new_Send((Optr)PSend16324, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16322 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16323);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16325 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16321 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16322, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16324, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16323, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16318 = new_Method_with(PArray16319, PArray16320, empty_Array, PThreadedCode16321, 3, PAssign16322, PSend16325, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16318, HEADER(Interpretation_Main_Class));
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