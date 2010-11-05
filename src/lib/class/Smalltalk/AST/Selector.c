#include <lib/class/Smalltalk/AST/Selector.h>


Optr layout_Smalltalk_AST_Selector_Class_class;
Optr slot_Smalltalk_AST_Selector_selector;
Optr layout_Smalltalk_AST_Selector;


static void init_SMB_selector() {
    Symbol SMB_selector = new_Symbol(L"selector");
    Array PThreadedCode14941 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_method_return);
    Method PMethod14940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14941, 1, slot_Smalltalk_AST_Selector_selector);
    
    MethodClosure MC_SMB_selector = new_MethodClosure((Method)PMethod14940, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector, MC_SMB_selector);
}


static void init_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray14943 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14946 = new_Send((Optr)VAR_anObject_0_0, SMB_asSymbol, 0);
    Assign PAssign14945 = new_Assign((Optr)slot_Smalltalk_AST_Selector_selector, (Optr)PSend14946);
    Array PThreadedCode14944 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign14945, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend14946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14942 = new_Method_with(PArray14943, empty_Array, empty_Array, PThreadedCode14944, 2, PAssign14945, self);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod14942, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_selector_, MC_SMB_selector_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray14948 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14951 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper14953 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14957 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode14956 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend14957, (Optr)&t_block_return);
    Block PBlock14955 = new_Block_with(empty_Array, empty_Array, PThreadedCode14956, 1, PSend14957);
    // ifFalse:. 
    Send PSend14954 = new_Send((Optr)PSuper14953, SMB_ifFalse_, 1, (Optr)PBlock14955);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend14958 = new_Send((Optr)VAR_other_0_0, SMB_selector, 0);
    // =. 
    Send PSend14959 = new_Send((Optr)slot_Smalltalk_AST_Selector_selector, SMB__equals_, 1, (Optr)PSend14958);
    Array PThreadedCode14952 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper14953, (Optr)&t_send_ifFalse_, (Optr)PSend14954, (Optr)PBlock14955, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend14958, (Optr)&t_send1, (Optr)PSend14959, (Optr)&t_method_return);
    Block PBlock14950 = new_Block_with(PArray14951, empty_Array, PThreadedCode14952, 2, PSend14954, PSend14959);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14960 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14950);
    Array PThreadedCode14949 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14950, (Optr)&t_send1, (Optr)PSend14960, (Optr)&t_method_return);
    Method PMethod14947 = new_Method_with(PArray14948, empty_Array, empty_Array, PThreadedCode14949, 1, PSend14960);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod14947, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_parameters() {
    Symbol SMB_parameters = new_Symbol(L"parameters");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14963 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14962 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14963, (Optr)&t_method_return);
    Method PMethod14961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14962, 1, PSend14963);
    
    MethodClosure MC_SMB_parameters = new_MethodClosure((Method)PMethod14961, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_parameters, MC_SMB_parameters);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray14965 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14967 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_AST_Selector_selector);
    Array PThreadedCode14966 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Selector_selector, (Optr)&t_send1, (Optr)PSend14967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14964 = new_Method_with(PArray14965, empty_Array, empty_Array, PThreadedCode14966, 2, PSend14967, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod14964, Smalltalk_AST_Selector_Class);
    store_method(Smalltalk_AST_Selector_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_selector = new_Symbol(L"selector");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_selector_Const = new_Constant((Optr)SMB_selector);
    // with:. 
    Send PSend14970 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_selector_Const);
    Array PThreadedCode14969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_selector, (Optr)&t_send1, (Optr)PSend14970, (Optr)&t_method_return);
    Method PMethod14968 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14969, 1, PSend14970);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod14968, HEADER(Smalltalk_AST_Selector_Class));
    store_method(HEADER(Smalltalk_AST_Selector_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTSelector_layout() {
    layout_Smalltalk_AST_Selector_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Selector_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Selector = new_Symbol(L"Selector");
    slot_Smalltalk_AST_Selector_selector = (Optr)new_Slot(0, L"selector");
    layout_Smalltalk_AST_Selector = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Selector)->values[0] = slot_Smalltalk_AST_Selector_selector; // selector 
    Smalltalk_AST_Selector_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Selector_Class_class);
    Smalltalk_AST_Selector_Class->layout = layout_Smalltalk_AST_Selector;
    Smalltalk_AST_Selector_Class->name = SMB_Selector;
    
}

void init_Smalltalk_AST_ASTSelector_methods() {
    init_SMB_selector();
    init_SMB_selector_();
    init_SMB__equals_();
    init_SMB_parameters();
    init_SMB_printOn_();
    init_class_SMB_astSelectors();
    
}