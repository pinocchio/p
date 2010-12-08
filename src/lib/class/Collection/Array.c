#include <lib/class/Collection/Array.h>


Optr layout_Collection_Array_Class_class;


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Array PThreadedCode5680 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod5679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5680, 1, self);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod5679, Array_Class);
    store_method(Array_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5682 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend5684 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode5683 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5684, (Optr)&t_method_return);
    Method PMethod5681 = new_Method_with(PArray5682, empty_Array, empty_Array, PThreadedCode5683, 1, PSend5684);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5681, Array_Class);
    store_method(Array_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Collection_Array_layout() {
    layout_Collection_Array_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Array_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Array_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Array_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Array_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Array_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Array = new_Symbol(L"Array");
    Class_set_superclass(Array_Class, Collections_Abstract_ArrayedCollection_Class);
    Array_Class->layout = empty_array_layout;
    HEADER(Array_Class)->layout = layout_Collection_Array_Class_class;
    Array_Class->name = SMB_Array;
    
}

void init_Collection_Array_methods() {
    init_SMB_asArray();
    init_SMB_accept_();
    
}