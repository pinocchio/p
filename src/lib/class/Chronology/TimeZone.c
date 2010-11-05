#include <lib/class/Chronology/TimeZone.h>


Optr layout_Chronology_TimeZone_Class_class;
Optr slot_Chronology_TimeZone_offset;
Optr slot_Chronology_TimeZone_abbreviation;
Optr slot_Chronology_TimeZone_name;
Optr layout_Chronology_TimeZone;


static void init_SMB_offset() {
    Symbol SMB_offset = new_Symbol(L"offset");
    Array PThreadedCode21197 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_offset, (Optr)&t_method_return);
    Method PMethod21196 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21197, 1, slot_Chronology_TimeZone_offset);
    
    MethodClosure MC_SMB_offset = new_MethodClosure((Method)PMethod21196, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset, MC_SMB_offset);
}


static void init_SMB_abbreviation_() {
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21199 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21201 = new_Assign((Optr)slot_Chronology_TimeZone_abbreviation, (Optr)VAR_aString_0_0);
    Array PThreadedCode21200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21201, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21198 = new_Method_with(PArray21199, empty_Array, empty_Array, PThreadedCode21200, 2, PAssign21201, self);
    
    MethodClosure MC_SMB_abbreviation_ = new_MethodClosure((Method)PMethod21198, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation_, MC_SMB_abbreviation_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray21203 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Assign PAssign21205 = new_Assign((Optr)slot_Chronology_TimeZone_name, (Optr)VAR_aString_0_0);
    Array PThreadedCode21204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21205, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21202 = new_Method_with(PArray21203, empty_Array, empty_Array, PThreadedCode21204, 2, PAssign21205, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21202, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21207 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21210 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend21212 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    // abbreviation. 
    Send PSend21213 = new_Send((Optr)self, SMB_abbreviation, 0);
    // <<. 
    Send PSend21214 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)PSend21213);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21215 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21211 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend21212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21213, (Optr)&t_send1, (Optr)PSend21214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21215, (Optr)&t_method_return);
    Block PBlock21209 = new_Block_with(PArray21210, empty_Array, PThreadedCode21211, 3, PSend21212, PSend21214, PSend21215);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21216 = new_Send((Optr)PBlock21209, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode21208 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21209, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend21216, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21206 = new_Method_with(PArray21207, empty_Array, empty_Array, PThreadedCode21208, 2, PSend21216, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21206, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_offset_() {
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Array PArray21218 = new_Array_with(1, (Optr)VAR_aDuration_0_0);
    Assign PAssign21220 = new_Assign((Optr)slot_Chronology_TimeZone_offset, (Optr)VAR_aDuration_0_0);
    Array PThreadedCode21219 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21220, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21217 = new_Method_with(PArray21218, empty_Array, empty_Array, PThreadedCode21219, 2, PAssign21220, self);
    
    MethodClosure MC_SMB_offset_ = new_MethodClosure((Method)PMethod21217, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_offset_, MC_SMB_offset_);
}


static void init_SMB_abbreviation() {
    Symbol SMB_abbreviation = new_Symbol(L"abbreviation");
    Array PThreadedCode21222 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_abbreviation, (Optr)&t_method_return);
    Method PMethod21221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21222, 1, slot_Chronology_TimeZone_abbreviation);
    
    MethodClosure MC_SMB_abbreviation = new_MethodClosure((Method)PMethod21221, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_abbreviation, MC_SMB_abbreviation);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21224 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_TimeZone_name, (Optr)&t_method_return);
    Method PMethod21223 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21224, 1, slot_Chronology_TimeZone_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21223, Chronology_TimeZone_Class);
    store_method(Chronology_TimeZone_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_offset_name_abbreviation_() {
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Variable VAR_aDuration_0_0 = new_Variable_named(L"aDuration", 0);
    Variable VAR_aName_0_1 = new_Variable_named(L"aName", 0);
    Variable VAR_anAbbreviation_0_2 = new_Variable_named(L"anAbbreviation", 0);
    Array PArray21226 = new_Array_with(3, (Optr)VAR_aDuration_0_0, (Optr)VAR_aName_0_1, (Optr)VAR_anAbbreviation_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21229 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_offset_ = new_Symbol(L"offset:");
    // offset:. 
    Send PSend21231 = new_Send((Optr)VAR__receiver__1_0, SMB_offset_, 1, (Optr)VAR_aDuration_0_0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21232 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)VAR_aName_0_1);
    Symbol SMB_abbreviation_ = new_Symbol(L"abbreviation:");
    // abbreviation:. 
    Send PSend21233 = new_Send((Optr)VAR__receiver__1_0, SMB_abbreviation_, 1, (Optr)VAR_anAbbreviation_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21234 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21230 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aDuration_0_0, (Optr)&t_send1, (Optr)PSend21231, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aName_0_1, (Optr)&t_send1, (Optr)PSend21232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anAbbreviation_0_2, (Optr)&t_send1, (Optr)PSend21233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21234, (Optr)&t_method_return);
    Block PBlock21228 = new_Block_with(PArray21229, empty_Array, PThreadedCode21230, 4, PSend21231, PSend21232, PSend21233, PSend21234);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21235 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21236 = new_Send((Optr)PBlock21228, SMB_value_, 1, (Optr)PSend21235);
    Array PThreadedCode21227 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock21228, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21235, (Optr)&t_send1, (Optr)PSend21236, (Optr)&t_method_return);
    Method PMethod21225 = new_Method_with(PArray21226, empty_Array, empty_Array, PThreadedCode21227, 1, PSend21236);
    
    MethodClosure MC_SMB_offset_name_abbreviation_ = new_MethodClosure((Method)PMethod21225, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_offset_name_abbreviation_, MC_SMB_offset_name_abbreviation_);
}


