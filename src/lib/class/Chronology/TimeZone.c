#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21599 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21599, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21598, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21601 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21603 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21602 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21603, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21600 = new_Method_with(PArray21601, empty_Array, empty_Array, PThreadedCode21602, 2, PAssign21603, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21600, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21605 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21607 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21606 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21607, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21604 = new_Method_with(PArray21605, empty_Array, empty_Array, PThreadedCode21606, 2, PAssign21607, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21604, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21609 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21612 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5738 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5738_Const = new_Constant((Optr)char_5738);
    // <<. 
    Send PSend21614 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5738_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21615 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21616 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21615);
    Character char_4149 = new_Character(L')');
    Constant char_4149_Const = new_Constant((Optr)char_4149);
    // <<. 
    Send PSend21617 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4149_Const);
    Array PThreadedCode21613 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5738, (Optr)&t_send1, (Optr)PSend21614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21615, (Optr)&t_send1, (Optr)PSend21616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4149, (Optr)&t_send1, (Optr)PSend21617, (Optr)&t_method_return);
    Block PBlock21611 = new_Block_with(PArray21612, empty_Array, PThreadedCode21613, 3, PSend21614, PSend21616, PSend21617);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21618 = new_Send((Optr)PBlock21611, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21610 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21611, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21618, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21608 = new_Method_with(PArray21609, empty_Array, empty_Array, PThreadedCode21610, 2, PSend21618, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21608, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21620 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21622 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21622, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21619 = new_Method_with(PArray21620, empty_Array, empty_Array, PThreadedCode21621, 2, PAssign21622, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21619, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21624 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21624, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21623, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21626 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21626, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21625, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21628 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21631 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21633 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21634 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21635 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21636 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21632 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21635, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21636, (Optr)&t_method_return);
    Block PBlock21630 = new_Block_with(PArray21631, empty_Array, PThreadedCode21632, 4, PSend21633, PSend21634, PSend21635, PSend21636);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21637 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21638 = new_Send((Optr)PBlock21630, SMB_value_, 1, (Optr)PSend21637);
    Array PThreadedCode21629 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21630, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21637, (Optr)&t_send1, (Optr)PSend21638, (Optr)&t_method_return);
    Method PMethod21627 = new_Method_with(PArray21628, empty_Array, empty_Array, PThreadedCode21629, 1, PSend21638);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21627, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21641 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21643 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21645 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21646 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21647 = new_Send((Optr)PSend21645, SMB__equals_, 1, (Optr)PSend21646);
    Array PThreadedCode21644 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21645, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21646, (Optr)&t_send1, (Optr)PSend21647, (Optr)&t_method_return);
    Block PBlock21642 = new_Block_with(PArray21643, empty_Array, PThreadedCode21644, 1, PSend21647);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21648 = new_Send((Optr)PSend21641, SMB_detect_, 1, (Optr)PBlock21642);
    Array PThreadedCode21640 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21641, (Optr)&t_push_closure, (Optr)PBlock21642, (Optr)&t_send1, (Optr)PSend21648, (Optr)&t_method_return);
    Method PMethod21639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21640, 1, PSend21648);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21639, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21652 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21654 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21655 = new_String(L"Universal Time");
    String string_21656 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21655_Const = new_Constant((Optr)string_21655);
    Constant string_21656_Const = new_Constant((Optr)string_21656);
    // offset:name:abbreviation:. 
    Send PSend21657 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21654, (Optr)string_21655_Const, (Optr)string_21656_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21658 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21657);
    // hours. 
    Send PSend21659 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21660 = new_String(L"Greenwich Mean Time");
    String string_21661 = new_String(L"GMT");
    Constant string_21660_Const = new_Constant((Optr)string_21660);
    Constant string_21661_Const = new_Constant((Optr)string_21661);
    // offset:name:abbreviation:. 
    Send PSend21662 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21659, (Optr)string_21660_Const, (Optr)string_21661_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21663 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21662);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21664 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21665 = new_String(L"British Summer Time");
    String string_21666 = new_String(L"BST");
    Constant string_21665_Const = new_Constant((Optr)string_21665);
    Constant string_21666_Const = new_Constant((Optr)string_21666);
    // offset:name:abbreviation:. 
    Send PSend21667 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21664, (Optr)string_21665_Const, (Optr)string_21666_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21668 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21667);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21669 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21670 = new_String(L"South African Standard Time");
    String string_21671 = new_String(L"SAST");
    Constant string_21670_Const = new_Constant((Optr)string_21670);
    Constant string_21671_Const = new_Constant((Optr)string_21671);
    // offset:name:abbreviation:. 
    Send PSend21672 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21669, (Optr)string_21670_Const, (Optr)string_21671_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21673 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21672);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21674 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21675 = new_String(L"Pacific Standard Time");
    String string_21676 = new_String(L"PST");
    Constant string_21675_Const = new_Constant((Optr)string_21675);
    Constant string_21676_Const = new_Constant((Optr)string_21676);
    // offset:name:abbreviation:. 
    Send PSend21677 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21674, (Optr)string_21675_Const, (Optr)string_21676_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21678 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21677);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21679 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21680 = new_String(L"Pacific Daylight Time");
    String string_21681 = new_String(L"PDT");
    Constant string_21680_Const = new_Constant((Optr)string_21680);
    Constant string_21681_Const = new_Constant((Optr)string_21681);
    // offset:name:abbreviation:. 
    Send PSend21682 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21679, (Optr)string_21680_Const, (Optr)string_21681_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21683 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21682);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21684 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21685 = new_String(L"Mountain Standard Time");
    String string_21686 = new_String(L"MST");
    Constant string_21685_Const = new_Constant((Optr)string_21685);
    Constant string_21686_Const = new_Constant((Optr)string_21686);
    // offset:name:abbreviation:. 
    Send PSend21687 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21684, (Optr)string_21685_Const, (Optr)string_21686_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21688 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21687);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21689 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21690 = new_String(L"Mountain Daylight Time");
    String string_21691 = new_String(L"MDT");
    Constant string_21690_Const = new_Constant((Optr)string_21690);
    Constant string_21691_Const = new_Constant((Optr)string_21691);
    // offset:name:abbreviation:. 
    Send PSend21692 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21689, (Optr)string_21690_Const, (Optr)string_21691_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21693 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21692);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21694 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21695 = new_String(L"Central Standard Time");
    String string_21696 = new_String(L"CST");
    Constant string_21695_Const = new_Constant((Optr)string_21695);
    Constant string_21696_Const = new_Constant((Optr)string_21696);
    // offset:name:abbreviation:. 
    Send PSend21697 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21694, (Optr)string_21695_Const, (Optr)string_21696_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21698 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21697);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21699 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21700 = new_String(L"Central Daylight Time");
    String string_21701 = new_String(L"CDT");
    Constant string_21700_Const = new_Constant((Optr)string_21700);
    Constant string_21701_Const = new_Constant((Optr)string_21701);
    // offset:name:abbreviation:. 
    Send PSend21702 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21699, (Optr)string_21700_Const, (Optr)string_21701_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21703 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21702);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21704 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21705 = new_String(L"Eastern Standard Time");
    String string_21706 = new_String(L"EST");
    Constant string_21705_Const = new_Constant((Optr)string_21705);
    Constant string_21706_Const = new_Constant((Optr)string_21706);
    // offset:name:abbreviation:. 
    Send PSend21707 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21704, (Optr)string_21705_Const, (Optr)string_21706_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21708 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21707);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21709 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21710 = new_String(L"Eastern Daylight Time");
    String string_21711 = new_String(L"EDT");
    Constant string_21710_Const = new_Constant((Optr)string_21710);
    Constant string_21711_Const = new_Constant((Optr)string_21711);
    // offset:name:abbreviation:. 
    Send PSend21712 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21709, (Optr)string_21710_Const, (Optr)string_21711_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21713 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21712);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21714 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21653 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21654, (Optr)&t_push1, (Optr)string_21655, (Optr)&t_push1, (Optr)string_21656, (Optr)&t_send3, (Optr)PSend21657, (Optr)&t_send2, (Optr)PSend21658, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21659, (Optr)&t_push1, (Optr)string_21660, (Optr)&t_push1, (Optr)string_21661, (Optr)&t_send3, (Optr)PSend21662, (Optr)&t_send2, (Optr)PSend21663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21664, (Optr)&t_push1, (Optr)string_21665, (Optr)&t_push1, (Optr)string_21666, (Optr)&t_send3, (Optr)PSend21667, (Optr)&t_send2, (Optr)PSend21668, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21669, (Optr)&t_push1, (Optr)string_21670, (Optr)&t_push1, (Optr)string_21671, (Optr)&t_send3, (Optr)PSend21672, (Optr)&t_send2, (Optr)PSend21673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21674, (Optr)&t_push1, (Optr)string_21675, (Optr)&t_push1, (Optr)string_21676, (Optr)&t_send3, (Optr)PSend21677, (Optr)&t_send2, (Optr)PSend21678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21679, (Optr)&t_push1, (Optr)string_21680, (Optr)&t_push1, (Optr)string_21681, (Optr)&t_send3, (Optr)PSend21682, (Optr)&t_send2, (Optr)PSend21683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21684, (Optr)&t_push1, (Optr)string_21685, (Optr)&t_push1, (Optr)string_21686, (Optr)&t_send3, (Optr)PSend21687, (Optr)&t_send2, (Optr)PSend21688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21689, (Optr)&t_push1, (Optr)string_21690, (Optr)&t_push1, (Optr)string_21691, (Optr)&t_send3, (Optr)PSend21692, (Optr)&t_send2, (Optr)PSend21693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21694, (Optr)&t_push1, (Optr)string_21695, (Optr)&t_push1, (Optr)string_21696, (Optr)&t_send3, (Optr)PSend21697, (Optr)&t_send2, (Optr)PSend21698, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21699, (Optr)&t_push1, (Optr)string_21700, (Optr)&t_push1, (Optr)string_21701, (Optr)&t_send3, (Optr)PSend21702, (Optr)&t_send2, (Optr)PSend21703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21704, (Optr)&t_push1, (Optr)string_21705, (Optr)&t_push1, (Optr)string_21706, (Optr)&t_send3, (Optr)PSend21707, (Optr)&t_send2, (Optr)PSend21708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21709, (Optr)&t_push1, (Optr)string_21710, (Optr)&t_push1, (Optr)string_21711, (Optr)&t_send3, (Optr)PSend21712, (Optr)&t_send2, (Optr)PSend21713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21714, (Optr)&t_method_return);
    Block PBlock21651 = new_Block_with(PArray21652, empty_Array, PThreadedCode21653, 13, PSend21658, PSend21663, PSend21668, PSend21673, PSend21678, PSend21683, PSend21688, PSend21693, PSend21698, PSend21703, PSend21708, PSend21713, PSend21714);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21715 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21716 = new_Send((Optr)PBlock21651, SMB_value_, 1, (Optr)PSend21715);
    Array PThreadedCode21650 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21651, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21715, (Optr)&t_send1, (Optr)PSend21716, (Optr)&t_method_return);
    Method PMethod21649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21650, 1, PSend21716);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21649, HEADER(Chronology_TimeZone_Class));
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