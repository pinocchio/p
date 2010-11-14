#include <lib/class/Runtime/InlineCache.h>


Optr layout_Runtime_InlineCache_Class_class;


static void init_SMB_checkCached_() {
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray8630 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8632 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_checkCached_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8631 = new_Array_with(1, (Optr)PAnnotation8632);
    Array PThreadedCode8633 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    NativeMethod PNativeMethod8629 = new_NativeMethod_with(PArray8630, empty_Array, PArray8631, PThreadedCode8633, 1, nil_Const);
    
    MethodClosure MC_SMB_checkCached_ = new_MethodClosure((Method)PNativeMethod8629, InlineCache_Class);
    store_method(InlineCache_Class, SMB_checkCached_, MC_SMB_checkCached_);
}


static void init_SMB_cache_at_() {
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
    Array PArray8635 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_aClass_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8637 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_cache_at_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8636 = new_Array_with(1, (Optr)PAnnotation8637);
    Array PThreadedCode8638 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8634 = new_NativeMethod_with(PArray8635, empty_Array, PArray8636, PThreadedCode8638, 1, self);
    
    MethodClosure MC_SMB_cache_at_ = new_MethodClosure((Method)PNativeMethod8634, InlineCache_Class);
    store_method(InlineCache_Class, SMB_cache_at_, MC_SMB_cache_at_);
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
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // new:. 
    Send PSend8641 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_3_Const);
    Array PThreadedCode8640 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend8641, (Optr)&t_method_return);
    Method PMethod8639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8640, 1, PSend8641);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod8639, HEADER(InlineCache_Class));
    store_method(HEADER(InlineCache_Class), SMB_new, MC_SMB_new);
}

void init_Runtime_PInlineCache_layout() {
    layout_Runtime_InlineCache_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_InlineCache_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_InlineCache_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_InlineCache_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_InlineCache_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_InlineCache_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_InlineCache = new_Symbol(L"InlineCache");
    InlineCache_Class = (Class)new_Class(Object_Class, layout_Runtime_InlineCache_Class_class);
    InlineCache_Class->layout = empty_array_layout;
    InlineCache_Class->name = SMB_InlineCache;
    
}

void init_Runtime_PInlineCache_methods() {
    init_SMB_checkCached_();
    init_SMB_cache_at_();
    init_class_SMB_new();
    
}