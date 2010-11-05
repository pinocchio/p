#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19916 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19915 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19916, (Optr)&t_method_return);
    Method PMethod19914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19915, 1, PSend19916);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod19914, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19918 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray19919 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19922 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19925 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign19924 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend19925);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19926 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19930 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19929 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19930, (Optr)&t_block_return);
    Block PBlock19928 = new_Block_with(empty_Array, empty_Array, PThreadedCode19929, 1, PSend19930);
    // ifTrue:. 
    Send PSend19927 = new_Send((Optr)PSend19926, SMB_ifTrue_, 1, (Optr)PBlock19928);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19931 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend19935 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19934 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19935, (Optr)&t_block_return);
    Block PBlock19933 = new_Block_with(empty_Array, empty_Array, PThreadedCode19934, 1, PSend19935);
    // ifTrue:. 
    Send PSend19932 = new_Send((Optr)PSend19931, SMB_ifTrue_, 1, (Optr)PBlock19933);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19936 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19937 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19923 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign19924, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend19926, (Optr)&t_send_ifTrue_, (Optr)PSend19927, (Optr)PBlock19928, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend19931, (Optr)&t_send_ifTrue_, (Optr)PSend19932, (Optr)PBlock19933, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19937, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19921 = new_Block_with(PArray19922, empty_Array, PThreadedCode19923, 6, PAssign19924, PSend19927, PSend19932, PSend19936, PSend19937, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19938 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19921);
    Array PThreadedCode19920 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19921, (Optr)&t_send1, (Optr)PSend19938, (Optr)&t_method_return);
    Method PMethod19917 = new_Method_with(PArray19918, PArray19919, empty_Array, PThreadedCode19920, 1, PSend19938);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19917, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19940 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19945 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19946 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend19945);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19950 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19949 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19950, (Optr)&t_block_return);
    Block PBlock19948 = new_Block_with(empty_Array, empty_Array, PThreadedCode19949, 1, PSend19950);
    // ifTrue:. 
    Send PSend19947 = new_Send((Optr)PSend19946, SMB_ifTrue_, 1, (Optr)PBlock19948);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19951 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19944 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19945, (Optr)&t_send1, (Optr)PSend19946, (Optr)&t_send_ifTrue_, (Optr)PSend19947, (Optr)PBlock19948, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19951, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19942 = new_Block_with(PArray19943, empty_Array, PThreadedCode19944, 3, PSend19947, PSend19951, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19952 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19942);
    Array PThreadedCode19941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19942, (Optr)&t_send1, (Optr)PSend19952, (Optr)&t_method_return);
    Method PMethod19939 = new_Method_with(PArray19940, empty_Array, empty_Array, PThreadedCode19941, 1, PSend19952);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19939, PEG_ConsumingNotTerminal_Class);
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