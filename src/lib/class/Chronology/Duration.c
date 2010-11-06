#include <lib/class/Chronology/Duration.h>


Optr layout_Chronology_Duration_Class_class;
Optr slot_Chronology_Duration_seconds;
Optr layout_Chronology_Duration;


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20104 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20105 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20104);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20106 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20107 = new_Send((Optr)PSend20105, SMB_quo_, 1, (Optr)PSend20106);
    Array PThreadedCode20103 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20104, (Optr)&t_send1, (Optr)PSend20105, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20106, (Optr)&t_send1, (Optr)PSend20107, (Optr)&t_method_return);
    Method PMethod20102 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20103, 1, PSend20107);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod20102, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_asSeconds() {
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    Array PThreadedCode20109 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_method_return);
    Method PMethod20108 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20109, 1, slot_Chronology_Duration_seconds);
    
    MethodClosure MC_SMB_asSeconds = new_MethodClosure((Method)PMethod20108, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asSeconds, MC_SMB_asSeconds);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20112 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20113 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20112);
    Array PThreadedCode20111 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20112, (Optr)&t_send1, (Optr)PSend20113, (Optr)&t_method_return);
    Method PMethod20110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20111, 1, PSend20113);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod20110, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod20114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20115, 1, self);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod20114, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20118 = new_Send((Optr)self, SMB_class, 0);
    // negated. 
    Send PSend20119 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_negated, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20120 = new_Send((Optr)PSend20118, SMB_seconds_, 1, (Optr)PSend20119);
    Array PThreadedCode20117 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20118, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20119, (Optr)&t_send1, (Optr)PSend20120, (Optr)&t_method_return);
    Method PMethod20116 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20117, 1, PSend20120);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod20116, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20123 = new_Send((Optr)self, SMB_positive, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend20124 = new_Send((Optr)PSend20123, SMB_not, 0);
    Array PThreadedCode20122 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20123, (Optr)&t_send0, (Optr)PSend20124, (Optr)&t_method_return);
    Method PMethod20121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20122, 1, PSend20124);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod20121, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    // positive. 
    Send PSend20127 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_positive, 0);
    Array PThreadedCode20126 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_send0, (Optr)PSend20127, (Optr)&t_method_return);
    Method PMethod20125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20126, 1, PSend20127);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod20125, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20129 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20131 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20132 = new_Send((Optr)VAR_operand_0_0, SMB_asSeconds, 0);
    // +. 
    Send PSend20133 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__plus_, 1, (Optr)PSend20132);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20134 = new_Send((Optr)PSend20131, SMB_seconds_, 1, (Optr)PSend20133);
    Array PThreadedCode20130 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20131, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20132, (Optr)&t_send1, (Optr)PSend20133, (Optr)&t_send1, (Optr)PSend20134, (Optr)&t_method_return);
    Method PMethod20128 = new_Method_with(PArray20129, empty_Array, empty_Array, PThreadedCode20130, 1, PSend20134);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PMethod20128, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20136 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend20138 = new_Send((Optr)VAR_operand_0_0, SMB_negated, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend20139 = new_Send((Optr)self, SMB__plus_, 1, (Optr)PSend20138);
    Array PThreadedCode20137 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20138, (Optr)&t_send1, (Optr)PSend20139, (Optr)&t_method_return);
    Method PMethod20135 = new_Method_with(PArray20136, empty_Array, empty_Array, PThreadedCode20137, 1, PSend20139);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PMethod20135, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB_seconds_() {
    /*
    seconds: seconds
// 	^ self basicNew seconds: seconds
    */
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_secondCount_0_0 = new_Variable_named(L"secondCount", 0);
    Array PArray20141 = new_Array_with(1, (Optr)VAR_secondCount_0_0);
    Assign PAssign20143 = new_Assign((Optr)slot_Chronology_Duration_seconds, (Optr)VAR_secondCount_0_0);
    Array PThreadedCode20142 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign20143, (Optr)&t_push_variable, (Optr)VAR_secondCount_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20140 = new_Method_with(PArray20141, empty_Array, empty_Array, PThreadedCode20142, 2, PAssign20143, self);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20140, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_seconds_, MC_SMB_seconds_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_comparand_0_0 = new_Variable_named(L"comparand", 0);
    Array PArray20145 = new_Array_with(1, (Optr)VAR_comparand_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend20147 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_comparand_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode20150 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_true);
    Block PBlock20149 = new_Block_with(empty_Array, empty_Array, PThreadedCode20150, 1, true_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20153 = new_Send((Optr)self, SMB_class, 0);
    // class. 
    Send PSend20154 = new_Send((Optr)VAR_comparand_0_0, SMB_class, 0);
    // =. 
    Send PSend20155 = new_Send((Optr)PSend20153, SMB__equals_, 1, (Optr)PSend20154);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20159 = new_Send((Optr)self, SMB_asSeconds, 0);
    // asSeconds. 
    Send PSend20160 = new_Send((Optr)VAR_comparand_0_0, SMB_asSeconds, 0);
    // =. 
    Send PSend20161 = new_Send((Optr)PSend20159, SMB__equals_, 1, (Optr)PSend20160);
    Array PThreadedCode20158 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20159, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20160, (Optr)&t_send1, (Optr)PSend20161, (Optr)&t_block_return);
    Block PBlock20157 = new_Block_with(empty_Array, empty_Array, PThreadedCode20158, 1, PSend20161);
    Array PThreadedCode20163 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock20162 = new_Block_with(empty_Array, empty_Array, PThreadedCode20163, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend20156 = new_Send((Optr)PSend20155, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20157, (Optr)PBlock20162);
    Array PThreadedCode20152 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20153, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send0, (Optr)PSend20154, (Optr)&t_send1, (Optr)PSend20155, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20156, (Optr)PBlock20157, (Optr)PBlock20162, (Optr)&t_block_return);
    Block PBlock20151 = new_Block_with(empty_Array, empty_Array, PThreadedCode20152, 1, PSend20156);
    // ifTrue:ifFalse:. 
    Send PSend20148 = new_Send((Optr)PSend20147, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20149, (Optr)PBlock20151);
    Array PThreadedCode20146 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_comparand_0_0, (Optr)&t_send1, (Optr)PSend20147, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20148, (Optr)PBlock20149, (Optr)PBlock20151, (Optr)&t_method_return);
    Method PMethod20144 = new_Method_with(PArray20145, empty_Array, empty_Array, PThreadedCode20146, 1, PSend20148);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod20144, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray20165 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_d_0_1 = new_Variable_named(L"d", 0);
    Variable VAR_h_0_2 = new_Variable_named(L"h", 0);
    Variable VAR_m_0_3 = new_Variable_named(L"m", 0);
    Variable VAR_s_0_4 = new_Variable_named(L"s", 0);
    Array PArray20166 = new_Array_with(4, (Optr)VAR_d_0_1, (Optr)VAR_h_0_2, (Optr)VAR_m_0_3, (Optr)VAR_s_0_4);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20170 = new_Send((Optr)self, SMB_days, 0);
    Symbol SMB_abs = new_Symbol(L"abs");
    // abs. 
    Send PSend20169 = new_Send((Optr)PSend20170, SMB_abs, 0);
    Assign PAssign20168 = new_Assign((Optr)VAR_d_0_1, (Optr)PSend20169);
    Symbol SMB_hours = new_Symbol(L"hours");
    // hours. 
    Send PSend20173 = new_Send((Optr)self, SMB_hours, 0);
    // abs. 
    Send PSend20172 = new_Send((Optr)PSend20173, SMB_abs, 0);
    Assign PAssign20171 = new_Assign((Optr)VAR_h_0_2, (Optr)PSend20172);
    Symbol SMB_minutes = new_Symbol(L"minutes");
    // minutes. 
    Send PSend20176 = new_Send((Optr)self, SMB_minutes, 0);
    // abs. 
    Send PSend20175 = new_Send((Optr)PSend20176, SMB_abs, 0);
    Assign PAssign20174 = new_Assign((Optr)VAR_m_0_3, (Optr)PSend20175);
    Symbol SMB_seconds = new_Symbol(L"seconds");
    // seconds. 
    Send PSend20179 = new_Send((Optr)self, SMB_seconds, 0);
    // abs. 
    Send PSend20178 = new_Send((Optr)PSend20179, SMB_abs, 0);
    Assign PAssign20177 = new_Assign((Optr)VAR_s_0_4, (Optr)PSend20178);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend20180 = new_Send((Optr)self, SMB_negative, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Character char_2182 = new_Character(L'-');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend20184 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    Array PThreadedCode20183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend20184, (Optr)&t_block_return);
    Block PBlock20182 = new_Block_with(empty_Array, empty_Array, PThreadedCode20183, 1, PSend20184);
    // ifTrue:. 
    Send PSend20181 = new_Send((Optr)PSend20180, SMB_ifTrue_, 1, (Optr)PBlock20182);
    // printOn:. 
    Send PSend20185 = new_Send((Optr)VAR_d_0_1, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_444 = new_Character(L':');
    Constant char_444_Const = new_Constant((Optr)char_444);
    // <<. 
    Send PSend20186 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // <. 
    Send PSend20187 = new_Send((Optr)VAR_h_0_2, SMB__lt_, 1, (Optr)int_10_Const);
    Character char_9208 = new_Character(L'0');
    Constant char_9208_Const = new_Constant((Optr)char_9208);
    // <<. 
    Send PSend20191 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20191, (Optr)&t_block_return);
    Block PBlock20189 = new_Block_with(empty_Array, empty_Array, PThreadedCode20190, 1, PSend20191);
    // ifTrue:. 
    Send PSend20188 = new_Send((Optr)PSend20187, SMB_ifTrue_, 1, (Optr)PBlock20189);
    // printOn:. 
    Send PSend20192 = new_Send((Optr)VAR_h_0_2, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20193 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20194 = new_Send((Optr)VAR_m_0_3, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20198 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20198, (Optr)&t_block_return);
    Block PBlock20196 = new_Block_with(empty_Array, empty_Array, PThreadedCode20197, 1, PSend20198);
    // ifTrue:. 
    Send PSend20195 = new_Send((Optr)PSend20194, SMB_ifTrue_, 1, (Optr)PBlock20196);
    // printOn:. 
    Send PSend20199 = new_Send((Optr)VAR_m_0_3, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    // <<. 
    Send PSend20200 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_444_Const);
    // <. 
    Send PSend20201 = new_Send((Optr)VAR_s_0_4, SMB__lt_, 1, (Optr)int_10_Const);
    // <<. 
    Send PSend20205 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_9208_Const);
    Array PThreadedCode20204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_9208, (Optr)&t_send1, (Optr)PSend20205, (Optr)&t_block_return);
    Block PBlock20203 = new_Block_with(empty_Array, empty_Array, PThreadedCode20204, 1, PSend20205);
    // ifTrue:. 
    Send PSend20202 = new_Send((Optr)PSend20201, SMB_ifTrue_, 1, (Optr)PBlock20203);
    // printOn:. 
    Send PSend20206 = new_Send((Optr)VAR_s_0_4, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode20167 = instantiate_Array_with(ThreadedCode_Class, 0, 123, (Optr)&t_push1, (Optr)PAssign20168, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20170, (Optr)&t_send0, (Optr)PSend20169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20171, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20173, (Optr)&t_send0, (Optr)PSend20172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20174, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20176, (Optr)&t_send0, (Optr)PSend20175, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign20177, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20179, (Optr)&t_send0, (Optr)PSend20178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20180, (Optr)&t_send_ifTrue_, (Optr)PSend20181, (Optr)PBlock20182, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_d_0_1, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20187, (Optr)&t_send_ifTrue_, (Optr)PSend20188, (Optr)PBlock20189, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_h_0_2, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20192, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20193, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20194, (Optr)&t_send_ifTrue_, (Optr)PSend20195, (Optr)PBlock20196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_m_0_3, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend20200, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend20201, (Optr)&t_send_ifTrue_, (Optr)PSend20202, (Optr)PBlock20203, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_s_0_4, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend20206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod20164 = new_Method_with(PArray20165, PArray20166, empty_Array, PThreadedCode20167, 16, PAssign20168, PAssign20171, PAssign20174, PAssign20177, PSend20181, PSend20185, PSend20186, PSend20188, PSend20192, PSend20193, PSend20195, PSend20199, PSend20200, PSend20202, PSend20206, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod20164, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_ticks() {
    Symbol SMB_ticks = new_Symbol(L"ticks");
    Variable VAR_days_0_0 = new_Variable_named(L"days", 0);
    Array PArray20208 = new_Array_with(1, (Optr)VAR_days_0_0);
    Symbol SMB_days = new_Symbol(L"days");
    // days. 
    Send PSend20211 = new_Send((Optr)self, SMB_days, 0);
    Assign PAssign20210 = new_Assign((Optr)VAR_days_0_0, (Optr)PSend20211);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20212 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20213 = new_Send((Optr)VAR_days_0_0, SMB__times_, 1, (Optr)PSend20212);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend20214 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__minus_, 1, (Optr)PSend20213);
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend20215 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_days_0_0, (Optr)PSend20214);
    Array PThreadedCode20209 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign20210, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20211, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_variable, (Optr)VAR_days_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20212, (Optr)&t_send1, (Optr)PSend20213, (Optr)&t_send1, (Optr)PSend20214, (Optr)&t_send2, (Optr)PSend20215, (Optr)&t_method_return);
    Method PMethod20207 = new_Method_with(empty_Array, PArray20208, empty_Array, PThreadedCode20209, 2, PAssign20210, PSend20215);
    
    MethodClosure MC_SMB_ticks = new_MethodClosure((Method)PMethod20207, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_ticks, MC_SMB_ticks);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20218 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    // rem:. 
    Send PSend20219 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_rem_, 1, (Optr)PSend20218);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20220 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20221 = new_Send((Optr)PSend20219, SMB_quo_, 1, (Optr)PSend20220);
    Array PThreadedCode20217 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20218, (Optr)&t_send1, (Optr)PSend20219, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20220, (Optr)&t_send1, (Optr)PSend20221, (Optr)&t_method_return);
    Method PMethod20216 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20217, 1, PSend20221);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod20216, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20224 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend20225 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB_quo_, 1, (Optr)PSend20224);
    Array PThreadedCode20223 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20224, (Optr)&t_send1, (Optr)PSend20225, (Optr)&t_method_return);
    Method PMethod20222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20223, 1, PSend20225);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod20222, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20227 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20229 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20230 = new_Send((Optr)self, SMB_asSeconds, 0);
    // *. 
    Send PSend20231 = new_Send((Optr)PSend20230, SMB__times_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20232 = new_Send((Optr)PSend20231, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20233 = new_Send((Optr)PSend20229, SMB_seconds_, 1, (Optr)PSend20232);
    Array PThreadedCode20228 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20229, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20230, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20231, (Optr)&t_send0, (Optr)PSend20232, (Optr)&t_send1, (Optr)PSend20233, (Optr)&t_method_return);
    Method PMethod20226 = new_Method_with(PArray20227, empty_Array, empty_Array, PThreadedCode20228, 1, PSend20233);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PMethod20226, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_operand_0_0 = new_Variable_named(L"operand", 0);
    Array PArray20235 = new_Array_with(1, (Optr)VAR_operand_0_0);
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    // isNumber. 
    Send PSend20237 = new_Send((Optr)VAR_operand_0_0, SMB_isNumber, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend20241 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_asSeconds = new_Symbol(L"asSeconds");
    // asSeconds. 
    Send PSend20242 = new_Send((Optr)self, SMB_asSeconds, 0);
    // /. 
    Send PSend20243 = new_Send((Optr)PSend20242, SMB__divide_, 1, (Optr)VAR_operand_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend20244 = new_Send((Optr)PSend20243, SMB_asInteger, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20245 = new_Send((Optr)PSend20241, SMB_seconds_, 1, (Optr)PSend20244);
    Array PThreadedCode20240 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20241, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20242, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send1, (Optr)PSend20243, (Optr)&t_send0, (Optr)PSend20244, (Optr)&t_send1, (Optr)PSend20245, (Optr)&t_block_return);
    Block PBlock20239 = new_Block_with(empty_Array, empty_Array, PThreadedCode20240, 1, PSend20245);
    // asSeconds. 
    Send PSend20248 = new_Send((Optr)self, SMB_asSeconds, 0);
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    // asDuration. 
    Send PSend20249 = new_Send((Optr)VAR_operand_0_0, SMB_asDuration, 0);
    // asSeconds. 
    Send PSend20250 = new_Send((Optr)PSend20249, SMB_asSeconds, 0);
    // /. 
    Send PSend20251 = new_Send((Optr)PSend20248, SMB__divide_, 1, (Optr)PSend20250);
    Array PThreadedCode20247 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20248, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20249, (Optr)&t_send0, (Optr)PSend20250, (Optr)&t_send1, (Optr)PSend20251, (Optr)&t_block_return);
    Block PBlock20246 = new_Block_with(empty_Array, empty_Array, PThreadedCode20247, 1, PSend20251);
    // ifTrue:ifFalse:. 
    Send PSend20238 = new_Send((Optr)PSend20237, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock20239, (Optr)PBlock20246);
    Array PThreadedCode20236 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_operand_0_0, (Optr)&t_send0, (Optr)PSend20237, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend20238, (Optr)PBlock20239, (Optr)PBlock20246, (Optr)&t_method_return);
    Method PMethod20234 = new_Method_with(PArray20235, empty_Array, empty_Array, PThreadedCode20236, 1, PSend20238);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PMethod20234, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_isZero() {
    Symbol SMB_isZero = new_Symbol(L"isZero");
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend20254 = new_Send((Optr)slot_Chronology_Duration_seconds, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode20253 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Chronology_Duration_seconds, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20254, (Optr)&t_method_return);
    Method PMethod20252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20253, 1, PSend20254);
    
    MethodClosure MC_SMB_isZero = new_MethodClosure((Method)PMethod20252, Chronology_Duration_Class);
    store_method(Chronology_Duration_Class, SMB_isZero, MC_SMB_isZero);
}


