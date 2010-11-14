#include <lib/class/Smalltalk/Compiler/ClassScope.h>


Optr layout_Smalltalk_Compiler_ClassScope_Class_class;
Optr slot_Smalltalk_Compiler_ClassScope_parentScope;
Optr slot_Smalltalk_Compiler_ClassScope_layout;
Optr layout_Smalltalk_Compiler_ClassScope;


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13460 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13463 = new_Array_with(1, (Optr)VAR__return__1_0);
    // lookup:. 
    Send PSend13467 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13468 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13467);
    Array PThreadedCode13466 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13467, (Optr)&t_send1, (Optr)PSend13468, (Optr)&t_block_return);
    Block PBlock13465 = new_Block_with(empty_Array, empty_Array, PThreadedCode13466, 1, PSend13468);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend13469 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_ifNil_, 1, (Optr)PBlock13465);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13470 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    // lookup:. 
    Send PSend13473 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13473, (Optr)&t_block_return);
    Block PBlock13471 = new_Block_with(empty_Array, empty_Array, PThreadedCode13472, 1, PSend13473);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend13474 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_slotAt_ifAbsent_, 2, (Optr)PSend13470, (Optr)PBlock13471);
    Array PThreadedCode13464 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_closure, (Optr)PBlock13465, (Optr)&t_send1, (Optr)PSend13469, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13470, (Optr)&t_push_closure, (Optr)PBlock13471, (Optr)&t_send2, (Optr)PSend13474, (Optr)&t_method_return);
    Block PBlock13462 = new_Block_with(PArray13463, empty_Array, PThreadedCode13464, 2, PSend13469, PSend13474);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13475 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13462);
    Array PThreadedCode13461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13462, (Optr)&t_send1, (Optr)PSend13475, (Optr)&t_method_return);
    Method PMethod13459 = new_Method_with(PArray13460, empty_Array, empty_Array, PThreadedCode13461, 1, PSend13475);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13459, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray13477 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend13480 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_layout, 0);
    Assign PAssign13479 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)PSend13480);
    Array PThreadedCode13478 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13479, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend13480, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13476 = new_Method_with(PArray13477, empty_Array, empty_Array, PThreadedCode13478, 2, PAssign13479, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod13476, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    Array PThreadedCode13482 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_method_return);
    Method PMethod13481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13482, 1, slot_Smalltalk_Compiler_ClassScope_parentScope);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13481, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_parentScope_() {
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13484 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13486 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13485 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13486, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13483 = new_Method_with(PArray13484, empty_Array, empty_Array, PThreadedCode13485, 2, PAssign13486, self);
    
    MethodClosure MC_SMB_parentScope_ = new_MethodClosure((Method)PMethod13483, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope_, MC_SMB_parentScope_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13489 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_depth, 0);
    Array PThreadedCode13488 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_send0, (Optr)PSend13489, (Optr)&t_method_return);
    Method PMethod13487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13488, 1, PSend13489);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13487, Smalltalk_Compiler_ClassScope_Class);
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