#include <lib/class/Demo/Person.h>


Optr layout_Demo_Person_Class_class;
Optr slot_Demo_Person_name;
Optr layout_Demo_Person;


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24702 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24704 = new_Assign((Optr)slot_Demo_Person_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24704, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24701 = new_Method_with(PArray24702, empty_Array, empty_Array, PThreadedCode24703, 2, PAssign24704, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod24701, Demo_Person_Class);
    store_method(Demo_Person_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode24706 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Demo_Person_name, (Optr)&t_method_return);
    Method PMethod24705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24706, 1, slot_Demo_Person_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod24705, Demo_Person_Class);
    store_method(Demo_Person_Class, SMB_name, MC_SMB_name);
}

void init_Demo_PPerson_layout() {
    layout_Demo_Person_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Demo_Person_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Demo_Person_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Demo_Person_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Demo_Person_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Demo_Person_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Person = new_Symbol(L"Person");
    slot_Demo_Person_name = (Optr)new_Slot(0, L"name");
    layout_Demo_Person = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Demo_Person)->values[0] = slot_Demo_Person_name; // name 
    Demo_Person_Class = (Class)new_Class(Object_Class, layout_Demo_Person_Class_class);
    Demo_Person_Class->layout = layout_Demo_Person;
    Demo_Person_Class->name = SMB_Person;
    
}

void init_Demo_PPerson_methods() {
    init_SMB_name_();
    init_SMB_name();
    
}