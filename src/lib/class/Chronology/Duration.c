#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20129 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20130 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20129);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20131 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20132 = new_Send((Optr)PSend20130, SMB_quo_, 1, (Optr)PSend20131);
    Array PThreadedCode20128 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20129, (Optr)&t_send1, (Optr)PSend20130, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20131, (Optr)&t_send1, (Optr)PSend20132, (Optr)&t_method_return);
    Method PMethod20127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20128, 1, PSend20132);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20127, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20134 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20134, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20133, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20137 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20138 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20137);
    Array PThreadedCode20136 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20137, (Optr)&t_send1, (Optr)PSend20138, (Optr)&t_method_return);
    Method PMethod20135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20136, 1, PSend20138);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20135, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20140 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20140, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20139, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20143 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20144 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20145 = new_Send((Optr)PSend20143, SMB_seconds_, 1, (Optr)PSend20144);
    Array PThreadedCode20142 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20143, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20144, (Optr)&t_send1, (Optr)PSend20145, (Optr)&t_method_return);
    Method PMethod20141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20142, 1, PSend20145);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20141, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20148 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20149 = new_Send((Optr)PSend20148, SMB_not, 0);
    Array PThreadedCode20147 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20148, (Optr)&t_send0, (Optr)PSend20149, (Optr)&t_method_return);
    Method PMethod20146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20147, 1, PSend20149);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20146, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20152 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20151 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20152, (Optr)&t_method_return);
    Method PMethod20150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20151, 1, PSend20152);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20150, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20154 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20156 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20157 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20158 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20157);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20159 = new_Send((Optr)PSend20156, SMB_seconds_, 1, (Optr)PSend20158);
    Array PThreadedCode20155 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20156, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20157, (Optr)&t_send1, (Optr)PSend20158, (Optr)&t_send1, (Optr)PSend20159, (Optr)&t_method_return);
    Method PMethod20153 = new_Method_with(PArray20154, empty_Array, empty_Array, PThreadedCode20155, 1, PSend20159);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20153, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20161 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20163 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20164 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20163);
    Array PThreadedCode20162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20163, (Optr)&t_send1, (Optr)PSend20164, (Optr)&t_method_return);
    Method PMethod20160 = new_Method_with(PArray20161, empty_Array, empty_Array, PThreadedCode20162, 1, PSend20164);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20160, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20166 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20168 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20168, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20165 = new_Method_with(PArray20166, empty_Array, empty_Array, PThreadedCode20167, 2, PAssign20168, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20165, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20170 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20172 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20175 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20174 = new_Block_with(empty_Array, empty_Array, PThreadedCode20175, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20178 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20179 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20180 = new_Send((Optr)PSend20178, SMB__equals_, 1, (Optr)PSend20179);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20184 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20185 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20186 = new_Send((Optr)PSend20184, SMB__equals_, 1, (Optr)PSend20185);
    Array PThreadedCode20183 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20184, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20185, (Optr)&t_send1, (Optr)PSend20186, (Optr)&t_block_return);
    Block PBlock20182 = new_Block_with(empty_Array, empty_Array, PThreadedCode20183, 1, PSend20186);
    Array PThreadedCode20188 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20187 = new_Block_with(empty_Array, empty_Array, PThreadedCode20188, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20181 = new_Send((Optr)PSend20180, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20182, (Optr)PBlock20187);
    Array PThreadedCode20177 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20178, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20179, (Optr)&t_send1, (Optr)PSend20180, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20181, (Optr)PBlock20182, (Optr)PBlock20187, (Optr)&t_block_return);
    Block PBlock20176 = new_Block_with(empty_Array, empty_Array, PThreadedCode20177, 1, PSend20181);
    // ifTrue:ifFalse:. 
    Send PSend20173 = new_Send((Optr)PSend20172, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20174, (Optr)PBlock20176);
    Array PThreadedCode20171 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20172, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20173, (Optr)PBlock20174, (Optr)PBlock20176, (Optr)&t_method_return);
    Method PMethod20169 = new_Method_with(PArray20170, empty_Array, empty_Array, PThreadedCode20171, 1, PSend20173);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20169, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20190 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20191 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20195 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20194 = new_Send((Optr)PSend20195, SMB_abs, 0);
    Assign PAssign20193 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20194);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20198 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20197 = new_Send((Optr)PSend20198, SMB_abs, 0);
    Assign PAssign20196 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20197);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20201 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20200 = new_Send((Optr)PSend20201, SMB_abs, 0);
    Assign PAssign20199 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20200);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20204 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20203 = new_Send((Optr)PSend20204, SMB_abs, 0);
    Assign PAssign20202 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20203);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20205 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2173 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend20209 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    Array PThreadedCode20208 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend20209, (Optr)&t_block_return);
    Block PBlock20207 = new_Block_with(empty_Array, empty_Array, PThreadedCode20208, 1, PSend20209);
    // ifTrue:. 
    Send PSend20206 = new_Send((Optr)PSend20205, SMB_ifTrue_, 1, (Optr)PBlock20207);
    // printOn:. 
    Send PSend20210 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_435 = new_Character(L':');
    Constant char_435_Const = new_Constant((Optr)char_435);
    // <<. 
    Send PSend20211 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20212 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9197 = new_Character(L'0');
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    // <<. 
    Send PSend20216 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20215 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20216, (Optr)&t_block_return);
    Block PBlock20214 = new_Block_with(empty_Array, empty_Array, PThreadedCode20215, 1, PSend20216);
    // ifTrue:. 
    Send PSend20213 = new_Send((Optr)PSend20212, SMB_ifTrue_, 1, (Optr)PBlock20214);
    // printOn:. 
    Send PSend20217 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20218 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20219 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20223 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20222 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20223, (Optr)&t_block_return);
    Block PBlock20221 = new_Block_with(empty_Array, empty_Array, PThreadedCode20222, 1, PSend20223);
    // ifTrue:. 
    Send PSend20220 = new_Send((Optr)PSend20219, SMB_ifTrue_, 1, (Optr)PBlock20221);
    // printOn:. 
    Send PSend20224 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20225 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_435_Const);
    // <. 
    Send PSend20226 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20230 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9197_Const);
    Array PThreadedCode20229 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send1, (Optr)PSend20230, (Optr)&t_block_return);
    Block PBlock20228 = new_Block_with(empty_Array, empty_Array, PThreadedCode20229, 1, PSend20230);
    // ifTrue:. 
    Send PSend20227 = new_Send((Optr)PSend20226, SMB_ifTrue_, 1, (Optr)PBlock20228);
    // printOn:. 
    Send PSend20231 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20192 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20193, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20195, (Optr)&t_send0, (Optr)PSend20194, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20196, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20198, (Optr)&t_send0, (Optr)PSend20197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20199, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20201, (Optr)&t_send0, (Optr)PSend20200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20202, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20204, (Optr)&t_send0, (Optr)PSend20203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20205, (Optr)&t_send_ifTrue_, (Optr)PSend20206, (Optr)PBlock20207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20212, (Optr)&t_send_ifTrue_, (Optr)PSend20213, (Optr)PBlock20214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20218, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20219, (Optr)&t_send_ifTrue_, (Optr)PSend20220, (Optr)PBlock20221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend20225, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20226, (Optr)&t_send_ifTrue_, (Optr)PSend20227, (Optr)PBlock20228, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20231, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20189 = new_Method_with(PArray20190, PArray20191, empty_Array, PThreadedCode20192, 16, PAssign20193, PAssign20196, PAssign20199, PAssign20202, PSend20206, PSend20210, PSend20211, PSend20213, PSend20217, PSend20218, PSend20220, PSend20224, PSend20225, PSend20227, PSend20231, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20189, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20233 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20236 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20235 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20236);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20237 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20238 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20237);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20239 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20238);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20240 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20239);
    Array PThreadedCode20234 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20235, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20237, (Optr)&t_send1, (Optr)PSend20238, (Optr)&t_send1, (Optr)PSend20239, (Optr)&t_send2, (Optr)PSend20240, (Optr)&t_method_return);
    Method PMethod20232 = new_Method_with(empty_Array, PArray20233, empty_Array, PThreadedCode20234, 2, PAssign20235, PSend20240);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20232, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20243 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20244 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20243);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20245 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20246 = new_Send((Optr)PSend20244, SMB_quo_, 1, (Optr)PSend20245);
    Array PThreadedCode20242 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20243, (Optr)&t_send1, (Optr)PSend20244, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20245, (Optr)&t_send1, (Optr)PSend20246, (Optr)&t_method_return);
    Method PMethod20241 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20242, 1, PSend20246);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20241, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20249 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20250 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20249);
    Array PThreadedCode20248 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20249, (Optr)&t_send1, (Optr)PSend20250, (Optr)&t_method_return);
    Method PMethod20247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20248, 1, PSend20250);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20247, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20252 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20254 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20255 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20256 = new_Send((Optr)PSend20255, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20257 = new_Send((Optr)PSend20256, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20258 = new_Send((Optr)PSend20254, SMB_seconds_, 1, (Optr)PSend20257);
    Array PThreadedCode20253 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20254, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20255, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20256, (Optr)&t_send0, (Optr)PSend20257, (Optr)&t_send1, (Optr)PSend20258, (Optr)&t_method_return);
    Method PMethod20251 = new_Method_with(PArray20252, empty_Array, empty_Array, PThreadedCode20253, 1, PSend20258);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20251, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20260 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20262 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20266 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20267 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20268 = new_Send((Optr)PSend20267, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20269 = new_Send((Optr)PSend20268, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20270 = new_Send((Optr)PSend20266, SMB_seconds_, 1, (Optr)PSend20269);
    Array PThreadedCode20265 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20266, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20267, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20268, (Optr)&t_send0, (Optr)PSend20269, (Optr)&t_send1, (Optr)PSend20270, (Optr)&t_block_return);
    Block PBlock20264 = new_Block_with(empty_Array, empty_Array, PThreadedCode20265, 1, PSend20270);
    // asSeconds. 
    Send PSend20273 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20274 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20275 = new_Send((Optr)PSend20274, SMB_asSeconds, 0);
    // /. 
    Send PSend20276 = new_Send((Optr)PSend20273, SMB__divide_, 1, (Optr)PSend20275);
    Array PThreadedCode20272 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20273, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20274, (Optr)&t_send0, (Optr)PSend20275, (Optr)&t_send1, (Optr)PSend20276, (Optr)&t_block_return);
    Block PBlock20271 = new_Block_with(empty_Array, empty_Array, PThreadedCode20272, 1, PSend20276);
    // ifTrue:ifFalse:. 
    Send PSend20263 = new_Send((Optr)PSend20262, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20264, (Optr)PBlock20271);
    Array PThreadedCode20261 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20262, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20263, (Optr)PBlock20264, (Optr)PBlock20271, (Optr)&t_method_return);
    Method PMethod20259 = new_Method_with(PArray20260, empty_Array, empty_Array, PThreadedCode20261, 1, PSend20263);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20259, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20279 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20278 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20279, (Optr)&t_method_return);
    Method PMethod20277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20278, 1, PSend20279);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20277, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20281 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20283 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20284 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20283);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20285 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20284);
    Array PThreadedCode20282 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20283, (Optr)&t_send1, (Optr)PSend20284, (Optr)&t_send1, (Optr)PSend20285, (Optr)&t_method_return);
    Method PMethod20280 = new_Method_with(PArray20281, empty_Array, empty_Array, PThreadedCode20282, 1, PSend20285);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20280, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20287 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20289 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20290 = new_Send((Optr)PSend20289, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20288 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20289, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20290, (Optr)&t_method_return);
    Method PMethod20286 = new_Method_with(PArray20287, empty_Array, empty_Array, PThreadedCode20288, 1, PSend20290);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20286, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20293 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20294 = new_Send((Optr)PSend20293, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20293, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20294, (Optr)&t_method_return);
    Method PMethod20291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20292, 1, PSend20294);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20291, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20296 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20298 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20299 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20298);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20300 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20299);
    Array PThreadedCode20297 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20298, (Optr)&t_send1, (Optr)PSend20299, (Optr)&t_send1, (Optr)PSend20300, (Optr)&t_method_return);
    Method PMethod20295 = new_Method_with(PArray20296, empty_Array, empty_Array, PThreadedCode20297, 1, PSend20300);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20295, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20302 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20304 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20305 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20304);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20306 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20305);
    Array PThreadedCode20303 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20304, (Optr)&t_send1, (Optr)PSend20305, (Optr)&t_send1, (Optr)PSend20306, (Optr)&t_method_return);
    Method PMethod20301 = new_Method_with(PArray20302, empty_Array, empty_Array, PThreadedCode20303, 1, PSend20306);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20301, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_days_, MC_SMB_days_);
}

