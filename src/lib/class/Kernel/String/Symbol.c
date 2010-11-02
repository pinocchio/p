#include <lib/class/Kernel/String/Symbol.h>


Optr layout_Kernel_String_Symbol_Class_class;


static void init_SMB_species() {
    Symbol SMB_species = new_Symbol(L"species");
    Array PThreadedCode2635 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_method_return);
    Method PMethod2634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2635, 1, String_classReference);
    
    MethodClosure MC_SMB_species = new_MethodClosure((Method)PMethod2634, Symbol_Class);
    store_method(Symbol_Class, SMB_species, MC_SMB_species);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Array PThreadedCode2637 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2637, 1, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod2636, Symbol_Class);
    store_method(Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2640 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_String_minus_Symbol);
    Array PArray2639 = new_Array_with(1, (Optr)PAnnotation2640);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2642 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2643 = new_Send((Optr)PSend2642, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2641 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2642, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2643, (Optr)&t_method_return);
    NativeMethod PNativeMethod2638 = new_NativeMethod_with(empty_Array, empty_Array, PArray2639, PThreadedCode2641, 1, PSend2643);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod2638, Symbol_Class);
    store_method(Symbol_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2645 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2647 = new_Send((Optr)self, SMB_asString, 0);
    // ,. 
    Send PSend2648 = new_Send((Optr)PSend2647, SMB__append_, 1, (Optr)VAR_other_0_0);
    Array PThreadedCode2646 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2647, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send1, (Optr)PSend2648, (Optr)&t_method_return);
    Method PMethod2644 = new_Method_with(PArray2645, empty_Array, empty_Array, PThreadedCode2646, 1, PSend2648);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PMethod2644, Symbol_Class);
    store_method(Symbol_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2650 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend2652 = new_Send((Optr)VAR_anObject_0_0, SMB_perform_, 1, (Optr)self);
    Array PThreadedCode2651 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2652, (Optr)&t_method_return);
    Method PMethod2649 = new_Method_with(PArray2650, empty_Array, empty_Array, PThreadedCode2651, 1, PSend2652);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod2649, Symbol_Class);
    store_method(Symbol_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2654 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2656 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2656_Const = new_Constant((Optr)char_2656);
    // <<. 
    Send PSend2657 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2656_Const);
    Super PSuper2658 = new_Super(SMB_printOn_, 1, (Optr)VAR_stream_0_0);
    Array PThreadedCode2655 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2656, (Optr)&t_send1, (Optr)PSend2657, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_super1, (Optr)PSuper2658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2653 = new_Method_with(PArray2654, empty_Array, empty_Array, PThreadedCode2655, 3, PSend2657, PSuper2658, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2653, Symbol_Class);
    store_method(Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2660 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend2662 = new_Send((Optr)VAR_stream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode2661 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2662, (Optr)&t_method_return);
    Method PMethod2659 = new_Method_with(PArray2660, empty_Array, empty_Array, PThreadedCode2661, 1, PSend2662);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod2659, Symbol_Class);
    store_method(Symbol_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2665 = new_Send((Optr)self, SMB_asString, 0);
    // capitalized. 
    Send PSend2666 = new_Send((Optr)PSend2665, SMB_capitalized, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend2667 = new_Send((Optr)PSend2666, SMB_asSymbol, 0);
    Array PThreadedCode2664 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2665, (Optr)&t_send0, (Optr)PSend2666, (Optr)&t_send0, (Optr)PSend2667, (Optr)&t_method_return);
    Method PMethod2663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2664, 1, PSend2667);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod2663, Symbol_Class);
    store_method(Symbol_Class, SMB_capitalized, MC_SMB_capitalized);
}

void init_Kernel_String_Symbol_layout() {
    layout_Kernel_String_Symbol_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_String_Symbol_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_String_Symbol_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_String_Symbol_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_String_Symbol_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_String_Symbol_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Symbol = new_Symbol(L"Symbol");
    Class_set_superclass(Symbol_Class, String_Class);
    HEADER(Symbol_Class)->layout = layout_Kernel_String_Symbol_Class_class;
    Symbol_Class->name = SMB_Symbol;
    
}

void init_Kernel_String_Symbol_methods() {
    init_SMB_species();
    init_SMB_asSymbol();
    init_SMB_asString();
    init_SMB__append_();
    init_SMB_value_();
    init_SMB_printOn_();
    init_SMB_putOn_();
    init_SMB_capitalized();
    
}