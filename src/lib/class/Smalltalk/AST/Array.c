#include <lib/class/Smalltalk/AST/Array.h>


Optr layout_Smalltalk_AST_Array_Class_class;
Optr slot_Smalltalk_AST_Array_literals;
Optr layout_Smalltalk_AST_Array;


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15251 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15252 = new_Send((Optr)PSend15251, SMB_isEmpty, 0);
    Array PThreadedCode15250 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15251, (Optr)&t_send0, (Optr)PSend15252, (Optr)&t_method_return);
    Method PMethod15249 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15250, 1, PSend15252);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15249, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15254 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15257 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15259 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15263 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15262 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15263, (Optr)&t_block_return);
    Block PBlock15261 = new_Block_with(empty_Array, empty_Array, PThreadedCode15262, 1, PSend15263);
    // ifFalse:. 
    Send PSend15260 = new_Send((Optr)PSuper15259, SMB_ifFalse_, 1, (Optr)PBlock15261);
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15264 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15265 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15266 = new_Send((Optr)PSend15264, SMB__equals_, 1, (Optr)PSend15265);
    // escape:. 
    Send PSend15270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15270, (Optr)&t_block_return);
    Block PBlock15268 = new_Block_with(empty_Array, empty_Array, PThreadedCode15269, 1, PSend15270);
    // ifFalse:. 
    Send PSend15267 = new_Send((Optr)PSend15266, SMB_ifFalse_, 1, (Optr)PBlock15268);
    Array PThreadedCode15258 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15259, (Optr)&t_send_ifFalse_, (Optr)PSend15260, (Optr)PBlock15261, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15264, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15265, (Optr)&t_send1, (Optr)PSend15266, (Optr)&t_send_ifFalse_, (Optr)PSend15267, (Optr)PBlock15268, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15256 = new_Block_with(PArray15257, empty_Array, PThreadedCode15258, 3, PSend15260, PSend15267, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15271 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15256);
    Array PThreadedCode15255 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15256, (Optr)&t_send1, (Optr)PSend15271, (Optr)&t_method_return);
    Method PMethod15253 = new_Method_with(PArray15254, empty_Array, empty_Array, PThreadedCode15255, 1, PSend15271);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15253, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15273 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15275 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15274 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15275, (Optr)&t_method_return);
    Method PMethod15272 = new_Method_with(PArray15273, empty_Array, empty_Array, PThreadedCode15274, 1, PSend15275);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15272, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_literals() {
    Symbol SMB_literals = new_Symbol(L"literals");
    Array PThreadedCode15277 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15277, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15276, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals, MC_SMB_literals);
}


static void init_SMB_literals_() {
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15279 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15281 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15281, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15278 = new_Method_with(PArray15279, empty_Array, empty_Array, PThreadedCode15280, 2, PAssign15281, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15278, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals_, MC_SMB_literals_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_literals = new_Symbol(L"literals");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_literals_Const = new_Constant((Optr)SMB_literals);
    // with:. 
    Send PSend15284 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15283 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15284, (Optr)&t_method_return);
    Method PMethod15282 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15283, 1, PSend15284);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15282, HEADER(Smalltalk_AST_Array_Class));
    store_method(HEADER(Smalltalk_AST_Array_Class), SMB_astSelectors, MC_SMB_astSelectors);
}

void init_Smalltalk_AST_ASTArray_layout() {
    layout_Smalltalk_AST_Array_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Array_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Array = new_Symbol(L"Array");
    slot_Smalltalk_AST_Array_literals = (Optr)new_Slot(0, L"literals");
    layout_Smalltalk_AST_Array = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Array)->values[0] = slot_Smalltalk_AST_Array_literals; // literals 
    Smalltalk_AST_Array_Class = (Class)new_Class(Smalltalk_AST_Literal_Class, layout_Smalltalk_AST_Array_Class_class);
    Smalltalk_AST_Array_Class->layout = layout_Smalltalk_AST_Array;
    Smalltalk_AST_Array_Class->name = SMB_Array;
    
}

void init_Smalltalk_AST_ASTArray_methods() {
    init_SMB_isEmpty();
    init_SMB__equals_();
    init_SMB_accept_();
    init_SMB_literals();
    init_SMB_literals_();
    init_class_SMB_astSelectors();
    
}