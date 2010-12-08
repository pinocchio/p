#include <lib/class/Smalltalk/Compiler/UndefinedVariable.h>


Optr layout_Smalltalk_Compiler_UndefinedVariable_Class_class;
Optr slot_Smalltalk_Compiler_UndefinedVariable_variable;
Optr layout_Smalltalk_Compiler_UndefinedVariable;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13583 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13585 = new_Assign((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13584 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13585, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13582 = new_Method_with(PArray13583, empty_Array, empty_Array, PThreadedCode13584, 2, PAssign13585, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod13582, Smalltalk_Compiler_UndefinedVariable_Class);
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_warnMessageOn_() {
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13587 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_13589 = new_String(L"reference to undefined variable: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13589_Const = new_Constant((Optr)string_13589);
    // <<. 
    Send PSend13590 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13589_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13591 = new_Send((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, SMB_name, 0);
    // <<. 
    Send PSend13592 = new_Send((Optr)PSend13590, SMB__shiftLeft_, 1, (Optr)PSend13591);
    Array PThreadedCode13588 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13589, (Optr)&t_send1, (Optr)PSend13590, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_send0, (Optr)PSend13591, (Optr)&t_send1, (Optr)PSend13592, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13586 = new_Method_with(PArray13587, empty_Array, empty_Array, PThreadedCode13588, 2, PSend13592, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13586, Smalltalk_Compiler_UndefinedVariable_Class);
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_warnMessageOn_, MC_SMB_warnMessageOn_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode13594 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_method_return);
    Method PMethod13593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13594, 1, slot_Smalltalk_Compiler_UndefinedVariable_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod13593, Smalltalk_Compiler_UndefinedVariable_Class);
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_variable, MC_SMB_variable);
}

void init_Smalltalk_Compiler_PUndefinedVariable_layout() {
    layout_Smalltalk_Compiler_UndefinedVariable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UndefinedVariable = new_Symbol(L"UndefinedVariable");
    slot_Smalltalk_Compiler_UndefinedVariable_variable = (Optr)new_Slot(3, L"variable");
    layout_Smalltalk_Compiler_UndefinedVariable = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable)->values[1] = slot_Smalltalk_Compiler_CompilerException_target; // target 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable)->values[2] = slot_Smalltalk_Compiler_CompilerException_method; // method 
    ((Array)layout_Smalltalk_Compiler_UndefinedVariable)->values[3] = slot_Smalltalk_Compiler_UndefinedVariable_variable; // variable 
    Smalltalk_Compiler_UndefinedVariable_Class = (Class)new_Class(Smalltalk_Compiler_CompilerException_Class, layout_Smalltalk_Compiler_UndefinedVariable_Class_class);
    Smalltalk_Compiler_UndefinedVariable_Class->layout = layout_Smalltalk_Compiler_UndefinedVariable;
    Smalltalk_Compiler_UndefinedVariable_Class->name = SMB_UndefinedVariable;
    
}

void init_Smalltalk_Compiler_PUndefinedVariable_methods() {
    init_SMB_variable_();
    init_SMB_warnMessageOn_();
    init_SMB_variable();
    
}