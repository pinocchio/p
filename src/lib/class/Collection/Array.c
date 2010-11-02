#include <lib/class/Collection/Array.h>


Optr layout_Collection_Array_Class_class;


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Array PThreadedCode5679 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod5678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5679, 1, self);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod5678, Array_Class);
    store_method(Array_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray5681 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitArray_ = new_Symbol(L"visitArray:");
    // visitArray:. 
    Send PSend5683 = new_Send((Optr)VAR_visitor_0_0, SMB_visitArray_, 1, (Optr)self);
    Array PThreadedCode5682 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5683, (Optr)&t_method_return);
    Method PMethod5680 = new_Method_with(PArray5681, empty_Array, empty_Array, PThreadedCode5682, 1, PSend5683);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5680, Array_Class);
    store_method(Array_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_removeNatives() {
    Symbol SMB_removeNatives = new_Symbol(L"removeNatives");
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend5686 = new_Send((Optr)self, SMB_methods, 0);
    Variable VAR_m_1_0 = new_Variable_named(L"m", 1);
    Array PArray5688 = new_Array_with(1, (Optr)VAR_m_1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5690 = new_Send((Optr)VAR_m_1_0, SMB_code, 0);
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    // clearNative. 
    Send PSend5691 = new_Send((Optr)PSend5690, SMB_clearNative, 0);
    Array PThreadedCode5689 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_m_1_0, (Optr)&t_send0, (Optr)PSend5690, (Optr)&t_send0, (Optr)PSend5691, (Optr)&t_method_return);
    Block PBlock5687 = new_Block_with(PArray5688, empty_Array, PThreadedCode5689, 1, PSend5691);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5692 = new_Send((Optr)PSend5686, SMB_do_, 1, (Optr)PBlock5687);
    Array PThreadedCode5685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5686, (Optr)&t_push_closure, (Optr)PBlock5687, (Optr)&t_send1, (Optr)PSend5692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5685, 2, PSend5692, self);
    
    MethodClosure MC_SMB_removeNatives = new_MethodClosure((Method)PMethod5684, HEADER(Array_Class));
    store_method(HEADER(Array_Class), SMB_removeNatives, MC_SMB_removeNatives);
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
    init_class_SMB_removeNatives();
    
}