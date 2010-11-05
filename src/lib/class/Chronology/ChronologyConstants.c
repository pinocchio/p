#include <lib/class/Chronology/ChronologyConstants.h>


Optr slot_Chronology_ChronologyConstants_Class_class_squeakEpoch;
Optr slot_Chronology_ChronologyConstants_Class_class_secondsInDay;
Optr slot_Chronology_ChronologyConstants_Class_class_secondsInHour;
Optr slot_Chronology_ChronologyConstants_Class_class_secondsInMinute;
Optr slot_Chronology_ChronologyConstants_Class_class_nanosInSecond;
Optr slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond;
Optr slot_Chronology_ChronologyConstants_Class_class_dayNames;
Optr slot_Chronology_ChronologyConstants_Class_class_monthNames;
Optr slot_Chronology_ChronologyConstants_Class_class_daysInMonth;
Optr layout_Chronology_ChronologyConstants_Class_class;


static void init_class_SMB_secondsInHour() {
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21061 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    Array PThreadedCode21060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21061, (Optr)&t_method_return);
    Method PMethod21059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21060, 1, PSend21061);
    
    MethodClosure MC_SMB_secondsInHour = new_MethodClosure((Method)PMethod21059, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInHour, MC_SMB_secondsInHour);
}


static void init_class_SMB_secondsInDay() {
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21064 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    SmallInt int_24 = new_SmallInt(24);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // *. 
    Send PSend21065 = new_Send((Optr)PSend21064, SMB__times_, 1, (Optr)int_24_Const);
    Array PThreadedCode21063 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21064, (Optr)&t_push1, (Optr)int_24, (Optr)&t_send1, (Optr)PSend21065, (Optr)&t_method_return);
    Method PMethod21062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21063, 1, PSend21065);
    
    MethodClosure MC_SMB_secondsInDay = new_MethodClosure((Method)PMethod21062, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInDay, MC_SMB_secondsInDay);
}


static void init_class_SMB_squeakEpoch() {
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Array PThreadedCode21067 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_method_return);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Method PMethod21066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21067, 1, int_2415386_Const);
    
    MethodClosure MC_SMB_squeakEpoch = new_MethodClosure((Method)PMethod21066, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_squeakEpoch, MC_SMB_squeakEpoch);
}


