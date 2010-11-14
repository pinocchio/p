#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21470 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21469 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21470, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21469, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21472 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21474 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21473 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21474, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21471 = new_Method_with(PArray21472, empty_Array, empty_Array, PThreadedCode21473, 2, PAssign21474, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21471, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21476 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21478 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21477 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21478, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21475 = new_Method_with(PArray21476, empty_Array, empty_Array, PThreadedCode21477, 2, PAssign21478, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21475, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21480 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21483 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend21485 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21486 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21487 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21486);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21488 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21484 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend21485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21486, (Optr)&t_send1, (Optr)PSend21487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21488, (Optr)&t_method_return);
    Block PBlock21482 = new_Block_with(PArray21483, empty_Array, PThreadedCode21484, 3, PSend21485, PSend21487, PSend21488);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21489 = new_Send((Optr)PBlock21482, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21481 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21482, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21489, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21479 = new_Method_with(PArray21480, empty_Array, empty_Array, PThreadedCode21481, 2, PSend21489, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21479, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21491 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21493 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21492 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21493, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21490 = new_Method_with(PArray21491, empty_Array, empty_Array, PThreadedCode21492, 2, PAssign21493, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21490, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21495 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21495, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21494, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21497 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21497, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21496, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21499 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21502 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21504 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21505 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21506 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21507 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21503 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21504, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21506, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21507, (Optr)&t_method_return);
    Block PBlock21501 = new_Block_with(PArray21502, empty_Array, PThreadedCode21503, 4, PSend21504, PSend21505, PSend21506, PSend21507);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21508 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21509 = new_Send((Optr)PBlock21501, SMB_value_, 1, (Optr)PSend21508);
    Array PThreadedCode21500 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21501, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21508, (Optr)&t_send1, (Optr)PSend21509, (Optr)&t_method_return);
    Method PMethod21498 = new_Method_with(PArray21499, empty_Array, empty_Array, PThreadedCode21500, 1, PSend21509);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21498, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21512 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21514 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21516 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21517 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21518 = new_Send((Optr)PSend21516, SMB__equals_, 1, (Optr)PSend21517);
    Array PThreadedCode21515 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21516, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21517, (Optr)&t_send1, (Optr)PSend21518, (Optr)&t_method_return);
    Block PBlock21513 = new_Block_with(PArray21514, empty_Array, PThreadedCode21515, 1, PSend21518);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21519 = new_Send((Optr)PSend21512, SMB_detect_, 1, (Optr)PBlock21513);
    Array PThreadedCode21511 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21512, (Optr)&t_push_closure, (Optr)PBlock21513, (Optr)&t_send1, (Optr)PSend21519, (Optr)&t_method_return);
    Method PMethod21510 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21511, 1, PSend21519);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21510, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21523 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21525 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21526 = new_String(L"Universal Time");
    String string_21527 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21526_Const = new_Constant((Optr)string_21526);
    Constant string_21527_Const = new_Constant((Optr)string_21527);
    // offset:name:abbreviation:. 
    Send PSend21528 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21525, (Optr)string_21526_Const, (Optr)string_21527_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21529 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21528);
    // hours. 
    Send PSend21530 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21531 = new_String(L"Greenwich Mean Time");
    String string_21532 = new_String(L"GMT");
    Constant string_21531_Const = new_Constant((Optr)string_21531);
    Constant string_21532_Const = new_Constant((Optr)string_21532);
    // offset:name:abbreviation:. 
    Send PSend21533 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21530, (Optr)string_21531_Const, (Optr)string_21532_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21534 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21533);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21535 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21536 = new_String(L"British Summer Time");
    String string_21537 = new_String(L"BST");
    Constant string_21536_Const = new_Constant((Optr)string_21536);
    Constant string_21537_Const = new_Constant((Optr)string_21537);
    // offset:name:abbreviation:. 
    Send PSend21538 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21535, (Optr)string_21536_Const, (Optr)string_21537_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21539 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21538);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21540 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21541 = new_String(L"South African Standard Time");
    String string_21542 = new_String(L"SAST");
    Constant string_21541_Const = new_Constant((Optr)string_21541);
    Constant string_21542_Const = new_Constant((Optr)string_21542);
    // offset:name:abbreviation:. 
    Send PSend21543 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21540, (Optr)string_21541_Const, (Optr)string_21542_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21544 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21543);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21545 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21546 = new_String(L"Pacific Standard Time");
    String string_21547 = new_String(L"PST");
    Constant string_21546_Const = new_Constant((Optr)string_21546);
    Constant string_21547_Const = new_Constant((Optr)string_21547);
    // offset:name:abbreviation:. 
    Send PSend21548 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21545, (Optr)string_21546_Const, (Optr)string_21547_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21549 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21548);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21550 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21551 = new_String(L"Pacific Daylight Time");
    String string_21552 = new_String(L"PDT");
    Constant string_21551_Const = new_Constant((Optr)string_21551);
    Constant string_21552_Const = new_Constant((Optr)string_21552);
    // offset:name:abbreviation:. 
    Send PSend21553 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21550, (Optr)string_21551_Const, (Optr)string_21552_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21554 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21553);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21555 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21556 = new_String(L"Mountain Standard Time");
    String string_21557 = new_String(L"MST");
    Constant string_21556_Const = new_Constant((Optr)string_21556);
    Constant string_21557_Const = new_Constant((Optr)string_21557);
    // offset:name:abbreviation:. 
    Send PSend21558 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21555, (Optr)string_21556_Const, (Optr)string_21557_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21559 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21558);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21560 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21561 = new_String(L"Mountain Daylight Time");
    String string_21562 = new_String(L"MDT");
    Constant string_21561_Const = new_Constant((Optr)string_21561);
    Constant string_21562_Const = new_Constant((Optr)string_21562);
    // offset:name:abbreviation:. 
    Send PSend21563 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21560, (Optr)string_21561_Const, (Optr)string_21562_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21564 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21563);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21565 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21566 = new_String(L"Central Standard Time");
    String string_21567 = new_String(L"CST");
    Constant string_21566_Const = new_Constant((Optr)string_21566);
    Constant string_21567_Const = new_Constant((Optr)string_21567);
    // offset:name:abbreviation:. 
    Send PSend21568 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21565, (Optr)string_21566_Const, (Optr)string_21567_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21569 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21568);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21570 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21571 = new_String(L"Central Daylight Time");
    String string_21572 = new_String(L"CDT");
    Constant string_21571_Const = new_Constant((Optr)string_21571);
    Constant string_21572_Const = new_Constant((Optr)string_21572);
    // offset:name:abbreviation:. 
    Send PSend21573 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21570, (Optr)string_21571_Const, (Optr)string_21572_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21574 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21573);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21575 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21576 = new_String(L"Eastern Standard Time");
    String string_21577 = new_String(L"EST");
    Constant string_21576_Const = new_Constant((Optr)string_21576);
    Constant string_21577_Const = new_Constant((Optr)string_21577);
    // offset:name:abbreviation:. 
    Send PSend21578 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21575, (Optr)string_21576_Const, (Optr)string_21577_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21579 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21578);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21580 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21581 = new_String(L"Eastern Daylight Time");
    String string_21582 = new_String(L"EDT");
    Constant string_21581_Const = new_Constant((Optr)string_21581);
    Constant string_21582_Const = new_Constant((Optr)string_21582);
    // offset:name:abbreviation:. 
    Send PSend21583 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21580, (Optr)string_21581_Const, (Optr)string_21582_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21584 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21583);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21585 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21524 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21525, (Optr)&t_push1, (Optr)string_21526, (Optr)&t_push1, (Optr)string_21527, (Optr)&t_send3, (Optr)PSend21528, (Optr)&t_send2, (Optr)PSend21529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21530, (Optr)&t_push1, (Optr)string_21531, (Optr)&t_push1, (Optr)string_21532, (Optr)&t_send3, (Optr)PSend21533, (Optr)&t_send2, (Optr)PSend21534, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21535, (Optr)&t_push1, (Optr)string_21536, (Optr)&t_push1, (Optr)string_21537, (Optr)&t_send3, (Optr)PSend21538, (Optr)&t_send2, (Optr)PSend21539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21540, (Optr)&t_push1, (Optr)string_21541, (Optr)&t_push1, (Optr)string_21542, (Optr)&t_send3, (Optr)PSend21543, (Optr)&t_send2, (Optr)PSend21544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21545, (Optr)&t_push1, (Optr)string_21546, (Optr)&t_push1, (Optr)string_21547, (Optr)&t_send3, (Optr)PSend21548, (Optr)&t_send2, (Optr)PSend21549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21550, (Optr)&t_push1, (Optr)string_21551, (Optr)&t_push1, (Optr)string_21552, (Optr)&t_send3, (Optr)PSend21553, (Optr)&t_send2, (Optr)PSend21554, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21555, (Optr)&t_push1, (Optr)string_21556, (Optr)&t_push1, (Optr)string_21557, (Optr)&t_send3, (Optr)PSend21558, (Optr)&t_send2, (Optr)PSend21559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21560, (Optr)&t_push1, (Optr)string_21561, (Optr)&t_push1, (Optr)string_21562, (Optr)&t_send3, (Optr)PSend21563, (Optr)&t_send2, (Optr)PSend21564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21565, (Optr)&t_push1, (Optr)string_21566, (Optr)&t_push1, (Optr)string_21567, (Optr)&t_send3, (Optr)PSend21568, (Optr)&t_send2, (Optr)PSend21569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21570, (Optr)&t_push1, (Optr)string_21571, (Optr)&t_push1, (Optr)string_21572, (Optr)&t_send3, (Optr)PSend21573, (Optr)&t_send2, (Optr)PSend21574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21575, (Optr)&t_push1, (Optr)string_21576, (Optr)&t_push1, (Optr)string_21577, (Optr)&t_send3, (Optr)PSend21578, (Optr)&t_send2, (Optr)PSend21579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21580, (Optr)&t_push1, (Optr)string_21581, (Optr)&t_push1, (Optr)string_21582, (Optr)&t_send3, (Optr)PSend21583, (Optr)&t_send2, (Optr)PSend21584, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21585, (Optr)&t_method_return);
    Block PBlock21522 = new_Block_with(PArray21523, empty_Array, PThreadedCode21524, 13, PSend21529, PSend21534, PSend21539, PSend21544, PSend21549, PSend21554, PSend21559, PSend21564, PSend21569, PSend21574, PSend21579, PSend21584, PSend21585);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21586 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21587 = new_Send((Optr)PBlock21522, SMB_value_, 1, (Optr)PSend21586);
    Array PThreadedCode21521 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21522, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21586, (Optr)&t_send1, (Optr)PSend21587, (Optr)&t_method_return);
    Method PMethod21520 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21521, 1, PSend21587);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21520, HEADER(Chronology_TimeZone_Class));
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