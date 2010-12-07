#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15900 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15901 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15902 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15903 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15904 = new_Send((Optr)PSend15902, SMB_raisedTo_, 1, (Optr)PSend15903);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15905 = new_Send((Optr)PSend15901, SMB__divide_, 1, (Optr)PSend15904);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15906 = new_Send((Optr)PSend15900, SMB__plus_, 1, (Optr)PSend15905);
    Array PThreadedCode15899 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15900, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15901, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15902, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15903, (Optr)&t_send1, (Optr)PSend15904, (Optr)&t_send1, (Optr)PSend15905, (Optr)&t_send1, (Optr)PSend15906, (Optr)&t_method_return);
    Method PMethod15898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15899, 1, PSend15906);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15898, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15908 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15908, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15907, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15910 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15912 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15912, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15909 = new_Method_with(PArray15910, empty_Array, empty_Array, PThreadedCode15911, 2, PAssign15912, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15909, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15914 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15914, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15913, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high, MC_SMB_high);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15916 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15919 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15921 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15925 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15924 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15925, (Optr)&t_block_return);
    Block PBlock15923 = new_Block_with(empty_Array, empty_Array, PThreadedCode15924, 1, PSend15925);
    // ifFalse:. 
    Send PSend15922 = new_Send((Optr)PSuper15921, SMB_ifFalse_, 1, (Optr)PBlock15923);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15926 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15927 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15926);
    // escape:. 
    Send PSend15931 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15930 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15931, (Optr)&t_block_return);
    Block PBlock15929 = new_Block_with(empty_Array, empty_Array, PThreadedCode15930, 1, PSend15931);
    // ifFalse:. 
    Send PSend15928 = new_Send((Optr)PSend15927, SMB_ifFalse_, 1, (Optr)PBlock15929);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15932 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15933 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15932);
    // escape:. 
    Send PSend15937 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15936 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15937, (Optr)&t_block_return);
    Block PBlock15935 = new_Block_with(empty_Array, empty_Array, PThreadedCode15936, 1, PSend15937);
    // ifFalse:. 
    Send PSend15934 = new_Send((Optr)PSend15933, SMB_ifFalse_, 1, (Optr)PBlock15935);
    Array PThreadedCode15920 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15921, (Optr)&t_send_ifFalse_, (Optr)PSend15922, (Optr)PBlock15923, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15926, (Optr)&t_send1, (Optr)PSend15927, (Optr)&t_send_ifFalse_, (Optr)PSend15928, (Optr)PBlock15929, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15932, (Optr)&t_send1, (Optr)PSend15933, (Optr)&t_send_ifFalse_, (Optr)PSend15934, (Optr)PBlock15935, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15918 = new_Block_with(PArray15919, empty_Array, PThreadedCode15920, 4, PSend15922, PSend15928, PSend15934, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15938 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15918);
    Array PThreadedCode15917 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15918, (Optr)&t_send1, (Optr)PSend15938, (Optr)&t_method_return);
    Method PMethod15915 = new_Method_with(PArray15916, empty_Array, empty_Array, PThreadedCode15917, 1, PSend15938);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15915, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15940 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15942 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15942, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15939 = new_Method_with(PArray15940, empty_Array, empty_Array, PThreadedCode15941, 2, PAssign15942, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15939, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15944 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15946 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15945 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15946, (Optr)&t_method_return);
    Method PMethod15943 = new_Method_with(PArray15944, empty_Array, empty_Array, PThreadedCode15945, 1, PSend15946);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15943, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15948 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15950 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2919 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend15951 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    // printOn:. 
    Send PSend15952 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15949 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15950, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend15951, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15952, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15947 = new_Method_with(PArray15948, empty_Array, empty_Array, PThreadedCode15949, 4, PSend15950, PSend15951, PSend15952, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15947, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_printOn_, MC_SMB_printOn_);
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
    init_SMB_high();
    init_SMB__equals_();
    init_SMB_high_();
    init_SMB_accept_();
    init_SMB_printOn_();
    
}