static void init_class_SMB_dayNames() {
    Symbol SMB_dayNames = new_Symbol(L"dayNames");
    Array PThreadedCode21069 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_method_return);
    Method PMethod21068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21069, 1, slot_Chronology_ChronologyConstants_Class_class_dayNames);
    
    MethodClosure MC_SMB_dayNames = new_MethodClosure((Method)PMethod21068, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_dayNames, MC_SMB_dayNames);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Assign PAssign21072 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_squeakEpoch, (Optr)int_2415386_Const);
    SmallInt int_86400 = new_SmallInt(86400);
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    Assign PAssign21073 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInDay, (Optr)int_86400_Const);
    SmallInt int_3600 = new_SmallInt(3600);
    Constant int_3600_Const = new_Constant((Optr)int_3600);
    Assign PAssign21074 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInHour, (Optr)int_3600_Const);
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Assign PAssign21075 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInMinute, (Optr)int_60_Const);
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Assign PAssign21076 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInSecond, (Optr)int_1000000000_Const);
    SmallInt int_1000000 = new_SmallInt(1000000);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Assign PAssign21077 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond, (Optr)int_1000000_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_7 = new_SmallInt(7);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // new:. 
    Send PSend21079 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_7_Const);
    Assign PAssign21078 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)PSend21079);
    Symbol  SMB_Sunday = new_Symbol(L"Sunday");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant SMB_Sunday_Const = new_Constant((Optr)SMB_Sunday);
    // at:put:. 
    Send PSend21080 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_Sunday_Const);
    Symbol  SMB_Monday = new_Symbol(L"Monday");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant SMB_Monday_Const = new_Constant((Optr)SMB_Monday);
    // at:put:. 
    Send PSend21081 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_Monday_Const);
    SmallInt int_3 = new_SmallInt(3);
    Symbol  SMB_Tuesday = new_Symbol(L"Tuesday");
    Constant int_3_Const = new_Constant((Optr)int_3);
    Constant SMB_Tuesday_Const = new_Constant((Optr)SMB_Tuesday);
    // at:put:. 
    Send PSend21082 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_Tuesday_Const);
    SmallInt int_4 = new_SmallInt(4);
    Symbol  SMB_Wednesday = new_Symbol(L"Wednesday");
    Constant int_4_Const = new_Constant((Optr)int_4);
    Constant SMB_Wednesday_Const = new_Constant((Optr)SMB_Wednesday);
    // at:put:. 
    Send PSend21083 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_Wednesday_Const);
    SmallInt int_5 = new_SmallInt(5);
    Symbol  SMB_Thursday = new_Symbol(L"Thursday");
    Constant int_5_Const = new_Constant((Optr)int_5);
    Constant SMB_Thursday_Const = new_Constant((Optr)SMB_Thursday);
    // at:put:. 
    Send PSend21084 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_Thursday_Const);
    SmallInt int_6 = new_SmallInt(6);
    Symbol  SMB_Friday = new_Symbol(L"Friday");
    Constant int_6_Const = new_Constant((Optr)int_6);
    Constant SMB_Friday_Const = new_Constant((Optr)SMB_Friday);
    // at:put:. 
    Send PSend21085 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_Friday_Const);
    Symbol  SMB_Saturday = new_Symbol(L"Saturday");
    Constant SMB_Saturday_Const = new_Constant((Optr)SMB_Saturday);
    // at:put:. 
    Send PSend21086 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_Saturday_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // new:. 
    Send PSend21088 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21087 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)PSend21088);
    Symbol  SMB_January = new_Symbol(L"January");
    Constant SMB_January_Const = new_Constant((Optr)SMB_January);
    // at:put:. 
    Send PSend21089 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_January_Const);
    Symbol  SMB_February = new_Symbol(L"February");
    Constant SMB_February_Const = new_Constant((Optr)SMB_February);
    // at:put:. 
    Send PSend21090 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_February_Const);
    Symbol  SMB_March = new_Symbol(L"March");
    Constant SMB_March_Const = new_Constant((Optr)SMB_March);
    // at:put:. 
    Send PSend21091 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_March_Const);
    Symbol  SMB_April = new_Symbol(L"April");
    Constant SMB_April_Const = new_Constant((Optr)SMB_April);
    // at:put:. 
    Send PSend21092 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_April_Const);
    Symbol  SMB_May = new_Symbol(L"May");
    Constant SMB_May_Const = new_Constant((Optr)SMB_May);
    // at:put:. 
    Send PSend21093 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_May_Const);
    Symbol  SMB_June = new_Symbol(L"June");
    Constant SMB_June_Const = new_Constant((Optr)SMB_June);
    // at:put:. 
    Send PSend21094 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_June_Const);
    Symbol  SMB_July = new_Symbol(L"July");
    Constant SMB_July_Const = new_Constant((Optr)SMB_July);
    // at:put:. 
    Send PSend21095 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_July_Const);
    SmallInt int_8 = new_SmallInt(8);
    Symbol  SMB_August = new_Symbol(L"August");
    Constant int_8_Const = new_Constant((Optr)int_8);
    Constant SMB_August_Const = new_Constant((Optr)SMB_August);
    // at:put:. 
    Send PSend21096 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)SMB_August_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol  SMB_September = new_Symbol(L"September");
    Constant int_9_Const = new_Constant((Optr)int_9);
    Constant SMB_September_Const = new_Constant((Optr)SMB_September);
    // at:put:. 
    Send PSend21097 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)SMB_September_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol  SMB_October = new_Symbol(L"October");
    Constant int_10_Const = new_Constant((Optr)int_10);
    Constant SMB_October_Const = new_Constant((Optr)SMB_October);
    // at:put:. 
    Send PSend21098 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)SMB_October_Const);
    SmallInt int_11 = new_SmallInt(11);
    Symbol  SMB_November = new_Symbol(L"November");
    Constant int_11_Const = new_Constant((Optr)int_11);
    Constant SMB_November_Const = new_Constant((Optr)SMB_November);
    // at:put:. 
    Send PSend21099 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)SMB_November_Const);
    Symbol  SMB_December = new_Symbol(L"December");
    Constant SMB_December_Const = new_Constant((Optr)SMB_December);
    // at:put:. 
    Send PSend21100 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)SMB_December_Const);
    // new:. 
    Send PSend21102 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21101 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)PSend21102);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend21103 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)int_31_Const);
    SmallInt int_28 = new_SmallInt(28);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend21104 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)int_28_Const);
    // at:put:. 
    Send PSend21105 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)int_31_Const);
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    // at:put:. 
    Send PSend21106 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21107 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21108 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21109 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21110 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21111 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21112 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21113 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21114 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)int_31_Const);
    Array PThreadedCode21071 = instantiate_Array_with(ThreadedCode_Class, 0, 340, (Optr)&t_push1, (Optr)PAssign21072, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21073, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21074, (Optr)&t_push1, (Optr)int_3600, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21075, (Optr)&t_push1, (Optr)int_60, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21076, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21077, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21078, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_Sunday, (Optr)&t_send2, (Optr)PSend21080, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_Monday, (Optr)&t_send2, (Optr)PSend21081, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_Tuesday, (Optr)&t_send2, (Optr)PSend21082, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_Wednesday, (Optr)&t_send2, (Optr)PSend21083, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_Thursday, (Optr)&t_send2, (Optr)PSend21084, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_Friday, (Optr)&t_send2, (Optr)PSend21085, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_Saturday, (Optr)&t_send2, (Optr)PSend21086, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21087, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_January, (Optr)&t_send2, (Optr)PSend21089, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_February, (Optr)&t_send2, (Optr)PSend21090, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_March, (Optr)&t_send2, (Optr)PSend21091, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_April, (Optr)&t_send2, (Optr)PSend21092, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_May, (Optr)&t_send2, (Optr)PSend21093, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_June, (Optr)&t_send2, (Optr)PSend21094, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_July, (Optr)&t_send2, (Optr)PSend21095, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)SMB_August, (Optr)&t_send2, (Optr)PSend21096, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)SMB_September, (Optr)&t_send2, (Optr)PSend21097, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)SMB_October, (Optr)&t_send2, (Optr)PSend21098, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)SMB_November, (Optr)&t_send2, (Optr)PSend21099, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)SMB_December, (Optr)&t_send2, (Optr)PSend21100, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21101, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21102, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21103, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_2, (Optr)&t_push1, (Optr)int_28, (Optr)&t_send2, (Optr)PSend21104, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21105, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21106, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21107, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21108, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21109, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21110, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21111, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21112, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21113, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21114, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21071, 41, PAssign21072, PAssign21073, PAssign21074, PAssign21075, PAssign21076, PAssign21077, PAssign21078, PSend21080, PSend21081, PSend21082, PSend21083, PSend21084, PSend21085, PSend21086, PAssign21087, PSend21089, PSend21090, PSend21091, PSend21092, PSend21093, PSend21094, PSend21095, PSend21096, PSend21097, PSend21098, PSend21099, PSend21100, PAssign21101, PSend21103, PSend21104, PSend21105, PSend21106, PSend21107, PSend21108, PSend21109, PSend21110, PSend21111, PSend21112, PSend21113, PSend21114, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21070, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_daysInMonth() {
    Symbol SMB_daysInMonth = new_Symbol(L"daysInMonth");
    Array PThreadedCode21116 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_method_return);
    Method PMethod21115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21116, 1, slot_Chronology_ChronologyConstants_Class_class_daysInMonth);
    
    MethodClosure MC_SMB_daysInMonth = new_MethodClosure((Method)PMethod21115, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_daysInMonth, MC_SMB_daysInMonth);
}