static void init_class_SMB_default() {
    Symbol SMB_default = new_Symbol(L"default");
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    // timeZones. 
    Send PSend21239 = new_Send((Optr)self, SMB_timeZones, 0);
    Variable VAR_tz_1_0 = new_Variable_named(L"tz", 1);
    Array PArray21241 = new_Array_with(1, (Optr)VAR_tz_1_0);
    Symbol SMB_offset = new_Symbol(L"offset");
    // offset. 
    Send PSend21243 = new_Send((Optr)VAR_tz_1_0, SMB_offset, 0);
    Symbol SMB_zero = new_Symbol(L"zero");
    // zero. 
    Send PSend21244 = new_Send((Optr)Duration_classReference, SMB_zero, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21245 = new_Send((Optr)PSend21243, SMB__equals_, 1, (Optr)PSend21244);
    Array PThreadedCode21242 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_tz_1_0, (Optr)&t_send0, (Optr)PSend21243, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_send0, (Optr)PSend21244, (Optr)&t_send1, (Optr)PSend21245, (Optr)&t_method_return);
    Block PBlock21240 = new_Block_with(PArray21241, empty_Array, PThreadedCode21242, 1, PSend21245);
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    // detect:. 
    Send PSend21246 = new_Send((Optr)PSend21239, SMB_detect_, 1, (Optr)PBlock21240);
    Array PThreadedCode21238 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21239, (Optr)&t_push_closure, (Optr)PBlock21240, (Optr)&t_send1, (Optr)PSend21246, (Optr)&t_method_return);
    Method PMethod21237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21238, 1, PSend21246);
    
    MethodClosure MC_SMB_default = new_MethodClosure((Method)PMethod21237, HEADER(Chronology_TimeZone_Class));
    store_method(HEADER(Chronology_TimeZone_Class), SMB_default, MC_SMB_default);
}


