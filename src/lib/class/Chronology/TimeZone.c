#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21270 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21270, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21269, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21272 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21274 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21273 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21274, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21271 = new_Method_with(PArray21272, empty_Array, empty_Array, PThreadedCode21273, 2, PAssign21274, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21271, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21276 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21278 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21278, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21275 = new_Method_with(PArray21276, empty_Array, empty_Array, PThreadedCode21277, 2, PAssign21278, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21275, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21280 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21283 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend21285 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21286 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21287 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21286);
    Character char_4146 = new_Character(L')');
    Constant char_4146_Const = new_Constant((Optr)char_4146);
    // <<. 
    Send PSend21288 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4146_Const);
    Array PThreadedCode21284 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend21285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21286, (Optr)&t_send1, (Optr)PSend21287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4146, (Optr)&t_send1, (Optr)PSend21288, (Optr)&t_method_return);
    Block PBlock21282 = new_Block_with(PArray21283, empty_Array, PThreadedCode21284, 3, PSend21285, PSend21287, PSend21288);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21289 = new_Send((Optr)PBlock21282, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21281 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21282, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21289, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21279 = new_Method_with(PArray21280, empty_Array, empty_Array, PThreadedCode21281, 2, PSend21289, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21279, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21291 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21293 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21293, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21290 = new_Method_with(PArray21291, empty_Array, empty_Array, PThreadedCode21292, 2, PAssign21293, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21290, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21295 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21295, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21294, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21297 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21296 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21297, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21296, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21299 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21302 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21304 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21305 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21306 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21307 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21303 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21307, (Optr)&t_method_return);
    Block PBlock21301 = new_Block_with(PArray21302, empty_Array, PThreadedCode21303, 4, PSend21304, PSend21305, PSend21306, PSend21307);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21308 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21309 = new_Send((Optr)PBlock21301, SMB_value_, 1, (Optr)PSend21308);
    Array PThreadedCode21300 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21301, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21308, (Optr)&t_send1, (Optr)PSend21309, (Optr)&t_method_return);
    Method PMethod21298 = new_Method_with(PArray21299, empty_Array, empty_Array, PThreadedCode21300, 1, PSend21309);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21298, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21312 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21314 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21316 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21317 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21318 = new_Send((Optr)PSend21316, SMB__equals_, 1, (Optr)PSend21317);
    Array PThreadedCode21315 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21316, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21317, (Optr)&t_send1, (Optr)PSend21318, (Optr)&t_method_return);
    Block PBlock21313 = new_Block_with(PArray21314, empty_Array, PThreadedCode21315, 1, PSend21318);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21319 = new_Send((Optr)PSend21312, SMB_detect_, 1, (Optr)PBlock21313);
    Array PThreadedCode21311 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21312, (Optr)&t_push_closure, (Optr)PBlock21313, (Optr)&t_send1, (Optr)PSend21319, (Optr)&t_method_return);
    Method PMethod21310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21311, 1, PSend21319);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21310, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21323 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21325 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21326 = new_String(L"Universal Time");
    String string_21327 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21326_Const = new_Constant((Optr)string_21326);
    Constant string_21327_Const = new_Constant((Optr)string_21327);
    // offset:name:abbreviation:. 
    Send PSend21328 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21325, (Optr)string_21326_Const, (Optr)string_21327_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21329 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21328);
    // hours. 
    Send PSend21330 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21331 = new_String(L"Greenwich Mean Time");
    String string_21332 = new_String(L"GMT");
    Constant string_21331_Const = new_Constant((Optr)string_21331);
    Constant string_21332_Const = new_Constant((Optr)string_21332);
    // offset:name:abbreviation:. 
    Send PSend21333 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21330, (Optr)string_21331_Const, (Optr)string_21332_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21334 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21333);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21335 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21336 = new_String(L"British Summer Time");
    String string_21337 = new_String(L"BST");
    Constant string_21336_Const = new_Constant((Optr)string_21336);
    Constant string_21337_Const = new_Constant((Optr)string_21337);
    // offset:name:abbreviation:. 
    Send PSend21338 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21335, (Optr)string_21336_Const, (Optr)string_21337_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21339 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21338);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21340 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21341 = new_String(L"South African Standard Time");
    String string_21342 = new_String(L"SAST");
    Constant string_21341_Const = new_Constant((Optr)string_21341);
    Constant string_21342_Const = new_Constant((Optr)string_21342);
    // offset:name:abbreviation:. 
    Send PSend21343 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21340, (Optr)string_21341_Const, (Optr)string_21342_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21344 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21343);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21345 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21346 = new_String(L"Pacific Standard Time");
    String string_21347 = new_String(L"PST");
    Constant string_21346_Const = new_Constant((Optr)string_21346);
    Constant string_21347_Const = new_Constant((Optr)string_21347);
    // offset:name:abbreviation:. 
    Send PSend21348 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21345, (Optr)string_21346_Const, (Optr)string_21347_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21349 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21348);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21350 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21351 = new_String(L"Pacific Daylight Time");
    String string_21352 = new_String(L"PDT");
    Constant string_21351_Const = new_Constant((Optr)string_21351);
    Constant string_21352_Const = new_Constant((Optr)string_21352);
    // offset:name:abbreviation:. 
    Send PSend21353 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21350, (Optr)string_21351_Const, (Optr)string_21352_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21354 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21353);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21355 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21356 = new_String(L"Mountain Standard Time");
    String string_21357 = new_String(L"MST");
    Constant string_21356_Const = new_Constant((Optr)string_21356);
    Constant string_21357_Const = new_Constant((Optr)string_21357);
    // offset:name:abbreviation:. 
    Send PSend21358 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21355, (Optr)string_21356_Const, (Optr)string_21357_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21359 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21358);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21360 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21361 = new_String(L"Mountain Daylight Time");
    String string_21362 = new_String(L"MDT");
    Constant string_21361_Const = new_Constant((Optr)string_21361);
    Constant string_21362_Const = new_Constant((Optr)string_21362);
    // offset:name:abbreviation:. 
    Send PSend21363 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21360, (Optr)string_21361_Const, (Optr)string_21362_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21364 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21363);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21365 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21366 = new_String(L"Central Standard Time");
    String string_21367 = new_String(L"CST");
    Constant string_21366_Const = new_Constant((Optr)string_21366);
    Constant string_21367_Const = new_Constant((Optr)string_21367);
    // offset:name:abbreviation:. 
    Send PSend21368 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21365, (Optr)string_21366_Const, (Optr)string_21367_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21369 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21368);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21370 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21371 = new_String(L"Central Daylight Time");
    String string_21372 = new_String(L"CDT");
    Constant string_21371_Const = new_Constant((Optr)string_21371);
    Constant string_21372_Const = new_Constant((Optr)string_21372);
    // offset:name:abbreviation:. 
    Send PSend21373 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21370, (Optr)string_21371_Const, (Optr)string_21372_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21374 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21373);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21375 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21376 = new_String(L"Eastern Standard Time");
    String string_21377 = new_String(L"EST");
    Constant string_21376_Const = new_Constant((Optr)string_21376);
    Constant string_21377_Const = new_Constant((Optr)string_21377);
    // offset:name:abbreviation:. 
    Send PSend21378 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21375, (Optr)string_21376_Const, (Optr)string_21377_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21379 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21378);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21380 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21381 = new_String(L"Eastern Daylight Time");
    String string_21382 = new_String(L"EDT");
    Constant string_21381_Const = new_Constant((Optr)string_21381);
    Constant string_21382_Const = new_Constant((Optr)string_21382);
    // offset:name:abbreviation:. 
    Send PSend21383 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21380, (Optr)string_21381_Const, (Optr)string_21382_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21384 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21383);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21385 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21324 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21325, (Optr)&t_push1, (Optr)string_21326, (Optr)&t_push1, (Optr)string_21327, (Optr)&t_send3, (Optr)PSend21328, (Optr)&t_send2, (Optr)PSend21329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21330, (Optr)&t_push1, (Optr)string_21331, (Optr)&t_push1, (Optr)string_21332, (Optr)&t_send3, (Optr)PSend21333, (Optr)&t_send2, (Optr)PSend21334, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21335, (Optr)&t_push1, (Optr)string_21336, (Optr)&t_push1, (Optr)string_21337, (Optr)&t_send3, (Optr)PSend21338, (Optr)&t_send2, (Optr)PSend21339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21340, (Optr)&t_push1, (Optr)string_21341, (Optr)&t_push1, (Optr)string_21342, (Optr)&t_send3, (Optr)PSend21343, (Optr)&t_send2, (Optr)PSend21344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21345, (Optr)&t_push1, (Optr)string_21346, (Optr)&t_push1, (Optr)string_21347, (Optr)&t_send3, (Optr)PSend21348, (Optr)&t_send2, (Optr)PSend21349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21350, (Optr)&t_push1, (Optr)string_21351, (Optr)&t_push1, (Optr)string_21352, (Optr)&t_send3, (Optr)PSend21353, (Optr)&t_send2, (Optr)PSend21354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21355, (Optr)&t_push1, (Optr)string_21356, (Optr)&t_push1, (Optr)string_21357, (Optr)&t_send3, (Optr)PSend21358, (Optr)&t_send2, (Optr)PSend21359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21360, (Optr)&t_push1, (Optr)string_21361, (Optr)&t_push1, (Optr)string_21362, (Optr)&t_send3, (Optr)PSend21363, (Optr)&t_send2, (Optr)PSend21364, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21365, (Optr)&t_push1, (Optr)string_21366, (Optr)&t_push1, (Optr)string_21367, (Optr)&t_send3, (Optr)PSend21368, (Optr)&t_send2, (Optr)PSend21369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21370, (Optr)&t_push1, (Optr)string_21371, (Optr)&t_push1, (Optr)string_21372, (Optr)&t_send3, (Optr)PSend21373, (Optr)&t_send2, (Optr)PSend21374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21375, (Optr)&t_push1, (Optr)string_21376, (Optr)&t_push1, (Optr)string_21377, (Optr)&t_send3, (Optr)PSend21378, (Optr)&t_send2, (Optr)PSend21379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21380, (Optr)&t_push1, (Optr)string_21381, (Optr)&t_push1, (Optr)string_21382, (Optr)&t_send3, (Optr)PSend21383, (Optr)&t_send2, (Optr)PSend21384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21385, (Optr)&t_method_return);
    Block PBlock21322 = new_Block_with(PArray21323, empty_Array, PThreadedCode21324, 13, PSend21329, PSend21334, PSend21339, PSend21344, PSend21349, PSend21354, PSend21359, PSend21364, PSend21369, PSend21374, PSend21379, PSend21384, PSend21385);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21386 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21387 = new_Send((Optr)PBlock21322, SMB_value_, 1, (Optr)PSend21386);
    Array PThreadedCode21321 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21322, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21386, (Optr)&t_send1, (Optr)PSend21387, (Optr)&t_method_return);
    Method PMethod21320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21321, 1, PSend21387);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21320, HEADER(Chronology_TimeZone_Class));
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