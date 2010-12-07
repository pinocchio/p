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
    Send PSend21423 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    Array PThreadedCode21422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21423, (Optr)&t_method_return);
    Method PMethod21421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21422, 1, PSend21423);
    
    MethodClosure MC_SMB_secondsInHour = new_MethodClosure((Method)PMethod21421, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInHour, MC_SMB_secondsInHour);
}


static void init_class_SMB_secondsInDay() {
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21426 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    SmallInt int_24 = new_SmallInt(24);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // *. 
    Send PSend21427 = new_Send((Optr)PSend21426, SMB__times_, 1, (Optr)int_24_Const);
    Array PThreadedCode21425 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21426, (Optr)&t_push1, (Optr)int_24, (Optr)&t_send1, (Optr)PSend21427, (Optr)&t_method_return);
    Method PMethod21424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21425, 1, PSend21427);
    
    MethodClosure MC_SMB_secondsInDay = new_MethodClosure((Method)PMethod21424, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInDay, MC_SMB_secondsInDay);
}


static void init_class_SMB_squeakEpoch() {
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Array PThreadedCode21429 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_method_return);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Method PMethod21428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21429, 1, int_2415386_Const);
    
    MethodClosure MC_SMB_squeakEpoch = new_MethodClosure((Method)PMethod21428, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_squeakEpoch, MC_SMB_squeakEpoch);
}


