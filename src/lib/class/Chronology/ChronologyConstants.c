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
    Send PSend21227 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    Array PThreadedCode21226 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21227, (Optr)&t_method_return);
    Method PMethod21225 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21226, 1, PSend21227);
    
    MethodClosure MC_SMB_secondsInHour = new_MethodClosure((Method)PMethod21225, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInHour, MC_SMB_secondsInHour);
}


static void init_class_SMB_secondsInDay() {
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21230 = new_Send((Optr)int_60_Const, SMB__times_, 1, (Optr)int_60_Const);
    SmallInt int_24 = new_SmallInt(24);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // *. 
    Send PSend21231 = new_Send((Optr)PSend21230, SMB__times_, 1, (Optr)int_24_Const);
    Array PThreadedCode21229 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)int_60, (Optr)&t_push1, (Optr)int_60, (Optr)&t_send1, (Optr)PSend21230, (Optr)&t_push1, (Optr)int_24, (Optr)&t_send1, (Optr)PSend21231, (Optr)&t_method_return);
    Method PMethod21228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21229, 1, PSend21231);
    
    MethodClosure MC_SMB_secondsInDay = new_MethodClosure((Method)PMethod21228, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInDay, MC_SMB_secondsInDay);
}


static void init_class_SMB_squeakEpoch() {
    Symbol SMB_squeakEpoch = new_Symbol(L"squeakEpoch");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Array PThreadedCode21233 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_method_return);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Method PMethod21232 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21233, 1, int_2415386_Const);
    
    MethodClosure MC_SMB_squeakEpoch = new_MethodClosure((Method)PMethod21232, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_squeakEpoch, MC_SMB_squeakEpoch);
}


