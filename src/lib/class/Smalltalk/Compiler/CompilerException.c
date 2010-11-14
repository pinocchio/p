#include <lib/class/Smalltalk/Compiler/CompilerException.h>


Optr layout_Smalltalk_Compiler_CompilerException_Class_class;
Optr slot_Smalltalk_Compiler_CompilerException_target;
Optr slot_Smalltalk_Compiler_CompilerException_method;
Optr layout_Smalltalk_Compiler_CompilerException;


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13491 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13493 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13492 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13493, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13490 = new_Method_with(PArray13491, empty_Array, empty_Array, PThreadedCode13492, 2, PAssign13493, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod13490, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode13495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_method_return);
    Method PMethod13494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13495, 1, slot_Smalltalk_Compiler_CompilerException_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod13494, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13497 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend13499 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_target, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13500 = new_String(L">>");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13500_Const = new_Constant((Optr)string_13500);
    // <<. 
    Send PSend13501 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13500_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13502 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_method, SMB_message, 0);
    // printOn:. 
    Send PSend13503 = new_Send((Optr)PSend13502, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13504 = new_String(L": ");
    Constant string_13504_Const = new_Constant((Optr)string_13504);
    // <<. 
    Send PSend13505 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13504_Const);
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    // warnMessageOn:. 
    Send PSend13506 = new_Send((Optr)self, SMB_warnMessageOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode13498 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13500, (Optr)&t_send1, (Optr)PSend13501, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_send0, (Optr)PSend13502, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13504, (Optr)&t_send1, (Optr)PSend13505, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13496 = new_Method_with(PArray13497, empty_Array, empty_Array, PThreadedCode13498, 6, PSend13499, PSend13501, PSend13503, PSend13505, PSend13506, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod13496, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode13508 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_method_return);
    Method PMethod13507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13508, 1, slot_Smalltalk_Compiler_CompilerException_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod13507, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_target, MC_SMB_target);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13510 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13512 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13511 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13512, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13509 = new_Method_with(PArray13510, empty_Array, empty_Array, PThreadedCode13511, 2, PAssign13512, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod13509, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_target_, MC_SMB_target_);
}

void init_Smalltalk_Compiler_PCompilerException_layout() {
    layout_Smalltalk_Compiler_CompilerException_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_CompilerException_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_CompilerException_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_CompilerException_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_CompilerException_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_CompilerException_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CompilerException = new_Symbol(L"CompilerException");
    slot_Smalltalk_Compiler_CompilerException_target = (Optr)new_Slot(1, L"target");
    slot_Smalltalk_Compiler_CompilerException_method = (Optr)new_Slot(2, L"method");
    layout_Smalltalk_Compiler_CompilerException = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Smalltalk_Compiler_CompilerException)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Smalltalk_Compiler_CompilerException)->values[1] = slot_Smalltalk_Compiler_CompilerException_target; // target 
    ((Array)layout_Smalltalk_Compiler_CompilerException)->values[2] = slot_Smalltalk_Compiler_CompilerException_method; // method 
    Smalltalk_Compiler_CompilerException_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Smalltalk_Compiler_CompilerException_Class_class);
    Smalltalk_Compiler_CompilerException_Class->layout = layout_Smalltalk_Compiler_CompilerException;
    Smalltalk_Compiler_CompilerException_Class->name = SMB_CompilerException;
    
}

void init_Smalltalk_Compiler_PCompilerException_methods() {
    init_SMB_method_();
    init_SMB_method();
    init_SMB_warnOn_();
    init_SMB_target();
    init_SMB_target_();
    
}