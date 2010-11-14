#include <lib/class/Chronology/Month.h>


Optr layout_Chronology_Month_Class_class;
Optr layout_Chronology_Month;


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21456 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_monthName = new_Symbol(L"monthName");
    // monthName. 
    Send PSend21458 = new_Send((Optr)self, SMB_monthName, 0);
    Character char_4726 = new_Character(L' ');
    Symbol SMB__append_ = new_Symbol(L",");
    Constant char_4726_Const = new_Constant((Optr)char_4726);
    // ,. 
    Send PSend21459 = new_Send((Optr)PSend21458, SMB__append_, 1, (Optr)char_4726_Const);
    Symbol SMB_year = new_Symbol(L"year");
    // year. 
    Send PSend21460 = new_Send((Optr)self, SMB_year, 0);
    Symbol SMB_printString = new_Symbol(L"printString");
    // printString. 
    Send PSend21461 = new_Send((Optr)PSend21460, SMB_printString, 0);
    // ,. 
    Send PSend21462 = new_Send((Optr)PSend21459, SMB__append_, 1, (Optr)PSend21461);
    // printOn:. 
    Send PSend21463 = new_Send((Optr)PSend21462, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21457 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21458, (Optr)&t_push1, (Optr)char_4726, (Optr)&t_send1, (Optr)PSend21459, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21460, (Optr)&t_send0, (Optr)PSend21461, (Optr)&t_send1, (Optr)PSend21462, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21463, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21455 = new_Method_with(PArray21456, empty_Array, empty_Array, PThreadedCode21457, 2, PSend21463, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21455, Chronology_Month_Class);
    store_method(Chronology_Month_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_nameOfMonth_() {
    Symbol SMB_nameOfMonth_ = new_Symbol(L"nameOfMonth:");
    Variable VAR_anIndex_0_0 = new_Variable_named(L"anIndex", 0);
    Array PArray21465 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    // monthNames. 
    Send PSend21467 = new_Send((Optr)PChronologyConstants_classReference, SMB_monthNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21468 = new_Send((Optr)PSend21467, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21466 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21467, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21468, (Optr)&t_method_return);
    Method PMethod21464 = new_Method_with(PArray21465, empty_Array, empty_Array, PThreadedCode21466, 1, PSend21468);
    
    MethodClosure MC_SMB_nameOfMonth_ = new_MethodClosure((Method)PMethod21464, HEADER(Chronology_Month_Class));
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