static void init_class_SMB_timeZones() {
    Symbol SMB_timeZones = new_Symbol(L"timeZones");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21250 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend21252 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21253 = new_String(L"Universal Time");
    String string_21254 = new_String(L"UTC");
    Symbol SMB_offset_name_abbreviation_ = new_Symbol(L"offset:name:abbreviation:");
    Constant string_21253_Const = new_Constant((Optr)string_21253);
    Constant string_21254_Const = new_Constant((Optr)string_21254);
    // offset:name:abbreviation:. 
    Send PSend21255 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21252, (Optr)string_21253_Const, (Optr)string_21254_Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend21256 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend21255);
    // hours. 
    Send PSend21257 = new_Send((Optr)int_0_Const, SMB_hours, 0);
    String string_21258 = new_String(L"Greenwich Mean Time");
    String string_21259 = new_String(L"GMT");
    Constant string_21258_Const = new_Constant((Optr)string_21258);
    Constant string_21259_Const = new_Constant((Optr)string_21259);
    // offset:name:abbreviation:. 
    Send PSend21260 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21257, (Optr)string_21258_Const, (Optr)string_21259_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend21261 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend21260);
    SmallInt int_3 = new_SmallInt(3);
    // hours. 
    Send PSend21262 = new_Send((Optr)int_1_Const, SMB_hours, 0);
    String string_21263 = new_String(L"British Summer Time");
    String string_21264 = new_String(L"BST");
    Constant string_21263_Const = new_Constant((Optr)string_21263);
    Constant string_21264_Const = new_Constant((Optr)string_21264);
    // offset:name:abbreviation:. 
    Send PSend21265 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21262, (Optr)string_21263_Const, (Optr)string_21264_Const);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend21266 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend21265);
    SmallInt int_4 = new_SmallInt(4);
    // hours. 
    Send PSend21267 = new_Send((Optr)int_2_Const, SMB_hours, 0);
    String string_21268 = new_String(L"South African Standard Time");
    String string_21269 = new_String(L"SAST");
    Constant string_21268_Const = new_Constant((Optr)string_21268);
    Constant string_21269_Const = new_Constant((Optr)string_21269);
    // offset:name:abbreviation:. 
    Send PSend21270 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21267, (Optr)string_21268_Const, (Optr)string_21269_Const);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend21271 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend21270);
    SmallInt int_5 = new_SmallInt(5);
    SmallInt int_n8 = new_SmallInt(-8);
    Constant int_n8_Const = new_Constant((Optr)int_n8);
    // hours. 
    Send PSend21272 = new_Send((Optr)int_n8_Const, SMB_hours, 0);
    String string_21273 = new_String(L"Pacific Standard Time");
    String string_21274 = new_String(L"PST");
    Constant string_21273_Const = new_Constant((Optr)string_21273);
    Constant string_21274_Const = new_Constant((Optr)string_21274);
    // offset:name:abbreviation:. 
    Send PSend21275 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21272, (Optr)string_21273_Const, (Optr)string_21274_Const);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend21276 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PSend21275);
    SmallInt int_6 = new_SmallInt(6);
    SmallInt int_n7 = new_SmallInt(-7);
    Constant int_n7_Const = new_Constant((Optr)int_n7);
    // hours. 
    Send PSend21277 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21278 = new_String(L"Pacific Daylight Time");
    String string_21279 = new_String(L"PDT");
    Constant string_21278_Const = new_Constant((Optr)string_21278);
    Constant string_21279_Const = new_Constant((Optr)string_21279);
    // offset:name:abbreviation:. 
    Send PSend21280 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21277, (Optr)string_21278_Const, (Optr)string_21279_Const);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend21281 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PSend21280);
    SmallInt int_7 = new_SmallInt(7);
    // hours. 
    Send PSend21282 = new_Send((Optr)int_n7_Const, SMB_hours, 0);
    String string_21283 = new_String(L"Mountain Standard Time");
    String string_21284 = new_String(L"MST");
    Constant string_21283_Const = new_Constant((Optr)string_21283);
    Constant string_21284_Const = new_Constant((Optr)string_21284);
    // offset:name:abbreviation:. 
    Send PSend21285 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21282, (Optr)string_21283_Const, (Optr)string_21284_Const);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend21286 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PSend21285);
    SmallInt int_8 = new_SmallInt(8);
    SmallInt int_n6 = new_SmallInt(-6);
    Constant int_n6_Const = new_Constant((Optr)int_n6);
    // hours. 
    Send PSend21287 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21288 = new_String(L"Mountain Daylight Time");
    String string_21289 = new_String(L"MDT");
    Constant string_21288_Const = new_Constant((Optr)string_21288);
    Constant string_21289_Const = new_Constant((Optr)string_21289);
    // offset:name:abbreviation:. 
    Send PSend21290 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21287, (Optr)string_21288_Const, (Optr)string_21289_Const);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend21291 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PSend21290);
    SmallInt int_9 = new_SmallInt(9);
    // hours. 
    Send PSend21292 = new_Send((Optr)int_n6_Const, SMB_hours, 0);
    String string_21293 = new_String(L"Central Standard Time");
    String string_21294 = new_String(L"CST");
    Constant string_21293_Const = new_Constant((Optr)string_21293);
    Constant string_21294_Const = new_Constant((Optr)string_21294);
    // offset:name:abbreviation:. 
    Send PSend21295 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21292, (Optr)string_21293_Const, (Optr)string_21294_Const);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend21296 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PSend21295);
    SmallInt int_10 = new_SmallInt(10);
    SmallInt int_n5 = new_SmallInt(-5);
    Constant int_n5_Const = new_Constant((Optr)int_n5);
    // hours. 
    Send PSend21297 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21298 = new_String(L"Central Daylight Time");
    String string_21299 = new_String(L"CDT");
    Constant string_21298_Const = new_Constant((Optr)string_21298);
    Constant string_21299_Const = new_Constant((Optr)string_21299);
    // offset:name:abbreviation:. 
    Send PSend21300 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21297, (Optr)string_21298_Const, (Optr)string_21299_Const);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend21301 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PSend21300);
    SmallInt int_11 = new_SmallInt(11);
    // hours. 
    Send PSend21302 = new_Send((Optr)int_n5_Const, SMB_hours, 0);
    String string_21303 = new_String(L"Eastern Standard Time");
    String string_21304 = new_String(L"EST");
    Constant string_21303_Const = new_Constant((Optr)string_21303);
    Constant string_21304_Const = new_Constant((Optr)string_21304);
    // offset:name:abbreviation:. 
    Send PSend21305 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21302, (Optr)string_21303_Const, (Optr)string_21304_Const);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend21306 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PSend21305);
    SmallInt int_12 = new_SmallInt(12);
    SmallInt int_n4 = new_SmallInt(-4);
    Constant int_n4_Const = new_Constant((Optr)int_n4);
    // hours. 
    Send PSend21307 = new_Send((Optr)int_n4_Const, SMB_hours, 0);
    String string_21308 = new_String(L"Eastern Daylight Time");
    String string_21309 = new_String(L"EDT");
    Constant string_21308_Const = new_Constant((Optr)string_21308);
    Constant string_21309_Const = new_Constant((Optr)string_21309);
    // offset:name:abbreviation:. 
    Send PSend21310 = new_Send((Optr)self, SMB_offset_name_abbreviation_, 3, (Optr)PSend21307, (Optr)string_21308_Const, (Optr)string_21309_Const);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend21311 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PSend21310);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend21312 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode21251 = instantiate_Array_with(ThreadedCode_Class, 0, 215, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21252, (Optr)&t_push1, (Optr)string_21253, (Optr)&t_push1, (Optr)string_21254, (Optr)&t_send3, (Optr)PSend21255, (Optr)&t_send2, (Optr)PSend21256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send0, (Optr)PSend21257, (Optr)&t_push1, (Optr)string_21258, (Optr)&t_push1, (Optr)string_21259, (Optr)&t_send3, (Optr)PSend21260, (Optr)&t_send2, (Optr)PSend21261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send0, (Optr)PSend21262, (Optr)&t_push1, (Optr)string_21263, (Optr)&t_push1, (Optr)string_21264, (Optr)&t_send3, (Optr)PSend21265, (Optr)&t_send2, (Optr)PSend21266, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send0, (Optr)PSend21267, (Optr)&t_push1, (Optr)string_21268, (Optr)&t_push1, (Optr)string_21269, (Optr)&t_send3, (Optr)PSend21270, (Optr)&t_send2, (Optr)PSend21271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n8, (Optr)&t_send0, (Optr)PSend21272, (Optr)&t_push1, (Optr)string_21273, (Optr)&t_push1, (Optr)string_21274, (Optr)&t_send3, (Optr)PSend21275, (Optr)&t_send2, (Optr)PSend21276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21277, (Optr)&t_push1, (Optr)string_21278, (Optr)&t_push1, (Optr)string_21279, (Optr)&t_send3, (Optr)PSend21280, (Optr)&t_send2, (Optr)PSend21281, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n7, (Optr)&t_send0, (Optr)PSend21282, (Optr)&t_push1, (Optr)string_21283, (Optr)&t_push1, (Optr)string_21284, (Optr)&t_send3, (Optr)PSend21285, (Optr)&t_send2, (Optr)PSend21286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21287, (Optr)&t_push1, (Optr)string_21288, (Optr)&t_push1, (Optr)string_21289, (Optr)&t_send3, (Optr)PSend21290, (Optr)&t_send2, (Optr)PSend21291, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n6, (Optr)&t_send0, (Optr)PSend21292, (Optr)&t_push1, (Optr)string_21293, (Optr)&t_push1, (Optr)string_21294, (Optr)&t_send3, (Optr)PSend21295, (Optr)&t_send2, (Optr)PSend21296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21297, (Optr)&t_push1, (Optr)string_21298, (Optr)&t_push1, (Optr)string_21299, (Optr)&t_send3, (Optr)PSend21300, (Optr)&t_send2, (Optr)PSend21301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n5, (Optr)&t_send0, (Optr)PSend21302, (Optr)&t_push1, (Optr)string_21303, (Optr)&t_push1, (Optr)string_21304, (Optr)&t_send3, (Optr)PSend21305, (Optr)&t_send2, (Optr)PSend21306, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n4, (Optr)&t_send0, (Optr)PSend21307, (Optr)&t_push1, (Optr)string_21308, (Optr)&t_push1, (Optr)string_21309, (Optr)&t_send3, (Optr)PSend21310, (Optr)&t_send2, (Optr)PSend21311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21312, (Optr)&t_method_return);
    Block PBlock21249 = new_Block_with(PArray21250, empty_Array, PThreadedCode21251, 13, PSend21256, PSend21261, PSend21266, PSend21271, PSend21276, PSend21281, PSend21286, PSend21291, PSend21296, PSend21301, PSend21306, PSend21311, PSend21312);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21313 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_12_Const);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21314 = new_Send((Optr)PBlock21249, SMB_value_, 1, (Optr)PSend21313);
    Array PThreadedCode21248 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_closure, (Optr)PBlock21249, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)int_12, (Optr)&t_send1, (Optr)PSend21313, (Optr)&t_send1, (Optr)PSend21314, (Optr)&t_method_return);
    Method PMethod21247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21248, 1, PSend21314);
    
    MethodClosure MC_SMB_timeZones = new_MethodClosure((Method)PMethod21247, HEADER(Chronology_TimeZone_Class));
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