#include <lib/class/Chronology/Month.h>


Optr layout_Chronology_Month_Class_class;
Optr layout_Chronology_Month;


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21126 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend21128 = new_Send((Optr)self, SMB_monthName, 0);
    Character char_4725 = new_Character(L' ');
    Symbol SMB__append_ = new_Symbol(L",");
    Constant char_4725_Const = new_Constant((Optr)char_4725);
    // ,. 
    Send PSend21129 = new_Send((Optr)PSend21128, SMB__append_, 1, (Optr)char_4725_Const);
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend21130 = new_Send((Optr)self, SMB_year, 0);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend21131 = new_Send((Optr)PSend21130, SMB_printString, 0);
    // ,. 
    Send PSend21132 = new_Send((Optr)PSend21129, SMB__append_, 1, (Optr)PSend21131);
    // printOn:. 
    Send PSend21133 = new_Send((Optr)PSend21132, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21127 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21128, (Optr)&t_push1, (Optr)char_4725, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21130, (Optr)&t_send0, (Optr)PSend21131, (Optr)&t_send1, (Optr)PSend21132, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21133, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21125 = new_Method_with(PArray21126, empty_Array, empty_Array, PThreadedCode21127, 2, PSend21133, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21125, Chronology_Month_Class);
    store_method(Chronology_Month_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_nameOfMonth_() {
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    Variable VAR_anIndex_0_0 = new_Variable_named(L"anIndex", 0);
    Array PArray21135 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    // monthNames. 
    Send PSend21137 = new_Send((Optr)PChronologyConstants_classReference, SMB_monthNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21138 = new_Send((Optr)PSend21137, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21136 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21137, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21138, (Optr)&t_method_return);
    Method PMethod21134 = new_Method_with(PArray21135, empty_Array, empty_Array, PThreadedCode21136, 1, PSend21138);
    
    MethodClosure MC_SMB_nameOfMonth_ = new_MethodClosure((Method)PMethod21134, HEADER(Chronology_Month_Class));
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