#include <lib/class/Organization/PathSegmentException.h>


Optr layout_Organization_PathSegmentException_Class_class;
Optr slot_Organization_PathSegmentException_path;
Optr slot_Organization_PathSegmentException_index;
Optr layout_Organization_PathSegmentException;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22193 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22195 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22194 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22195, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22192 = new_Method_with(PArray22193, empty_Array, empty_Array, PThreadedCode22194, 2, PAssign22195, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22192, Organization_PathSegmentException_Class);
=======
    Array PArray22010 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22012 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22012, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22009 = new_Method_with(PArray22010, empty_Array, empty_Array, PThreadedCode22011, 2, PAssign22012, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22009, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray22197 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend22199 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22200 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22199);
    String string_22201 = new_String(L": ");
    Constant string_22201_Const = new_Constant((Optr)string_22201);
    // <<. 
    Send PSend22202 = new_Send((Optr)PSend22200, SMB__shiftLeft_, 1, (Optr)string_22201_Const);
=======
    Array PArray22014 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend22016 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22017 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22016);
    String string_22018 = new_String(L": ");
    Constant string_22018_Const = new_Constant((Optr)string_22018);
    // <<. 
    Send PSend22019 = new_Send((Optr)PSend22017, SMB__shiftLeft_, 1, (Optr)string_22018_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend22203 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray22205 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend22207 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22208 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22207);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend22209 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode22206 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22207, (Optr)&t_send1, (Optr)PSend22208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22209, (Optr)&t_method_return);
    Block PBlock22204 = new_Block_with(PArray22205, empty_Array, PThreadedCode22206, 2, PSend22208, PSend22209);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend22210 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend22203, (Optr)PBlock22204);
    String string_22211 = new_String(L"--> ");
    Constant string_22211_Const = new_Constant((Optr)string_22211);
    // <<. 
    Send PSend22212 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22211_Const);
    // at:. 
    Send PSend22213 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend22214 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22213);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22215 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22216 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray22218 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22220 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // at:. 
    Send PSend22221 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22222 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22221);
    Array PThreadedCode22219 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22221, (Optr)&t_send1, (Optr)PSend22222, (Optr)&t_method_return);
    Block PBlock22217 = new_Block_with(PArray22218, empty_Array, PThreadedCode22219, 2, PSend22220, PSend22222);
    // to:do:. 
    Send PSend22223 = new_Send((Optr)PSend22215, SMB_to_do_, 2, (Optr)PSend22216, (Optr)PBlock22217);
    Array PThreadedCode22198 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22199, (Optr)&t_send1, (Optr)PSend22200, (Optr)&t_push1, (Optr)string_22201, (Optr)&t_send1, (Optr)PSend22202, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22203, (Optr)&t_push_closure, (Optr)PBlock22204, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22210, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22211, (Optr)&t_send1, (Optr)PSend22212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend22213, (Optr)&t_send1, (Optr)PSend22214, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22215, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend22216, (Optr)&t_push_closure, (Optr)PBlock22217, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22223, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22196 = new_Method_with(PArray22197, empty_Array, empty_Array, PThreadedCode22198, 6, PSend22202, PSend22210, PSend22212, PSend22214, PSend22223, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22196, Organization_PathSegmentException_Class);
=======
    Send PSend22020 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray22022 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend22024 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22025 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22024);
    Character char_2919 = new_Character(L'.');
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend22026 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    Array PThreadedCode22023 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22024, (Optr)&t_send1, (Optr)PSend22025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend22026, (Optr)&t_method_return);
    Block PBlock22021 = new_Block_with(PArray22022, empty_Array, PThreadedCode22023, 2, PSend22025, PSend22026);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend22027 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend22020, (Optr)PBlock22021);
    String string_22028 = new_String(L"--> ");
    Constant string_22028_Const = new_Constant((Optr)string_22028);
    // <<. 
    Send PSend22029 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22028_Const);
    // at:. 
    Send PSend22030 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend22031 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22030);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22032 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22033 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray22035 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22037 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    // at:. 
    Send PSend22038 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22039 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22038);
    Array PThreadedCode22036 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend22037, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22038, (Optr)&t_send1, (Optr)PSend22039, (Optr)&t_method_return);
    Block PBlock22034 = new_Block_with(PArray22035, empty_Array, PThreadedCode22036, 2, PSend22037, PSend22039);
    // to:do:. 
    Send PSend22040 = new_Send((Optr)PSend22032, SMB_to_do_, 2, (Optr)PSend22033, (Optr)PBlock22034);
    Array PThreadedCode22015 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22016, (Optr)&t_send1, (Optr)PSend22017, (Optr)&t_push1, (Optr)string_22018, (Optr)&t_send1, (Optr)PSend22019, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22020, (Optr)&t_push_closure, (Optr)PBlock22021, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22028, (Optr)&t_send1, (Optr)PSend22029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend22030, (Optr)&t_send1, (Optr)PSend22031, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22032, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend22033, (Optr)&t_push_closure, (Optr)PBlock22034, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22040, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22013 = new_Method_with(PArray22014, empty_Array, empty_Array, PThreadedCode22015, 6, PSend22019, PSend22027, PSend22029, PSend22031, PSend22040, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22013, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
<<<<<<< HEAD
    Array PThreadedCode22225 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod22224 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22225, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod22224, Organization_PathSegmentException_Class);
=======
    Array PThreadedCode22042 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod22041 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22042, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod22041, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_path, MC_SMB_path);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22227 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22229 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22229, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22226 = new_Method_with(PArray22227, empty_Array, empty_Array, PThreadedCode22228, 2, PAssign22229, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod22226, Organization_PathSegmentException_Class);
=======
    Array PArray22044 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22046 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22046, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22043 = new_Method_with(PArray22044, empty_Array, empty_Array, PThreadedCode22045, 2, PAssign22046, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod22043, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
<<<<<<< HEAD
    Send PSend22232 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode22231 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22232, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22230 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22231, 2, PSend22232, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod22230, Organization_PathSegmentException_Class);
=======
    Send PSend22049 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode22048 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22048, 2, PSend22049, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod22047, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
<<<<<<< HEAD
    Array PThreadedCode22234 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod22233 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22234, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod22233, Organization_PathSegmentException_Class);
=======
    Array PThreadedCode22051 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod22050 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22051, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod22050, Organization_PathSegmentException_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_PathSegmentException_Class, SMB_index, MC_SMB_index);
}

void init_Organization_PPathSegmentException_layout() {
    layout_Organization_PathSegmentException_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_PathSegmentException_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_PathSegmentException_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_PathSegmentException_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_PathSegmentException_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_PathSegmentException_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_PathSegmentException = new_Symbol(L"PathSegmentException");
    slot_Organization_PathSegmentException_path = (Optr)new_Slot(1, L"path");
    slot_Organization_PathSegmentException_index = (Optr)new_Slot(2, L"index");
    layout_Organization_PathSegmentException = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Organization_PathSegmentException)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Organization_PathSegmentException)->values[1] = slot_Organization_PathSegmentException_path; // path 
    ((Array)layout_Organization_PathSegmentException)->values[2] = slot_Organization_PathSegmentException_index; // index 
    Organization_PathSegmentException_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Organization_PathSegmentException_Class_class);
    Organization_PathSegmentException_Class->layout = layout_Organization_PathSegmentException;
    Organization_PathSegmentException_Class->name = SMB_PathSegmentException;
    
}

void init_Organization_PPathSegmentException_methods() {
    init_SMB_path_();
    init_SMB_warnOn_();
    init_SMB_path();
    init_SMB_index_();
    init_SMB_message();
    init_SMB_index();
    
}