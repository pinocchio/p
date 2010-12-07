#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15934 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15935 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15936 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15937 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15938 = new_Send((Optr)PSend15936, SMB_raisedTo_, 1, (Optr)PSend15937);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15939 = new_Send((Optr)PSend15935, SMB__divide_, 1, (Optr)PSend15938);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15940 = new_Send((Optr)PSend15934, SMB__plus_, 1, (Optr)PSend15939);
    Array PThreadedCode15933 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15934, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15935, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15936, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15937, (Optr)&t_send1, (Optr)PSend15938, (Optr)&t_send1, (Optr)PSend15939, (Optr)&t_send1, (Optr)PSend15940, (Optr)&t_method_return);
    Method PMethod15932 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15933, 1, PSend15940);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15932, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15942 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15942, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15941, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15944 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15946 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15945 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15946, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15943 = new_Method_with(PArray15944, empty_Array, empty_Array, PThreadedCode15945, 2, PAssign15946, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15943, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15948 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15951 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15953 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15957 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15956 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15957, (Optr)&t_block_return);
    Block PBlock15955 = new_Block_with(empty_Array, empty_Array, PThreadedCode15956, 1, PSend15957);
    // ifFalse:. 
    Send PSend15954 = new_Send((Optr)PSuper15953, SMB_ifFalse_, 1, (Optr)PBlock15955);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15958 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15959 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15958);
    // escape:. 
    Send PSend15963 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15962 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15963, (Optr)&t_block_return);
    Block PBlock15961 = new_Block_with(empty_Array, empty_Array, PThreadedCode15962, 1, PSend15963);
    // ifFalse:. 
    Send PSend15960 = new_Send((Optr)PSend15959, SMB_ifFalse_, 1, (Optr)PBlock15961);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15964 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15965 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15964);
    // escape:. 
    Send PSend15969 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15968 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15969, (Optr)&t_block_return);
    Block PBlock15967 = new_Block_with(empty_Array, empty_Array, PThreadedCode15968, 1, PSend15969);
    // ifFalse:. 
    Send PSend15966 = new_Send((Optr)PSend15965, SMB_ifFalse_, 1, (Optr)PBlock15967);
    Array PThreadedCode15952 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15953, (Optr)&t_send_ifFalse_, (Optr)PSend15954, (Optr)PBlock15955, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15958, (Optr)&t_send1, (Optr)PSend15959, (Optr)&t_send_ifFalse_, (Optr)PSend15960, (Optr)PBlock15961, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15964, (Optr)&t_send1, (Optr)PSend15965, (Optr)&t_send_ifFalse_, (Optr)PSend15966, (Optr)PBlock15967, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15950 = new_Block_with(PArray15951, empty_Array, PThreadedCode15952, 4, PSend15954, PSend15960, PSend15966, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15970 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15950);
    Array PThreadedCode15949 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15950, (Optr)&t_send1, (Optr)PSend15970, (Optr)&t_method_return);
    Method PMethod15947 = new_Method_with(PArray15948, empty_Array, empty_Array, PThreadedCode15949, 1, PSend15970);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15947, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15972 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15974 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15973 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15974, (Optr)&t_method_return);
    Method PMethod15971 = new_Method_with(PArray15972, empty_Array, empty_Array, PThreadedCode15973, 1, PSend15974);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15971, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15976 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15978 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2907 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend15979 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // printOn:. 
    Send PSend15980 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15977 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15978, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend15979, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15975 = new_Method_with(PArray15976, empty_Array, empty_Array, PThreadedCode15977, 4, PSend15978, PSend15979, PSend15980, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15975, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15982 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15984 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15984, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15981 = new_Method_with(PArray15982, empty_Array, empty_Array, PThreadedCode15983, 2, PAssign15984, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15981, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15986 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15986, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15985, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high, MC_SMB_high);
}

void init_Smalltalk_AST_ASTFloat_layout() {
    layout_Smalltalk_AST_Float_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Float_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Float = new_Symbol(L"Float");
    slot_Smalltalk_AST_Float_high = (Optr)new_Slot(0, L"high");
    slot_Smalltalk_AST_Float_low = (Optr)new_Slot(1, L"low");
    layout_Smalltalk_AST_Float = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_AST_Float)->values[0] = slot_Smalltalk_AST_Float_high; // high 
    ((Array)layout_Smalltalk_AST_Float)->values[1] = slot_Smalltalk_AST_Float_low; // low 
    Smalltalk_AST_Float_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Float_Class_class);
    Smalltalk_AST_Float_Class->layout = layout_Smalltalk_AST_Float;
    Smalltalk_AST_Float_Class->name = SMB_Float;
    
}

void init_Smalltalk_AST_ASTFloat_methods() {
    init_SMB_asNumber();
    init_SMB_low();
    init_SMB_low_();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_high_();
    init_SMB_high();
    
}