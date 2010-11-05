#include <lib/class/Organization/PathSegmentException.h>


Optr layout_Organization_PathSegmentException_Class_class;
Optr slot_Organization_PathSegmentException_path;
Optr slot_Organization_PathSegmentException_index;
Optr layout_Organization_PathSegmentException;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21682 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21684 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21683 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21684, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21681 = new_Method_with(PArray21682, empty_Array, empty_Array, PThreadedCode21683, 2, PAssign21684, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod21681, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21686 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend21688 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21689 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21688);
    String string_21690 = new_String(L": ");
    Constant string_21690_Const = new_Constant((Optr)string_21690);
    // <<. 
    Send PSend21691 = new_Send((Optr)PSend21689, SMB__shiftLeft_, 1, (Optr)string_21690_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21692 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray21694 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21696 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21697 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21696);
    Character char_2898 = new_Character(L'.');
    Constant char_2898_Const = new_Constant((Optr)char_2898);
    // <<. 
    Send PSend21698 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2898_Const);
    Array PThreadedCode21695 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend21696, (Optr)&t_send1, (Optr)PSend21697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend21698, (Optr)&t_method_return);
    Block PBlock21693 = new_Block_with(PArray21694, empty_Array, PThreadedCode21695, 2, PSend21697, PSend21698);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend21699 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend21692, (Optr)PBlock21693);
    String string_21700 = new_String(L"--> ");
    Constant string_21700_Const = new_Constant((Optr)string_21700);
    // <<. 
    Send PSend21701 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21700_Const);
    // at:. 
    Send PSend21702 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend21703 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21702);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21704 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21705 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray21707 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21709 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2898_Const);
    // at:. 
    Send PSend21710 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21711 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21710);
    Array PThreadedCode21708 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2898, (Optr)&t_send1, (Optr)PSend21709, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend21710, (Optr)&t_send1, (Optr)PSend21711, (Optr)&t_method_return);
    Block PBlock21706 = new_Block_with(PArray21707, empty_Array, PThreadedCode21708, 2, PSend21709, PSend21711);
    // to:do:. 
    Send PSend21712 = new_Send((Optr)PSend21704, SMB_to_do_, 2, (Optr)PSend21705, (Optr)PBlock21706);
    Array PThreadedCode21687 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21688, (Optr)&t_send1, (Optr)PSend21689, (Optr)&t_push1, (Optr)string_21690, (Optr)&t_send1, (Optr)PSend21691, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21692, (Optr)&t_push_closure, (Optr)PBlock21693, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21699, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21700, (Optr)&t_send1, (Optr)PSend21701, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend21702, (Optr)&t_send1, (Optr)PSend21703, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21704, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend21705, (Optr)&t_push_closure, (Optr)PBlock21706, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21685 = new_Method_with(PArray21686, empty_Array, empty_Array, PThreadedCode21687, 6, PSend21691, PSend21699, PSend21701, PSend21703, PSend21712, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod21685, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
    Array PThreadedCode21714 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod21713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21714, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod21713, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path, MC_SMB_path);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21716 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21718 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21718, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21715 = new_Method_with(PArray21716, empty_Array, empty_Array, PThreadedCode21717, 2, PAssign21718, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod21715, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21721 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21720 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21720, 2, PSend21721, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod21719, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode21723 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod21722 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21723, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod21722, Organization_PathSegmentException_Class);
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