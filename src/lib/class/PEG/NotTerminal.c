#include <lib/class/PEG/NotTerminal.h>


Optr layout_PEG_NotTerminal_Class_class;
Optr slot_PEG_NotTerminal_char;
Optr layout_PEG_NotTerminal;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
<<<<<<< HEAD
    Array PArray19956 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Assign PAssign19958 = new_Assign((Optr)slot_PEG_NotTerminal_char, (Optr)VAR_aCharacter_0_0);
    Array PThreadedCode19957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19958, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19955 = new_Method_with(PArray19956, empty_Array, empty_Array, PThreadedCode19957, 2, PAssign19958, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19955, PEG_NotTerminal_Class);
=======
    Array PArray19922 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Assign PAssign19924 = new_Assign((Optr)slot_PEG_NotTerminal_char, (Optr)VAR_aCharacter_0_0);
    Array PThreadedCode19923 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19924, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19921 = new_Method_with(PArray19922, empty_Array, empty_Array, PThreadedCode19923, 2, PAssign19924, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19921, PEG_NotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_NotTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19960 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19963 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19965 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19966 = new_Send((Optr)PSend19965, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19970 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19969 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19970, (Optr)&t_block_return);
    Block PBlock19968 = new_Block_with(empty_Array, empty_Array, PThreadedCode19969, 1, PSend19970);
    // ifTrue:. 
    Send PSend19967 = new_Send((Optr)PSend19966, SMB_ifTrue_, 1, (Optr)PBlock19968);
    Array PThreadedCode19964 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19965, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19966, (Optr)&t_send_ifTrue_, (Optr)PSend19967, (Optr)PBlock19968, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19962 = new_Block_with(PArray19963, empty_Array, PThreadedCode19964, 2, PSend19967, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19971 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19962);
    Array PThreadedCode19961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19962, (Optr)&t_send1, (Optr)PSend19971, (Optr)&t_method_return);
    Method PMethod19959 = new_Method_with(PArray19960, empty_Array, empty_Array, PThreadedCode19961, 1, PSend19971);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19959, PEG_NotTerminal_Class);
=======
    Array PArray19926 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19929 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19931 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19932 = new_Send((Optr)PSend19931, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19936 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19935 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19936, (Optr)&t_block_return);
    Block PBlock19934 = new_Block_with(empty_Array, empty_Array, PThreadedCode19935, 1, PSend19936);
    // ifTrue:. 
    Send PSend19933 = new_Send((Optr)PSend19932, SMB_ifTrue_, 1, (Optr)PBlock19934);
    Array PThreadedCode19930 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19931, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19932, (Optr)&t_send_ifTrue_, (Optr)PSend19933, (Optr)PBlock19934, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19928 = new_Block_with(PArray19929, empty_Array, PThreadedCode19930, 2, PSend19933, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19937 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19928);
    Array PThreadedCode19927 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19928, (Optr)&t_send1, (Optr)PSend19937, (Optr)&t_method_return);
    Method PMethod19925 = new_Method_with(PArray19926, empty_Array, empty_Array, PThreadedCode19927, 1, PSend19937);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19925, PEG_NotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_NotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
<<<<<<< HEAD
    Array PArray19973 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19976 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19978 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19979 = new_Send((Optr)PSend19978, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19983 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19982 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19983, (Optr)&t_block_return);
    Block PBlock19981 = new_Block_with(empty_Array, empty_Array, PThreadedCode19982, 1, PSend19983);
    // ifTrue:. 
    Send PSend19980 = new_Send((Optr)PSend19979, SMB_ifTrue_, 1, (Optr)PBlock19981);
    Array PThreadedCode19977 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19978, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19979, (Optr)&t_send_ifTrue_, (Optr)PSend19980, (Optr)PBlock19981, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19975 = new_Block_with(PArray19976, empty_Array, PThreadedCode19977, 2, PSend19980, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19984 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19975);
    Array PThreadedCode19974 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19975, (Optr)&t_send1, (Optr)PSend19984, (Optr)&t_method_return);
    Method PMethod19972 = new_Method_with(PArray19973, empty_Array, empty_Array, PThreadedCode19974, 1, PSend19984);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19972, PEG_NotTerminal_Class);
=======
    Array PArray19939 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19942 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19944 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19945 = new_Send((Optr)PSend19944, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19949 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19948 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19949, (Optr)&t_block_return);
    Block PBlock19947 = new_Block_with(empty_Array, empty_Array, PThreadedCode19948, 1, PSend19949);
    // ifTrue:. 
    Send PSend19946 = new_Send((Optr)PSend19945, SMB_ifTrue_, 1, (Optr)PBlock19947);
    Array PThreadedCode19943 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19944, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19945, (Optr)&t_send_ifTrue_, (Optr)PSend19946, (Optr)PBlock19947, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19941 = new_Block_with(PArray19942, empty_Array, PThreadedCode19943, 2, PSend19946, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19950 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19941);
    Array PThreadedCode19940 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19941, (Optr)&t_send1, (Optr)PSend19950, (Optr)&t_method_return);
    Method PMethod19938 = new_Method_with(PArray19939, empty_Array, empty_Array, PThreadedCode19940, 1, PSend19950);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19938, PEG_NotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_NotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
<<<<<<< HEAD
    Send PSend19987 = new_Send((Optr)PEGConsumingNotTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19986 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19987, (Optr)&t_method_return);
    Method PMethod19985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19986, 1, PSend19987);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod19985, PEG_NotTerminal_Class);
=======
    Send PSend19953 = new_Send((Optr)PEGConsumingNotTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19953, (Optr)&t_method_return);
    Method PMethod19951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19952, 1, PSend19953);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod19951, PEG_NotTerminal_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PEG_NotTerminal_Class, SMB_consume, MC_SMB_consume);
}

void init_PEG_PEGNotTerminal_layout() {
    layout_PEG_NotTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_NotTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NotTerminal = new_Symbol(L"NotTerminal");
    slot_PEG_NotTerminal_char = (Optr)new_Slot(0, L"char");
    layout_PEG_NotTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_NotTerminal)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_NotTerminal_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_NotTerminal_Class_class);
    PEG_NotTerminal_Class->layout = layout_PEG_NotTerminal;
    PEG_NotTerminal_Class->name = SMB_NotTerminal;
    
}

void init_PEG_PEGNotTerminal_methods() {
    init_SMB_initialize_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_consume();
    
}