static void init_class_SMB_dayNames() {
    Symbol SMB_dayNames = new_Symbol(L"dayNames");
    Array PThreadedCode21235 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_method_return);
    Method PMethod21234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21235, 1, slot_Chronology_ChronologyConstants_Class_class_dayNames);
    
    MethodClosure MC_SMB_dayNames = new_MethodClosure((Method)PMethod21234, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_dayNames, MC_SMB_dayNames);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_2415386 = new_SmallInt(2415386);
    Constant int_2415386_Const = new_Constant((Optr)int_2415386);
    Assign PAssign21238 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_squeakEpoch, (Optr)int_2415386_Const);
    SmallInt int_86400 = new_SmallInt(86400);
    Constant int_86400_Const = new_Constant((Optr)int_86400);
    Assign PAssign21239 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInDay, (Optr)int_86400_Const);
    SmallInt int_3600 = new_SmallInt(3600);
    Constant int_3600_Const = new_Constant((Optr)int_3600);
    Assign PAssign21240 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInHour, (Optr)int_3600_Const);
    SmallInt int_60 = new_SmallInt(60);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Assign PAssign21241 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_secondsInMinute, (Optr)int_60_Const);
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Assign PAssign21242 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInSecond, (Optr)int_1000000000_Const);
    SmallInt int_1000000 = new_SmallInt(1000000);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Assign PAssign21243 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_nanosInMillisecond, (Optr)int_1000000_Const);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_7 = new_SmallInt(7);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // new:. 
    Send PSend21245 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_7_Const);
    Assign PAssign21244 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)PSend21245);
    Symbol  SMB_Sunday = new_Symbol(L"Sunday");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant SMB_Sunday_Const = new_Constant((Optr)SMB_Sunday);
    // at:put:. 
    Send PSend21246 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_Sunday_Const);
    Symbol  SMB_Monday = new_Symbol(L"Monday");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant SMB_Monday_Const = new_Constant((Optr)SMB_Monday);
    // at:put:. 
    Send PSend21247 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_Monday_Const);
    SmallInt int_3 = new_SmallInt(3);
    Symbol  SMB_Tuesday = new_Symbol(L"Tuesday");
    Constant int_3_Const = new_Constant((Optr)int_3);
    Constant SMB_Tuesday_Const = new_Constant((Optr)SMB_Tuesday);
    // at:put:. 
    Send PSend21248 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_Tuesday_Const);
    SmallInt int_4 = new_SmallInt(4);
    Symbol  SMB_Wednesday = new_Symbol(L"Wednesday");
    Constant int_4_Const = new_Constant((Optr)int_4);
    Constant SMB_Wednesday_Const = new_Constant((Optr)SMB_Wednesday);
    // at:put:. 
    Send PSend21249 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_Wednesday_Const);
    SmallInt int_5 = new_SmallInt(5);
    Symbol  SMB_Thursday = new_Symbol(L"Thursday");
    Constant int_5_Const = new_Constant((Optr)int_5);
    Constant SMB_Thursday_Const = new_Constant((Optr)SMB_Thursday);
    // at:put:. 
    Send PSend21250 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_Thursday_Const);
    SmallInt int_6 = new_SmallInt(6);
    Symbol  SMB_Friday = new_Symbol(L"Friday");
    Constant int_6_Const = new_Constant((Optr)int_6);
    Constant SMB_Friday_Const = new_Constant((Optr)SMB_Friday);
    // at:put:. 
    Send PSend21251 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_Friday_Const);
    Symbol  SMB_Saturday = new_Symbol(L"Saturday");
    Constant SMB_Saturday_Const = new_Constant((Optr)SMB_Saturday);
    // at:put:. 
    Send PSend21252 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_Saturday_Const);
    SmallInt int_12 = new_SmallInt(12);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // new:. 
    Send PSend21254 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21253 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)PSend21254);
    Symbol  SMB_January = new_Symbol(L"January");
    Constant SMB_January_Const = new_Constant((Optr)SMB_January);
    // at:put:. 
    Send PSend21255 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_January_Const);
    Symbol  SMB_February = new_Symbol(L"February");
    Constant SMB_February_Const = new_Constant((Optr)SMB_February);
    // at:put:. 
    Send PSend21256 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_February_Const);
    Symbol  SMB_March = new_Symbol(L"March");
    Constant SMB_March_Const = new_Constant((Optr)SMB_March);
    // at:put:. 
    Send PSend21257 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)SMB_March_Const);
    Symbol  SMB_April = new_Symbol(L"April");
    Constant SMB_April_Const = new_Constant((Optr)SMB_April);
    // at:put:. 
    Send PSend21258 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)SMB_April_Const);
    Symbol  SMB_May = new_Symbol(L"May");
    Constant SMB_May_Const = new_Constant((Optr)SMB_May);
    // at:put:. 
    Send PSend21259 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)SMB_May_Const);
    Symbol  SMB_June = new_Symbol(L"June");
    Constant SMB_June_Const = new_Constant((Optr)SMB_June);
    // at:put:. 
    Send PSend21260 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)SMB_June_Const);
    Symbol  SMB_July = new_Symbol(L"July");
    Constant SMB_July_Const = new_Constant((Optr)SMB_July);
    // at:put:. 
    Send PSend21261 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)SMB_July_Const);
    SmallInt int_8 = new_SmallInt(8);
    Symbol  SMB_August = new_Symbol(L"August");
    Constant int_8_Const = new_Constant((Optr)int_8);
    Constant SMB_August_Const = new_Constant((Optr)SMB_August);
    // at:put:. 
    Send PSend21262 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)SMB_August_Const);
    SmallInt int_9 = new_SmallInt(9);
    Symbol  SMB_September = new_Symbol(L"September");
    Constant int_9_Const = new_Constant((Optr)int_9);
    Constant SMB_September_Const = new_Constant((Optr)SMB_September);
    // at:put:. 
    Send PSend21263 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)SMB_September_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol  SMB_October = new_Symbol(L"October");
    Constant int_10_Const = new_Constant((Optr)int_10);
    Constant SMB_October_Const = new_Constant((Optr)SMB_October);
    // at:put:. 
    Send PSend21264 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)SMB_October_Const);
    SmallInt int_11 = new_SmallInt(11);
    Symbol  SMB_November = new_Symbol(L"November");
    Constant int_11_Const = new_Constant((Optr)int_11);
    Constant SMB_November_Const = new_Constant((Optr)SMB_November);
    // at:put:. 
    Send PSend21265 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)SMB_November_Const);
    Symbol  SMB_December = new_Symbol(L"December");
    Constant SMB_December_Const = new_Constant((Optr)SMB_December);
    // at:put:. 
    Send PSend21266 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)SMB_December_Const);
    // new:. 
    Send PSend21268 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Assign PAssign21267 = new_Assign((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)PSend21268);
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend21269 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)int_31_Const);
    SmallInt int_28 = new_SmallInt(28);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend21270 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)int_28_Const);
    // at:put:. 
    Send PSend21271 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)int_31_Const);
    SmallInt int_30 = new_SmallInt(30);
    Constant int_30_Const = new_Constant((Optr)int_30);
    // at:put:. 
    Send PSend21272 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21273 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21274 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21275 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21276 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21277 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21278 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)int_31_Const);
    // at:put:. 
    Send PSend21279 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)int_30_Const);
    // at:put:. 
    Send PSend21280 = new_Send((Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)int_31_Const);
    Array PThreadedCode21237 = instantiate_Array_with(ThreadedCode_Class, 0, 340, (Optr)&t_push1, (Optr)PAssign21238, (Optr)&t_push1, (Optr)int_2415386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21239, (Optr)&t_push1, (Optr)int_86400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21240, (Optr)&t_push1, (Optr)int_3600, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21241, (Optr)&t_push1, (Optr)int_60, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21242, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21243, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21244, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21245, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_Sunday, (Optr)&t_send2, (Optr)PSend21246, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_Monday, (Optr)&t_send2, (Optr)PSend21247, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_Tuesday, (Optr)&t_send2, (Optr)PSend21248, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_Wednesday, (Optr)&t_send2, (Optr)PSend21249, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_Thursday, (Optr)&t_send2, (Optr)PSend21250, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_Friday, (Optr)&t_send2, (Optr)PSend21251, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_dayNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_Saturday, (Optr)&t_send2, (Optr)PSend21252, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21253, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_January, (Optr)&t_send2, (Optr)PSend21255, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_February, (Optr)&t_send2, (Optr)PSend21256, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)SMB_March, (Optr)&t_send2, (Optr)PSend21257, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)SMB_April, (Optr)&t_send2, (Optr)PSend21258, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)SMB_May, (Optr)&t_send2, (Optr)PSend21259, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)SMB_June, (Optr)&t_send2, (Optr)PSend21260, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)SMB_July, (Optr)&t_send2, (Optr)PSend21261, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)SMB_August, (Optr)&t_send2, (Optr)PSend21262, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)SMB_September, (Optr)&t_send2, (Optr)PSend21263, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)SMB_October, (Optr)&t_send2, (Optr)PSend21264, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)SMB_November, (Optr)&t_send2, (Optr)PSend21265, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)SMB_December, (Optr)&t_send2, (Optr)PSend21266, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21267, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21268, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21269, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push_2, (Optr)&t_push1, (Optr)int_28, (Optr)&t_send2, (Optr)PSend21270, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21271, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21272, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21273, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21274, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21275, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21276, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21277, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21278, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send2, (Optr)PSend21279, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send2, (Optr)PSend21280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21237, 41, PAssign21238, PAssign21239, PAssign21240, PAssign21241, PAssign21242, PAssign21243, PAssign21244, PSend21246, PSend21247, PSend21248, PSend21249, PSend21250, PSend21251, PSend21252, PAssign21253, PSend21255, PSend21256, PSend21257, PSend21258, PSend21259, PSend21260, PSend21261, PSend21262, PSend21263, PSend21264, PSend21265, PSend21266, PAssign21267, PSend21269, PSend21270, PSend21271, PSend21272, PSend21273, PSend21274, PSend21275, PSend21276, PSend21277, PSend21278, PSend21279, PSend21280, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21236, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_daysInMonth() {
    Symbol SMB_daysInMonth = new_Symbol(L"daysInMonth");
    Array PThreadedCode21282 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_daysInMonth, (Optr)&t_method_return);
    Method PMethod21281 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21282, 1, slot_Chronology_ChronologyConstants_Class_class_daysInMonth);
    
    MethodClosure MC_SMB_daysInMonth = new_MethodClosure((Method)PMethod21281, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_daysInMonth, MC_SMB_daysInMonth);
}


