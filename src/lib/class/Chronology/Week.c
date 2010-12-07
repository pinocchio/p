#include <lib/class/Chronology/Week.h>


Optr layout_Chronology_Week_Class_class;
Optr layout_Chronology_Week;


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21621 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_21623 = new_String(L"a Week starting: ");
    Constant string_21623_Const = new_Constant((Optr)string_21623);
    // printOn:. 
    Send PSend21624 = new_Send((Optr)string_21623_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend21625 = new_Send((Optr)self, SMB_start, 0);
    // printOn:. 
    Send PSend21626 = new_Send((Optr)PSend21625, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21622 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)string_21623, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21624, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21625, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21620 = new_Method_with(PArray21621, empty_Array, empty_Array, PThreadedCode21622, 3, PSend21624, PSend21626, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21620, Chronology_Week_Class);
    store_method(Chronology_Week_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_nameOfDay_() {
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    Variable VAR_anIndex_0_0 = new_Variable_named(L"anIndex", 0);
    Array PArray21628 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_dayNames = new_Symbol(L"dayNames");
    // dayNames. 
    Send PSend21630 = new_Send((Optr)PChronologyConstants_classReference, SMB_dayNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21631 = new_Send((Optr)PSend21630, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21629 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21630, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21631, (Optr)&t_method_return);
    Method PMethod21627 = new_Method_with(PArray21628, empty_Array, empty_Array, PThreadedCode21629, 1, PSend21631);
    
    MethodClosure MC_SMB_nameOfDay_ = new_MethodClosure((Method)PMethod21627, HEADER(Chronology_Week_Class));
    store_method(HEADER(Chronology_Week_Class), SMB_nameOfDay_, MC_SMB_nameOfDay_);
}

void init_Chronology_PWeek_layout() {
    layout_Chronology_Week_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Week_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Week_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Week_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Week_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Week_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Week = new_Symbol(L"Week");
    layout_Chronology_Week = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Chronology_Week)->values[0] = slot_Chronology_Timespan_start; // start 
    ((Array)layout_Chronology_Week)->values[1] = slot_Chronology_Timespan_duration; // duration 
    Chronology_Week_Class = (Class)new_Class(Chronology_Timespan_Class, layout_Chronology_Week_Class_class);
    Chronology_Week_Class->layout = layout_Chronology_Week;
    Chronology_Week_Class->name = SMB_Week;
    
}

void init_Chronology_PWeek_methods() {
    init_SMB_printOn_();
    init_class_SMB_nameOfDay_();
    
}