#include <lib/class/Kernel/Class/Class.h>


Optr layout_Kernel_Class_Class_Class_class;
Optr slot_Kernel_Class_Class_name;
Optr slot_Kernel_Class_Class_package;
Optr layout_Kernel_Class_Class;


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode2890 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_name, (Optr)&t_method_return);
    Method PMethod2889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2890, 1, slot_Kernel_Class_Class_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod2889, class);
    store_method(class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray2892 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend2894 = new_Send((Optr)slot_Kernel_Class_Class_package, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend2898 = new_Send((Optr)slot_Kernel_Class_Class_package, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend2899 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode2897 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_package, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend2898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend2899, (Optr)&t_block_return);
    Block PBlock2896 = new_Block_with(empty_Array, empty_Array, PThreadedCode2897, 2, PSend2898, PSend2899);
    // ifFalse:. 
    Send PSend2895 = new_Send((Optr)PSend2894, SMB_ifFalse_, 1, (Optr)PBlock2896);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend2900 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode2893 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_package, (Optr)&t_send0, (Optr)PSend2894, (Optr)&t_send_ifFalse_, (Optr)PSend2895, (Optr)PBlock2896, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2900, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2891 = new_Method_with(PArray2892, empty_Array, empty_Array, PThreadedCode2893, 3, PSend2895, PSend2900, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod2891, class);
    store_method(class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2902 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2904 = new_Assign((Optr)slot_Kernel_Class_Class_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2904, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2901 = new_Method_with(PArray2902, empty_Array, empty_Array, PThreadedCode2903, 2, PAssign2904, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod2901, class);
    store_method(class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_package_() {
    Symbol SMB_package_ = new_Symbol(L"package:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2906 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign2908 = new_Assign((Optr)slot_Kernel_Class_Class_package, (Optr)VAR_anObject_0_0);
    Array PThreadedCode2907 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign2908, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2905 = new_Method_with(PArray2906, empty_Array, empty_Array, PThreadedCode2907, 2, PAssign2908, self);
    
    MethodClosure MC_SMB_package_ = new_MethodClosure((Method)PMethod2905, class);
    store_method(class, SMB_package_, MC_SMB_package_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2910 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitClass_ = new_Symbol(L"visitClass:");
    // visitClass:. 
    Send PSend2912 = new_Send((Optr)VAR_visitor_0_0, SMB_visitClass_, 1, (Optr)self);
    Array PThreadedCode2911 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2912, (Optr)&t_method_return);
    Method PMethod2909 = new_Method_with(PArray2910, empty_Array, empty_Array, PThreadedCode2911, 1, PSend2912);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2909, class);
    store_method(class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_package() {
    Symbol SMB_package = new_Symbol(L"package");
    Array PThreadedCode2914 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_package, (Optr)&t_method_return);
    Method PMethod2913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2914, 1, slot_Kernel_Class_Class_package);
    
    MethodClosure MC_SMB_package = new_MethodClosure((Method)PMethod2913, class);
    store_method(class, SMB_package, MC_SMB_package);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray2916 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    // printOn:. 
    Send PSend2918 = new_Send((Optr)slot_Kernel_Class_Class_package, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_2919 = new_Character(L'.');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend2920 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    // <<. 
    Send PSend2921 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Kernel_Class_Class_name);
    Array PThreadedCode2917 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_package, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend2918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend2920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_name, (Optr)&t_send1, (Optr)PSend2921, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2915 = new_Method_with(PArray2916, empty_Array, empty_Array, PThreadedCode2917, 4, PSend2918, PSend2920, PSend2921, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2915, class);
    store_method(class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode2923 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Class_name, (Optr)&t_method_return);
    Method PMethod2922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2923, 1, slot_Kernel_Class_Class_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod2922, class);
    store_method(class, SMB_name, MC_SMB_name);
}

void init_Kernel_Class_Class_layout() {
    layout_Kernel_Class_Class_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_Class_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Class_Class_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Class_Class_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Class_Class_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Class_Class_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Class = new_Symbol(L"Class");
    slot_Kernel_Class_Class_name = (Optr)new_Slot(3, L"name");
    slot_Kernel_Class_Class_package = (Optr)new_Slot(4, L"package");
    layout_Kernel_Class_Class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_Class)->values[0] = slot_Kernel_Class_Behavior_layout; // layout 
    ((Array)layout_Kernel_Class_Class)->values[1] = slot_Kernel_Class_Behavior_superclass; // superclass 
    ((Array)layout_Kernel_Class_Class)->values[2] = slot_Kernel_Class_Behavior_methods; // methods 
    ((Array)layout_Kernel_Class_Class)->values[3] = slot_Kernel_Class_Class_name; // name 
    ((Array)layout_Kernel_Class_Class)->values[4] = slot_Kernel_Class_Class_package; // package 
    Class_set_superclass(class, behavior);
    class->layout = layout_Kernel_Class_Class;
    HEADER(class)->layout = layout_Kernel_Class_Class_Class_class;
    class->name = SMB_Class;
    
}

void init_Kernel_Class_Class_methods() {
    init_SMB_shortName();
    init_SMB_pathDo_separatedBy_();
    init_SMB_name_();
    init_SMB_package_();
    init_SMB_accept_();
    init_SMB_package();
    init_SMB_printOn_();
    init_SMB_name();
    
}