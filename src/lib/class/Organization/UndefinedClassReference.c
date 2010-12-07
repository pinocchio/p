#include <lib/class/Organization/UndefinedClassReference.h>


Optr layout_Organization_UndefinedClassReference_Class_class;
Optr slot_Organization_UndefinedClassReference_reference;
Optr layout_Organization_UndefinedClassReference;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22277 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22280 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22282 = new_String(L"Reference to undefined class in package ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22282_Const = new_Constant((Optr)string_22282);
    // <<. 
    Send PSend22283 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22282_Const);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22284 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend22285 = new_Send((Optr)PSend22284, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // package. 
    Send PSend22286 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray22288 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22290 = new_Send((Optr)VAR_value_2_1, SMB__pequals_, 1, (Optr)slot_Organization_UndefinedClassReference_reference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_22294 = new_String(L": ");
    Constant string_22294_Const = new_Constant((Optr)string_22294);
    // <<. 
    Send PSend22295 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22294_Const);
    // <<. 
    Send PSend22296 = new_Send((Optr)PSend22295, SMB__shiftLeft_, 1, (Optr)VAR_key_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22297 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22296);
    Array PThreadedCode22293 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22294, (Optr)&t_send1, (Optr)PSend22295, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_send1, (Optr)PSend22296, (Optr)&t_send1, (Optr)PSend22297, (Optr)&t_block_return);
    Block PBlock22292 = new_Block_with(empty_Array, empty_Array, PThreadedCode22293, 1, PSend22297);
    // ifTrue:. 
    Send PSend22291 = new_Send((Optr)PSend22290, SMB_ifTrue_, 1, (Optr)PBlock22292);
    Array PThreadedCode22289 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send1, (Optr)PSend22290, (Optr)&t_send_ifTrue_, (Optr)PSend22291, (Optr)PBlock22292, (Optr)&t_method_return);
    Block PBlock22287 = new_Block_with(PArray22288, empty_Array, PThreadedCode22289, 1, PSend22291);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend22298 = new_Send((Optr)PSend22286, SMB_keysAndValuesDo_, 1, (Optr)PBlock22287);
    Array PThreadedCode22281 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22282, (Optr)&t_send1, (Optr)PSend22283, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22284, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22285, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22286, (Optr)&t_push_closure, (Optr)PBlock22287, (Optr)&t_send1, (Optr)PSend22298, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22279 = new_Block_with(PArray22280, empty_Array, PThreadedCode22281, 4, PSend22283, PSend22285, PSend22298, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22299 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22279);
    Array PThreadedCode22278 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22279, (Optr)&t_send1, (Optr)PSend22299, (Optr)&t_method_return);
    Method PMethod22276 = new_Method_with(PArray22277, empty_Array, empty_Array, PThreadedCode22278, 1, PSend22299);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22276, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_reference() {
    Symbol SMB_reference = new_Symbol(L"reference");
    Array PThreadedCode22301 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_method_return);
    Method PMethod22300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22301, 1, slot_Organization_UndefinedClassReference_reference);
    
    MethodClosure MC_SMB_reference = new_MethodClosure((Method)PMethod22300, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference, MC_SMB_reference);
}


static void init_SMB_reference_() {
    Symbol SMB_reference_ = new_Symbol(L"reference:");
    Variable VAR_ref_0_0 = new_Variable_named(L"ref", 0);
    Array PArray22303 = new_Array_with(1, (Optr)VAR_ref_0_0);
    Assign PAssign22305 = new_Assign((Optr)slot_Organization_UndefinedClassReference_reference, (Optr)VAR_ref_0_0);
    Array PThreadedCode22304 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22305, (Optr)&t_push_variable, (Optr)VAR_ref_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22302 = new_Method_with(PArray22303, empty_Array, empty_Array, PThreadedCode22304, 2, PAssign22305, self);
    
    MethodClosure MC_SMB_reference_ = new_MethodClosure((Method)PMethod22302, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference_, MC_SMB_reference_);
}

void init_Organization_PUndefinedClassReference_layout() {
    layout_Organization_UndefinedClassReference_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_UndefinedClassReference_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_UndefinedClassReference = new_Symbol(L"UndefinedClassReference");
    slot_Organization_UndefinedClassReference_reference = (Optr)new_Slot(1, L"reference");
    layout_Organization_UndefinedClassReference = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Organization_UndefinedClassReference)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Organization_UndefinedClassReference)->values[1] = slot_Organization_UndefinedClassReference_reference; // reference 
    UndefinedClassReference_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Organization_UndefinedClassReference_Class_class);
    UndefinedClassReference_Class->layout = layout_Organization_UndefinedClassReference;
    UndefinedClassReference_Class->name = SMB_UndefinedClassReference;
    
}

void init_Organization_PUndefinedClassReference_methods() {
    init_SMB_warnOn_();
    init_SMB_reference();
    init_SMB_reference_();
    
}