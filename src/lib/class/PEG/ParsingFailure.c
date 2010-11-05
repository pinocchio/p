#include <lib/class/PEG/ParsingFailure.h>


Optr layout_PEG_ParsingFailure_Class_class;
Optr slot_PEG_ParsingFailure_input;
Optr layout_PEG_ParsingFailure;


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18832 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18834 = new_Assign((Optr)slot_PEG_ParsingFailure_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18834, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18831 = new_Method_with(PArray18832, empty_Array, empty_Array, PThreadedCode18833, 2, PAssign18834, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod18831, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray18836 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18839 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18841 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_18845 = new_String(L"Parsing failure. Expected more input at end: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_18845_Const = new_Constant((Optr)string_18845);
    // <<. 
    Send PSend18846 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18845_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend18847 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18848 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18844 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18845, (Optr)&t_send1, (Optr)PSend18846, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend18847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18848, (Optr)&t_block_return);
    Block PBlock18843 = new_Block_with(empty_Array, empty_Array, PThreadedCode18844, 3, PSend18846, PSend18847, PSend18848);
    // ifTrue:. 
    Send PSend18842 = new_Send((Optr)PSend18841, SMB_ifTrue_, 1, (Optr)PBlock18843);
    String string_18849 = new_String(L"Parsing failure at ");
    Constant string_18849_Const = new_Constant((Optr)string_18849);
    // <<. 
    Send PSend18850 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18849_Const);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend18851 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_position, 0);
    // <<. 
    Send PSend18852 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18851);
    String string_18853 = new_String(L": ");
    Constant string_18853_Const = new_Constant((Optr)string_18853);
    // <<. 
    Send PSend18854 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_18853_Const);
    Symbol SMB_sample = new_Symbol(L"sample");
    // sample. 
    Send PSend18855 = new_Send((Optr)slot_PEG_ParsingFailure_input, SMB_sample, 0);
    // <<. 
    Send PSend18856 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend18855);
    Array PThreadedCode18840 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18841, (Optr)&t_send_ifTrue_, (Optr)PSend18842, (Optr)PBlock18843, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18849, (Optr)&t_send1, (Optr)PSend18850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18851, (Optr)&t_send1, (Optr)PSend18852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_18853, (Optr)&t_send1, (Optr)PSend18854, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_send0, (Optr)PSend18855, (Optr)&t_send1, (Optr)PSend18856, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18838 = new_Block_with(PArray18839, empty_Array, PThreadedCode18840, 6, PSend18842, PSend18850, PSend18852, PSend18854, PSend18856, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18857 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18838);
    Array PThreadedCode18837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18838, (Optr)&t_send1, (Optr)PSend18857, (Optr)&t_method_return);
    Method PMethod18835 = new_Method_with(PArray18836, empty_Array, empty_Array, PThreadedCode18837, 1, PSend18857);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod18835, PEG_ParsingFailure_Class);
    store_method(PEG_ParsingFailure_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_input() {
    Symbol SMB_input = new_Symbol(L"input");
    Array PThreadedCode18859 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_ParsingFailure_input, (Optr)&t_method_return);
    Method PMethod18858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18859, 1, slot_PEG_ParsingFailure_input);
    
    MethodClosure MC_SMB_input = new_MethodClosure((Method)PMethod18858, PEG_ParsingFailure_Class);
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