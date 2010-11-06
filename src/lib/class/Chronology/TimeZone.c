#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21281 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21280 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21281, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21280, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21283 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21285 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21285, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21282 = new_Method_with(PArray21283, empty_Array, empty_Array, PThreadedCode21284, 2, PAssign21285, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21282, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21287 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21289 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21288 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21289, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21286 = new_Method_with(PArray21287, empty_Array, empty_Array, PThreadedCode21288, 2, PAssign21289, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21286, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21291 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21294 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend21296 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21297 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21298 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21297);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21299 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21295 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend21296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21297, (Optr)&t_send1, (Optr)PSend21298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21299, (Optr)&t_method_return);
    Block PBlock21293 = new_Block_with(PArray21294, empty_Array, PThreadedCode21295, 3, PSend21296, PSend21298, PSend21299);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21300 = new_Send((Optr)PBlock21293, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21292 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21293, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21300, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21290 = new_Method_with(PArray21291, empty_Array, empty_Array, PThreadedCode21292, 2, PSend21300, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21290, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21302 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21304 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21304, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21301 = new_Method_with(PArray21302, empty_Array, empty_Array, PThreadedCode21303, 2, PAssign21304, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21301, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21306 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21305 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21306, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21305, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21308 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21308, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21307, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21310 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21313 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21315 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21316 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21317 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21318 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21314 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21318, (Optr)&t_method_return);
    Block PBlock21312 = new_Block_with(PArray21313, empty_Array, PThreadedCode21314, 4, PSend21315, PSend21316, PSend21317, PSend21318);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21319 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21320 = new_Send((Optr)PBlock21312, SMB_value_, 1, (Optr)PSend21319);
    Array PThreadedCode21311 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21312, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21319, (Optr)&t_send1, (Optr)PSend21320, (Optr)&t_method_return);
    Method PMethod21309 = new_Method_with(PArray21310, empty_Array, empty_Array, PThreadedCode21311, 1, PSend21320);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21309, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21323 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21325 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21327 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21328 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21329 = new_Send((Optr)PSend21327, SMB__equals_, 1, (Optr)PSend21328);
    Array PThreadedCode21326 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21327, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21328, (Optr)&t_send1, (Optr)PSend21329, (Optr)&t_method_return);
    Block PBlock21324 = new_Block_with(PArray21325, empty_Array, PThreadedCode21326, 1, PSend21329);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21330 = new_Send((Optr)PSend21323, SMB_detect_, 1, (Optr)PBlock21324);
    Array PThreadedCode21322 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21323, (Optr)&t_push_closure, (Optr)PBlock21324, (Optr)&t_send1, (Optr)PSend21330, (Optr)&t_method_return);
    Method PMethod21321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21322, 1, PSend21330);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21321, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21334 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21336 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21337 = new_String(L"Universal Time");
    String string_21338 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21337_Const = new_Constant((Optr)string_21337);
    Constant string_21338_Const = new_Constant((Optr)string_21338);
    // offset:name:abbreviation:. 
    Send PSend21339 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21336, (Optr)string_21337_Const, (Optr)string_21338_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21340 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21339);
    // hours. 
    Send PSend21341 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21342 = new_String(L"Greenwich Mean Time");
    String string_21343 = new_String(L"GMT");
    Constant string_21342_Const = new_Constant((Optr)string_21342);
    Constant string_21343_Const = new_Constant((Optr)string_21343);
    // offset:name:abbreviation:. 
    Send PSend21344 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21341, (Optr)string_21342_Const, (Optr)string_21343_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21345 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21344);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21346 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21347 = new_String(L"British Summer Time");
    String string_21348 = new_String(L"BST");
    Constant string_21347_Const = new_Constant((Optr)string_21347);
    Constant string_21348_Const = new_Constant((Optr)string_21348);
    // offset:name:abbreviation:. 
    Send PSend21349 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21346, (Optr)string_21347_Const, (Optr)string_21348_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21350 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21349);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21351 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21352 = new_String(L"South African Standard Time");
    String string_21353 = new_String(L"SAST");
    Constant string_21352_Const = new_Constant((Optr)string_21352);
    Constant string_21353_Const = new_Constant((Optr)string_21353);
    // offset:name:abbreviation:. 
    Send PSend21354 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21351, (Optr)string_21352_Const, (Optr)string_21353_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21355 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21354);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21356 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21357 = new_String(L"Pacific Standard Time");
    String string_21358 = new_String(L"PST");
    Constant string_21357_Const = new_Constant((Optr)string_21357);
    Constant string_21358_Const = new_Constant((Optr)string_21358);
    // offset:name:abbreviation:. 
    Send PSend21359 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21356, (Optr)string_21357_Const, (Optr)string_21358_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21360 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21359);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21361 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21362 = new_String(L"Pacific Daylight Time");
    String string_21363 = new_String(L"PDT");
    Constant string_21362_Const = new_Constant((Optr)string_21362);
    Constant string_21363_Const = new_Constant((Optr)string_21363);
    // offset:name:abbreviation:. 
    Send PSend21364 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21361, (Optr)string_21362_Const, (Optr)string_21363_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21365 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21364);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21366 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21367 = new_String(L"Mountain Standard Time");
    String string_21368 = new_String(L"MST");
    Constant string_21367_Const = new_Constant((Optr)string_21367);
    Constant string_21368_Const = new_Constant((Optr)string_21368);
    // offset:name:abbreviation:. 
    Send PSend21369 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21366, (Optr)string_21367_Const, (Optr)string_21368_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21370 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21369);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21371 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21372 = new_String(L"Mountain Daylight Time");
    String string_21373 = new_String(L"MDT");
    Constant string_21372_Const = new_Constant((Optr)string_21372);
    Constant string_21373_Const = new_Constant((Optr)string_21373);
    // offset:name:abbreviation:. 
    Send PSend21374 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21371, (Optr)string_21372_Const, (Optr)string_21373_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21375 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21374);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21376 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21377 = new_String(L"Central Standard Time");
    String string_21378 = new_String(L"CST");
    Constant string_21377_Const = new_Constant((Optr)string_21377);
    Constant string_21378_Const = new_Constant((Optr)string_21378);
    // offset:name:abbreviation:. 
    Send PSend21379 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21376, (Optr)string_21377_Const, (Optr)string_21378_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21380 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21379);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21381 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21382 = new_String(L"Central Daylight Time");
    String string_21383 = new_String(L"CDT");
    Constant string_21382_Const = new_Constant((Optr)string_21382);
    Constant string_21383_Const = new_Constant((Optr)string_21383);
    // offset:name:abbreviation:. 
    Send PSend21384 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21381, (Optr)string_21382_Const, (Optr)string_21383_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21385 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21384);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21386 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21387 = new_String(L"Eastern Standard Time");
    String string_21388 = new_String(L"EST");
    Constant string_21387_Const = new_Constant((Optr)string_21387);
    Constant string_21388_Const = new_Constant((Optr)string_21388);
    // offset:name:abbreviation:. 
    Send PSend21389 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21386, (Optr)string_21387_Const, (Optr)string_21388_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21390 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21389);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21391 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21392 = new_String(L"Eastern Daylight Time");
    String string_21393 = new_String(L"EDT");
    Constant string_21392_Const = new_Constant((Optr)string_21392);
    Constant string_21393_Const = new_Constant((Optr)string_21393);
    // offset:name:abbreviation:. 
    Send PSend21394 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21391, (Optr)string_21392_Const, (Optr)string_21393_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21395 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21394);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21396 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21335 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21336, (Optr)&t_push1, (Optr)string_21337, (Optr)&t_push1, (Optr)string_21338, (Optr)&t_send3, (Optr)PSend21339, (Optr)&t_send2, (Optr)PSend21340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21341, (Optr)&t_push1, (Optr)string_21342, (Optr)&t_push1, (Optr)string_21343, (Optr)&t_send3, (Optr)PSend21344, (Optr)&t_send2, (Optr)PSend21345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21346, (Optr)&t_push1, (Optr)string_21347, (Optr)&t_push1, (Optr)string_21348, (Optr)&t_send3, (Optr)PSend21349, (Optr)&t_send2, (Optr)PSend21350, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21351, (Optr)&t_push1, (Optr)string_21352, (Optr)&t_push1, (Optr)string_21353, (Optr)&t_send3, (Optr)PSend21354, (Optr)&t_send2, (Optr)PSend21355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21356, (Optr)&t_push1, (Optr)string_21357, (Optr)&t_push1, (Optr)string_21358, (Optr)&t_send3, (Optr)PSend21359, (Optr)&t_send2, (Optr)PSend21360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21361, (Optr)&t_push1, (Optr)string_21362, (Optr)&t_push1, (Optr)string_21363, (Optr)&t_send3, (Optr)PSend21364, (Optr)&t_send2, (Optr)PSend21365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21366, (Optr)&t_push1, (Optr)string_21367, (Optr)&t_push1, (Optr)string_21368, (Optr)&t_send3, (Optr)PSend21369, (Optr)&t_send2, (Optr)PSend21370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21371, (Optr)&t_push1, (Optr)string_21372, (Optr)&t_push1, (Optr)string_21373, (Optr)&t_send3, (Optr)PSend21374, (Optr)&t_send2, (Optr)PSend21375, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21376, (Optr)&t_push1, (Optr)string_21377, (Optr)&t_push1, (Optr)string_21378, (Optr)&t_send3, (Optr)PSend21379, (Optr)&t_send2, (Optr)PSend21380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21381, (Optr)&t_push1, (Optr)string_21382, (Optr)&t_push1, (Optr)string_21383, (Optr)&t_send3, (Optr)PSend21384, (Optr)&t_send2, (Optr)PSend21385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21386, (Optr)&t_push1, (Optr)string_21387, (Optr)&t_push1, (Optr)string_21388, (Optr)&t_send3, (Optr)PSend21389, (Optr)&t_send2, (Optr)PSend21390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21391, (Optr)&t_push1, (Optr)string_21392, (Optr)&t_push1, (Optr)string_21393, (Optr)&t_send3, (Optr)PSend21394, (Optr)&t_send2, (Optr)PSend21395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21396, (Optr)&t_method_return);
    Block PBlock21333 = new_Block_with(PArray21334, empty_Array, PThreadedCode21335, 13, PSend21340, PSend21345, PSend21350, PSend21355, PSend21360, PSend21365, PSend21370, PSend21375, PSend21380, PSend21385, PSend21390, PSend21395, PSend21396);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21397 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21398 = new_Send((Optr)PBlock21333, SMB_value_, 1, (Optr)PSend21397);
    Array PThreadedCode21332 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21333, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21397, (Optr)&t_send1, (Optr)PSend21398, (Optr)&t_method_return);
    Method PMethod21331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21332, 1, PSend21398);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21331, HEADER(Chronology_TimeZone_Class));
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