#include <lib/class/Chronology/Month.h>


Optr layout_Chronology_Month_Class_class;
Optr layout_Chronology_Month;


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray21488 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend21490 = new_Send((Optr)self, SMB_monthName, 0);
=======
    Array PArray21454 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend21456 = new_Send((Optr)self, SMB_monthName, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Character char_4726 = new_Character(L' ');
    Symbol SMB__append_ = new_Symbol(L",");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // ,. 
<<<<<<< HEAD
    Send PSend21491 = new_Send((Optr)PSend21490, SMB__append_, 1, (Optr)char_4726_Const);
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend21492 = new_Send((Optr)self, SMB_year, 0);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend21493 = new_Send((Optr)PSend21492, SMB_printString, 0);
    // ,. 
    Send PSend21494 = new_Send((Optr)PSend21491, SMB__append_, 1, (Optr)PSend21493);
    // printOn:. 
    Send PSend21495 = new_Send((Optr)PSend21494, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21489 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21490, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend21491, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21492, (Optr)&t_send0, (Optr)PSend21493, (Optr)&t_send1, (Optr)PSend21494, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21495, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21487 = new_Method_with(PArray21488, empty_Array, empty_Array, PThreadedCode21489, 2, PSend21495, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21487, Chronology_Month_Class);
=======
    Send PSend21457 = new_Send((Optr)PSend21456, SMB__append_, 1, (Optr)char_4726_Const);
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend21458 = new_Send((Optr)self, SMB_year, 0);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend21459 = new_Send((Optr)PSend21458, SMB_printString, 0);
    // ,. 
    Send PSend21460 = new_Send((Optr)PSend21457, SMB__append_, 1, (Optr)PSend21459);
    // printOn:. 
    Send PSend21461 = new_Send((Optr)PSend21460, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21455 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21456, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend21457, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21458, (Optr)&t_send0, (Optr)PSend21459, (Optr)&t_send1, (Optr)PSend21460, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21461, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21453 = new_Method_with(PArray21454, empty_Array, empty_Array, PThreadedCode21455, 2, PSend21461, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21453, Chronology_Month_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Chronology_Month_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_nameOfMonth_() {
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    Variable VAR_anIndex_0_0 = new_Variable_named(L"anIndex", 0);
<<<<<<< HEAD
    Array PArray21497 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    // monthNames. 
    Send PSend21499 = new_Send((Optr)PChronologyConstants_classReference, SMB_monthNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21500 = new_Send((Optr)PSend21499, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21498 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21499, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21500, (Optr)&t_method_return);
    Method PMethod21496 = new_Method_with(PArray21497, empty_Array, empty_Array, PThreadedCode21498, 1, PSend21500);
    
    MethodClosure MC_SMB_nameOfMonth_ = new_MethodClosure((Method)PMethod21496, HEADER(Chronology_Month_Class));
=======
    Array PArray21463 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    // monthNames. 
    Send PSend21465 = new_Send((Optr)PChronologyConstants_classReference, SMB_monthNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21466 = new_Send((Optr)PSend21465, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21464 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21465, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21466, (Optr)&t_method_return);
    Method PMethod21462 = new_Method_with(PArray21463, empty_Array, empty_Array, PThreadedCode21464, 1, PSend21466);
    
    MethodClosure MC_SMB_nameOfMonth_ = new_MethodClosure((Method)PMethod21462, HEADER(Chronology_Month_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Chronology_Month_Class), SMB_nameOfMonth_, MC_SMB_nameOfMonth_);
}

void init_Chronology_Month_layout() {
    layout_Chronology_Month_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Month_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Month_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Month_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Month_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Month_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Month = new_Symbol(L"Month");
    layout_Chronology_Month = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Chronology_Month)->values[0] = slot_Chronology_Timespan_start; // start 
    ((Array)layout_Chronology_Month)->values[1] = slot_Chronology_Timespan_duration; // duration 
    Chronology_Month_Class = (Class)new_Class(Chronology_Timespan_Class, layout_Chronology_Month_Class_class);
    Class_set_superclass(Chronology_Month_Class, Chronology_Timespan_Class);
    Chronology_Month_Class->layout = layout_Chronology_Month;
    HEADER(Chronology_Month_Class)->layout = layout_Chronology_Month_Class_class;
    Chronology_Month_Class->name = SMB_Month;
    
}

void init_Chronology_Month_methods() {
    init_SMB_printOn_();
    init_class_SMB_nameOfMonth_();
    
}