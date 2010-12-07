#include <lib/class/Organization/UndefinedClassReference.h>


Optr layout_Organization_UndefinedClassReference_Class_class;
Optr slot_Organization_UndefinedClassReference_reference;
Optr layout_Organization_UndefinedClassReference;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22282 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22285 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22287 = new_String(L"Reference to undefined class in package ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22287_Const = new_Constant((Optr)string_22287);
    // <<. 
    Send PSend22288 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22287_Const);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22289 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend22290 = new_Send((Optr)PSend22289, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // package. 
    Send PSend22291 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray22293 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22295 = new_Send((Optr)VAR_value_2_1, SMB__pequals_, 1, (Optr)slot_Organization_UndefinedClassReference_reference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_22299 = new_String(L": ");
    Constant string_22299_Const = new_Constant((Optr)string_22299);
    // <<. 
    Send PSend22300 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22299_Const);
    // <<. 
    Send PSend22301 = new_Send((Optr)PSend22300, SMB__shiftLeft_, 1, (Optr)VAR_key_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22302 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22301);
    Array PThreadedCode22298 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22299, (Optr)&t_send1, (Optr)PSend22300, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_send1, (Optr)PSend22301, (Optr)&t_send1, (Optr)PSend22302, (Optr)&t_block_return);
    Block PBlock22297 = new_Block_with(empty_Array, empty_Array, PThreadedCode22298, 1, PSend22302);
    // ifTrue:. 
    Send PSend22296 = new_Send((Optr)PSend22295, SMB_ifTrue_, 1, (Optr)PBlock22297);
    Array PThreadedCode22294 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send1, (Optr)PSend22295, (Optr)&t_send_ifTrue_, (Optr)PSend22296, (Optr)PBlock22297, (Optr)&t_method_return);
    Block PBlock22292 = new_Block_with(PArray22293, empty_Array, PThreadedCode22294, 1, PSend22296);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend22303 = new_Send((Optr)PSend22291, SMB_keysAndValuesDo_, 1, (Optr)PBlock22292);
    Array PThreadedCode22286 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22287, (Optr)&t_send1, (Optr)PSend22288, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22289, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22290, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22291, (Optr)&t_push_closure, (Optr)PBlock22292, (Optr)&t_send1, (Optr)PSend22303, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22284 = new_Block_with(PArray22285, empty_Array, PThreadedCode22286, 4, PSend22288, PSend22290, PSend22303, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22304 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22284);
    Array PThreadedCode22283 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22284, (Optr)&t_send1, (Optr)PSend22304, (Optr)&t_method_return);
    Method PMethod22281 = new_Method_with(PArray22282, empty_Array, empty_Array, PThreadedCode22283, 1, PSend22304);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22281, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_reference() {
    Symbol SMB_reference = new_Symbol(L"reference");
    Array PThreadedCode22306 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_method_return);
    Method PMethod22305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22306, 1, slot_Organization_UndefinedClassReference_reference);
    
    MethodClosure MC_SMB_reference = new_MethodClosure((Method)PMethod22305, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference, MC_SMB_reference);
}


static void init_SMB_reference_() {
    Symbol SMB_reference_ = new_Symbol(L"reference:");
    Variable VAR_ref_0_0 = new_Variable_named(L"ref", 0);
    Array PArray22308 = new_Array_with(1, (Optr)VAR_ref_0_0);
    Assign PAssign22310 = new_Assign((Optr)slot_Organization_UndefinedClassReference_reference, (Optr)VAR_ref_0_0);
    Array PThreadedCode22309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22310, (Optr)&t_push_variable, (Optr)VAR_ref_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22307 = new_Method_with(PArray22308, empty_Array, empty_Array, PThreadedCode22309, 2, PAssign22310, self);
    
    MethodClosure MC_SMB_reference_ = new_MethodClosure((Method)PMethod22307, UndefinedClassReference_Class);
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