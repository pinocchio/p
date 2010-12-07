#include <lib/class/Kernel/Layout/WordsLayout.h>


Optr layout_Kernel_Layout_WordsLayout_Class_class;


static void init_SMB_basicInstantiate_() {
    Symbol SMB_basicInstantiate_ = new_Symbol(L"basicInstantiate:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Array PArray5181 = new_Array_with(1, (Optr)VAR_class_0_0);
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // basicInstantiate:sized:. 
    Send PSend5183 = new_Send((Optr)self, SMB_basicInstantiate_sized_, 2, (Optr)VAR_class_0_0, (Optr)int_0_Const);
    Array PThreadedCode5182 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend5183, (Optr)&t_method_return);
    Method PMethod5180 = new_Method_with(PArray5181, empty_Array, empty_Array, PThreadedCode5182, 1, PSend5183);
    
    MethodClosure MC_SMB_basicInstantiate_ = new_MethodClosure((Method)PMethod5180, WordsLayout_Class);
    store_method(WordsLayout_Class, SMB_basicInstantiate_, MC_SMB_basicInstantiate_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5185 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode5186 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod5184 = new_Method_with(PArray5185, empty_Array, empty_Array, PThreadedCode5186, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod5184, WordsLayout_Class);
    store_method(WordsLayout_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_basicInstantiate_sized_() {
    Symbol SMB_basicInstantiate_sized_ = new_Symbol(L"basicInstantiate:sized:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_sizeRequested_0_1 = new_Variable_named(L"sizeRequested", 0);
    Array PArray5188 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_sizeRequested_0_1);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Class_minus_Layout_minus_Words = new_Symbol(L"Class.Layout.Words");
    Annotation PAnnotation5190 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_basicInstantiate_sized_, (Optr)SMB_Class_minus_Layout_minus_Words);
    Array PArray5189 = new_Array_with(1, (Optr)PAnnotation5190);
    Symbol SMB_primitiveFailed = new_Symbol(L"primitiveFailed");
    // primitiveFailed. 
    Send PSend5192 = new_Send((Optr)self, SMB_primitiveFailed, 0);
    Array PThreadedCode5191 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5192, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod5187 = new_NativeMethod_with(PArray5188, empty_Array, PArray5189, PThreadedCode5191, 2, PSend5192, self);
    
    MethodClosure MC_SMB_basicInstantiate_sized_ = new_MethodClosure((Method)PNativeMethod5187, WordsLayout_Class);
    store_method(WordsLayout_Class, SMB_basicInstantiate_sized_, MC_SMB_basicInstantiate_sized_);
}

void init_Kernel_Layout_PWordsLayout_layout() {
    layout_Kernel_Layout_WordsLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_WordsLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_WordsLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_WordsLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_WordsLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_WordsLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WordsLayout = new_Symbol(L"WordsLayout");
    Class_set_superclass(WordsLayout_Class, Kernel_Layout_Layout_Class);
    WordsLayout_Class->layout = empty_object_layout;
    HEADER(WordsLayout_Class)->layout = layout_Kernel_Layout_WordsLayout_Class_class;
    WordsLayout_Class->name = SMB_WordsLayout;
    
}

void init_Kernel_Layout_PWordsLayout_methods() {
    init_SMB_basicInstantiate_();
    init_SMB_do_();
    init_SMB_basicInstantiate_sized_();
    
}