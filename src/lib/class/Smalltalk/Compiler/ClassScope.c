#include <lib/class/Smalltalk/Compiler/ClassScope.h>


Optr layout_Smalltalk_Compiler_ClassScope_Class_class;
Optr slot_Smalltalk_Compiler_ClassScope_parentScope;
Optr slot_Smalltalk_Compiler_ClassScope_layout;
Optr layout_Smalltalk_Compiler_ClassScope;


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13492 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13495 = new_Array_with(1, (Optr)VAR__return__1_0);
    // lookup:. 
    Send PSend13499 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13500 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13499);
    Array PThreadedCode13498 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13499, (Optr)&t_send1, (Optr)PSend13500, (Optr)&t_block_return);
    Block PBlock13497 = new_Block_with(empty_Array, empty_Array, PThreadedCode13498, 1, PSend13500);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend13501 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_ifNil_, 1, (Optr)PBlock13497);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13502 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    // lookup:. 
    Send PSend13505 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13505, (Optr)&t_block_return);
    Block PBlock13503 = new_Block_with(empty_Array, empty_Array, PThreadedCode13504, 1, PSend13505);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend13506 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_slotAt_ifAbsent_, 2, (Optr)PSend13502, (Optr)PBlock13503);
    Array PThreadedCode13496 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_closure, (Optr)PBlock13497, (Optr)&t_send1, (Optr)PSend13501, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13502, (Optr)&t_push_closure, (Optr)PBlock13503, (Optr)&t_send2, (Optr)PSend13506, (Optr)&t_method_return);
    Block PBlock13494 = new_Block_with(PArray13495, empty_Array, PThreadedCode13496, 2, PSend13501, PSend13506);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13507 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13494);
    Array PThreadedCode13493 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13494, (Optr)&t_send1, (Optr)PSend13507, (Optr)&t_method_return);
    Method PMethod13491 = new_Method_with(PArray13492, empty_Array, empty_Array, PThreadedCode13493, 1, PSend13507);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13491, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray13509 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend13512 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_layout, 0);
    Assign PAssign13511 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)PSend13512);
    Array PThreadedCode13510 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13511, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend13512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13508 = new_Method_with(PArray13509, empty_Array, empty_Array, PThreadedCode13510, 2, PAssign13511, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod13508, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    Array PThreadedCode13514 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_method_return);
    Method PMethod13513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13514, 1, slot_Smalltalk_Compiler_ClassScope_parentScope);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13513, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_parentScope_() {
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13516 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13518 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13518, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13515 = new_Method_with(PArray13516, empty_Array, empty_Array, PThreadedCode13517, 2, PAssign13518, self);
    
    MethodClosure MC_SMB_parentScope_ = new_MethodClosure((Method)PMethod13515, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope_, MC_SMB_parentScope_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13521 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_depth, 0);
    Array PThreadedCode13520 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_send0, (Optr)PSend13521, (Optr)&t_method_return);
    Method PMethod13519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13520, 1, PSend13521);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13519, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_depth, MC_SMB_depth);
}

void init_Smalltalk_Compiler_PClassScope_layout() {
    layout_Smalltalk_Compiler_ClassScope_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_ClassScope_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_ClassScope_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_ClassScope_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_ClassScope_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_ClassScope_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ClassScope = new_Symbol(L"ClassScope");
    slot_Smalltalk_Compiler_ClassScope_parentScope = (Optr)new_Slot(0, L"parentScope");
    slot_Smalltalk_Compiler_ClassScope_layout = (Optr)new_Slot(1, L"layout");
    layout_Smalltalk_Compiler_ClassScope = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_Compiler_ClassScope)->values[0] = slot_Smalltalk_Compiler_ClassScope_parentScope; // parentScope 
    ((Array)layout_Smalltalk_Compiler_ClassScope)->values[1] = slot_Smalltalk_Compiler_ClassScope_layout; // layout 
    Smalltalk_Compiler_ClassScope_Class = (Class)new_Class(Smalltalk_Compiler_Scope_Class, layout_Smalltalk_Compiler_ClassScope_Class_class);
    Smalltalk_Compiler_ClassScope_Class->layout = layout_Smalltalk_Compiler_ClassScope;
    Smalltalk_Compiler_ClassScope_Class->name = SMB_ClassScope;
    
}

void init_Smalltalk_Compiler_PClassScope_methods() {
    init_SMB_lookup_();
    init_SMB_pclass_();
    init_SMB_parentScope();
    init_SMB_parentScope_();
    init_SMB_depth();
    
}