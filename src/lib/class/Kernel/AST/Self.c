#include <lib/class/Kernel/AST/Self.h>


Optr slot_Kernel_AST_Self_Class_class_instance;
Optr layout_Kernel_AST_Self_Class_class;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray4827 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4829 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4830 = new_Send((Optr)VAR_aSelf_0_0, SMB_species, 0);
    // =. 
    Send PSend4831 = new_Send((Optr)PSend4829, SMB__equals_, 1, (Optr)PSend4830);
    Array PThreadedCode4828 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4829, (Optr)&t_push_variable, (Optr)VAR_aSelf_0_0, (Optr)&t_send0, (Optr)PSend4830, (Optr)&t_send1, (Optr)PSend4831, (Optr)&t_method_return);
    Method PMethod4826 = new_Method_with(PArray4827, empty_Array, empty_Array, PThreadedCode4828, 1, PSend4831);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4826, Self_Class);
    store_method(Self_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_info_() {
    Symbol SMB_info_ = new_Symbol(L"info:");
    Variable VAR_black_0_0 = new_Variable_named(L"black", 0);
    Array PArray4833 = new_Array_with(1, (Optr)VAR_black_0_0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend4835 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode4834 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4835, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4832 = new_Method_with(PArray4833, empty_Array, empty_Array, PThreadedCode4834, 2, PSend4835, self);
    
    MethodClosure MC_SMB_info_ = new_MethodClosure((Method)PMethod4832, Self_Class);
    store_method(Self_Class, SMB_info_, MC_SMB_info_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4837 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    // visitSelf:. 
    Send PSend4839 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSelf_, 1, (Optr)self);
    Array PThreadedCode4838 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4839, (Optr)&t_method_return);
    Method PMethod4836 = new_Method_with(PArray4837, empty_Array, empty_Array, PThreadedCode4838, 1, PSend4839);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4836, Self_Class);
    store_method(Self_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Array PThreadedCode4841 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Self_Class_class_instance, (Optr)&t_method_return);
    Method PMethod4840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4841, 1, slot_Kernel_AST_Self_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod4840, HEADER(Self_Class));
    store_method(HEADER(Self_Class), SMB_instance, MC_SMB_instance);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend4844 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode4843 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4844, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4843, 2, PSend4844, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod4842, HEADER(Self_Class));
    store_method(HEADER(Self_Class), SMB_new, MC_SMB_new);
}

void init_Kernel_AST_PSelf_layout() {
    slot_Kernel_AST_Self_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_Kernel_AST_Self_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_AST_Self_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Self_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Self_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Self_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Self_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_AST_Self_Class_class)->values[5] = slot_Kernel_AST_Self_Class_class_instance; // instance 
    
    Symbol  SMB_Self = new_Symbol(L"Self");
    Self_Class = (Class)new_Class(Object_Class, layout_Kernel_AST_Self_Class_class);
    Self_Class->layout = empty_object_layout;
    Self_Class->name = SMB_Self;
    
}

void init_Kernel_AST_PSelf_methods() {
    init_SMB__equals_();
    init_SMB_info_();
    init_SMB_accept_();
    init_class_SMB_instance();
    init_class_SMB_new();
    
}