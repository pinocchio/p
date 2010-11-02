#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19886 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19886, (Optr)&t_method_return);
    Method PMethod19884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19885, 1, PSend19886);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod19884, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19888 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray19889 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19892 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19895 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign19894 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend19895);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19896 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19900 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19899 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19900, (Optr)&t_block_return);
    Block PBlock19898 = new_Block_with(empty_Array, empty_Array, PThreadedCode19899, 1, PSend19900);
    // ifTrue:. 
    Send PSend19897 = new_Send((Optr)PSend19896, SMB_ifTrue_, 1, (Optr)PBlock19898);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19901 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend19905 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19904 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19905, (Optr)&t_block_return);
    Block PBlock19903 = new_Block_with(empty_Array, empty_Array, PThreadedCode19904, 1, PSend19905);
    // ifTrue:. 
    Send PSend19902 = new_Send((Optr)PSend19901, SMB_ifTrue_, 1, (Optr)PBlock19903);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19906 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19907 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19893 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign19894, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19895, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend19896, (Optr)&t_send_ifTrue_, (Optr)PSend19897, (Optr)PBlock19898, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend19901, (Optr)&t_send_ifTrue_, (Optr)PSend19902, (Optr)PBlock19903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19907, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19891 = new_Block_with(PArray19892, empty_Array, PThreadedCode19893, 6, PAssign19894, PSend19897, PSend19902, PSend19906, PSend19907, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19908 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19891);
    Array PThreadedCode19890 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19891, (Optr)&t_send1, (Optr)PSend19908, (Optr)&t_method_return);
    Method PMethod19887 = new_Method_with(PArray19888, PArray19889, empty_Array, PThreadedCode19890, 1, PSend19908);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19887, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19910 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19913 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19915 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19916 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend19915);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19920 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19919 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19920, (Optr)&t_block_return);
    Block PBlock19918 = new_Block_with(empty_Array, empty_Array, PThreadedCode19919, 1, PSend19920);
    // ifTrue:. 
    Send PSend19917 = new_Send((Optr)PSend19916, SMB_ifTrue_, 1, (Optr)PBlock19918);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19921 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19914 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19915, (Optr)&t_send1, (Optr)PSend19916, (Optr)&t_send_ifTrue_, (Optr)PSend19917, (Optr)PBlock19918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19921, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19912 = new_Block_with(PArray19913, empty_Array, PThreadedCode19914, 3, PSend19917, PSend19921, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19922 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19912);
    Array PThreadedCode19911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19912, (Optr)&t_send1, (Optr)PSend19922, (Optr)&t_method_return);
    Method PMethod19909 = new_Method_with(PArray19910, empty_Array, empty_Array, PThreadedCode19911, 1, PSend19922);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19909, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGConsumingNotTerminal_layout() {
    layout_PEG_ConsumingNotTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ConsumingNotTerminal = new_Symbol(L"ConsumingNotTerminal");
    layout_PEG_ConsumingNotTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ConsumingNotTerminal)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_ConsumingNotTerminal_Class = (Class)new_Class(PEG_NotTerminal_Class, layout_PEG_ConsumingNotTerminal_Class_class);
    PEG_ConsumingNotTerminal_Class->layout = layout_PEG_ConsumingNotTerminal;
    PEG_ConsumingNotTerminal_Class->name = SMB_ConsumingNotTerminal;
    
}

void init_PEG_PEGConsumingNotTerminal_methods() {
    init_SMB_strongTimes();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}