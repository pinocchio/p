#include <lib/class/Kernel/AST/ThisContext.h>


Optr slot_Kernel_AST_ThisContext_Class_class_instance;
Optr layout_Kernel_AST_ThisContext_Class_class;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4909 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitThisContext_ = new_Symbol(L"visitThisContext:");
    // visitThisContext:. 
    Send PSend4911 = new_Send((Optr)VAR_visitor_0_0, SMB_visitThisContext_, 1, (Optr)self);
    Array PThreadedCode4910 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4911, (Optr)&t_method_return);
    Method PMethod4908 = new_Method_with(PArray4909, empty_Array, empty_Array, PThreadedCode4910, 1, PSend4911);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4908, Kernel_AST_ThisContext_Class);
    store_method(Kernel_AST_ThisContext_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper4914 = new_Super(SMB_initialize, 0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend4916 = new_Send((Optr)self, SMB_basicNew, 0);
    Assign PAssign4915 = new_Assign((Optr)slot_Kernel_AST_ThisContext_Class_class_instance, (Optr)PSend4916);
    Array PThreadedCode4913 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper4914, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4915, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4912 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4913, 3, PSuper4914, PAssign4915, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4912, HEADER(Kernel_AST_ThisContext_Class));
    store_method(HEADER(Kernel_AST_ThisContext_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Array PThreadedCode4918 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_ThisContext_Class_class_instance, (Optr)&t_method_return);
    Method PMethod4917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4918, 1, slot_Kernel_AST_ThisContext_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod4917, HEADER(Kernel_AST_ThisContext_Class));
    store_method(HEADER(Kernel_AST_ThisContext_Class), SMB_instance, MC_SMB_instance);
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
    Send PSend4921 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode4920 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4921, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4919 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4920, 2, PSend4921, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod4919, HEADER(Kernel_AST_ThisContext_Class));
    store_method(HEADER(Kernel_AST_ThisContext_Class), SMB_new, MC_SMB_new);
}

void init_Kernel_AST_PThisContext_layout() {
    slot_Kernel_AST_ThisContext_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_Kernel_AST_ThisContext_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_AST_ThisContext_Class_class)->values[5] = slot_Kernel_AST_ThisContext_Class_class_instance; // instance 
    
    Symbol  SMB_ThisContext = new_Symbol(L"ThisContext");
    Kernel_AST_ThisContext_Class = (Class)new_Class(Object_Class, layout_Kernel_AST_ThisContext_Class_class);
    Kernel_AST_ThisContext_Class->layout = empty_object_layout;
    Kernel_AST_ThisContext_Class->name = SMB_ThisContext;
    
}

void init_Kernel_AST_PThisContext_methods() {
    init_SMB_accept_();
    init_class_SMB_initialize();
    init_class_SMB_instance();
    init_class_SMB_new();
    
}