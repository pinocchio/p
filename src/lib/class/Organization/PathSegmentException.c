#include <lib/class/Organization/PathSegmentException.h>


Optr layout_Organization_PathSegmentException_Class_class;
Optr slot_Organization_PathSegmentException_path;
Optr slot_Organization_PathSegmentException_index;
Optr layout_Organization_PathSegmentException;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22012 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22014 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22014, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22011 = new_Method_with(PArray22012, empty_Array, empty_Array, PThreadedCode22013, 2, PAssign22014, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22011, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22016 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend22018 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22019 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22018);
    String string_22020 = new_String(L": ");
    Constant string_22020_Const = new_Constant((Optr)string_22020);
    // <<. 
    Send PSend22021 = new_Send((Optr)PSend22019, SMB__shiftLeft_, 1, (Optr)string_22020_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend22022 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray22024 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend22026 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22027 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22026);
    Character char_2919 = new_Character(L'.');
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend22028 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    Array PThreadedCode22025 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22026, (Optr)&t_send1, (Optr)PSend22027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend22028, (Optr)&t_method_return);
    Block PBlock22023 = new_Block_with(PArray22024, empty_Array, PThreadedCode22025, 2, PSend22027, PSend22028);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend22029 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend22022, (Optr)PBlock22023);
    String string_22030 = new_String(L"--> ");
    Constant string_22030_Const = new_Constant((Optr)string_22030);
    // <<. 
    Send PSend22031 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22030_Const);
    // at:. 
    Send PSend22032 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend22033 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22032);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22034 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22035 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray22037 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22039 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    // at:. 
    Send PSend22040 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22041 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22040);
    Array PThreadedCode22038 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend22039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22040, (Optr)&t_send1, (Optr)PSend22041, (Optr)&t_method_return);
    Block PBlock22036 = new_Block_with(PArray22037, empty_Array, PThreadedCode22038, 2, PSend22039, PSend22041);
    // to:do:. 
    Send PSend22042 = new_Send((Optr)PSend22034, SMB_to_do_, 2, (Optr)PSend22035, (Optr)PBlock22036);
    Array PThreadedCode22017 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22018, (Optr)&t_send1, (Optr)PSend22019, (Optr)&t_push1, (Optr)string_22020, (Optr)&t_send1, (Optr)PSend22021, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22022, (Optr)&t_push_closure, (Optr)PBlock22023, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22029, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22030, (Optr)&t_send1, (Optr)PSend22031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend22032, (Optr)&t_send1, (Optr)PSend22033, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22034, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend22035, (Optr)&t_push_closure, (Optr)PBlock22036, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22042, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22015 = new_Method_with(PArray22016, empty_Array, empty_Array, PThreadedCode22017, 6, PSend22021, PSend22029, PSend22031, PSend22033, PSend22042, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22015, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
    Array PThreadedCode22044 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod22043 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22044, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod22043, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path, MC_SMB_path);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22046 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22048 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22047 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22048, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22045 = new_Method_with(PArray22046, empty_Array, empty_Array, PThreadedCode22047, 2, PAssign22048, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod22045, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend22051 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode22050 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22050, 2, PSend22051, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod22049, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode22053 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod22052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22053, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod22052, Organization_PathSegmentException_Class);
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