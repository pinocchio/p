#include <lib/class/Organization/PathSegmentException.h>


Optr layout_Organization_PathSegmentException_Class_class;
Optr slot_Organization_PathSegmentException_path;
Optr slot_Organization_PathSegmentException_index;
Optr layout_Organization_PathSegmentException;


static void init_SMB_path_() {
    Symbol SMB_path_ = new_Symbol(L"path:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21823 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21825 = new_Assign((Optr)slot_Organization_PathSegmentException_path, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21824 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21825, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21822 = new_Method_with(PArray21823, empty_Array, empty_Array, PThreadedCode21824, 2, PAssign21825, self);
    
    MethodClosure MC_SMB_path_ = new_MethodClosure((Method)PMethod21822, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path_, MC_SMB_path_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21827 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend21829 = new_Send((Optr)self, SMB_message, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21830 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21829);
    String string_21831 = new_String(L": ");
    Constant string_21831_Const = new_Constant((Optr)string_21831);
    // <<. 
    Send PSend21832 = new_Send((Optr)PSend21830, SMB__shiftLeft_, 1, (Optr)string_21831_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21833 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray21835 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21837 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21838 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21837);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend21839 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode21836 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend21837, (Optr)&t_send1, (Optr)PSend21838, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend21839, (Optr)&t_method_return);
    Block PBlock21834 = new_Block_with(PArray21835, empty_Array, PThreadedCode21836, 2, PSend21838, PSend21839);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend21840 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend21833, (Optr)PBlock21834);
    String string_21841 = new_String(L"--> ");
    Constant string_21841_Const = new_Constant((Optr)string_21841);
    // <<. 
    Send PSend21842 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21841_Const);
    // at:. 
    Send PSend21843 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)slot_Organization_PathSegmentException_index);
    // <<. 
    Send PSend21844 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21843);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21845 = new_Send((Optr)slot_Organization_PathSegmentException_index, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21846 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_size, 0);
    Array PArray21848 = new_Array_with(1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21850 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    // at:. 
    Send PSend21851 = new_Send((Optr)slot_Organization_PathSegmentException_path, SMB_at_, 1, (Optr)VAR_i_1_0);
    // <<. 
    Send PSend21852 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21851);
    Array PThreadedCode21849 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend21850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend21851, (Optr)&t_send1, (Optr)PSend21852, (Optr)&t_method_return);
    Block PBlock21847 = new_Block_with(PArray21848, empty_Array, PThreadedCode21849, 2, PSend21850, PSend21852);
    // to:do:. 
    Send PSend21853 = new_Send((Optr)PSend21845, SMB_to_do_, 2, (Optr)PSend21846, (Optr)PBlock21847);
    Array PThreadedCode21828 = instantiate_Array_with(ThreadedCode_Class, 0, 58, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21829, (Optr)&t_send1, (Optr)PSend21830, (Optr)&t_push1, (Optr)string_21831, (Optr)&t_send1, (Optr)PSend21832, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21833, (Optr)&t_push_closure, (Optr)PBlock21834, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21840, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21841, (Optr)&t_send1, (Optr)PSend21842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_send1, (Optr)PSend21843, (Optr)&t_send1, (Optr)PSend21844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21845, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_send0, (Optr)PSend21846, (Optr)&t_push_closure, (Optr)PBlock21847, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21826 = new_Method_with(PArray21827, empty_Array, empty_Array, PThreadedCode21828, 6, PSend21832, PSend21840, PSend21842, PSend21844, PSend21853, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod21826, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_path() {
    Symbol SMB_path = new_Symbol(L"path");
    Array PThreadedCode21855 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_path, (Optr)&t_method_return);
    Method PMethod21854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21855, 1, slot_Organization_PathSegmentException_path);
    
    MethodClosure MC_SMB_path = new_MethodClosure((Method)PMethod21854, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_path, MC_SMB_path);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21857 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21859 = new_Assign((Optr)slot_Organization_PathSegmentException_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21859, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21856 = new_Method_with(PArray21857, empty_Array, empty_Array, PThreadedCode21858, 2, PAssign21859, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod21856, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21862 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21861 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21862, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21861, 2, PSend21862, self);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod21860, Organization_PathSegmentException_Class);
    store_method(Organization_PathSegmentException_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode21864 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_PathSegmentException_index, (Optr)&t_method_return);
    Method PMethod21863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21864, 1, slot_Organization_PathSegmentException_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod21863, Organization_PathSegmentException_Class);
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