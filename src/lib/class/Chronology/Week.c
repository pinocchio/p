#include <lib/class/Chronology/Week.h>


Optr layout_Chronology_Week_Class_class;
Optr layout_Chronology_Week;


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21259 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_21261 = new_String(L"a Week starting: ");
    Constant string_21261_Const = new_Constant((Optr)string_21261);
    // printOn:. 
    Send PSend21262 = new_Send((Optr)string_21261_Const, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend21263 = new_Send((Optr)self, SMB_start, 0);
    // printOn:. 
    Send PSend21264 = new_Send((Optr)PSend21263, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21260 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)string_21261, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21262, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21263, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21264, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21258 = new_Method_with(PArray21259, empty_Array, empty_Array, PThreadedCode21260, 3, PSend21262, PSend21264, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21258, Chronology_Week_Class);
    store_method(Chronology_Week_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_class_SMB_nameOfDay_() {
    Symbol SMB_nameOfDay_ = new_Symbol(L"nameOfDay:");
    Variable VAR_anIndex_0_0 = new_Variable_named(L"anIndex", 0);
    Array PArray21266 = new_Array_with(1, (Optr)VAR_anIndex_0_0);
    Symbol SMB_dayNames = new_Symbol(L"dayNames");
    // dayNames. 
    Send PSend21268 = new_Send((Optr)PChronologyConstants_classReference, SMB_dayNames, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21269 = new_Send((Optr)PSend21268, SMB_at_, 1, (Optr)VAR_anIndex_0_0);
    Array PThreadedCode21267 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend21268, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_0, (Optr)&t_send1, (Optr)PSend21269, (Optr)&t_method_return);
    Method PMethod21265 = new_Method_with(PArray21266, empty_Array, empty_Array, PThreadedCode21267, 1, PSend21269);
    
    MethodClosure MC_SMB_nameOfDay_ = new_MethodClosure((Method)PMethod21265, HEADER(Chronology_Week_Class));
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