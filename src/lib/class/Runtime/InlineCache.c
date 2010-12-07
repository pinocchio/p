#include <lib/class/Runtime/InlineCache.h>


Optr layout_Runtime_InlineCache_Class_class;


static void init_SMB_checkCached_() {
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
<<<<<<< HEAD
    Array PArray8662 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8664 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_checkCached_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8663 = new_Array_with(1, (Optr)PAnnotation8664);
    Array PThreadedCode8665 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    NativeMethod PNativeMethod8661 = new_NativeMethod_with(PArray8662, empty_Array, PArray8663, PThreadedCode8665, 1, nil_Const);
    
    MethodClosure MC_SMB_checkCached_ = new_MethodClosure((Method)PNativeMethod8661, InlineCache_Class);
=======
    Array PArray8628 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8630 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_checkCached_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8629 = new_Array_with(1, (Optr)PAnnotation8630);
    Array PThreadedCode8631 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    NativeMethod PNativeMethod8627 = new_NativeMethod_with(PArray8628, empty_Array, PArray8629, PThreadedCode8631, 1, nil_Const);
    
    MethodClosure MC_SMB_checkCached_ = new_MethodClosure((Method)PNativeMethod8627, InlineCache_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(InlineCache_Class, SMB_checkCached_, MC_SMB_checkCached_);
}


static void init_SMB_cache_at_() {
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Variable VAR_aClass_0_1 = new_Variable_named(L"aClass", 0);
<<<<<<< HEAD
    Array PArray8667 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_aClass_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8669 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_cache_at_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8668 = new_Array_with(1, (Optr)PAnnotation8669);
    Array PThreadedCode8670 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8666 = new_NativeMethod_with(PArray8667, empty_Array, PArray8668, PThreadedCode8670, 1, self);
    
    MethodClosure MC_SMB_cache_at_ = new_MethodClosure((Method)PNativeMethod8666, InlineCache_Class);
=======
    Array PArray8633 = new_Array_with(2, (Optr)VAR_aMethod_0_0, (Optr)VAR_aClass_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Runtime_minus_InlineCache = new_Symbol(L"Runtime.InlineCache");
    Annotation PAnnotation8635 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_cache_at_, (Optr)SMB_Runtime_minus_InlineCache);
    Array PArray8634 = new_Array_with(1, (Optr)PAnnotation8635);
    Array PThreadedCode8636 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8632 = new_NativeMethod_with(PArray8633, empty_Array, PArray8634, PThreadedCode8636, 1, self);
    
    MethodClosure MC_SMB_cache_at_ = new_MethodClosure((Method)PNativeMethod8632, InlineCache_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
<<<<<<< HEAD
    Send PSend8673 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_3_Const);
    Array PThreadedCode8672 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend8673, (Optr)&t_method_return);
    Method PMethod8671 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8672, 1, PSend8673);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod8671, HEADER(InlineCache_Class));
=======
    Send PSend8639 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_3_Const);
    Array PThreadedCode8638 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend8639, (Optr)&t_method_return);
    Method PMethod8637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8638, 1, PSend8639);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod8637, HEADER(InlineCache_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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