#include <lib/class/Interpretation/Main.h>


Optr layout_Interpretation_Main_Class_class;
Optr slot_Interpretation_Main_args;
Optr layout_Interpretation_Main;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16677 = new_Array_with(1, (Optr)VAR_code_0_0);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend16681 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16682 = new_Send((Optr)PSend16681, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend16683 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend16682);
    Array PThreadedCode16680 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16681, (Optr)&t_send0, (Optr)PSend16682, (Optr)&t_send1, (Optr)PSend16683, (Optr)&t_block_return);
    Block PBlock16679 = new_Block_with(empty_Array, empty_Array, PThreadedCode16680, 1, PSend16683);
    Variable VAR_ex_1_0 = new_Variable_named(L"ex", 1);
    Array PArray16685 = new_Array_with(1, (Optr)VAR_ex_1_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16687 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend16688 = new_Send((Optr)PSend16687, SMB_red, 0);
    // stderr. 
    Send PSend16689 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend16690 = new_Send((Optr)VAR_ex_1_0, SMB_warnOn_, 1, (Optr)PSend16689);
    // stderr. 
    Send PSend16691 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend16692 = new_Send((Optr)PSend16691, SMB_normal, 0);
    // stderr. 
    Send PSend16693 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16694 = new_Send((Optr)PSend16693, SMB_lf, 0);
    Array PThreadedCode16686 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16687, (Optr)&t_send0, (Optr)PSend16688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_1_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16689, (Optr)&t_send1, (Optr)PSend16690, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16691, (Optr)&t_send0, (Optr)PSend16692, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16693, (Optr)&t_send0, (Optr)PSend16694, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock16684 = new_Block_with(PArray16685, empty_Array, PThreadedCode16686, 5, PSend16688, PSend16690, PSend16692, PSend16694, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16695 = new_Send((Optr)PBlock16679, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock16684);
    Array PThreadedCode16678 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16679, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock16684, (Optr)&t_send2, (Optr)PSend16695, (Optr)&t_method_return);
    Method PMethod16676 = new_Method_with(PArray16677, empty_Array, empty_Array, PThreadedCode16678, 1, PSend16695);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16676, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend16698 = new_Send((Optr)slot_Interpretation_Main_args, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_runWith_ = new_Symbol(L"runWith:");
    // runWith:. 
    Send PSend16702 = new_Send((Optr)PShell_classReference, SMB_runWith_, 1, (Optr)self);
    Array PThreadedCode16701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PShell_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16702, (Optr)&t_block_return);
    Block PBlock16700 = new_Block_with(empty_Array, empty_Array, PThreadedCode16701, 1, PSend16702);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend16705 = new_Send((Optr)slot_Interpretation_Main_args, SMB_first, 0);
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    // interpretFile:. 
    Send PSend16706 = new_Send((Optr)self, SMB_interpretFile_, 1, (Optr)PSend16705);
    Array PThreadedCode16704 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16705, (Optr)&t_send1, (Optr)PSend16706, (Optr)&t_block_return);
    Block PBlock16703 = new_Block_with(empty_Array, empty_Array, PThreadedCode16704, 1, PSend16706);
    // ifTrue:ifFalse:. 
    Send PSend16699 = new_Send((Optr)PSend16698, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16700, (Optr)PBlock16703);
    Array PThreadedCode16697 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_send0, (Optr)PSend16698, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16699, (Optr)PBlock16700, (Optr)PBlock16703, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16697, 2, PSend16699, self);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod16696, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_run, MC_SMB_run);
}


