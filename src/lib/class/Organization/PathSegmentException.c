#include <lib/class/Organization/PathSegmentException.h>


Optr layout_Organization_PathSegmentException_Class_class;
Optr slot_Organization_PathSegmentException_path;
Optr slot_Organization_PathSegmentException_index;
Optr layout_Organization_PathSegmentException;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22231 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22233 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22233, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22230 = new_Method_with(PArray22231, empty_Array, empty_Array, PThreadedCode22232, 2, PAssign22233, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod22230, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22235 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend22237 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22238 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22237);
    String string_22239 = new_String(L": ");
    Constant string_22239_Const = new_Constant((Optr)string_22239);
    // <<. 
    Send PSend22240 = new_Send((Optr)PSend22238, SMB__shiftLeft_, 1, (Optr)string_22239_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend22241 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray22243 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend22245 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22246 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22245);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend22247 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode22244 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22245, (Optr)&t_send1, (Optr)PSend22246, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22247, (Optr)&t_method_return);
    Block PBlock22242 = new_Block_with(PArray22243, empty_Array, PThreadedCode22244, 2, PSend22246, PSend22247);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend22248 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend22241, (Optr)PBlock22242);
    String string_22249 = new_String(L"--> ");
    Constant string_22249_Const = new_Constant((Optr)string_22249);
    // <<. 
    Send PSend22250 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22249_Const);
    // at:. 
    Send PSend22251 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend22252 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22251);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend22253 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22254 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray22256 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22258 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // at:. 
    Send PSend22259 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend22260 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22259);
    Array PThreadedCode22257 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22258, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend22259, (Optr)&t_send1, (Optr)PSend22260, (Optr)&t_method_return);
    Block PBlock22255 = new_Block_with(PArray22256, empty_Array, PThreadedCode22257, 2, PSend22258, PSend22260);
    // to:do:. 
    Send PSend22261 = new_Send((Optr)PSend22253, SMB_to_do_, 2, (Optr)PSend22254, (Optr)PBlock22255);
    Array PThreadedCode22236 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22237, (Optr)&t_send1, (Optr)PSend22238, (Optr)&t_push1, (Optr)string_22239, (Optr)&t_send1, (Optr)PSend22240, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22241, (Optr)&t_push_closure, (Optr)PBlock22242, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22249, (Optr)&t_send1, (Optr)PSend22250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend22251, (Optr)&t_send1, (Optr)PSend22252, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22253, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend22254, (Optr)&t_push_closure, (Optr)PBlock22255, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend22261, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22234 = new_Method_with(PArray22235, empty_Array, empty_Array, PThreadedCode22236, 6, PSend22240, PSend22248, PSend22250, PSend22252, PSend22261, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod22234, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
    Array PThreadedCode22263 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod22262 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22263, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod22262, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path, MC_SMB_path);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22265 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22267 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22266 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22267, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22264 = new_Method_with(PArray22265, empty_Array, empty_Array, PThreadedCode22266, 2, PAssign22267, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod22264, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend22270 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode22269 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22270, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22269, 2, PSend22270, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod22268, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode22272 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod22271 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22272, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod22271, Organization_PathSegmentException_Class);
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