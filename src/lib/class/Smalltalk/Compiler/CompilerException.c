#include <lib/class/Smalltalk/Compiler/CompilerException.h>


Optr layout_Smalltalk_Compiler_CompilerException_Class_class;
Optr slot_Smalltalk_Compiler_CompilerException_target;
Optr slot_Smalltalk_Compiler_CompilerException_method;
Optr layout_Smalltalk_Compiler_CompilerException;


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray13523 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13525 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13524 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13525, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13522 = new_Method_with(PArray13523, empty_Array, empty_Array, PThreadedCode13524, 2, PAssign13525, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod13522, Smalltalk_Compiler_CompilerException_Class);
=======
    Array PArray13489 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13491 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13491, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13488 = new_Method_with(PArray13489, empty_Array, empty_Array, PThreadedCode13490, 2, PAssign13491, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod13488, Smalltalk_Compiler_CompilerException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
<<<<<<< HEAD
    Array PThreadedCode13527 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_method_return);
    Method PMethod13526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13527, 1, slot_Smalltalk_Compiler_CompilerException_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod13526, Smalltalk_Compiler_CompilerException_Class);
=======
    Array PThreadedCode13493 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_method_return);
    Method PMethod13492 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13493, 1, slot_Smalltalk_Compiler_CompilerException_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod13492, Smalltalk_Compiler_CompilerException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray13529 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend13531 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_target, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13532 = new_String(L">>");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13532_Const = new_Constant((Optr)string_13532);
    // <<. 
    Send PSend13533 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13532_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13534 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_method, SMB_message, 0);
    // printOn:. 
    Send PSend13535 = new_Send((Optr)PSend13534, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13536 = new_String(L": ");
    Constant string_13536_Const = new_Constant((Optr)string_13536);
    // <<. 
    Send PSend13537 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13536_Const);
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    // warnMessageOn:. 
    Send PSend13538 = new_Send((Optr)self, SMB_warnMessageOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode13530 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13532, (Optr)&t_send1, (Optr)PSend13533, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_send0, (Optr)PSend13534, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13536, (Optr)&t_send1, (Optr)PSend13537, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13538, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13528 = new_Method_with(PArray13529, empty_Array, empty_Array, PThreadedCode13530, 6, PSend13531, PSend13533, PSend13535, PSend13537, PSend13538, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod13528, Smalltalk_Compiler_CompilerException_Class);
=======
    Array PArray13495 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend13497 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_target, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13498 = new_String(L">>");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13498_Const = new_Constant((Optr)string_13498);
    // <<. 
    Send PSend13499 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13498_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13500 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_method, SMB_message, 0);
    // printOn:. 
    Send PSend13501 = new_Send((Optr)PSend13500, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13502 = new_String(L": ");
    Constant string_13502_Const = new_Constant((Optr)string_13502);
    // <<. 
    Send PSend13503 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13502_Const);
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    // warnMessageOn:. 
    Send PSend13504 = new_Send((Optr)self, SMB_warnMessageOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode13496 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13497, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13498, (Optr)&t_send1, (Optr)PSend13499, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_send0, (Optr)PSend13500, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13502, (Optr)&t_send1, (Optr)PSend13503, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13494 = new_Method_with(PArray13495, empty_Array, empty_Array, PThreadedCode13496, 6, PSend13497, PSend13499, PSend13501, PSend13503, PSend13504, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod13494, Smalltalk_Compiler_CompilerException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
<<<<<<< HEAD
    Array PThreadedCode13540 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_method_return);
    Method PMethod13539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13540, 1, slot_Smalltalk_Compiler_CompilerException_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod13539, Smalltalk_Compiler_CompilerException_Class);
=======
    Array PThreadedCode13506 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_method_return);
    Method PMethod13505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13506, 1, slot_Smalltalk_Compiler_CompilerException_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod13505, Smalltalk_Compiler_CompilerException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_target, MC_SMB_target);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray13542 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13544 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13544, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13541 = new_Method_with(PArray13542, empty_Array, empty_Array, PThreadedCode13543, 2, PAssign13544, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod13541, Smalltalk_Compiler_CompilerException_Class);
=======
    Array PArray13508 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13510 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13510, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13507 = new_Method_with(PArray13508, empty_Array, empty_Array, PThreadedCode13509, 2, PAssign13510, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod13507, Smalltalk_Compiler_CompilerException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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