static void init_SMB_interpretFile_() {
    Symbol SMB_interpretFile_ = new_Symbol(L"interpretFile:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray16708 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    // readAllFrom:. 
    Send PSend16710 = new_Send((Optr)PReadFile_classReference, SMB_readAllFrom_, 1, (Optr)VAR_filename_0_0);
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    // interpret:. 
    Send PSend16711 = new_Send((Optr)self, SMB_interpret_, 1, (Optr)PSend16710);
    Array PThreadedCode16709 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PReadFile_classReference, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend16710, (Optr)&t_send1, (Optr)PSend16711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16707 = new_Method_with(PArray16708, empty_Array, empty_Array, PThreadedCode16709, 2, PSend16711, self);
    
    MethodClosure MC_SMB_interpretFile_ = new_MethodClosure((Method)PMethod16707, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_interpretFile_, MC_SMB_interpretFile_);
}


static void init_SMB_args_() {
    Symbol SMB_args_ = new_Symbol(L"args:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16713 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign16715 = new_Assign((Optr)slot_Interpretation_Main_args, (Optr)VAR_anObject_0_0);
    Array PThreadedCode16714 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16715, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16712 = new_Method_with(PArray16713, empty_Array, empty_Array, PThreadedCode16714, 2, PAssign16715, self);
    
    MethodClosure MC_SMB_args_ = new_MethodClosure((Method)PMethod16712, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args_, MC_SMB_args_);
}


static void init_SMB_args() {
    Symbol SMB_args = new_Symbol(L"args");
    Array PThreadedCode16717 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_Main_args, (Optr)&t_method_return);
    Method PMethod16716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16717, 1, slot_Interpretation_Main_args);
    
    MethodClosure MC_SMB_args = new_MethodClosure((Method)PMethod16716, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_args, MC_SMB_args);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16719 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray16720 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_16726 = new_String(L"DoIt ^[");
    Constant string_16726_Const = new_Constant((Optr)string_16726);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16728 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16727 = new_Send((Optr)PSend16728, SMB_asString, 0);
    // ,. 
    Send PSend16725 = new_Send((Optr)string_16726_Const, SMB__append_, 1, (Optr)PSend16727);
    // ,. 
    Send PSend16724 = new_Send((Optr)PSend16725, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_16729 = new_String(L"] value");
    Constant string_16729_Const = new_Constant((Optr)string_16729);
    // ,. 
    Send PSend16723 = new_Send((Optr)PSend16724, SMB__append_, 1, (Optr)string_16729_Const);
    Assign PAssign16722 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend16723);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16732 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend16731 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend16732);
    Assign PAssign16730 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend16731);
    // class. 
    Send PSend16733 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend16734 = new_Send((Optr)PSend16733, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16735 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16736 = new_Send((Optr)PSend16734, SMB_at_put_, 2, (Optr)PSend16735, (Optr)VAR_method_0_2);
    Array PThreadedCode16721 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign16722, (Optr)&t_push1, (Optr)string_16726, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend16728, (Optr)&t_send0, (Optr)PSend16727, (Optr)&t_send1, (Optr)PSend16725, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16724, (Optr)&t_push1, (Optr)string_16729, (Optr)&t_send1, (Optr)PSend16723, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16730, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16732, (Optr)&t_send2, (Optr)PSend16731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16733, (Optr)&t_send0, (Optr)PSend16734, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend16735, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend16736, (Optr)&t_method_return);
    Method PMethod16718 = new_Method_with(PArray16719, PArray16720, empty_Array, PThreadedCode16721, 3, PAssign16722, PAssign16730, PSend16736);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod16718, Interpretation_Main_Class);
    store_method(Interpretation_Main_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_class_SMB_main_() {
    Symbol SMB_main_ = new_Symbol(L"main:");
    Variable VAR_args_0_0 = new_Variable_named(L"args", 0);
    Array PArray16738 = new_Array_with(1, (Optr)VAR_args_0_0);
    Variable VAR_interpreter_0_1 = new_Variable_named(L"interpreter", 0);
    Array PArray16739 = new_Array_with(1, (Optr)VAR_interpreter_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16743 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_args_ = new_Symbol(L"args:");
    // args:. 
    Send PSend16742 = new_Send((Optr)PSend16743, SMB_args_, 1, (Optr)VAR_args_0_0);
    Assign PAssign16741 = new_Assign((Optr)VAR_interpreter_0_1, (Optr)PSend16742);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend16744 = new_Send((Optr)VAR_interpreter_0_1, SMB_run, 0);
    Array PThreadedCode16740 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign16741, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16743, (Optr)&t_push_variable, (Optr)VAR_args_0_0, (Optr)&t_send1, (Optr)PSend16742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_interpreter_0_1, (Optr)&t_send0, (Optr)PSend16744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16737 = new_Method_with(PArray16738, PArray16739, empty_Array, PThreadedCode16740, 3, PAssign16741, PSend16744, self);
    
    MethodClosure MC_SMB_main_ = new_MethodClosure((Method)PMethod16737, HEADER(Interpretation_Main_Class));
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