static void init_class_SMB_minutes_() {
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20256 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInMinute = new_Symbol(L"secondsInMinute");
    // secondsInMinute. 
    Send PSend20258 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInMinute, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20259 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20258);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20260 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20259);
    Array PThreadedCode20257 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20258, (Optr)&t_send1, (Optr)PSend20259, (Optr)&t_send1, (Optr)PSend20260, (Optr)&t_method_return);
    Method PMethod20255 = new_Method_with(PArray20256, empty_Array, empty_Array, PThreadedCode20257, 1, PSend20260);
    
    MethodClosure MC_SMB_minutes_ = new_MethodClosure((Method)PMethod20255, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_minutes_, MC_SMB_minutes_);
}


static void init_class_SMB_seconds_() {
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    Variable VAR_seconds_0_0 = new_Variable_named(L"seconds", 0);
    Array PArray20262 = new_Array_with(1, (Optr)VAR_seconds_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20264 = new_Send((Optr)self, SMB_basicNew, 0);
    // seconds:. 
    Send PSend20265 = new_Send((Optr)PSend20264, SMB_seconds_, 1, (Optr)VAR_seconds_0_0);
    Array PThreadedCode20263 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20264, (Optr)&t_push_variable, (Optr)VAR_seconds_0_0, (Optr)&t_send1, (Optr)PSend20265, (Optr)&t_method_return);
    Method PMethod20261 = new_Method_with(PArray20262, empty_Array, empty_Array, PThreadedCode20263, 1, PSend20265);
    
    MethodClosure MC_SMB_seconds_ = new_MethodClosure((Method)PMethod20261, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_seconds_, MC_SMB_seconds_);
}


