#include <lib/class/Alias/WriteAlias.h>


Optr layout_Alias_WriteAlias_Class_class;
Optr slot_Alias_WriteAlias_predecessor;
Optr layout_Alias_WriteAlias;


static void init_SMB_predecessor() {
    Symbol SMB_predecessor = new_Symbol(L"predecessor");
    Array PThreadedCode21487 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_WriteAlias_predecessor, (Optr)&t_method_return);
    Method PMethod21486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21487, 1, slot_Alias_WriteAlias_predecessor);
    
    MethodClosure MC_SMB_predecessor = new_MethodClosure((Method)PMethod21486, Alias_WriteAlias_Class);
    store_method(Alias_WriteAlias_Class, SMB_predecessor, MC_SMB_predecessor);
}


static void init_SMB_predecessor_() {
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21489 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21491 = new_Assign((Optr)slot_Alias_WriteAlias_predecessor, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21490 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21491, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21488 = new_Method_with(PArray21489, empty_Array, empty_Array, PThreadedCode21490, 2, PAssign21491, self);
    
    MethodClosure MC_SMB_predecessor_ = new_MethodClosure((Method)PMethod21488, Alias_WriteAlias_Class);
    store_method(Alias_WriteAlias_Class, SMB_predecessor_, MC_SMB_predecessor_);
}

void init_Alias_PWriteAlias_layout() {
    layout_Alias_WriteAlias_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Alias_WriteAlias_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Alias_WriteAlias_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Alias_WriteAlias_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Alias_WriteAlias_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Alias_WriteAlias_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WriteAlias = new_Symbol(L"WriteAlias");
    slot_Alias_WriteAlias_predecessor = (Optr)new_Slot(3, L"predecessor");
    layout_Alias_WriteAlias = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Alias_WriteAlias)->values[0] = slot_Alias_Alias_origin; // origin 
    ((Array)layout_Alias_WriteAlias)->values[1] = slot_Alias_Alias_context; // context 
    ((Array)layout_Alias_WriteAlias)->values[2] = slot_Alias_Alias_value; // value 
    ((Array)layout_Alias_WriteAlias)->values[3] = slot_Alias_WriteAlias_predecessor; // predecessor 
    Alias_WriteAlias_Class = (Class)new_Class(Alias_Alias_Class, layout_Alias_WriteAlias_Class_class);
    Alias_WriteAlias_Class->layout = layout_Alias_WriteAlias;
    Alias_WriteAlias_Class->name = SMB_WriteAlias;
    
}

void init_Alias_PWriteAlias_methods() {
    init_SMB_predecessor();
    init_SMB_predecessor_();
    
}