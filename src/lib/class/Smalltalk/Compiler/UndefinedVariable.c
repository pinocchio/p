#include <lib/class/Smalltalk/Compiler/UndefinedVariable.h>


Optr layout_Smalltalk_Compiler_UndefinedVariable_Class_class;
Optr slot_Smalltalk_Compiler_UndefinedVariable_variable;
Optr layout_Smalltalk_Compiler_UndefinedVariable;


static void init_SMB_variable_() {
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray13556 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13558 = new_Assign((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13557 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13558, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13555 = new_Method_with(PArray13556, empty_Array, empty_Array, PThreadedCode13557, 2, PAssign13558, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod13555, Smalltalk_Compiler_UndefinedVariable_Class);
=======
    Array PArray13522 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13524 = new_Assign((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13524, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13521 = new_Method_with(PArray13522, empty_Array, empty_Array, PThreadedCode13523, 2, PAssign13524, self);
    
    MethodClosure MC_SMB_variable_ = new_MethodClosure((Method)PMethod13521, Smalltalk_Compiler_UndefinedVariable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_variable_, MC_SMB_variable_);
}


static void init_SMB_warnMessageOn_() {
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray13560 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_13562 = new_String(L"reference to undefined variable: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13562_Const = new_Constant((Optr)string_13562);
    // <<. 
    Send PSend13563 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13562_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13564 = new_Send((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, SMB_name, 0);
    // <<. 
    Send PSend13565 = new_Send((Optr)PSend13563, SMB__shiftLeft_, 1, (Optr)PSend13564);
    Array PThreadedCode13561 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13562, (Optr)&t_send1, (Optr)PSend13563, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_send0, (Optr)PSend13564, (Optr)&t_send1, (Optr)PSend13565, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13559 = new_Method_with(PArray13560, empty_Array, empty_Array, PThreadedCode13561, 2, PSend13565, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13559, Smalltalk_Compiler_UndefinedVariable_Class);
=======
    Array PArray13526 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_13528 = new_String(L"reference to undefined variable: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13528_Const = new_Constant((Optr)string_13528);
    // <<. 
    Send PSend13529 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13528_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend13530 = new_Send((Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, SMB_name, 0);
    // <<. 
    Send PSend13531 = new_Send((Optr)PSend13529, SMB__shiftLeft_, 1, (Optr)PSend13530);
    Array PThreadedCode13527 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13528, (Optr)&t_send1, (Optr)PSend13529, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_send0, (Optr)PSend13530, (Optr)&t_send1, (Optr)PSend13531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13525 = new_Method_with(PArray13526, empty_Array, empty_Array, PThreadedCode13527, 2, PSend13531, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13525, Smalltalk_Compiler_UndefinedVariable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_UndefinedVariable_Class, SMB_warnMessageOn_, MC_SMB_warnMessageOn_);
}


static void init_SMB_variable() {
    Symbol SMB_variable = new_Symbol(L"variable");
<<<<<<< HEAD
    Array PThreadedCode13567 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_method_return);
    Method PMethod13566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13567, 1, slot_Smalltalk_Compiler_UndefinedVariable_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod13566, Smalltalk_Compiler_UndefinedVariable_Class);
=======
    Array PThreadedCode13533 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_UndefinedVariable_variable, (Optr)&t_method_return);
    Method PMethod13532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13533, 1, slot_Smalltalk_Compiler_UndefinedVariable_variable);
    
    MethodClosure MC_SMB_variable = new_MethodClosure((Method)PMethod13532, Smalltalk_Compiler_UndefinedVariable_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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