static void init_class_SMB_zero() {
    Symbol SMB_zero = new_Symbol(L"zero");
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend20268 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // seconds:. 
    Send PSend20269 = new_Send((Optr)PSend20268, SMB_seconds_, 1, (Optr)int_0_Const);
    Array PThreadedCode20267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend20268, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend20269, (Optr)&t_method_return);
    Method PMethod20266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20267, 1, PSend20269);
    
    MethodClosure MC_SMB_zero = new_MethodClosure((Method)PMethod20266, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_zero, MC_SMB_zero);
}


static void init_class_SMB_hours_() {
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20271 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInHour = new_Symbol(L"secondsInHour");
    // secondsInHour. 
    Send PSend20273 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInHour, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20274 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20273);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20275 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20274);
    Array PThreadedCode20272 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20273, (Optr)&t_send1, (Optr)PSend20274, (Optr)&t_send1, (Optr)PSend20275, (Optr)&t_method_return);
    Method PMethod20270 = new_Method_with(PArray20271, empty_Array, empty_Array, PThreadedCode20272, 1, PSend20275);
    
    MethodClosure MC_SMB_hours_ = new_MethodClosure((Method)PMethod20270, HEADER(Chronology_Duration_Class));
    store_method(HEADER(Chronology_Duration_Class), SMB_hours_, MC_SMB_hours_);
}


static void init_class_SMB_days_() {
    Symbol SMB_days_ = new_Symbol(L"days:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray20277 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_secondsInDay = new_Symbol(L"secondsInDay");
    // secondsInDay. 
    Send PSend20279 = new_Send((Optr)PChronologyConstants_classReference, SMB_secondsInDay, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend20280 = new_Send((Optr)VAR_aNumber_0_0, SMB__times_, 1, (Optr)PSend20279);
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend20281 = new_Send((Optr)self, SMB_seconds_, 1, (Optr)PSend20280);
    Array PThreadedCode20278 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_push_class_reference, (Optr)PChronologyConstants_classReference, (Optr)&t_send0, (Optr)PSend20279, (Optr)&t_send1, (Optr)PSend20280, (Optr)&t_send1, (Optr)PSend20281, (Optr)&t_method_return);
    Method PMethod20276 = new_Method_with(PArray20277, empty_Array, empty_Array, PThreadedCode20278, 1, PSend20281);
    
    MethodClosure MC_SMB_days_ = new_MethodClosure((Method)PMethod20276, HEADER(Chronology_Duration_Class));
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