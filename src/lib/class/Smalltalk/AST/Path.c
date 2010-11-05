#include <lib/class/Smalltalk/AST/Path.h>


Optr layout_Smalltalk_AST_Path_Class_class;
Optr slot_Smalltalk_AST_Path_path;
Optr layout_Smalltalk_AST_Path;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15229 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign15231 = new_Assign((Optr)slot_Smalltalk_AST_Path_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode15230 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign15231, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15228 = new_Method_with(PArray15229, empty_Array, empty_Array, PThreadedCode15230, 2, PAssign15231, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod15228, Smalltalk_AST_Path_Class);
    store_method(Smalltalk_AST_Path_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
    Array PThreadedCode15233 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_method_return);
    Method PMethod15232 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15233, 1, slot_Smalltalk_AST_Path_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod15232, Smalltalk_AST_Path_Class);
    store_method(Smalltalk_AST_Path_Class, SMB_path, MC_SMB_path);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray15235 = new_Array_with(1, (Optr)VAR_other_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15238 = new_Array_with(1, (Optr)VAR__return__1_0);
    Super PSuper15240 = new_Super(SMB__equals_, 1, (Optr)VAR_other_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15244 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15243 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15244, (Optr)&t_block_return);
    Block PBlock15242 = new_Block_with(empty_Array, empty_Array, PThreadedCode15243, 1, PSend15244);
    // ifFalse:. 
    Send PSend15241 = new_Send((Optr)PSuper15240, SMB_ifFalse_, 1, (Optr)PBlock15242);
    Symbol SMB_path = new_Symbol(L"path");
    // path. 
    Send PSend15245 = new_Send((Optr)VAR_other_0_0, SMB_path, 0);
    // =. 
    Send PSend15246 = new_Send((Optr)slot_Smalltalk_AST_Path_path, SMB__equals_, 1, (Optr)PSend15245);
    // escape:. 
    Send PSend15250 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode15249 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend15250, (Optr)&t_block_return);
    Block PBlock15248 = new_Block_with(empty_Array, empty_Array, PThreadedCode15249, 1, PSend15250);
    // ifFalse:. 
    Send PSend15247 = new_Send((Optr)PSend15246, SMB_ifFalse_, 1, (Optr)PBlock15248);
    Array PThreadedCode15239 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_super1, (Optr)PSuper15240, (Optr)&t_send_ifFalse_, (Optr)PSend15241, (Optr)PBlock15242, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_AST_Path_path, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send0, (Optr)PSend15245, (Optr)&t_send1, (Optr)PSend15246, (Optr)&t_send_ifFalse_, (Optr)PSend15247, (Optr)PBlock15248, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock15237 = new_Block_with(PArray15238, empty_Array, PThreadedCode15239, 3, PSend15241, PSend15247, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15251 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15237);
    Array PThreadedCode15236 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15237, (Optr)&t_send1, (Optr)PSend15251, (Optr)&t_method_return);
    Method PMethod15234 = new_Method_with(PArray15235, empty_Array, empty_Array, PThreadedCode15236, 1, PSend15251);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod15234, Smalltalk_AST_Path_Class);
    store_method(Smalltalk_AST_Path_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray15253 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPath_ = new_Symbol(L"visitPath:");
    // visitPath:. 
    Send PSend15255 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPath_, 1, (Optr)self);
    Array PThreadedCode15254 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15255, (Optr)&t_method_return);
    Method PMethod15252 = new_Method_with(PArray15253, empty_Array, empty_Array, PThreadedCode15254, 1, PSend15255);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod15252, Smalltalk_AST_Path_Class);
    store_method(Smalltalk_AST_Path_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Smalltalk_AST_ASTPath_layout() {
    layout_Smalltalk_AST_Path_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_AST_Path_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Path = new_Symbol(L"Path");
    slot_Smalltalk_AST_Path_path = (Optr)new_Slot(0, L"path");
    layout_Smalltalk_AST_Path = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_AST_Path)->values[0] = slot_Smalltalk_AST_Path_path; // path 
    Smalltalk_AST_Path_Class = (Class)new_Class(Smalltalk_AST_Node_Class, layout_Smalltalk_AST_Path_Class_class);
    Smalltalk_AST_Path_Class->layout = layout_Smalltalk_AST_Path;
    Smalltalk_AST_Path_Class->name = SMB_Path;
    
}

void init_Smalltalk_AST_ASTPath_methods() {
    init_SMB_path_();
    init_SMB_path();
    init_SMB__equals_();
    init_SMB_accept_();
    
}