#include <lib/class/Smalltalk/Compiler/ClassScope.h>


Optr layout_Smalltalk_Compiler_ClassScope_Class_class;
Optr slot_Smalltalk_Compiler_ClassScope_parentScope;
Optr slot_Smalltalk_Compiler_ClassScope_layout;
Optr layout_Smalltalk_Compiler_ClassScope;


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13222 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray13225 = new_Array_with(1, (Optr)VAR__return__1_0);
    // lookup:. 
    Send PSend13229 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend13230 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend13229);
    Array PThreadedCode13228 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13229, (Optr)&t_send1, (Optr)PSend13230, (Optr)&t_block_return);
    Block PBlock13227 = new_Block_with(empty_Array, empty_Array, PThreadedCode13228, 1, PSend13230);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend13231 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_ifNil_, 1, (Optr)PBlock13227);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13232 = new_Send((Optr)VAR_anASTVariable_0_0, SMB_name, 0);
    // lookup:. 
    Send PSend13235 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_lookup_, 1, (Optr)VAR_anASTVariable_0_0);
    Array PThreadedCode13234 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send1, (Optr)PSend13235, (Optr)&t_block_return);
    Block PBlock13233 = new_Block_with(empty_Array, empty_Array, PThreadedCode13234, 1, PSend13235);
    Symbol SMB_slotAt_ifAbsent_ = new_Symbol(L"slotAt:ifAbsent:");
    // slotAt:ifAbsent:. 
    Send PSend13236 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_layout, SMB_slotAt_ifAbsent_, 2, (Optr)PSend13232, (Optr)PBlock13233);
    Array PThreadedCode13226 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_closure, (Optr)PBlock13227, (Optr)&t_send1, (Optr)PSend13231, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)&t_push_variable, (Optr)VAR_anASTVariable_0_0, (Optr)&t_send0, (Optr)PSend13232, (Optr)&t_push_closure, (Optr)PBlock13233, (Optr)&t_send2, (Optr)PSend13236, (Optr)&t_method_return);
    Block PBlock13224 = new_Block_with(PArray13225, empty_Array, PThreadedCode13226, 2, PSend13231, PSend13236);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend13237 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock13224);
    Array PThreadedCode13223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock13224, (Optr)&t_send1, (Optr)PSend13237, (Optr)&t_method_return);
    Method PMethod13221 = new_Method_with(PArray13222, empty_Array, empty_Array, PThreadedCode13223, 1, PSend13237);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13221, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_pclass_() {
    Symbol SMB_pclass_ = new_Symbol(L"pclass:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray13239 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend13242 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_layout, 0);
    Assign PAssign13241 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_layout, (Optr)PSend13242);
    Array PThreadedCode13240 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign13241, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend13242, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13238 = new_Method_with(PArray13239, empty_Array, empty_Array, PThreadedCode13240, 2, PAssign13241, self);
    
    MethodClosure MC_SMB_pclass_ = new_MethodClosure((Method)PMethod13238, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_pclass_, MC_SMB_pclass_);
}


static void init_SMB_parentScope() {
    Symbol SMB_parentScope = new_Symbol(L"parentScope");
    Array PThreadedCode13244 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_method_return);
    Method PMethod13243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13244, 1, slot_Smalltalk_Compiler_ClassScope_parentScope);
    
    MethodClosure MC_SMB_parentScope = new_MethodClosure((Method)PMethod13243, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope, MC_SMB_parentScope);
}


static void init_SMB_parentScope_() {
    Symbol SMB_parentScope_ = new_Symbol(L"parentScope:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13246 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13248 = new_Assign((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13248, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13245 = new_Method_with(PArray13246, empty_Array, empty_Array, PThreadedCode13247, 2, PAssign13248, self);
    
    MethodClosure MC_SMB_parentScope_ = new_MethodClosure((Method)PMethod13245, Smalltalk_Compiler_ClassScope_Class);
    store_method(Smalltalk_Compiler_ClassScope_Class, SMB_parentScope_, MC_SMB_parentScope_);
}


static void init_SMB_depth() {
    Symbol SMB_depth = new_Symbol(L"depth");
    // depth. 
    Send PSend13251 = new_Send((Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, SMB_depth, 0);
    Array PThreadedCode13250 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_ClassScope_parentScope, (Optr)&t_send0, (Optr)PSend13251, (Optr)&t_method_return);
    Method PMethod13249 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13250, 1, PSend13251);
    
    MethodClosure MC_SMB_depth = new_MethodClosure((Method)PMethod13249, Smalltalk_Compiler_ClassScope_Class);
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