void init_Chronology_Duration_layout() {
    layout_Chronology_Duration_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Chronology_Duration_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Chronology_Duration_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Chronology_Duration_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Chronology_Duration_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Chronology_Duration_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Duration = new_Symbol(L"Duration");
    slot_Chronology_Duration_seconds = (Optr)new_Slot(0, L"seconds");
    layout_Chronology_Duration = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Chronology_Duration)->values[0] = slot_Chronology_Duration_seconds; // seconds 
    Chronology_Duration_Class = (Class)new_Class(Object_Class, layout_Chronology_Duration_Class_class);
    Class_set_superclass(Chronology_Duration_Class, Object_Class);
    Chronology_Duration_Class->layout = layout_Chronology_Duration;
    HEADER(Chronology_Duration_Class)->layout = layout_Chronology_Duration_Class_class;
    Chronology_Duration_Class->name = SMB_Duration;
    
}

void init_Chronology_Duration_methods() {
    init_SMB_minutes();
    init_SMB_asSeconds();
    init_SMB_seconds();
    init_SMB_asDuration();
    init_SMB_negated();
    init_SMB_negative();
    init_SMB_positive();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB_seconds_();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_ticks();
    init_SMB_hours();
    init_SMB_days();
    init_SMB__times_();
    init_SMB__divide_();
    init_SMB_isZero();
    init_class_SMB_minutes_();
    init_class_SMB_seconds_();
    init_class_SMB_zero();
    init_class_SMB_hours_();
    init_class_SMB_days_();
    
}