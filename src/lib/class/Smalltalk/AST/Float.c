#include <lib/class/Smalltalk/AST/Float.h>


Optr layout_Smalltalk_AST_Float_Class_class;
Optr slot_Smalltalk_AST_Float_high;
Optr slot_Smalltalk_AST_Float_low;
Optr layout_Smalltalk_AST_Float;


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend15902 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_asNumber, 0);
    // asNumber. 
    Send PSend15903 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_asNumber, 0);
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend15904 = new_Send((Optr)int_10_Const, SMB_asFloat, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15905 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_size, 0);
    Symbol SMB_raisedTo_ = new_Symbol(L"raisedTo:");
    // raisedTo:. 
    Send PSend15906 = new_Send((Optr)PSend15904, SMB_raisedTo_, 1, (Optr)PSend15905);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend15907 = new_Send((Optr)PSend15903, SMB__divide_, 1, (Optr)PSend15906);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend15908 = new_Send((Optr)PSend15902, SMB__plus_, 1, (Optr)PSend15907);
    Array PThreadedCode15901 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_send0, (Optr)PSend15902, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15903, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send0, (Optr)PSend15904, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_send0, (Optr)PSend15905, (Optr)&t_send1, (Optr)PSend15906, (Optr)&t_send1, (Optr)PSend15907, (Optr)&t_send1, (Optr)PSend15908, (Optr)&t_method_return);
    Method PMethod15900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15901, 1, PSend15908);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod15900, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_low() {
    Symbol SMB_low = new_Symbol(L"low");
    Array PThreadedCode15910 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_method_return);
    Method PMethod15909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15910, 1, slot_Smalltalk_AST_Float_low);
    
    MethodClosure MC_SMB_low = new_MethodClosure((Method)PMethod15909, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low, MC_SMB_low);
}


static void init_SMB_low_() {
    Symbol SMB_low_ = new_Symbol(L"low:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15912 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15914 = new_Assign((Optr)slot_Smalltalk_AST_Float_low, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15914, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15911 = new_Method_with(PArray15912, empty_Array, empty_Array, PThreadedCode15913, 2, PAssign15914, self);
    
    MethodClosure MC_SMB_low_ = new_MethodClosure((Method)PMethod15911, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_low_, MC_SMB_low_);
}


static void init_SMB_high() {
    Symbol SMB_high = new_Symbol(L"high");
    Array PThreadedCode15916 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_method_return);
    Method PMethod15915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15916, 1, slot_Smalltalk_AST_Float_high);
    
    MethodClosure MC_SMB_high = new_MethodClosure((Method)PMethod15915, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high, MC_SMB_high);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15918 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15921 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15923 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15927 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15926 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15927, (Optr)&t_block_return);
    Block PBlock15925 = new_Block_with(empty_Array, empty_Array, PThreadedCode15926, 1, PSend15927);
    // ifFalse:. 
    Send PSend15924 = new_Send((Optr)PSuper15923, SMB_ifFalse_, 1, (Optr)PBlock15925);
    Symbol SMB_low = new_Symbol(L"low");
    // low. 
    Send PSend15928 = new_Send((Optr)VAR_other_0_0, SMB_low, 0);
    // =. 
    Send PSend15929 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB__equals_, 1, (Optr)PSend15928);
    // escape:. 
    Send PSend15933 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15932 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15933, (Optr)&t_block_return);
    Block PBlock15931 = new_Block_with(empty_Array, empty_Array, PThreadedCode15932, 1, PSend15933);
    // ifFalse:. 
    Send PSend15930 = new_Send((Optr)PSend15929, SMB_ifFalse_, 1, (Optr)PBlock15931);
    Symbol SMB_high = new_Symbol(L"high");
    // high. 
    Send PSend15934 = new_Send((Optr)VAR_other_0_0, SMB_high, 0);
    // =. 
    Send PSend15935 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB__equals_, 1, (Optr)PSend15934);
    // escape:. 
    Send PSend15939 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15938 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15939, (Optr)&t_block_return);
    Block PBlock15937 = new_Block_with(empty_Array, empty_Array, PThreadedCode15938, 1, PSend15939);
    // ifFalse:. 
    Send PSend15936 = new_Send((Optr)PSend15935, SMB_ifFalse_, 1, (Optr)PBlock15937);
    Array PThreadedCode15922 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15923, (Optr)&t_send_ifFalse_, (Optr)PSend15924, (Optr)PBlock15925, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15928, (Optr)&t_send1, (Optr)PSend15929, (Optr)&t_send_ifFalse_, (Optr)PSend15930, (Optr)PBlock15931, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15934, (Optr)&t_send1, (Optr)PSend15935, (Optr)&t_send_ifFalse_, (Optr)PSend15936, (Optr)PBlock15937, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15920 = new_Block_with(PArray15921, empty_Array, PThreadedCode15922, 4, PSend15924, PSend15930, PSend15936, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15940 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15920);
    Array PThreadedCode15919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15920, (Optr)&t_send1, (Optr)PSend15940, (Optr)&t_method_return);
    Method PMethod15917 = new_Method_with(PArray15918, empty_Array, empty_Array, PThreadedCode15919, 1, PSend15940);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15917, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_high_() {
    Symbol SMB_high_ = new_Symbol(L"high:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15942 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15944 = new_Assign((Optr)slot_Smalltalk_AST_Float_high, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15943 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15944, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15941 = new_Method_with(PArray15942, empty_Array, empty_Array, PThreadedCode15943, 2, PAssign15944, self);
    
    MethodClosure MC_SMB_high_ = new_MethodClosure((Method)PMethod15941, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_high_, MC_SMB_high_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15946 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitFloat_ = new_Symbol(L"visitFloat:");
    // visitFloat:. 
    Send PSend15948 = new_Send((Optr)VAR_visitor_0_0, SMB_visitFloat_, 1, (Optr)self);
    Array PThreadedCode15947 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15948, (Optr)&t_method_return);
    Method PMethod15945 = new_Method_with(PArray15946, empty_Array, empty_Array, PThreadedCode15947, 1, PSend15948);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15945, Smalltalk_AST_Float_Class);
    store_method(Smalltalk_AST_Float_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray15950 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend15952 = new_Send((Optr)slot_Smalltalk_AST_Float_high, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2919 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend15953 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    // printOn:. 
    Send PSend15954 = new_Send((Optr)slot_Smalltalk_AST_Float_low, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode15951 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_high, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15952, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend15953, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Float_low, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend15954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15949 = new_Method_with(PArray15950, empty_Array, empty_Array, PThreadedCode15951, 4, PSend15952, PSend15953, PSend15954, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod15949, Smalltalk_AST_Float_Class);
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