#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21306 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21306, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21305, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21308 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21310 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21309 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21310, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21307 = new_Method_with(PArray21308, empty_Array, empty_Array, PThreadedCode21309, 2, PAssign21310, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21307, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21312 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21314 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21313 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21314, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21311 = new_Method_with(PArray21312, empty_Array, empty_Array, PThreadedCode21313, 2, PAssign21314, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21311, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21316 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21319 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend21321 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21322 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21323 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21322);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21324 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21320 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend21321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21322, (Optr)&t_send1, (Optr)PSend21323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21324, (Optr)&t_method_return);
    Block PBlock21318 = new_Block_with(PArray21319, empty_Array, PThreadedCode21320, 3, PSend21321, PSend21323, PSend21324);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21325 = new_Send((Optr)PBlock21318, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21317 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21318, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21315 = new_Method_with(PArray21316, empty_Array, empty_Array, PThreadedCode21317, 2, PSend21325, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21315, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21327 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21329 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21329, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21326 = new_Method_with(PArray21327, empty_Array, empty_Array, PThreadedCode21328, 2, PAssign21329, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21326, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21331 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21331, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21330, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21333 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21333, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21332, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21335 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21338 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21340 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21341 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21342 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21343 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21339 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21343, (Optr)&t_method_return);
    Block PBlock21337 = new_Block_with(PArray21338, empty_Array, PThreadedCode21339, 4, PSend21340, PSend21341, PSend21342, PSend21343);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21344 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21345 = new_Send((Optr)PBlock21337, SMB_value_, 1, (Optr)PSend21344);
    Array PThreadedCode21336 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21337, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21344, (Optr)&t_send1, (Optr)PSend21345, (Optr)&t_method_return);
    Method PMethod21334 = new_Method_with(PArray21335, empty_Array, empty_Array, PThreadedCode21336, 1, PSend21345);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21334, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21348 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21350 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21352 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21353 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21354 = new_Send((Optr)PSend21352, SMB__equals_, 1, (Optr)PSend21353);
    Array PThreadedCode21351 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21352, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21353, (Optr)&t_send1, (Optr)PSend21354, (Optr)&t_method_return);
    Block PBlock21349 = new_Block_with(PArray21350, empty_Array, PThreadedCode21351, 1, PSend21354);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21355 = new_Send((Optr)PSend21348, SMB_detect_, 1, (Optr)PBlock21349);
    Array PThreadedCode21347 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21348, (Optr)&t_push_closure, (Optr)PBlock21349, (Optr)&t_send1, (Optr)PSend21355, (Optr)&t_method_return);
    Method PMethod21346 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21347, 1, PSend21355);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21346, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21359 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21361 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21362 = new_String(L"Universal Time");
    String string_21363 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21362_Const = new_Constant((Optr)string_21362);
    Constant string_21363_Const = new_Constant((Optr)string_21363);
    // offset:name:abbreviation:. 
    Send PSend21364 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21361, (Optr)string_21362_Const, (Optr)string_21363_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21365 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21364);
    // hours. 
    Send PSend21366 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21367 = new_String(L"Greenwich Mean Time");
    String string_21368 = new_String(L"GMT");
    Constant string_21367_Const = new_Constant((Optr)string_21367);
    Constant string_21368_Const = new_Constant((Optr)string_21368);
    // offset:name:abbreviation:. 
    Send PSend21369 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21366, (Optr)string_21367_Const, (Optr)string_21368_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21370 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21369);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21371 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21372 = new_String(L"British Summer Time");
    String string_21373 = new_String(L"BST");
    Constant string_21372_Const = new_Constant((Optr)string_21372);
    Constant string_21373_Const = new_Constant((Optr)string_21373);
    // offset:name:abbreviation:. 
    Send PSend21374 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21371, (Optr)string_21372_Const, (Optr)string_21373_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21375 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21374);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21376 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21377 = new_String(L"South African Standard Time");
    String string_21378 = new_String(L"SAST");
    Constant string_21377_Const = new_Constant((Optr)string_21377);
    Constant string_21378_Const = new_Constant((Optr)string_21378);
    // offset:name:abbreviation:. 
    Send PSend21379 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21376, (Optr)string_21377_Const, (Optr)string_21378_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21380 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21379);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21381 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21382 = new_String(L"Pacific Standard Time");
    String string_21383 = new_String(L"PST");
    Constant string_21382_Const = new_Constant((Optr)string_21382);
    Constant string_21383_Const = new_Constant((Optr)string_21383);
    // offset:name:abbreviation:. 
    Send PSend21384 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21381, (Optr)string_21382_Const, (Optr)string_21383_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21385 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21384);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21386 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21387 = new_String(L"Pacific Daylight Time");
    String string_21388 = new_String(L"PDT");
    Constant string_21387_Const = new_Constant((Optr)string_21387);
    Constant string_21388_Const = new_Constant((Optr)string_21388);
    // offset:name:abbreviation:. 
    Send PSend21389 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21386, (Optr)string_21387_Const, (Optr)string_21388_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21390 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21389);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21391 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21392 = new_String(L"Mountain Standard Time");
    String string_21393 = new_String(L"MST");
    Constant string_21392_Const = new_Constant((Optr)string_21392);
    Constant string_21393_Const = new_Constant((Optr)string_21393);
    // offset:name:abbreviation:. 
    Send PSend21394 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21391, (Optr)string_21392_Const, (Optr)string_21393_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21395 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21394);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21396 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21397 = new_String(L"Mountain Daylight Time");
    String string_21398 = new_String(L"MDT");
    Constant string_21397_Const = new_Constant((Optr)string_21397);
    Constant string_21398_Const = new_Constant((Optr)string_21398);
    // offset:name:abbreviation:. 
    Send PSend21399 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21396, (Optr)string_21397_Const, (Optr)string_21398_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21400 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21399);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21401 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21402 = new_String(L"Central Standard Time");
    String string_21403 = new_String(L"CST");
    Constant string_21402_Const = new_Constant((Optr)string_21402);
    Constant string_21403_Const = new_Constant((Optr)string_21403);
    // offset:name:abbreviation:. 
    Send PSend21404 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21401, (Optr)string_21402_Const, (Optr)string_21403_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21405 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21404);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21406 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21407 = new_String(L"Central Daylight Time");
    String string_21408 = new_String(L"CDT");
    Constant string_21407_Const = new_Constant((Optr)string_21407);
    Constant string_21408_Const = new_Constant((Optr)string_21408);
    // offset:name:abbreviation:. 
    Send PSend21409 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21406, (Optr)string_21407_Const, (Optr)string_21408_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21410 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21409);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21411 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21412 = new_String(L"Eastern Standard Time");
    String string_21413 = new_String(L"EST");
    Constant string_21412_Const = new_Constant((Optr)string_21412);
    Constant string_21413_Const = new_Constant((Optr)string_21413);
    // offset:name:abbreviation:. 
    Send PSend21414 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21411, (Optr)string_21412_Const, (Optr)string_21413_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21415 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21414);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21416 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21417 = new_String(L"Eastern Daylight Time");
    String string_21418 = new_String(L"EDT");
    Constant string_21417_Const = new_Constant((Optr)string_21417);
    Constant string_21418_Const = new_Constant((Optr)string_21418);
    // offset:name:abbreviation:. 
    Send PSend21419 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21416, (Optr)string_21417_Const, (Optr)string_21418_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21420 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21419);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21421 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21360 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21361, (Optr)&t_push1, (Optr)string_21362, (Optr)&t_push1, (Optr)string_21363, (Optr)&t_send3, (Optr)PSend21364, (Optr)&t_send2, (Optr)PSend21365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21366, (Optr)&t_push1, (Optr)string_21367, (Optr)&t_push1, (Optr)string_21368, (Optr)&t_send3, (Optr)PSend21369, (Optr)&t_send2, (Optr)PSend21370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21371, (Optr)&t_push1, (Optr)string_21372, (Optr)&t_push1, (Optr)string_21373, (Optr)&t_send3, (Optr)PSend21374, (Optr)&t_send2, (Optr)PSend21375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21376, (Optr)&t_push1, (Optr)string_21377, (Optr)&t_push1, (Optr)string_21378, (Optr)&t_send3, (Optr)PSend21379, (Optr)&t_send2, (Optr)PSend21380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21381, (Optr)&t_push1, (Optr)string_21382, (Optr)&t_push1, (Optr)string_21383, (Optr)&t_send3, (Optr)PSend21384, (Optr)&t_send2, (Optr)PSend21385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21386, (Optr)&t_push1, (Optr)string_21387, (Optr)&t_push1, (Optr)string_21388, (Optr)&t_send3, (Optr)PSend21389, (Optr)&t_send2, (Optr)PSend21390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21391, (Optr)&t_push1, (Optr)string_21392, (Optr)&t_push1, (Optr)string_21393, (Optr)&t_send3, (Optr)PSend21394, (Optr)&t_send2, (Optr)PSend21395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21396, (Optr)&t_push1, (Optr)string_21397, (Optr)&t_push1, (Optr)string_21398, (Optr)&t_send3, (Optr)PSend21399, (Optr)&t_send2, (Optr)PSend21400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21401, (Optr)&t_push1, (Optr)string_21402, (Optr)&t_push1, (Optr)string_21403, (Optr)&t_send3, (Optr)PSend21404, (Optr)&t_send2, (Optr)PSend21405, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21406, (Optr)&t_push1, (Optr)string_21407, (Optr)&t_push1, (Optr)string_21408, (Optr)&t_send3, (Optr)PSend21409, (Optr)&t_send2, (Optr)PSend21410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21411, (Optr)&t_push1, (Optr)string_21412, (Optr)&t_push1, (Optr)string_21413, (Optr)&t_send3, (Optr)PSend21414, (Optr)&t_send2, (Optr)PSend21415, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21416, (Optr)&t_push1, (Optr)string_21417, (Optr)&t_push1, (Optr)string_21418, (Optr)&t_send3, (Optr)PSend21419, (Optr)&t_send2, (Optr)PSend21420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21421, (Optr)&t_method_return);
    Block PBlock21358 = new_Block_with(PArray21359, empty_Array, PThreadedCode21360, 13, PSend21365, PSend21370, PSend21375, PSend21380, PSend21385, PSend21390, PSend21395, PSend21400, PSend21405, PSend21410, PSend21415, PSend21420, PSend21421);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21422 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21423 = new_Send((Optr)PBlock21358, SMB_value_, 1, (Optr)PSend21422);
    Array PThreadedCode21357 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21358, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21422, (Optr)&t_send1, (Optr)PSend21423, (Optr)&t_method_return);
    Method PMethod21356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21357, 1, PSend21423);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21356, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_timeZones, MC_SMB_timeZones);
}

