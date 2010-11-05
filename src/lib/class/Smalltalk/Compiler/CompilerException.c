#include <lib/class/Smalltalk/Compiler/CompilerException.h>


Optr layout_Smalltalk_Compiler_CompilerException_Class_class;
Optr slot_Smalltalk_Compiler_CompilerException_target;
Optr slot_Smalltalk_Compiler_CompilerException_method;
Optr layout_Smalltalk_Compiler_CompilerException;


static void init_SMB_method_() {
    Symbol SMB_method_ = new_Symbol(L"method:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13253 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13255 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13254 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13255, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13252 = new_Method_with(PArray13253, empty_Array, empty_Array, PThreadedCode13254, 2, PAssign13255, self);
    
    MethodClosure MC_SMB_method_ = new_MethodClosure((Method)PMethod13252, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method_, MC_SMB_method_);
}


static void init_SMB_method() {
    Symbol SMB_method = new_Symbol(L"method");
    Array PThreadedCode13257 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_method_return);
    Method PMethod13256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13257, 1, slot_Smalltalk_Compiler_CompilerException_method);
    
    MethodClosure MC_SMB_method = new_MethodClosure((Method)PMethod13256, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_method, MC_SMB_method);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13259 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend13261 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_target, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13262 = new_String(L">>");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_13262_Const = new_Constant((Optr)string_13262);
    // <<. 
    Send PSend13263 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13262_Const);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend13264 = new_Send((Optr)slot_Smalltalk_Compiler_CompilerException_method, SMB_message, 0);
    // printOn:. 
    Send PSend13265 = new_Send((Optr)PSend13264, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_13266 = new_String(L": ");
    Constant string_13266_Const = new_Constant((Optr)string_13266);
    // <<. 
    Send PSend13267 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_13266_Const);
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    // warnMessageOn:. 
    Send PSend13268 = new_Send((Optr)self, SMB_warnMessageOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode13260 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13262, (Optr)&t_send1, (Optr)PSend13263, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_method, (Optr)&t_send0, (Optr)PSend13264, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_13266, (Optr)&t_send1, (Optr)PSend13267, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend13268, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13258 = new_Method_with(PArray13259, empty_Array, empty_Array, PThreadedCode13260, 6, PSend13261, PSend13263, PSend13265, PSend13267, PSend13268, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod13258, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_target() {
    Symbol SMB_target = new_Symbol(L"target");
    Array PThreadedCode13270 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)&t_method_return);
    Method PMethod13269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13270, 1, slot_Smalltalk_Compiler_CompilerException_target);
    
    MethodClosure MC_SMB_target = new_MethodClosure((Method)PMethod13269, Smalltalk_Compiler_CompilerException_Class);
    store_method(Smalltalk_Compiler_CompilerException_Class, SMB_target, MC_SMB_target);
}


static void init_SMB_target_() {
    Symbol SMB_target_ = new_Symbol(L"target:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13272 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13274 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilerException_target, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13274, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13271 = new_Method_with(PArray13272, empty_Array, empty_Array, PThreadedCode13273, 2, PAssign13274, self);
    
    MethodClosure MC_SMB_target_ = new_MethodClosure((Method)PMethod13271, Smalltalk_Compiler_CompilerException_Class);
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