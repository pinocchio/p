#include <lib/class/Kernel/String/Symbol.h>


Optr layout_Kernel_String_Symbol_Class_class;


static void init_SMB_species() {
    Symbol SMB_species = new_Symbol(L"species");
    Array PThreadedCode2644 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_method_return);
    Method PMethod2643 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2644, 1, String_classReference);
    
    MethodClosure MC_SMB_species = new_MethodClosure((Method)PMethod2643, Symbol_Class);
    store_method(Symbol_Class, SMB_species, MC_SMB_species);
}


static void init_SMB_asSymbol() {
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    Array PThreadedCode2646 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod2645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2646, 1, self);
    
    MethodClosure MC_SMB_asSymbol = new_MethodClosure((Method)PMethod2645, Symbol_Class);
    store_method(Symbol_Class, SMB_asSymbol, MC_SMB_asSymbol);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_String_minus_Symbol = new_Symbol(L"String.Symbol");
    Annotation PAnnotation2649 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_String_minus_Symbol);
    Array PArray2648 = new_Array_with(1, (Optr)PAnnotation2649);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend2651 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend2652 = new_Send((Optr)PSend2651, SMB_newFrom_, 1, (Optr)self);
    Array PThreadedCode2650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2651, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2652, (Optr)&t_method_return);
    NativeMethod PNativeMethod2647 = new_NativeMethod_with(empty_Array, empty_Array, PArray2648, PThreadedCode2650, 1, PSend2652);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod2647, Symbol_Class);
    store_method(Symbol_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB__append_() {
    Symbol SMB__append_ = new_Symbol(L",");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray2654 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2656 = new_Send((Optr)self, SMB_asString, 0);
    // ,. 
    Send PSend2657 = new_Send((Optr)PSend2656, SMB__append_, 1, (Optr)VAR_other_0_0);
    Array PThreadedCode2655 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2656, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send1, (Optr)PSend2657, (Optr)&t_method_return);
    Method PMethod2653 = new_Method_with(PArray2654, empty_Array, empty_Array, PThreadedCode2655, 1, PSend2657);
    
    MethodClosure MC_SMB__append_ = new_MethodClosure((Method)PMethod2653, Symbol_Class);
    store_method(Symbol_Class, SMB__append_, MC_SMB__append_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray2659 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend2661 = new_Send((Optr)VAR_anObject_0_0, SMB_perform_, 1, (Optr)self);
    Array PThreadedCode2660 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2661, (Optr)&t_method_return);
    Method PMethod2658 = new_Method_with(PArray2659, empty_Array, empty_Array, PThreadedCode2660, 1, PSend2661);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod2658, Symbol_Class);
    store_method(Symbol_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2663 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_2665 = new_Character(L'#');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2665_Const = new_Constant((Optr)char_2665);
    // <<. 
    Send PSend2666 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_2665_Const);
    Super PSuper2667 = new_Super(SMB_printOn_, 1, (Optr)VAR_stream_0_0);
    Array PThreadedCode2664 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_2665, (Optr)&t_send1, (Optr)PSend2666, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_super1, (Optr)PSuper2667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod2662 = new_Method_with(PArray2663, empty_Array, empty_Array, PThreadedCode2664, 3, PSend2666, PSuper2667, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod2662, Symbol_Class);
    store_method(Symbol_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray2669 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend2671 = new_Send((Optr)VAR_stream_0_0, SMB_writeAll_, 1, (Optr)self);
    Array PThreadedCode2670 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2671, (Optr)&t_method_return);
    Method PMethod2668 = new_Method_with(PArray2669, empty_Array, empty_Array, PThreadedCode2670, 1, PSend2671);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod2668, Symbol_Class);
    store_method(Symbol_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB_capitalized() {
    Symbol SMB_capitalized = new_Symbol(L"capitalized");
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend2674 = new_Send((Optr)self, SMB_asString, 0);
    // capitalized. 
    Send PSend2675 = new_Send((Optr)PSend2674, SMB_capitalized, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend2676 = new_Send((Optr)PSend2675, SMB_asSymbol, 0);
    Array PThreadedCode2673 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2674, (Optr)&t_send0, (Optr)PSend2675, (Optr)&t_send0, (Optr)PSend2676, (Optr)&t_method_return);
    Method PMethod2672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2673, 1, PSend2676);
    
    MethodClosure MC_SMB_capitalized = new_MethodClosure((Method)PMethod2672, Symbol_Class);
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