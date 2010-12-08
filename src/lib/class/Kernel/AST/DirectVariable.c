#include <lib/class/Kernel/AST/DirectVariable.h>


Optr layout_Kernel_AST_DirectVariable_Class_class;
Optr slot_Kernel_AST_DirectVariable_value;
Optr layout_Kernel_AST_DirectVariable;


static void init_SMB_readFrom_() {
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray4889 = new_Array_with(1, (Optr)VAR_context_0_0);
    Array PThreadedCode4890 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_DirectVariable_value, (Optr)&t_method_return);
    Method PMethod4888 = new_Method_with(PArray4889, empty_Array, empty_Array, PThreadedCode4890, 1, slot_Kernel_AST_DirectVariable_value);
    
    MethodClosure MC_SMB_readFrom_ = new_MethodClosure((Method)PMethod4888, Kernel_AST_DirectVariable_Class);
    store_method(Kernel_AST_DirectVariable_Class, SMB_readFrom_, MC_SMB_readFrom_);
}


static void init_SMB_assign_on_() {
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray4892 = new_Array_with(2, (Optr)VAR_aValue_0_0, (Optr)VAR_anObject_0_1);
    Assign PAssign4894 = new_Assign((Optr)slot_Kernel_AST_DirectVariable_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode4893 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign4894, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_method_return);
    Method PMethod4891 = new_Method_with(PArray4892, empty_Array, empty_Array, PThreadedCode4893, 1, PAssign4894);
    
    MethodClosure MC_SMB_assign_on_ = new_MethodClosure((Method)PMethod4891, Kernel_AST_DirectVariable_Class);
    store_method(Kernel_AST_DirectVariable_Class, SMB_assign_on_, MC_SMB_assign_on_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4896 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    // visitDirectVariable:. 
    Send PSend4898 = new_Send((Optr)VAR_visitor_0_0, SMB_visitDirectVariable_, 1, (Optr)self);
    Array PThreadedCode4897 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4898, (Optr)&t_method_return);
    Method PMethod4895 = new_Method_with(PArray4896, empty_Array, empty_Array, PThreadedCode4897, 1, PSend4898);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4895, Kernel_AST_DirectVariable_Class);
    store_method(Kernel_AST_DirectVariable_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_variableName_0_0 = new_Variable_named(L"variableName", 0);
    Array PArray4900 = new_Array_with(1, (Optr)VAR_variableName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4902 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend4903 = new_Send((Optr)PSend4902, SMB_name_, 1, (Optr)VAR_variableName_0_0);
    Array PThreadedCode4901 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4902, (Optr)&t_push_variable, (Optr)VAR_variableName_0_0, (Optr)&t_send1, (Optr)PSend4903, (Optr)&t_method_return);
    Method PMethod4899 = new_Method_with(PArray4900, empty_Array, empty_Array, PThreadedCode4901, 1, PSend4903);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod4899, HEADER(Kernel_AST_DirectVariable_Class));
    store_method(HEADER(Kernel_AST_DirectVariable_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_defaultVisit_() {
    Symbol SMB_defaultVisit_ = new_Symbol(L"defaultVisit:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray4905 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend4907 = new_Send((Optr)VAR_variable_0_0, SMB_value, 0);
    Array PThreadedCode4906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send0, (Optr)PSend4907, (Optr)&t_method_return);
    Method PMethod4904 = new_Method_with(PArray4905, empty_Array, empty_Array, PThreadedCode4906, 1, PSend4907);
    
    MethodClosure MC_SMB_defaultVisit_ = new_MethodClosure((Method)PMethod4904, HEADER(Kernel_AST_DirectVariable_Class));
    store_method(HEADER(Kernel_AST_DirectVariable_Class), SMB_defaultVisit_, MC_SMB_defaultVisit_);
}

void init_Kernel_AST_PDirectVariable_layout() {
    layout_Kernel_AST_DirectVariable_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_DirectVariable_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_DirectVariable_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_DirectVariable_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_DirectVariable_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_DirectVariable_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DirectVariable = new_Symbol(L"DirectVariable");
    slot_Kernel_AST_DirectVariable_value = (Optr)new_Slot(1, L"value");
    layout_Kernel_AST_DirectVariable = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Kernel_AST_DirectVariable)->values[0] = slot_Kernel_AST_AbstractVariable_name; // name 
    ((Array)layout_Kernel_AST_DirectVariable)->values[1] = slot_Kernel_AST_DirectVariable_value; // value 
    Kernel_AST_DirectVariable_Class = (Class)new_Class(Kernel_AST_AbstractVariable_Class, layout_Kernel_AST_DirectVariable_Class_class);
    Kernel_AST_DirectVariable_Class->layout = layout_Kernel_AST_DirectVariable;
    Kernel_AST_DirectVariable_Class->name = SMB_DirectVariable;
    
}

void init_Kernel_AST_PDirectVariable_methods() {
    init_SMB_readFrom_();
    init_SMB_assign_on_();
    init_SMB_accept_();
    init_class_SMB_named_();
    init_class_SMB_defaultVisit_();
    
}