#include <lib/class/Smalltalk/Compiler/CompilerException.h>


Optr layout_Smalltalk_Compiler_CompilerException_Class_class;
Optr slot_Smalltalk_Compiler_CompilerException_target;
Optr slot_Smalltalk_Compiler_CompilerException_method;
Optr layout_Smalltalk_Compiler_CompilerException;


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13302 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13304 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13304, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13301 = new_Method_with(PArray13302, empty_Array, empty_Array, PThreadedCode13303, 2, PAssign13304, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod13301, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode13306 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_method_return);
    Method PMethod13305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13306, 1, slot_Smalltalk_Compiler_CompilerException_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod13305, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13308 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend13310 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_target, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13311 = new_String(L">>");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13311_Const = new_Constant((Optr)string_13311);
    // <<. 
    Send PSend13312 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13311_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13313 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_method, SMB_message, 0);
    // printOn:. 
    Send PSend13314 = new_Send((Optr)PSend13313, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13315 = new_String(L": ");
    Constant string_13315_Const = new_Constant((Optr)string_13315);
    // <<. 
    Send PSend13316 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13315_Const);
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    // warnMessageOn:. 
    Send PSend13317 = new_Send((Optr)self, SMB_warnMessageOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode13309 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13310, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13311, (Optr)&t_send1, (Optr)PSend13312, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_send0, (Optr)PSend13313, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13314, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13315, (Optr)&t_send1, (Optr)PSend13316, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13317, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13307 = new_Method_with(PArray13308, empty_Array, empty_Array, PThreadedCode13309, 6, PSend13310, PSend13312, PSend13314, PSend13316, PSend13317, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod13307, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode13319 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_method_return);
    Method PMethod13318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13319, 1, slot_Smalltalk_Compiler_CompilerException_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod13318, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_target, MC_SMB_target);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13321 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13323 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13322 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13323, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13320 = new_Method_with(PArray13321, empty_Array, empty_Array, PThreadedCode13322, 2, PAssign13323, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod13320, Smalltalk_Compiler_CompilerException_Class);
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