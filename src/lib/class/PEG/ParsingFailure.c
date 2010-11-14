#include <lib/class/PEG/ParsingFailure.h>


Optr layout_PEG_ParsingFailure_Class_class;
Optr slot_PEG_ParsingFailure_input;
Optr layout_PEG_ParsingFailure;


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray19162 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign19164 = new_Assign((Optr)slot_PEG_ParsingFailure_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode19163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19164, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19161 = new_Method_with(PArray19162, empty_Array, empty_Array, PThreadedCode19163, 2, PAssign19164, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod19161, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray19166 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19169 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend19171 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_19175 = new_String(L"Parsing failure. Expected more input at end: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_19175_Const = new_Constant((Optr)string_19175);
    // <<. 
    Send PSend19176 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19175_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend19177 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19178 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode19174 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19175, (Optr)&t_send1, (Optr)PSend19176, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend19177, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19178, (Optr)&t_block_return);
    Block PBlock19173 = new_Block_with(empty_Array, empty_Array, PThreadedCode19174, 3, PSend19176, PSend19177, PSend19178);
    // ifTrue:. 
    Send PSend19172 = new_Send((Optr)PSend19171, SMB_ifTrue_, 1, (Optr)PBlock19173);
    String string_19179 = new_String(L"Parsing failure at ");
    Constant string_19179_Const = new_Constant((Optr)string_19179);
    // <<. 
    Send PSend19180 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19179_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend19181 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_position, 0);
    // <<. 
    Send PSend19182 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend19181);
    String string_19183 = new_String(L": ");
    Constant string_19183_Const = new_Constant((Optr)string_19183);
    // <<. 
    Send PSend19184 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_19183_Const);
    Symbol SMB_sample = new_Symbol(L"sample");
    // sample. 
    Send PSend19185 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_sample, 0);
    // <<. 
    Send PSend19186 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend19185);
    Array PThreadedCode19170 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19171, (Optr)&t_send_ifTrue_, (Optr)PSend19172, (Optr)PBlock19173, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19179, (Optr)&t_send1, (Optr)PSend19180, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19181, (Optr)&t_send1, (Optr)PSend19182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_19183, (Optr)&t_send1, (Optr)PSend19184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend19185, (Optr)&t_send1, (Optr)PSend19186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock19168 = new_Block_with(PArray19169, empty_Array, PThreadedCode19170, 6, PSend19172, PSend19180, PSend19182, PSend19184, PSend19186, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19187 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19168);
    Array PThreadedCode19167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19168, (Optr)&t_send1, (Optr)PSend19187, (Optr)&t_method_return);
    Method PMethod19165 = new_Method_with(PArray19166, empty_Array, empty_Array, PThreadedCode19167, 1, PSend19187);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod19165, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_input() {
    Symbol SMB_input = new_Symbol(L"input");
    Array PThreadedCode19189 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_method_return);
    Method PMethod19188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19189, 1, slot_PEG_ParsingFailure_input);
    
    MethodClosure MC_SMB_input = new_MethodClosure((Method)PMethod19188, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input, MC_SMB_input);
}

void init_PEG_PEGParsingFailure_layout() {
    layout_PEG_ParsingFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ParsingFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ParsingFailure = new_Symbol(L"ParsingFailure");
    slot_PEG_ParsingFailure_input = (Optr)new_Slot(1, L"input");
    layout_PEG_ParsingFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PEG_ParsingFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_PEG_ParsingFailure)->values[1] = slot_PEG_ParsingFailure_input; // input 
    PEG_ParsingFailure_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_PEG_ParsingFailure_Class_class);
    PEG_ParsingFailure_Class->layout = layout_PEG_ParsingFailure;
    PEG_ParsingFailure_Class->name = SMB_ParsingFailure;
    
}

void init_PEG_PEGParsingFailure_methods() {
    init_SMB_input_();
    init_SMB_warnOn_();
    init_SMB_input();
    
}