static void init_class_SMB_dayNames() {
    Symbol SMB_dayNames = new_Symbol(L"dayNames");
    Array PThreadedCode21431 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_method_return);
    Method PMethod21430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21431, 1, slot_Chronology_ChronologyConstants_Class_class_dayNames);
    
    MethodClosure MC_SMB_dayNames = new_MethodClosure((Method)PMethod21430, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_dayNames, MC_SMB_dayNames);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Assign PAssign21434 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_squeakEpoch, (Optr)int_2415386_Const);
    SmallInt int_86400 = new_SmallInt(86400);
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    Assign PAssign21435 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInDay, (Optr)int_86400_Const);
    SmallInt int_3600 = new_SmallInt(3600);
    Constant int_3600_Const = new_Constant((Optr)int_3600);
    Assign PAssign21436 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInHour, (Optr)int_3600_Const);
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Assign PAssign21437 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInMinute, (Optr)int_60_Const);
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Assign PAssign21438 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInSecond, (Optr)int_1000000000_Const);
    SmallInt int_1000000 = new_SmallInt(1000000);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Assign PAssign21439 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond, (Optr)int_1000000_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_7 = new_SmallInt(7);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // new:. 
    Send PSend21441 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_7_Const);
    Assign PAssign21440 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)PSend21441);
    Symbol  SMB_Sunday = new_Symbol(L"Sunday");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant SMB_Sunday_Const = new_Constant((Optr)SMB_Sunday);
    // at:put:. 
    Send PSend21442 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_Sunday_Const);
    Symbol  SMB_Monday = new_Symbol(L"Monday");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant SMB_Monday_Const = new_Constant((Optr)SMB_Monday);
    // at:put:. 
    Send PSend21443 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_Monday_Const);
    SmallInt int_3 = new_SmallInt(3);
    Symbol  SMB_Tuesday = new_Symbol(L"Tuesday");
    Constant int_3_Const = new_Constant((Optr)int_3);
    Constant SMB_Tuesday_Const = new_Constant((Optr)SMB_Tuesday);
    // at:put:. 
    Send PSend21444 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_Tuesday_Const);
    SmallInt int_4 = new_SmallInt(4);
    Symbol  SMB_Wednesday = new_Symbol(L"Wednesday");
    Constant int_4_Const = new_Constant((Optr)int_4);
    Constant SMB_Wednesday_Const = new_Constant((Optr)SMB_Wednesday);
    // at:put:. 
    Send PSend21445 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_Wednesday_Const);
    SmallInt int_5 = new_SmallInt(5);
    Symbol  SMB_Thursday = new_Symbol(L"Thursday");
    Constant int_5_Const = new_Constant((Optr)int_5);
    Constant SMB_Thursday_Const = new_Constant((Optr)SMB_Thursday);
    // at:put:. 
    Send PSend21446 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_Thursday_Const);
    SmallInt int_6 = new_SmallInt(6);
    Symbol  SMB_Friday = new_Symbol(L"Friday");
    Constant int_6_Const = new_Constant((Optr)int_6);
    Constant SMB_Friday_Const = new_Constant((Optr)SMB_Friday);
    // at:put:. 
    Send PSend21447 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_Friday_Const);
    Symbol  SMB_Saturday = new_Symbol(L"Saturday");
    Constant SMB_Saturday_Const = new_Constant((Optr)SMB_Saturday);
    // at:put:. 
    Send PSend21448 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_Saturday_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // new:. 
    Send PSend21450 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21449 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)PSend21450);
    Symbol  SMB_January = new_Symbol(L"January");
    Constant SMB_January_Const = new_Constant((Optr)SMB_January);
    // at:put:. 
    Send PSend21451 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_January_Const);
    Symbol  SMB_February = new_Symbol(L"February");
    Constant SMB_February_Const = new_Constant((Optr)SMB_February);
    // at:put:. 
    Send PSend21452 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_February_Const);
    Symbol  SMB_March = new_Symbol(L"March");
    Constant SMB_March_Const = new_Constant((Optr)SMB_March);
    // at:put:. 
    Send PSend21453 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_March_Const);
    Symbol  SMB_April = new_Symbol(L"April");
    Constant SMB_April_Const = new_Constant((Optr)SMB_April);
    // at:put:. 
    Send PSend21454 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_April_Const);
    Symbol  SMB_May = new_Symbol(L"May");
    Constant SMB_May_Const = new_Constant((Optr)SMB_May);
    // at:put:. 
    Send PSend21455 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_May_Const);
    Symbol  SMB_June = new_Symbol(L"June");
    Constant SMB_June_Const = new_Constant((Optr)SMB_June);
    // at:put:. 
    Send PSend21456 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_June_Const);
    Symbol  SMB_July = new_Symbol(L"July");
    Constant SMB_July_Const = new_Constant((Optr)SMB_July);
    // at:put:. 
    Send PSend21457 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_July_Const);
    SmallInt int_8 = new_SmallInt(8);
    Symbol  SMB_August = new_Symbol(L"August");
    Constant int_8_Const = new_Constant((Optr)int_8);
    Constant SMB_August_Const = new_Constant((Optr)SMB_August);
    // at:put:. 
    Send PSend21458 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)SMB_August_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol  SMB_September = new_Symbol(L"September");
    Constant int_9_Const = new_Constant((Optr)int_9);
    Constant SMB_September_Const = new_Constant((Optr)SMB_September);
    // at:put:. 
    Send PSend21459 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)SMB_September_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol  SMB_October = new_Symbol(L"October");
    Constant int_10_Const = new_Constant((Optr)int_10);
    Constant SMB_October_Const = new_Constant((Optr)SMB_October);
    // at:put:. 
    Send PSend21460 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)SMB_October_Const);
    SmallInt int_11 = new_SmallInt(11);
    Symbol  SMB_November = new_Symbol(L"November");
    Constant int_11_Const = new_Constant((Optr)int_11);
    Constant SMB_November_Const = new_Constant((Optr)SMB_November);
    // at:put:. 
    Send PSend21461 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)SMB_November_Const);
    Symbol  SMB_December = new_Symbol(L"December");
    Constant SMB_December_Const = new_Constant((Optr)SMB_December);
    // at:put:. 
    Send PSend21462 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)SMB_December_Const);
    // new:. 
    Send PSend21464 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21463 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)PSend21464);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend21465 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)int_31_Const);
    SmallInt int_28 = new_SmallInt(28);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend21466 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)int_28_Const);
    // at:put:. 
    Send PSend21467 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)int_31_Const);
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    // at:put:. 
    Send PSend21468 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21469 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21470 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21471 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21472 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21473 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21474 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21475 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21476 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)int_31_Const);
    Array PThreadedCode21433 = instantiate_Array_with(ThreadedCode_Class, 0, 340, (Optr)&t_push1, (Optr)PAssign21434, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21435, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21436, (Optr)&t_push1, (Optr)int_3600, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21437, (Optr)&t_push1, (Optr)int_60, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21438, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21439, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21440, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_Sunday, (Optr)&t_send2, (Optr)PSend21442, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_Monday, (Optr)&t_send2, (Optr)PSend21443, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_Tuesday, (Optr)&t_send2, (Optr)PSend21444, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_Wednesday, (Optr)&t_send2, (Optr)PSend21445, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_Thursday, (Optr)&t_send2, (Optr)PSend21446, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_Friday, (Optr)&t_send2, (Optr)PSend21447, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_Saturday, (Optr)&t_send2, (Optr)PSend21448, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21449, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21450, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_January, (Optr)&t_send2, (Optr)PSend21451, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_February, (Optr)&t_send2, (Optr)PSend21452, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_March, (Optr)&t_send2, (Optr)PSend21453, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_April, (Optr)&t_send2, (Optr)PSend21454, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_May, (Optr)&t_send2, (Optr)PSend21455, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_June, (Optr)&t_send2, (Optr)PSend21456, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_July, (Optr)&t_send2, (Optr)PSend21457, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)SMB_August, (Optr)&t_send2, (Optr)PSend21458, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)SMB_September, (Optr)&t_send2, (Optr)PSend21459, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)SMB_October, (Optr)&t_send2, (Optr)PSend21460, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)SMB_November, (Optr)&t_send2, (Optr)PSend21461, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)SMB_December, (Optr)&t_send2, (Optr)PSend21462, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21463, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21464, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21465, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_2, (Optr)&t_push1, (Optr)int_28, (Optr)&t_send2, (Optr)PSend21466, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21467, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21468, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21469, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21470, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21471, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21472, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21473, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21474, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21475, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21476, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21433, 41, PAssign21434, PAssign21435, PAssign21436, PAssign21437, PAssign21438, PAssign21439, PAssign21440, PSend21442, PSend21443, PSend21444, PSend21445, PSend21446, PSend21447, PSend21448, PAssign21449, PSend21451, PSend21452, PSend21453, PSend21454, PSend21455, PSend21456, PSend21457, PSend21458, PSend21459, PSend21460, PSend21461, PSend21462, PAssign21463, PSend21465, PSend21466, PSend21467, PSend21468, PSend21469, PSend21470, PSend21471, PSend21472, PSend21473, PSend21474, PSend21475, PSend21476, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21432, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_daysInMonth() {
    Symbol SMB_daysInMonth = new_Symbol(L"daysInMonth");
    Array PThreadedCode21478 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_method_return);
    Method PMethod21477 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21478, 1, slot_Chronology_ChronologyConstants_Class_class_daysInMonth);
    
    MethodClosure MC_SMB_daysInMonth = new_MethodClosure((Method)PMethod21477, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_daysInMonth, MC_SMB_daysInMonth);
}


