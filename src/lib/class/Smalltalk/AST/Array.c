#include <lib/class/Smalltalk/AST/Array.h>


Optr layout_Smalltalk_AST_Array_Class_class;
Optr slot_Smalltalk_AST_Array_literals;
Optr layout_Smalltalk_AST_Array;


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15194 = new_Send((Optr)self, SMB_literals, 0);
    // isEmpty. 
    Send PSend15195 = new_Send((Optr)PSend15194, SMB_isEmpty, 0);
    Array PThreadedCode15193 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15194, (Optr)&t_send0, (Optr)PSend15195, (Optr)&t_method_return);
    Method PMethod15192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15193, 1, PSend15195);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod15192, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15197 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15200 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15202 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15206 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15205 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15206, (Optr)&t_block_return);
    Block PBlock15204 = new_Block_with(empty_Array, empty_Array, PThreadedCode15205, 1, PSend15206);
    // ifFalse:. 
    Send PSend15203 = new_Send((Optr)PSuper15202, SMB_ifFalse_, 1, (Optr)PBlock15204);
    Symbol SMB_literals = new_Symbol(L"literals");
    // literals. 
    Send PSend15207 = new_Send((Optr)self, SMB_literals, 0);
    // literals. 
    Send PSend15208 = new_Send((Optr)VAR_other_0_0, SMB_literals, 0);
    // =. 
    Send PSend15209 = new_Send((Optr)PSend15207, SMB__equals_, 1, (Optr)PSend15208);
    // escape:. 
    Send PSend15213 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15212 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15213, (Optr)&t_block_return);
    Block PBlock15211 = new_Block_with(empty_Array, empty_Array, PThreadedCode15212, 1, PSend15213);
    // ifFalse:. 
    Send PSend15210 = new_Send((Optr)PSend15209, SMB_ifFalse_, 1, (Optr)PBlock15211);
    Array PThreadedCode15201 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15202, (Optr)&t_send_ifFalse_, (Optr)PSend15203, (Optr)PBlock15204, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15207, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15208, (Optr)&t_send1, (Optr)PSend15209, (Optr)&t_send_ifFalse_, (Optr)PSend15210, (Optr)PBlock15211, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15199 = new_Block_with(PArray15200, empty_Array, PThreadedCode15201, 3, PSend15203, PSend15210, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15214 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15199);
    Array PThreadedCode15198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15199, (Optr)&t_send1, (Optr)PSend15214, (Optr)&t_method_return);
    Method PMethod15196 = new_Method_with(PArray15197, empty_Array, empty_Array, PThreadedCode15198, 1, PSend15214);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15196, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15216 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend15218 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode15217 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15218, (Optr)&t_method_return);
    Method PMethod15215 = new_Method_with(PArray15216, empty_Array, empty_Array, PThreadedCode15217, 1, PSend15218);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15215, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_literals() {
    Symbol SMB_literals = new_Symbol(L"literals");
    Array PThreadedCode15220 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Array_literals, (Optr)&t_method_return);
    Method PMethod15219 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15220, 1, slot_Smalltalk_AST_Array_literals);
    
    MethodClosure MC_SMB_literals = new_MethodClosure((Method)PMethod15219, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals, MC_SMB_literals);
}


static void init_SMB_literals_() {
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray15222 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Assign PAssign15224 = new_Assign((Optr)slot_Smalltalk_AST_Array_literals, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode15223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15224, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15221 = new_Method_with(PArray15222, empty_Array, empty_Array, PThreadedCode15223, 2, PAssign15224, self);
    
    MethodClosure MC_SMB_literals_ = new_MethodClosure((Method)PMethod15221, Smalltalk_AST_Array_Class);
    store_method(Smalltalk_AST_Array_Class, SMB_literals_, MC_SMB_literals_);
}


static void init_class_SMB_astSelectors() {
    Symbol SMB_astSelectors = new_Symbol(L"astSelectors");
    Symbol  SMB_literals = new_Symbol(L"literals");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_literals_Const = new_Constant((Optr)SMB_literals);
    // with:. 
    Send PSend15227 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_literals_Const);
    Array PThreadedCode15226 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_literals, (Optr)&t_send1, (Optr)PSend15227, (Optr)&t_method_return);
    Method PMethod15225 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15226, 1, PSend15227);
    
    MethodClosure MC_SMB_astSelectors = new_MethodClosure((Method)PMethod15225, HEADER(Smalltalk_AST_Array_Class));
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