static void init_class_SMB_nanosInSecond() {
    Symbol SMB_nanosInSecond = new_Symbol(L"nanosInSecond");
    SmallInt int_1000000000 = new_SmallInt(1000000000);
    Array PThreadedCode21284 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000000, (Optr)&t_method_return);
    Constant int_1000000000_Const = new_Constant((Optr)int_1000000000);
    Method PMethod21283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21284, 1, int_1000000000_Const);
    
    MethodClosure MC_SMB_nanosInSecond = new_MethodClosure((Method)PMethod21283, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_nanosInSecond, MC_SMB_nanosInSecond);
}


static void init_class_SMB_secondsInMinute() {
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    SmallInt int_60 = new_SmallInt(60);
    Array PThreadedCode21286 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_60, (Optr)&t_method_return);
    Constant int_60_Const = new_Constant((Optr)int_60);
    Method PMethod21285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21286, 1, int_60_Const);
    
    MethodClosure MC_SMB_secondsInMinute = new_MethodClosure((Method)PMethod21285, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_secondsInMinute, MC_SMB_secondsInMinute);
}


static void init_class_SMB_monthNames() {
    Symbol SMB_monthNames = new_Symbol(L"monthNames");
    Array PThreadedCode21288 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_ChronologyConstants_Class_class_monthNames, (Optr)&t_method_return);
    Method PMethod21287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21288, 1, slot_Chronology_ChronologyConstants_Class_class_monthNames);
    
    MethodClosure MC_SMB_monthNames = new_MethodClosure((Method)PMethod21287, HEADER(Chronology_ChronologyConstants_Class));
    store_method(HEADER(Chronology_ChronologyConstants_Class), SMB_monthNames, MC_SMB_monthNames);
}


static void init_class_SMB_nanosInMillisecond() {
    Symbol SMB_nanosInMillisecond = new_Symbol(L"nanosInMillisecond");
    SmallInt int_1000000 = new_SmallInt(1000000);
    Array PThreadedCode21290 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_1000000, (Optr)&t_method_return);
    Constant int_1000000_Const = new_Constant((Optr)int_1000000);
    Method PMethod21289 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21290, 1, int_1000000_Const);
    
    MethodClosure MC_SMB_nanosInMillisecond = new_MethodClosure((Method)PMethod21289, HEADER(Chronology_ChronologyConstants_Class));
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