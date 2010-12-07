#include <lib/class/Kernel/Object/Nil.h>


Optr slot_Kernel_Object_Nil_Class_class_nilInstance;
Optr layout_Kernel_Object_Nil_Class_class;


static void init_SMB_ifNotNil_ifNil_() {
    Symbol SMB_ifNotNil_ifNil_ = new_Symbol(L"ifNotNil:ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray281 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend283 = new_Send((Optr)VAR_otherBlock_0_1, SMB_value, 0);
    Array PThreadedCode282 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_otherBlock_0_1, (Optr)&t_send0, (Optr)PSend283, (Optr)&t_method_return);
    Method PMethod280 = new_Method_with(PArray281, empty_Array, empty_Array, PThreadedCode282, 1, PSend283);
    
    MethodClosure MC_SMB_ifNotNil_ifNil_ = new_MethodClosure((Method)PMethod280, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNil_ifNil_, MC_SMB_ifNotNil_ifNil_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Array PThreadedCode285 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod284 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode285, 1, self);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod284, Nil_Class);
    store_method(Nil_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_isNil() {
    Symbol SMB_isNil = new_Symbol(L"isNil");
    Array PThreadedCode287 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode287, 1, true_Const);
    
    MethodClosure MC_SMB_isNil = new_MethodClosure((Method)PMethod286, Nil_Class);
    store_method(Nil_Class, SMB_isNil, MC_SMB_isNil);
}


static void init_SMB_ifNil_ifNotNilDo_() {
    Symbol SMB_ifNil_ifNotNilDo_ = new_Symbol(L"ifNil:ifNotNilDo:");
    Variable VAR_nilBlock_0_0 = new_Variable_named(L"nilBlock", 0);
    Variable VAR_ifNotNilBlock_0_1 = new_Variable_named(L"ifNotNilBlock", 0);
    Array PArray289 = new_Array_with(2, (Optr)VAR_nilBlock_0_0, (Optr)VAR_ifNotNilBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend291 = new_Send((Optr)VAR_nilBlock_0_0, SMB_value, 0);
    Array PThreadedCode290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_nilBlock_0_0, (Optr)&t_send0, (Optr)PSend291, (Optr)&t_method_return);
    Method PMethod288 = new_Method_with(PArray289, empty_Array, empty_Array, PThreadedCode290, 1, PSend291);
    
    MethodClosure MC_SMB_ifNil_ifNotNilDo_ = new_MethodClosure((Method)PMethod288, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_ifNotNilDo_, MC_SMB_ifNil_ifNotNilDo_);
}


static void init_SMB_ifNil_() {
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray293 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend295 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode294 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend295, (Optr)&t_method_return);
    Method PMethod292 = new_Method_with(PArray293, empty_Array, empty_Array, PThreadedCode294, 1, PSend295);
    
    MethodClosure MC_SMB_ifNil_ = new_MethodClosure((Method)PMethod292, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_, MC_SMB_ifNil_);
}


static void init_SMB_isNotNil() {
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    Array PThreadedCode297 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode297, 1, false_Const);
    
    MethodClosure MC_SMB_isNotNil = new_MethodClosure((Method)PMethod296, Nil_Class);
    store_method(Nil_Class, SMB_isNotNil, MC_SMB_isNotNil);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_aVisitor_0_0 = new_Variable_named(L"aVisitor", 0);
    Array PArray299 = new_Array_with(1, (Optr)VAR_aVisitor_0_0);
    Symbol SMB_visitNil_ = new_Symbol(L"visitNil:");
    // visitNil:. 
    Send PSend301 = new_Send((Optr)VAR_aVisitor_0_0, SMB_visitNil_, 1, (Optr)self);
    Array PThreadedCode300 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVisitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend301, (Optr)&t_method_return);
    Method PMethod298 = new_Method_with(PArray299, empty_Array, empty_Array, PThreadedCode300, 1, PSend301);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod298, Nil_Class);
    store_method(Nil_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_ifNil_ifNotNil_() {
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray303 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend305 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode304 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend305, (Optr)&t_method_return);
    Method PMethod302 = new_Method_with(PArray303, empty_Array, empty_Array, PThreadedCode304, 1, PSend305);
    
    MethodClosure MC_SMB_ifNil_ifNotNil_ = new_MethodClosure((Method)PMethod302, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_ifNotNil_, MC_SMB_ifNil_ifNotNil_);
}


static void init_SMB_ifNotNil_() {
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray307 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode308 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod306 = new_Method_with(PArray307, empty_Array, empty_Array, PThreadedCode308, 1, self);
    
    MethodClosure MC_SMB_ifNotNil_ = new_MethodClosure((Method)PMethod306, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNil_, MC_SMB_ifNotNil_);
}


static void init_SMB_ifNotNilDo_() {
    Symbol SMB_ifNotNilDo_ = new_Symbol(L"ifNotNilDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray310 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode311 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod309 = new_Method_with(PArray310, empty_Array, empty_Array, PThreadedCode311, 1, self);
    
    MethodClosure MC_SMB_ifNotNilDo_ = new_MethodClosure((Method)PMethod309, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNilDo_, MC_SMB_ifNotNilDo_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_314 = new_String(L"Should not happen; but: nil");
    Array PThreadedCode313 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_314, (Optr)&t_method_return);
    Constant string_314_Const = new_Constant((Optr)string_314);
    Method PMethod312 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode313, 1, string_314_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod312, Nil_Class);
    store_method(Nil_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    String string_317 = new_String(L"nil");
    Array PThreadedCode316 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_317, (Optr)&t_method_return);
    Constant string_317_Const = new_Constant((Optr)string_317);
    Method PMethod315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode316, 1, string_317_Const);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod315, Nil_Class);
    store_method(Nil_Class, SMB_asString, MC_SMB_asString);
}

void init_Kernel_Object_UndefinedObject_layout() {
    slot_Kernel_Object_Nil_Class_class_nilInstance = (Optr)new_Slot(5, L"nilInstance");
    layout_Kernel_Object_Nil_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_Object_Nil_Class_class)->values[5] = slot_Kernel_Object_Nil_Class_class_nilInstance; // nilInstance 
    
    Symbol  SMB_Nil = new_Symbol(L"Nil");
    Nil_Class = (Class)new_Class(Object_Class, layout_Kernel_Object_Nil_Class_class);
    Class_set_superclass(Nil_Class, Object_Class);
    Nil_Class->layout = empty_object_layout;
    HEADER(Nil_Class)->layout = layout_Kernel_Object_Nil_Class_class;
    Nil_Class->name = SMB_Nil;
    
}

void init_Kernel_Object_UndefinedObject_methods() {
    init_SMB_ifNotNil_ifNil_();
    init_SMB_freeze();
    init_SMB_isNil();
    init_SMB_ifNil_ifNotNilDo_();
    init_SMB_ifNil_();
    init_SMB_isNotNil();
    init_SMB_accept_();
    init_SMB_ifNil_ifNotNil_();
    init_SMB_ifNotNil_();
    init_SMB_ifNotNilDo_();
    init_SMB_name();
    init_SMB_asString();
    
}