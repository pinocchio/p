#include <lib/class/Organization/UndefinedClassReference.h>


Optr layout_Organization_UndefinedClassReference_Class_class;
Optr slot_Organization_UndefinedClassReference_reference;
Optr layout_Organization_UndefinedClassReference;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21728 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21731 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_21733 = new_String(L"Reference to undefined class in package ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21733_Const = new_Constant((Optr)string_21733);
    // <<. 
    Send PSend21734 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21733_Const);
    Symbol SMB_package = new_Symbol(L"package");
    // package. 
    Send PSend21735 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend21736 = new_Send((Optr)PSend21735, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // package. 
    Send PSend21737 = new_Send((Optr)slot_Organization_UndefinedClassReference_reference, SMB_package, 0);
    Variable VAR_key_2_0 = new_Variable_named(L"key", 2);
    Variable VAR_value_2_1 = new_Variable_named(L"value", 2);
    Array PArray21739 = new_Array_with(2, (Optr)VAR_key_2_0, (Optr)VAR_value_2_1);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21741 = new_Send((Optr)VAR_value_2_1, SMB__pequals_, 1, (Optr)slot_Organization_UndefinedClassReference_reference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_21745 = new_String(L": ");
    Constant string_21745_Const = new_Constant((Optr)string_21745);
    // <<. 
    Send PSend21746 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21745_Const);
    // <<. 
    Send PSend21747 = new_Send((Optr)PSend21746, SMB__shiftLeft_, 1, (Optr)VAR_key_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21748 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21747);
    Array PThreadedCode21744 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21745, (Optr)&t_send1, (Optr)PSend21746, (Optr)&t_push_variable, (Optr)VAR_key_2_0, (Optr)&t_send1, (Optr)PSend21747, (Optr)&t_send1, (Optr)PSend21748, (Optr)&t_block_return);
    Block PBlock21743 = new_Block_with(empty_Array, empty_Array, PThreadedCode21744, 1, PSend21748);
    // ifTrue:. 
    Send PSend21742 = new_Send((Optr)PSend21741, SMB_ifTrue_, 1, (Optr)PBlock21743);
    Array PThreadedCode21740 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_value_2_1, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send1, (Optr)PSend21741, (Optr)&t_send_ifTrue_, (Optr)PSend21742, (Optr)PBlock21743, (Optr)&t_method_return);
    Block PBlock21738 = new_Block_with(PArray21739, empty_Array, PThreadedCode21740, 1, PSend21742);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21749 = new_Send((Optr)PSend21737, SMB_keysAndValuesDo_, 1, (Optr)PBlock21738);
    Array PThreadedCode21732 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21733, (Optr)&t_send1, (Optr)PSend21734, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend21735, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21736, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_send0, (Optr)PSend21737, (Optr)&t_push_closure, (Optr)PBlock21738, (Optr)&t_send1, (Optr)PSend21749, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock21730 = new_Block_with(PArray21731, empty_Array, PThreadedCode21732, 4, PSend21734, PSend21736, PSend21749, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21750 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21730);
    Array PThreadedCode21729 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21730, (Optr)&t_send1, (Optr)PSend21750, (Optr)&t_method_return);
    Method PMethod21727 = new_Method_with(PArray21728, empty_Array, empty_Array, PThreadedCode21729, 1, PSend21750);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod21727, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_reference() {
    Symbol SMB_reference = new_Symbol(L"reference");
    Array PThreadedCode21752 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_UndefinedClassReference_reference, (Optr)&t_method_return);
    Method PMethod21751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21752, 1, slot_Organization_UndefinedClassReference_reference);
    
    MethodClosure MC_SMB_reference = new_MethodClosure((Method)PMethod21751, UndefinedClassReference_Class);
    store_method(UndefinedClassReference_Class, SMB_reference, MC_SMB_reference);
}


static void init_SMB_reference_() {
    Symbol SMB_reference_ = new_Symbol(L"reference:");
    Variable VAR_ref_0_0 = new_Variable_named(L"ref", 0);
    Array PArray21754 = new_Array_with(1, (Optr)VAR_ref_0_0);
    Assign PAssign21756 = new_Assign((Optr)slot_Organization_UndefinedClassReference_reference, (Optr)VAR_ref_0_0);
    Array PThreadedCode21755 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21756, (Optr)&t_push_variable, (Optr)VAR_ref_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21753 = new_Method_with(PArray21754, empty_Array, empty_Array, PThreadedCode21755, 2, PAssign21756, self);
    
    MethodClosure MC_SMB_reference_ = new_MethodClosure((Method)PMethod21753, UndefinedClassReference_Class);
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