static void init_class_SMB_nanosInSecond() {
    Symbol SMB_nanosInSecond = new_Symbol(L"nanosInSecond");
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Array PThreadedCode21118 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_method_return);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Method PMethod21117 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21118, 1, int_1000000000_Const);
    
    MethodClosure MC_SMB_nanosInSecond = new_MethodClosure((Method)PMethod21117, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_nanosInSecond, MC_SMB_nanosInSecond);
}


static void init_class_SMB_secondsInMinute() {
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    SmallInt int_60 = new_SmallInt(60);
    Array PThreadedCode21120 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_60, (Optr)&t_method_return);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Method PMethod21119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21120, 1, int_60_Const);
    
    MethodClosure MC_SMB_secondsInMinute = new_MethodClosure((Method)PMethod21119, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInMinute, MC_SMB_secondsInMinute);
}


static void init_class_SMB_monthNames() {
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    Array PThreadedCode21122 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_method_return);
    Method PMethod21121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21122, 1, slot_Chronology_ChronologyConstants_Class_class_monthNames);
    
    MethodClosure MC_SMB_monthNames = new_MethodClosure((Method)PMethod21121, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_monthNames, MC_SMB_monthNames);
}


static void init_class_SMB_nanosInMillisecond() {
    Symbol SMB_nanosInMillisecond = new_Symbol(L"nanosInMillisecond");
    SmallInt int_1000000 = new_SmallInt(1000000);
    Array PThreadedCode21124 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_method_return);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Method PMethod21123 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21124, 1, int_1000000_Const);
    
    MethodClosure MC_SMB_nanosInMillisecond = new_MethodClosure((Method)PMethod21123, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_nanosInMillisecond, MC_SMB_nanosInMillisecond);
}

