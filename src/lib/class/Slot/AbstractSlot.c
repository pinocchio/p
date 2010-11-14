#include <lib/class/Slot/AbstractSlot.h>


Optr layout_Slot_AbstractSlot_Class_class;
Optr slot_Slot_AbstractSlot_index;
Optr slot_Slot_AbstractSlot_name;
Optr slot_Slot_AbstractSlot_package;
Optr layout_Slot_AbstractSlot;


static void init_SMB_isInspectable() {
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    Array PThreadedCode22129 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod22128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22129, 1, true_Const);
    
    MethodClosure MC_SMB_isInspectable = new_MethodClosure((Method)PMethod22128, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_isInspectable, MC_SMB_isInspectable);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray22131 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend22133 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode22132 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22133, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22130 = new_Method_with(PArray22131, empty_Array, empty_Array, PThreadedCode22132, 2, PSend22133, self);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod22130, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22135 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22137 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Array PThreadedCode22136 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend22137, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22134 = new_Method_with(PArray22135, empty_Array, empty_Array, PThreadedCode22136, 2, PSend22137, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod22134, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22139 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22141 = new_Assign((Optr)slot_Slot_AbstractSlot_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22140 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22141, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22138 = new_Method_with(PArray22139, empty_Array, empty_Array, PThreadedCode22140, 2, PAssign22141, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod22138, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_cloneAt_for_() {
    Symbol SMB_cloneAt_for_ = new_Symbol(L"cloneAt:for:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_decls_0_1 = new_Variable_named(L"decls", 0);
    Array PArray22143 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_decls_0_1);
    Symbol SMB_shouldNeverHappen = new_Symbol(L"shouldNeverHappen");
    // shouldNeverHappen. 
    Send PSend22145 = new_Send((Optr)self, SMB_shouldNeverHappen, 0);
    Array PThreadedCode22144 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22145, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22142 = new_Method_with(PArray22143, empty_Array, empty_Array, PThreadedCode22144, 2, PSend22145, self);
    
    MethodClosure MC_SMB_cloneAt_for_ = new_MethodClosure((Method)PMethod22142, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_cloneAt_for_, MC_SMB_cloneAt_for_);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray22147 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22149 = new_Assign((Optr)slot_Slot_AbstractSlot_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22149, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22146 = new_Method_with(PArray22147, empty_Array, empty_Array, PThreadedCode22148, 2, PAssign22149, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod22146, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray22151 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_22153 = new_String(L"Slot(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_22153_Const = new_Constant((Optr)string_22153);
    // <<. 
    Send PSend22154 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_22153_Const);
    // <<. 
    Send PSend22155 = new_Send((Optr)PSend22154, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend22156 = new_Send((Optr)PSend22155, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode22152 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_22153, (Optr)&t_send1, (Optr)PSend22154, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend22155, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend22156, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22150 = new_Method_with(PArray22151, empty_Array, empty_Array, PThreadedCode22152, 2, PSend22156, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22150, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray22158 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Array PThreadedCode22159 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22157 = new_Method_with(PArray22158, empty_Array, empty_Array, PThreadedCode22159, 1, self);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod22157, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode22161 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_method_return);
    Method PMethod22160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22161, 1, slot_Slot_AbstractSlot_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod22160, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode22163 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_index, (Optr)&t_method_return);
    Method PMethod22162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22163, 1, slot_Slot_AbstractSlot_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod22162, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index, MC_SMB_index);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray22165 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22167 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend22168 = new_Send((Optr)PSend22167, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode22166 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22167, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22168, (Optr)&t_method_return);
    Method PMethod22164 = new_Method_with(PArray22165, empty_Array, empty_Array, PThreadedCode22166, 1, PSend22168);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod22164, HEADER(AbstractSlot_Class));
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