static void init_class_SMB_nanosInSecond() {
    Symbol SMB_nanosInSecond = new_Symbol(L"nanosInSecond");
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Array PThreadedCode21480 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_method_return);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Method PMethod21479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21480, 1, int_1000000000_Const);
    
    MethodClosure MC_SMB_nanosInSecond = new_MethodClosure((Method)PMethod21479, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_nanosInSecond, MC_SMB_nanosInSecond);
}


static void init_class_SMB_secondsInMinute() {
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    SmallInt int_60 = new_SmallInt(60);
    Array PThreadedCode21482 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_60, (Optr)&t_method_return);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Method PMethod21481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21482, 1, int_60_Const);
    
    MethodClosure MC_SMB_secondsInMinute = new_MethodClosure((Method)PMethod21481, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInMinute, MC_SMB_secondsInMinute);
}


static void init_class_SMB_monthNames() {
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    Array PThreadedCode21484 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_method_return);
    Method PMethod21483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21484, 1, slot_Chronology_ChronologyConstants_Class_class_monthNames);
    
    MethodClosure MC_SMB_monthNames = new_MethodClosure((Method)PMethod21483, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_monthNames, MC_SMB_monthNames);
}


static void init_class_SMB_nanosInMillisecond() {
    Symbol SMB_nanosInMillisecond = new_Symbol(L"nanosInMillisecond");
    SmallInt int_1000000 = new_SmallInt(1000000);
    Array PThreadedCode21486 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_method_return);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Method PMethod21485 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21486, 1, int_1000000_Const);
    
    MethodClosure MC_SMB_nanosInMillisecond = new_MethodClosure((Method)PMethod21485, HEADER(Chronology_ChronologyConstants_Class));
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