void init_Chronology_PChronologyConstants_layout() {
    slot_Chronology_ChronologyConstants_Class_class_squeakEpoch = (Optr)new_Slot(5, L"squeakEpoch");
    slot_Chronology_ChronologyConstants_Class_class_secondsInDay = (Optr)new_Slot(6, L"secondsInDay");
    slot_Chronology_ChronologyConstants_Class_class_secondsInHour = (Optr)new_Slot(7, L"secondsInHour");
    slot_Chronology_ChronologyConstants_Class_class_secondsInMinute = (Optr)new_Slot(8, L"secondsInMinute");
    slot_Chronology_ChronologyConstants_Class_class_nanosInSecond = (Optr)new_Slot(9, L"nanosInSecond");
    slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond = (Optr)new_Slot(10, L"nanosInMillisecond");
    slot_Chronology_ChronologyConstants_Class_class_dayNames = (Optr)new_Slot(11, L"dayNames");
    slot_Chronology_ChronologyConstants_Class_class_monthNames = (Optr)new_Slot(12, L"monthNames");
    slot_Chronology_ChronologyConstants_Class_class_daysInMonth = (Optr)new_Slot(13, L"daysInMonth");
    layout_Chronology_ChronologyConstants_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 14);
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[5] = slot_Chronology_ChronologyConstants_Class_class_squeakEpoch; // squeakEpoch 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[6] = slot_Chronology_ChronologyConstants_Class_class_secondsInDay; // secondsInDay 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[7] = slot_Chronology_ChronologyConstants_Class_class_secondsInHour; // secondsInHour 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[8] = slot_Chronology_ChronologyConstants_Class_class_secondsInMinute; // secondsInMinute 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[9] = slot_Chronology_ChronologyConstants_Class_class_nanosInSecond; // nanosInSecond 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[10] = slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond; // nanosInMillisecond 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[11] = slot_Chronology_ChronologyConstants_Class_class_dayNames; // dayNames 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[12] = slot_Chronology_ChronologyConstants_Class_class_monthNames; // monthNames 
    ((Array)layout_Chronology_ChronologyConstants_Class_class)->values[13] = slot_Chronology_ChronologyConstants_Class_class_daysInMonth; // daysInMonth 
    
    Symbol  SMB_ChronologyConstants = new_Symbol(L"ChronologyConstants");
    Chronology_ChronologyConstants_Class = (Class)new_Class(Object_Class, layout_Chronology_ChronologyConstants_Class_class);
    Chronology_ChronologyConstants_Class->layout = empty_object_layout;
    Chronology_ChronologyConstants_Class->name = SMB_ChronologyConstants;
    
}

void init_Chronology_PChronologyConstants_methods() {
    init_class_SMB_secondsInHour();
    init_class_SMB_secondsInDay();
    init_class_SMB_squeakEpoch();
    init_class_SMB_dayNames();
    init_class_SMB_initialize();
    init_class_SMB_daysInMonth();
    init_class_SMB_nanosInSecond();
    init_class_SMB_secondsInMinute();
    init_class_SMB_monthNames();
    init_class_SMB_nanosInMillisecond();
    
}