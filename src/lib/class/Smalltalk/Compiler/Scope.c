#include <lib/class/Smalltalk/Compiler/Scope.h>


Optr layout_Smalltalk_Compiler_Scope_Class_class;


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_anASTVariable_0_0 = new_Variable_named(L"anASTVariable", 0);
    Array PArray13057 = new_Array_with(1, (Optr)VAR_anASTVariable_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend13059 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode13058 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13059, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13056 = new_Method_with(PArray13057, empty_Array, empty_Array, PThreadedCode13058, 2, PSend13059, self);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod13056, Smalltalk_Compiler_Scope_Class);
    store_method(Smalltalk_Compiler_Scope_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_isRootScope() {
    Symbol SMB_isRootScope = new_Symbol(L"isRootScope");
    Array PThreadedCode13061 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod13060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13061, 1, false_Const);
    
    MethodClosure MC_SMB_isRootScope = new_MethodClosure((Method)PMethod13060, Smalltalk_Compiler_Scope_Class);
    store_method(Smalltalk_Compiler_Scope_Class, SMB_isRootScope, MC_SMB_isRootScope);
}

void init_Smalltalk_Compiler_PScope_layout() {
    layout_Smalltalk_Compiler_Scope_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_Scope_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_Scope_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_Scope_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_Scope_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_Scope_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Scope = new_Symbol(L"Scope");
    Smalltalk_Compiler_Scope_Class = (Class)new_Class(Object_Class, layout_Smalltalk_Compiler_Scope_Class_class);
    Smalltalk_Compiler_Scope_Class->layout = empty_object_layout;
    Smalltalk_Compiler_Scope_Class->name = SMB_Scope;
    
}

void init_Smalltalk_Compiler_PScope_methods() {
    init_SMB_lookup_();
    init_SMB_isRootScope();
    
}