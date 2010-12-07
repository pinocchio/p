#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21502 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21501 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21502, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21501, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21504 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21506 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21506, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21503 = new_Method_with(PArray21504, empty_Array, empty_Array, PThreadedCode21505, 2, PAssign21506, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21503, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21508 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21510 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21509 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21510, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21507 = new_Method_with(PArray21508, empty_Array, empty_Array, PThreadedCode21509, 2, PAssign21510, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21507, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21512 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21515 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5736 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5736_Const = new_Constant((Optr)char_5736);
    // <<. 
    Send PSend21517 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5736_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21518 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21519 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21518);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21520 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21516 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5736, (Optr)&t_send1, (Optr)PSend21517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21518, (Optr)&t_send1, (Optr)PSend21519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21520, (Optr)&t_method_return);
    Block PBlock21514 = new_Block_with(PArray21515, empty_Array, PThreadedCode21516, 3, PSend21517, PSend21519, PSend21520);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21521 = new_Send((Optr)PBlock21514, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21513 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21514, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21521, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21511 = new_Method_with(PArray21512, empty_Array, empty_Array, PThreadedCode21513, 2, PSend21521, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21511, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21523 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21525 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21524 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21525, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21522 = new_Method_with(PArray21523, empty_Array, empty_Array, PThreadedCode21524, 2, PAssign21525, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21522, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21527 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21527, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21526, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21529 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21529, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21528, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21531 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21534 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21536 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21537 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21538 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21539 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21535 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21536, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21537, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21538, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21539, (Optr)&t_method_return);
    Block PBlock21533 = new_Block_with(PArray21534, empty_Array, PThreadedCode21535, 4, PSend21536, PSend21537, PSend21538, PSend21539);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21540 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21541 = new_Send((Optr)PBlock21533, SMB_value_, 1, (Optr)PSend21540);
    Array PThreadedCode21532 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21533, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21540, (Optr)&t_send1, (Optr)PSend21541, (Optr)&t_method_return);
    Method PMethod21530 = new_Method_with(PArray21531, empty_Array, empty_Array, PThreadedCode21532, 1, PSend21541);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21530, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21544 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21546 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21548 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21549 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21550 = new_Send((Optr)PSend21548, SMB__equals_, 1, (Optr)PSend21549);
    Array PThreadedCode21547 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21548, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21549, (Optr)&t_send1, (Optr)PSend21550, (Optr)&t_method_return);
    Block PBlock21545 = new_Block_with(PArray21546, empty_Array, PThreadedCode21547, 1, PSend21550);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21551 = new_Send((Optr)PSend21544, SMB_detect_, 1, (Optr)PBlock21545);
    Array PThreadedCode21543 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21544, (Optr)&t_push_closure, (Optr)PBlock21545, (Optr)&t_send1, (Optr)PSend21551, (Optr)&t_method_return);
    Method PMethod21542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21543, 1, PSend21551);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21542, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21555 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21557 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21558 = new_String(L"Universal Time");
    String string_21559 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21558_Const = new_Constant((Optr)string_21558);
    Constant string_21559_Const = new_Constant((Optr)string_21559);
    // offset:name:abbreviation:. 
    Send PSend21560 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21557, (Optr)string_21558_Const, (Optr)string_21559_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21561 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21560);
    // hours. 
    Send PSend21562 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21563 = new_String(L"Greenwich Mean Time");
    String string_21564 = new_String(L"GMT");
    Constant string_21563_Const = new_Constant((Optr)string_21563);
    Constant string_21564_Const = new_Constant((Optr)string_21564);
    // offset:name:abbreviation:. 
    Send PSend21565 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21562, (Optr)string_21563_Const, (Optr)string_21564_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21566 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21565);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21567 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21568 = new_String(L"British Summer Time");
    String string_21569 = new_String(L"BST");
    Constant string_21568_Const = new_Constant((Optr)string_21568);
    Constant string_21569_Const = new_Constant((Optr)string_21569);
    // offset:name:abbreviation:. 
    Send PSend21570 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21567, (Optr)string_21568_Const, (Optr)string_21569_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21571 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21570);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21572 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21573 = new_String(L"South African Standard Time");
    String string_21574 = new_String(L"SAST");
    Constant string_21573_Const = new_Constant((Optr)string_21573);
    Constant string_21574_Const = new_Constant((Optr)string_21574);
    // offset:name:abbreviation:. 
    Send PSend21575 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21572, (Optr)string_21573_Const, (Optr)string_21574_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21576 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21575);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21577 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21578 = new_String(L"Pacific Standard Time");
    String string_21579 = new_String(L"PST");
    Constant string_21578_Const = new_Constant((Optr)string_21578);
    Constant string_21579_Const = new_Constant((Optr)string_21579);
    // offset:name:abbreviation:. 
    Send PSend21580 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21577, (Optr)string_21578_Const, (Optr)string_21579_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21581 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21580);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21582 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21583 = new_String(L"Pacific Daylight Time");
    String string_21584 = new_String(L"PDT");
    Constant string_21583_Const = new_Constant((Optr)string_21583);
    Constant string_21584_Const = new_Constant((Optr)string_21584);
    // offset:name:abbreviation:. 
    Send PSend21585 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21582, (Optr)string_21583_Const, (Optr)string_21584_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21586 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21585);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21587 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21588 = new_String(L"Mountain Standard Time");
    String string_21589 = new_String(L"MST");
    Constant string_21588_Const = new_Constant((Optr)string_21588);
    Constant string_21589_Const = new_Constant((Optr)string_21589);
    // offset:name:abbreviation:. 
    Send PSend21590 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21587, (Optr)string_21588_Const, (Optr)string_21589_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21591 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21590);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21592 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21593 = new_String(L"Mountain Daylight Time");
    String string_21594 = new_String(L"MDT");
    Constant string_21593_Const = new_Constant((Optr)string_21593);
    Constant string_21594_Const = new_Constant((Optr)string_21594);
    // offset:name:abbreviation:. 
    Send PSend21595 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21592, (Optr)string_21593_Const, (Optr)string_21594_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21596 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21595);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21597 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21598 = new_String(L"Central Standard Time");
    String string_21599 = new_String(L"CST");
    Constant string_21598_Const = new_Constant((Optr)string_21598);
    Constant string_21599_Const = new_Constant((Optr)string_21599);
    // offset:name:abbreviation:. 
    Send PSend21600 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21597, (Optr)string_21598_Const, (Optr)string_21599_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21601 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21600);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21602 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21603 = new_String(L"Central Daylight Time");
    String string_21604 = new_String(L"CDT");
    Constant string_21603_Const = new_Constant((Optr)string_21603);
    Constant string_21604_Const = new_Constant((Optr)string_21604);
    // offset:name:abbreviation:. 
    Send PSend21605 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21602, (Optr)string_21603_Const, (Optr)string_21604_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21606 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21605);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21607 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21608 = new_String(L"Eastern Standard Time");
    String string_21609 = new_String(L"EST");
    Constant string_21608_Const = new_Constant((Optr)string_21608);
    Constant string_21609_Const = new_Constant((Optr)string_21609);
    // offset:name:abbreviation:. 
    Send PSend21610 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21607, (Optr)string_21608_Const, (Optr)string_21609_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21611 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21610);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21612 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21613 = new_String(L"Eastern Daylight Time");
    String string_21614 = new_String(L"EDT");
    Constant string_21613_Const = new_Constant((Optr)string_21613);
    Constant string_21614_Const = new_Constant((Optr)string_21614);
    // offset:name:abbreviation:. 
    Send PSend21615 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21612, (Optr)string_21613_Const, (Optr)string_21614_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21616 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21615);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21617 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21556 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21557, (Optr)&t_push1, (Optr)string_21558, (Optr)&t_push1, (Optr)string_21559, (Optr)&t_send3, (Optr)PSend21560, (Optr)&t_send2, (Optr)PSend21561, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21562, (Optr)&t_push1, (Optr)string_21563, (Optr)&t_push1, (Optr)string_21564, (Optr)&t_send3, (Optr)PSend21565, (Optr)&t_send2, (Optr)PSend21566, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21567, (Optr)&t_push1, (Optr)string_21568, (Optr)&t_push1, (Optr)string_21569, (Optr)&t_send3, (Optr)PSend21570, (Optr)&t_send2, (Optr)PSend21571, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21572, (Optr)&t_push1, (Optr)string_21573, (Optr)&t_push1, (Optr)string_21574, (Optr)&t_send3, (Optr)PSend21575, (Optr)&t_send2, (Optr)PSend21576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21577, (Optr)&t_push1, (Optr)string_21578, (Optr)&t_push1, (Optr)string_21579, (Optr)&t_send3, (Optr)PSend21580, (Optr)&t_send2, (Optr)PSend21581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21582, (Optr)&t_push1, (Optr)string_21583, (Optr)&t_push1, (Optr)string_21584, (Optr)&t_send3, (Optr)PSend21585, (Optr)&t_send2, (Optr)PSend21586, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21587, (Optr)&t_push1, (Optr)string_21588, (Optr)&t_push1, (Optr)string_21589, (Optr)&t_send3, (Optr)PSend21590, (Optr)&t_send2, (Optr)PSend21591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21592, (Optr)&t_push1, (Optr)string_21593, (Optr)&t_push1, (Optr)string_21594, (Optr)&t_send3, (Optr)PSend21595, (Optr)&t_send2, (Optr)PSend21596, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21597, (Optr)&t_push1, (Optr)string_21598, (Optr)&t_push1, (Optr)string_21599, (Optr)&t_send3, (Optr)PSend21600, (Optr)&t_send2, (Optr)PSend21601, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21602, (Optr)&t_push1, (Optr)string_21603, (Optr)&t_push1, (Optr)string_21604, (Optr)&t_send3, (Optr)PSend21605, (Optr)&t_send2, (Optr)PSend21606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21607, (Optr)&t_push1, (Optr)string_21608, (Optr)&t_push1, (Optr)string_21609, (Optr)&t_send3, (Optr)PSend21610, (Optr)&t_send2, (Optr)PSend21611, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21612, (Optr)&t_push1, (Optr)string_21613, (Optr)&t_push1, (Optr)string_21614, (Optr)&t_send3, (Optr)PSend21615, (Optr)&t_send2, (Optr)PSend21616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21617, (Optr)&t_method_return);
    Block PBlock21554 = new_Block_with(PArray21555, empty_Array, PThreadedCode21556, 13, PSend21561, PSend21566, PSend21571, PSend21576, PSend21581, PSend21586, PSend21591, PSend21596, PSend21601, PSend21606, PSend21611, PSend21616, PSend21617);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21618 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21619 = new_Send((Optr)PBlock21554, SMB_value_, 1, (Optr)PSend21618);
    Array PThreadedCode21553 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21554, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21618, (Optr)&t_send1, (Optr)PSend21619, (Optr)&t_method_return);
    Method PMethod21552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21553, 1, PSend21619);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21552, HEADER(Chronology_TimeZone_Class));
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