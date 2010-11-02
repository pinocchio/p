#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21110 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21109 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21110, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21109, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21112 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21114 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21113 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21114, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21111 = new_Method_with(PArray21112, empty_Array, empty_Array, PThreadedCode21113, 2, PAssign21114, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21111, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21116 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21118 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21117 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21118, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21115 = new_Method_with(PArray21116, empty_Array, empty_Array, PThreadedCode21117, 2, PAssign21118, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21115, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21120 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21123 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend21125 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21126 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21127 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21126);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21128 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21124 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend21125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21126, (Optr)&t_send1, (Optr)PSend21127, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21128, (Optr)&t_method_return);
    Block PBlock21122 = new_Block_with(PArray21123, empty_Array, PThreadedCode21124, 3, PSend21125, PSend21127, PSend21128);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21129 = new_Send((Optr)PBlock21122, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21121 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21122, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21129, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21119 = new_Method_with(PArray21120, empty_Array, empty_Array, PThreadedCode21121, 2, PSend21129, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21119, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21131 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21133 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21132 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21133, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21130 = new_Method_with(PArray21131, empty_Array, empty_Array, PThreadedCode21132, 2, PAssign21133, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21130, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21135 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21135, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21134, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21137 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21137, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21136, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21139 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21142 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21144 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21145 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21146 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21147 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21143 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21144, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21145, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21146, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21147, (Optr)&t_method_return);
    Block PBlock21141 = new_Block_with(PArray21142, empty_Array, PThreadedCode21143, 4, PSend21144, PSend21145, PSend21146, PSend21147);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21148 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21149 = new_Send((Optr)PBlock21141, SMB_value_, 1, (Optr)PSend21148);
    Array PThreadedCode21140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21141, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21148, (Optr)&t_send1, (Optr)PSend21149, (Optr)&t_method_return);
    Method PMethod21138 = new_Method_with(PArray21139, empty_Array, empty_Array, PThreadedCode21140, 1, PSend21149);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21138, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21152 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21154 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21156 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21157 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21158 = new_Send((Optr)PSend21156, SMB__equals_, 1, (Optr)PSend21157);
    Array PThreadedCode21155 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21156, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21157, (Optr)&t_send1, (Optr)PSend21158, (Optr)&t_method_return);
    Block PBlock21153 = new_Block_with(PArray21154, empty_Array, PThreadedCode21155, 1, PSend21158);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21159 = new_Send((Optr)PSend21152, SMB_detect_, 1, (Optr)PBlock21153);
    Array PThreadedCode21151 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21152, (Optr)&t_push_closure, (Optr)PBlock21153, (Optr)&t_send1, (Optr)PSend21159, (Optr)&t_method_return);
    Method PMethod21150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21151, 1, PSend21159);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21150, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21163 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21165 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21166 = new_String(L"Universal Time");
    String string_21167 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21166_Const = new_Constant((Optr)string_21166);
    Constant string_21167_Const = new_Constant((Optr)string_21167);
    // offset:name:abbreviation:. 
    Send PSend21168 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21165, (Optr)string_21166_Const, (Optr)string_21167_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21169 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21168);
    // hours. 
    Send PSend21170 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21171 = new_String(L"Greenwich Mean Time");
    String string_21172 = new_String(L"GMT");
    Constant string_21171_Const = new_Constant((Optr)string_21171);
    Constant string_21172_Const = new_Constant((Optr)string_21172);
    // offset:name:abbreviation:. 
    Send PSend21173 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21170, (Optr)string_21171_Const, (Optr)string_21172_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21174 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21173);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21175 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21176 = new_String(L"British Summer Time");
    String string_21177 = new_String(L"BST");
    Constant string_21176_Const = new_Constant((Optr)string_21176);
    Constant string_21177_Const = new_Constant((Optr)string_21177);
    // offset:name:abbreviation:. 
    Send PSend21178 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21175, (Optr)string_21176_Const, (Optr)string_21177_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21179 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21178);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21180 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21181 = new_String(L"South African Standard Time");
    String string_21182 = new_String(L"SAST");
    Constant string_21181_Const = new_Constant((Optr)string_21181);
    Constant string_21182_Const = new_Constant((Optr)string_21182);
    // offset:name:abbreviation:. 
    Send PSend21183 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21180, (Optr)string_21181_Const, (Optr)string_21182_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21184 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21183);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21185 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21186 = new_String(L"Pacific Standard Time");
    String string_21187 = new_String(L"PST");
    Constant string_21186_Const = new_Constant((Optr)string_21186);
    Constant string_21187_Const = new_Constant((Optr)string_21187);
    // offset:name:abbreviation:. 
    Send PSend21188 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21185, (Optr)string_21186_Const, (Optr)string_21187_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21189 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21188);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21190 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21191 = new_String(L"Pacific Daylight Time");
    String string_21192 = new_String(L"PDT");
    Constant string_21191_Const = new_Constant((Optr)string_21191);
    Constant string_21192_Const = new_Constant((Optr)string_21192);
    // offset:name:abbreviation:. 
    Send PSend21193 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21190, (Optr)string_21191_Const, (Optr)string_21192_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21194 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21193);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21195 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21196 = new_String(L"Mountain Standard Time");
    String string_21197 = new_String(L"MST");
    Constant string_21196_Const = new_Constant((Optr)string_21196);
    Constant string_21197_Const = new_Constant((Optr)string_21197);
    // offset:name:abbreviation:. 
    Send PSend21198 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21195, (Optr)string_21196_Const, (Optr)string_21197_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21199 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21198);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21200 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21201 = new_String(L"Mountain Daylight Time");
    String string_21202 = new_String(L"MDT");
    Constant string_21201_Const = new_Constant((Optr)string_21201);
    Constant string_21202_Const = new_Constant((Optr)string_21202);
    // offset:name:abbreviation:. 
    Send PSend21203 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21200, (Optr)string_21201_Const, (Optr)string_21202_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21204 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21203);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21205 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21206 = new_String(L"Central Standard Time");
    String string_21207 = new_String(L"CST");
    Constant string_21206_Const = new_Constant((Optr)string_21206);
    Constant string_21207_Const = new_Constant((Optr)string_21207);
    // offset:name:abbreviation:. 
    Send PSend21208 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21205, (Optr)string_21206_Const, (Optr)string_21207_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21209 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21208);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21210 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21211 = new_String(L"Central Daylight Time");
    String string_21212 = new_String(L"CDT");
    Constant string_21211_Const = new_Constant((Optr)string_21211);
    Constant string_21212_Const = new_Constant((Optr)string_21212);
    // offset:name:abbreviation:. 
    Send PSend21213 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21210, (Optr)string_21211_Const, (Optr)string_21212_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21214 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21213);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21215 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21216 = new_String(L"Eastern Standard Time");
    String string_21217 = new_String(L"EST");
    Constant string_21216_Const = new_Constant((Optr)string_21216);
    Constant string_21217_Const = new_Constant((Optr)string_21217);
    // offset:name:abbreviation:. 
    Send PSend21218 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21215, (Optr)string_21216_Const, (Optr)string_21217_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21219 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21218);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21220 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21221 = new_String(L"Eastern Daylight Time");
    String string_21222 = new_String(L"EDT");
    Constant string_21221_Const = new_Constant((Optr)string_21221);
    Constant string_21222_Const = new_Constant((Optr)string_21222);
    // offset:name:abbreviation:. 
    Send PSend21223 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21220, (Optr)string_21221_Const, (Optr)string_21222_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21224 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21223);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21225 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21164 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21165, (Optr)&t_push1, (Optr)string_21166, (Optr)&t_push1, (Optr)string_21167, (Optr)&t_send3, (Optr)PSend21168, (Optr)&t_send2, (Optr)PSend21169, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21170, (Optr)&t_push1, (Optr)string_21171, (Optr)&t_push1, (Optr)string_21172, (Optr)&t_send3, (Optr)PSend21173, (Optr)&t_send2, (Optr)PSend21174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21175, (Optr)&t_push1, (Optr)string_21176, (Optr)&t_push1, (Optr)string_21177, (Optr)&t_send3, (Optr)PSend21178, (Optr)&t_send2, (Optr)PSend21179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21180, (Optr)&t_push1, (Optr)string_21181, (Optr)&t_push1, (Optr)string_21182, (Optr)&t_send3, (Optr)PSend21183, (Optr)&t_send2, (Optr)PSend21184, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21185, (Optr)&t_push1, (Optr)string_21186, (Optr)&t_push1, (Optr)string_21187, (Optr)&t_send3, (Optr)PSend21188, (Optr)&t_send2, (Optr)PSend21189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21190, (Optr)&t_push1, (Optr)string_21191, (Optr)&t_push1, (Optr)string_21192, (Optr)&t_send3, (Optr)PSend21193, (Optr)&t_send2, (Optr)PSend21194, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21195, (Optr)&t_push1, (Optr)string_21196, (Optr)&t_push1, (Optr)string_21197, (Optr)&t_send3, (Optr)PSend21198, (Optr)&t_send2, (Optr)PSend21199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21200, (Optr)&t_push1, (Optr)string_21201, (Optr)&t_push1, (Optr)string_21202, (Optr)&t_send3, (Optr)PSend21203, (Optr)&t_send2, (Optr)PSend21204, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21205, (Optr)&t_push1, (Optr)string_21206, (Optr)&t_push1, (Optr)string_21207, (Optr)&t_send3, (Optr)PSend21208, (Optr)&t_send2, (Optr)PSend21209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21210, (Optr)&t_push1, (Optr)string_21211, (Optr)&t_push1, (Optr)string_21212, (Optr)&t_send3, (Optr)PSend21213, (Optr)&t_send2, (Optr)PSend21214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21215, (Optr)&t_push1, (Optr)string_21216, (Optr)&t_push1, (Optr)string_21217, (Optr)&t_send3, (Optr)PSend21218, (Optr)&t_send2, (Optr)PSend21219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21220, (Optr)&t_push1, (Optr)string_21221, (Optr)&t_push1, (Optr)string_21222, (Optr)&t_send3, (Optr)PSend21223, (Optr)&t_send2, (Optr)PSend21224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21225, (Optr)&t_method_return);
    Block PBlock21162 = new_Block_with(PArray21163, empty_Array, PThreadedCode21164, 13, PSend21169, PSend21174, PSend21179, PSend21184, PSend21189, PSend21194, PSend21199, PSend21204, PSend21209, PSend21214, PSend21219, PSend21224, PSend21225);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21226 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21227 = new_Send((Optr)PBlock21162, SMB_value_, 1, (Optr)PSend21226);
    Array PThreadedCode21161 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21162, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21226, (Optr)&t_send1, (Optr)PSend21227, (Optr)&t_method_return);
    Method PMethod21160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21161, 1, PSend21227);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21160, HEADER(Chronology_TimeZone_Class));
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