void init_Chronology_PTimeZone_layout() {
    layout_Chronology_TimeZone_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_TimeZone_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_TimeZone_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TimeZone = new_Symbol(L"TimeZone");
    slot_Chronology_TimeZone_offset = (Optr)new_Slot(0, L"offset");
    slot_Chronology_TimeZone_abbreviation = (Optr)new_Slot(1, L"abbreviation");
    slot_Chronology_TimeZone_name = (Optr)new_Slot(2, L"name");
    layout_Chronology_TimeZone = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Chronology_TimeZone)->values[0] = slot_Chronology_TimeZone_offset; // offset 
    ((Array)layout_Chronology_TimeZone)->values[1] = slot_Chronology_TimeZone_abbreviation; // abbreviation 
    ((Array)layout_Chronology_TimeZone)->values[2] = slot_Chronology_TimeZone_name; // name 
    Chronology_TimeZone_Class = (Class)new_Class(Object_Class, layout_Chronology_TimeZone_Class_class);
    Chronology_TimeZone_Class->layout = layout_Chronology_TimeZone;
    Chronology_TimeZone_Class->name = SMB_TimeZone;
    
}

void init_Chronology_PTimeZone_methods() {
    init_SMB_offset();
    init_SMB_abbreviation_();
    init_SMB_name_();
    init_SMB_printOn_();
    init_SMB_offset_();
    init_SMB_abbreviation();
    init_SMB_name();
    init_class_SMB_offset_name_abbreviation_();
    init_class_SMB_default();
    init_class_SMB_timeZones();
    
}