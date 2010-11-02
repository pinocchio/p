#include <lib/class/Smalltalk/Compiler/CompilationFailure.h>


Optr layout_Smalltalk_Compiler_CompilationFailure_Class_class;
Optr slot_Smalltalk_Compiler_CompilationFailure_message;
Optr layout_Smalltalk_Compiler_CompilationFailure;


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray13252 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign13254 = new_Assign((Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode13253 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign13254, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13251 = new_Method_with(PArray13252, empty_Array, empty_Array, PThreadedCode13253, 2, PAssign13254, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod13251, Smalltalk_Compiler_CompilationFailure_Class);
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_warnMessageOn_() {
    Symbol SMB_warnMessageOn_ = new_Symbol(L"warnMessageOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray13256 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend13258 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message);
    Array PThreadedCode13257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_send1, (Optr)PSend13258, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod13255 = new_Method_with(PArray13256, empty_Array, empty_Array, PThreadedCode13257, 2, PSend13258, self);
    
    MethodClosure MC_SMB_warnMessageOn_ = new_MethodClosure((Method)PMethod13255, Smalltalk_Compiler_CompilationFailure_Class);
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_warnMessageOn_, MC_SMB_warnMessageOn_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode13260 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Compiler_CompilationFailure_message, (Optr)&t_method_return);
    Method PMethod13259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13260, 1, slot_Smalltalk_Compiler_CompilationFailure_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod13259, Smalltalk_Compiler_CompilationFailure_Class);
    store_method(Smalltalk_Compiler_CompilationFailure_Class, SMB_message, MC_SMB_message);
}

void init_Smalltalk_Compiler_PCompilationFailure_layout() {
    layout_Smalltalk_Compiler_CompilationFailure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CompilationFailure = new_Symbol(L"CompilationFailure");
    slot_Smalltalk_Compiler_CompilationFailure_message = (Optr)new_Slot(3, L"message");
    layout_Smalltalk_Compiler_CompilationFailure = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[1] = slot_Smalltalk_Compiler_CompilerException_target; // target 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[2] = slot_Smalltalk_Compiler_CompilerException_method; // method 
    ((Array)layout_Smalltalk_Compiler_CompilationFailure)->values[3] = slot_Smalltalk_Compiler_CompilationFailure_message; // message 
    Smalltalk_Compiler_CompilationFailure_Class = (Class)new_Class(Smalltalk_Compiler_CompilerException_Class, layout_Smalltalk_Compiler_CompilationFailure_Class_class);
    Smalltalk_Compiler_CompilationFailure_Class->layout = layout_Smalltalk_Compiler_CompilationFailure;
    Smalltalk_Compiler_CompilationFailure_Class->name = SMB_CompilationFailure;
    
}

void init_Smalltalk_Compiler_PCompilationFailure_methods() {
    init_SMB_message_();
    init_SMB_warnMessageOn_();
    init_SMB_message();
    
}