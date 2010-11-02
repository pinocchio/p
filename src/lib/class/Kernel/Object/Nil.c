#include <lib/class/Kernel/Object/Nil.h>


Optr slot_Kernel_Object_Nil_Class_class_nilInstance;
Optr layout_Kernel_Object_Nil_Class_class;


static void init_SMB_ifNotNil_ifNil_() {
    Symbol SMB_ifNotNil_ifNil_ = new_Symbol(L"ifNotNil:ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray272 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend274 = new_Send((Optr)VAR_otherBlock_0_1, SMB_value, 0);
    Array PThreadedCode273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_otherBlock_0_1, (Optr)&t_send0, (Optr)PSend274, (Optr)&t_method_return);
    Method PMethod271 = new_Method_with(PArray272, empty_Array, empty_Array, PThreadedCode273, 1, PSend274);
    
    MethodClosure MC_SMB_ifNotNil_ifNil_ = new_MethodClosure((Method)PMethod271, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNil_ifNil_, MC_SMB_ifNotNil_ifNil_);
}


static void init_SMB_freeze() {
    Symbol SMB_freeze = new_Symbol(L"freeze");
    Array PThreadedCode276 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode276, 1, self);
    
    MethodClosure MC_SMB_freeze = new_MethodClosure((Method)PMethod275, Nil_Class);
    store_method(Nil_Class, SMB_freeze, MC_SMB_freeze);
}


static void init_SMB_isNil() {
    Symbol SMB_isNil = new_Symbol(L"isNil");
    Array PThreadedCode278 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode278, 1, true_Const);
    
    MethodClosure MC_SMB_isNil = new_MethodClosure((Method)PMethod277, Nil_Class);
    store_method(Nil_Class, SMB_isNil, MC_SMB_isNil);
}


static void init_SMB_ifNil_ifNotNilDo_() {
    Symbol SMB_ifNil_ifNotNilDo_ = new_Symbol(L"ifNil:ifNotNilDo:");
    Variable VAR_nilBlock_0_0 = new_Variable_named(L"nilBlock", 0);
    Variable VAR_ifNotNilBlock_0_1 = new_Variable_named(L"ifNotNilBlock", 0);
    Array PArray280 = new_Array_with(2, (Optr)VAR_nilBlock_0_0, (Optr)VAR_ifNotNilBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend282 = new_Send((Optr)VAR_nilBlock_0_0, SMB_value, 0);
    Array PThreadedCode281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_nilBlock_0_0, (Optr)&t_send0, (Optr)PSend282, (Optr)&t_method_return);
    Method PMethod279 = new_Method_with(PArray280, empty_Array, empty_Array, PThreadedCode281, 1, PSend282);
    
    MethodClosure MC_SMB_ifNil_ifNotNilDo_ = new_MethodClosure((Method)PMethod279, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_ifNotNilDo_, MC_SMB_ifNil_ifNotNilDo_);
}


static void init_SMB_ifNil_() {
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray284 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend286 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend286, (Optr)&t_method_return);
    Method PMethod283 = new_Method_with(PArray284, empty_Array, empty_Array, PThreadedCode285, 1, PSend286);
    
    MethodClosure MC_SMB_ifNil_ = new_MethodClosure((Method)PMethod283, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_, MC_SMB_ifNil_);
}


static void init_SMB_isNotNil() {
    Symbol SMB_isNotNil = new_Symbol(L"isNotNil");
    Array PThreadedCode288 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode288, 1, false_Const);
    
    MethodClosure MC_SMB_isNotNil = new_MethodClosure((Method)PMethod287, Nil_Class);
    store_method(Nil_Class, SMB_isNotNil, MC_SMB_isNotNil);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_aVisitor_0_0 = new_Variable_named(L"aVisitor", 0);
    Array PArray290 = new_Array_with(1, (Optr)VAR_aVisitor_0_0);
    Symbol SMB_visitNil_ = new_Symbol(L"visitNil:");
    // visitNil:. 
    Send PSend292 = new_Send((Optr)VAR_aVisitor_0_0, SMB_visitNil_, 1, (Optr)self);
    Array PThreadedCode291 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVisitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend292, (Optr)&t_method_return);
    Method PMethod289 = new_Method_with(PArray290, empty_Array, empty_Array, PThreadedCode291, 1, PSend292);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod289, Nil_Class);
    store_method(Nil_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_ifNil_ifNotNil_() {
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_otherBlock_0_1 = new_Variable_named(L"otherBlock", 0);
    Array PArray294 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_otherBlock_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend296 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Array PThreadedCode295 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend296, (Optr)&t_method_return);
    Method PMethod293 = new_Method_with(PArray294, empty_Array, empty_Array, PThreadedCode295, 1, PSend296);
    
    MethodClosure MC_SMB_ifNil_ifNotNil_ = new_MethodClosure((Method)PMethod293, Nil_Class);
    store_method(Nil_Class, SMB_ifNil_ifNotNil_, MC_SMB_ifNil_ifNotNil_);
}


static void init_SMB_ifNotNil_() {
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray298 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode299 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod297 = new_Method_with(PArray298, empty_Array, empty_Array, PThreadedCode299, 1, self);
    
    MethodClosure MC_SMB_ifNotNil_ = new_MethodClosure((Method)PMethod297, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNil_, MC_SMB_ifNotNil_);
}


static void init_SMB_ifNotNilDo_() {
    Symbol SMB_ifNotNilDo_ = new_Symbol(L"ifNotNilDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray301 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode302 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod300 = new_Method_with(PArray301, empty_Array, empty_Array, PThreadedCode302, 1, self);
    
    MethodClosure MC_SMB_ifNotNilDo_ = new_MethodClosure((Method)PMethod300, Nil_Class);
    store_method(Nil_Class, SMB_ifNotNilDo_, MC_SMB_ifNotNilDo_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    String string_305 = new_String(L"Should not happen; but: nil");
    Array PThreadedCode304 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_305, (Optr)&t_method_return);
    Constant string_305_Const = new_Constant((Optr)string_305);
    Method PMethod303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode304, 1, string_305_Const);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod303, Nil_Class);
    store_method(Nil_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    String string_308 = new_String(L"nil");
    Array PThreadedCode307 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_308, (Optr)&t_method_return);
    Constant string_308_Const = new_Constant((Optr)string_308);
    Method PMethod306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode307, 1, string_308_Const);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PMethod306, Nil_Class);
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