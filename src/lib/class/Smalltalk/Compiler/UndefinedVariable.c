#include <lib/class/Smalltalk/Compiler/UndefinedVariable.h>


Optr layout_Smalltalk_Compiler_UndefinedVariable_Class_class;
Optr slot_Smalltalk_Compiler_UndefinedVariable_variable;
Optr layout_Smalltalk_Compiler_UndefinedVariable;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13251 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13253 = new_Assign((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13252 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13253, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13250 = new_Method_with(PArray13251, empty_Array, empty_Array, PThreadedCode13252, 2, PAssign13253, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod13250, Smalltalk_Compiler_UndefinedVariable_Class);
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_warnMessageOn_() {
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13255 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_13257 = new_String(L"reference to undefined variable: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13257_Const = new_Constant((Optr)string_13257);
    // <<. 
    Send PSend13258 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13257_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13259 = new_Send((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, SMB_name, 0);
    // <<. 
    Send PSend13260 = new_Send((Optr)PSend13258, SMB__shiftLeft_, 1, (Optr)PSend13259);
    Array PThreadedCode13256 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13257, (Optr)&t_send1, (Optr)PSend13258, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_send0, (Optr)PSend13259, (Optr)&t_send1, (Optr)PSend13260, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13254 = new_Method_with(PArray13255, empty_Array, empty_Array, PThreadedCode13256, 2, PSend13260, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13254, Smalltalk_Compiler_UndefinedVariable_Class);
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_warnMessageOn_, MC_SMB_warnMessageOn_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
    Array PThreadedCode13262 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_method_return);
    Method PMethod13261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13262, 1, slot_Smalltalk_Compiler_UndefinedVariable_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod13261, Smalltalk_Compiler_UndefinedVariable_Class);
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