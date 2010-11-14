#include <lib/class/Organization/UndefinedClassReference.h>


Optr layout_Organization_UndefinedClassReference_Class_class;
Optr slot_Organization_UndefinedClassReference_reference;
Optr layout_Organization_UndefinedClassReference;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22058 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22061 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_22063 = new_String(L"Reference to undefined class in package ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22063_Const = new_Constant((Optr)string_22063);
    // <<. 
    Send PSend22064 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22063_Const);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend22065 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend22066 = new_Send((Optr)PSend22065, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // package. 
    Send PSend22067 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray22069 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22071 = new_Send((Optr)VAR_value_2_1, SMB__pequals_, 1, (Optr)slot_Organization_UndefinedClassReference_reference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_22075 = new_String(L": ");
    Constant string_22075_Const = new_Constant((Optr)string_22075);
    // <<. 
    Send PSend22076 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22075_Const);
    // <<. 
    Send PSend22077 = new_Send((Optr)PSend22076, SMB__shiftLeft_, 1, (Optr)VAR_key_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22078 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22077);
    Array PThreadedCode22074 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22075, (Optr)&t_send1, (Optr)PSend22076, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_send1, (Optr)PSend22077, (Optr)&t_send1, (Optr)PSend22078, (Optr)&t_block_return);
    Block PBlock22073 = new_Block_with(empty_Array, empty_Array, PThreadedCode22074, 1, PSend22078);
    // ifTrue:. 
    Send PSend22072 = new_Send((Optr)PSend22071, SMB_ifTrue_, 1, (Optr)PBlock22073);
    Array PThreadedCode22070 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send1, (Optr)PSend22071, (Optr)&t_send_ifTrue_, (Optr)PSend22072, (Optr)PBlock22073, (Optr)&t_method_return);
    Block PBlock22068 = new_Block_with(PArray22069, empty_Array, PThreadedCode22070, 1, PSend22072);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend22079 = new_Send((Optr)PSend22067, SMB_keysAndValuesDo_, 1, (Optr)PBlock22068);
    Array PThreadedCode22062 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22063, (Optr)&t_send1, (Optr)PSend22064, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22065, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend22066, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend22067, (Optr)&t_push_closure, (Optr)PBlock22068, (Optr)&t_send1, (Optr)PSend22079, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock22060 = new_Block_with(PArray22061, empty_Array, PThreadedCode22062, 4, PSend22064, PSend22066, PSend22079, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22080 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22060);
    Array PThreadedCode22059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22060, (Optr)&t_send1, (Optr)PSend22080, (Optr)&t_method_return);
    Method PMethod22057 = new_Method_with(PArray22058, empty_Array, empty_Array, PThreadedCode22059, 1, PSend22080);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22057, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_reference() {
    Symbol SMB_reference = new_Symbol(L"reference");
    Array PThreadedCode22082 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_method_return);
    Method PMethod22081 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22082, 1, slot_Organization_UndefinedClassReference_reference);
    
    MethodClosure MC_SMB_reference = new_MethodClosure((Method)PMethod22081, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference, MC_SMB_reference);
}


static void init_SMB_reference_() {
    Symbol SMB_reference_ = new_Symbol(L"reference:");
    Variable VAR_ref_0_0 = new_Variable_named(L"ref", 0);
    Array PArray22084 = new_Array_with(1, (Optr)VAR_ref_0_0);
    Assign PAssign22086 = new_Assign((Optr)slot_Organization_UndefinedClassReference_reference, (Optr)VAR_ref_0_0);
    Array PThreadedCode22085 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22086, (Optr)&t_push_variable, (Optr)VAR_ref_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22083 = new_Method_with(PArray22084, empty_Array, empty_Array, PThreadedCode22085, 2, PAssign22086, self);
    
    MethodClosure MC_SMB_reference_ = new_MethodClosure((Method)PMethod22083, UndefinedClassReference_Class);
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