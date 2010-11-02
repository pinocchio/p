#include <lib/class/Slot/AbstractSlot.h>


Optr layout_Slot_AbstractSlot_Class_class;
Optr slot_Slot_AbstractSlot_index;
Optr slot_Slot_AbstractSlot_name;
Optr slot_Slot_AbstractSlot_package;
Optr layout_Slot_AbstractSlot;


static void init_SMB_isInspectable() {
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    Array PThreadedCode21769 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21769, 1, true_Const);
    
    MethodClosure MC_SMB_isInspectable = new_MethodClosure((Method)PMethod21768, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_isInspectable, MC_SMB_isInspectable);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray21771 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21773 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21772 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21770 = new_Method_with(PArray21771, empty_Array, empty_Array, PThreadedCode21772, 2, PSend21773, self);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod21770, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21775 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21777 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Array PThreadedCode21776 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend21777, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21774 = new_Method_with(PArray21775, empty_Array, empty_Array, PThreadedCode21776, 2, PSend21777, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod21774, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21779 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21781 = new_Assign((Optr)slot_Slot_AbstractSlot_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21780 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21781, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21778 = new_Method_with(PArray21779, empty_Array, empty_Array, PThreadedCode21780, 2, PAssign21781, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21778, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_cloneAt_for_() {
    Symbol SMB_cloneAt_for_ = new_Symbol(L"cloneAt:for:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_decls_0_1 = new_Variable_named(L"decls", 0);
    Array PArray21783 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_decls_0_1);
    Symbol SMB_shouldNeverHappen = new_Symbol(L"shouldNeverHappen");
    // shouldNeverHappen. 
    Send PSend21785 = new_Send((Optr)self, SMB_shouldNeverHappen, 0);
    Array PThreadedCode21784 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21782 = new_Method_with(PArray21783, empty_Array, empty_Array, PThreadedCode21784, 2, PSend21785, self);
    
    MethodClosure MC_SMB_cloneAt_for_ = new_MethodClosure((Method)PMethod21782, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_cloneAt_for_, MC_SMB_cloneAt_for_);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21787 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21789 = new_Assign((Optr)slot_Slot_AbstractSlot_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21789, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21786 = new_Method_with(PArray21787, empty_Array, empty_Array, PThreadedCode21788, 2, PAssign21789, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod21786, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21791 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_21793 = new_String(L"Slot(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21793_Const = new_Constant((Optr)string_21793);
    // <<. 
    Send PSend21794 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21793_Const);
    // <<. 
    Send PSend21795 = new_Send((Optr)PSend21794, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21796 = new_Send((Optr)PSend21795, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21792 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21793, (Optr)&t_send1, (Optr)PSend21794, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend21795, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21796, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21790 = new_Method_with(PArray21791, empty_Array, empty_Array, PThreadedCode21792, 2, PSend21796, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21790, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray21798 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Array PThreadedCode21799 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21797 = new_Method_with(PArray21798, empty_Array, empty_Array, PThreadedCode21799, 1, self);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod21797, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21801 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_method_return);
    Method PMethod21800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21801, 1, slot_Slot_AbstractSlot_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21800, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode21803 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_index, (Optr)&t_method_return);
    Method PMethod21802 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21803, 1, slot_Slot_AbstractSlot_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod21802, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index, MC_SMB_index);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21805 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21807 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21808 = new_Send((Optr)PSend21807, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21807, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21808, (Optr)&t_method_return);
    Method PMethod21804 = new_Method_with(PArray21805, empty_Array, empty_Array, PThreadedCode21806, 1, PSend21808);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod21804, HEADER(AbstractSlot_Class));
    store_method(HEADER(AbstractSlot_Class), SMB_named_, MC_SMB_named_);
}

void init_Slot_PAbstractSlot_layout() {
    layout_Slot_AbstractSlot_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Slot_AbstractSlot_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Slot_AbstractSlot_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Slot_AbstractSlot_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Slot_AbstractSlot_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Slot_AbstractSlot_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractSlot = new_Symbol(L"AbstractSlot");
    slot_Slot_AbstractSlot_index = (Optr)new_Slot(0, L"index");
    slot_Slot_AbstractSlot_name = (Optr)new_Slot(1, L"name");
    slot_Slot_AbstractSlot_package = (Optr)new_Slot(2, L"package");
    layout_Slot_AbstractSlot = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Slot_AbstractSlot)->values[0] = slot_Slot_AbstractSlot_index; // index 
    ((Array)layout_Slot_AbstractSlot)->values[1] = slot_Slot_AbstractSlot_name; // name 
    ((Array)layout_Slot_AbstractSlot)->values[2] = slot_Slot_AbstractSlot_package; // package 
    AbstractSlot_Class = (Class)new_Class(Object_Class, layout_Slot_AbstractSlot_Class_class);
    AbstractSlot_Class->layout = layout_Slot_AbstractSlot;
    AbstractSlot_Class->name = SMB_AbstractSlot;
    
}

void init_Slot_PAbstractSlot_methods() {
    init_SMB_isInspectable();
    init_SMB_aliasFrom_to_in_();
    init_SMB_inspectLabelOn_();
    init_SMB_name_();
    init_SMB_cloneAt_for_();
    init_SMB_index_();
    init_SMB_printOn_();
    init_SMB_asVariableAt_();
    init_SMB_name();
    init_SMB_index();
    init_class_SMB_named_();
    
}