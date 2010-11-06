#include <lib/class/Slot/AbstractSlot.h>


Optr layout_Slot_AbstractSlot_Class_class;
Optr slot_Slot_AbstractSlot_index;
Optr slot_Slot_AbstractSlot_name;
Optr slot_Slot_AbstractSlot_package;
Optr layout_Slot_AbstractSlot;


static void init_SMB_isInspectable() {
    Symbol SMB_isInspectable = new_Symbol(L"isInspectable");
    Array PThreadedCode21940 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21940, 1, true_Const);
    
    MethodClosure MC_SMB_isInspectable = new_MethodClosure((Method)PMethod21939, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_isInspectable, MC_SMB_isInspectable);
}


static void init_SMB_aliasFrom_to_in_() {
    Symbol SMB_aliasFrom_to_in_ = new_Symbol(L"aliasFrom:to:in:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Variable VAR_anotherObject_0_1 = new_Variable_named(L"anotherObject", 0);
    Variable VAR_aContext_0_2 = new_Variable_named(L"aContext", 0);
    Array PArray21942 = new_Array_with(3, (Optr)VAR_anObject_0_0, (Optr)VAR_anotherObject_0_1, (Optr)VAR_aContext_0_2);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21944 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21943 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21944, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21941 = new_Method_with(PArray21942, empty_Array, empty_Array, PThreadedCode21943, 2, PSend21944, self);
    
    MethodClosure MC_SMB_aliasFrom_to_in_ = new_MethodClosure((Method)PMethod21941, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_aliasFrom_to_in_, MC_SMB_aliasFrom_to_in_);
}


static void init_SMB_inspectLabelOn_() {
    Symbol SMB_inspectLabelOn_ = new_Symbol(L"inspectLabelOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21946 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21948 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Array PThreadedCode21947 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend21948, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21945 = new_Method_with(PArray21946, empty_Array, empty_Array, PThreadedCode21947, 2, PSend21948, self);
    
    MethodClosure MC_SMB_inspectLabelOn_ = new_MethodClosure((Method)PMethod21945, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_inspectLabelOn_, MC_SMB_inspectLabelOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21950 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21952 = new_Assign((Optr)slot_Slot_AbstractSlot_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21951 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21952, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21949 = new_Method_with(PArray21950, empty_Array, empty_Array, PThreadedCode21951, 2, PAssign21952, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod21949, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_cloneAt_for_() {
    Symbol SMB_cloneAt_for_ = new_Symbol(L"cloneAt:for:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Variable VAR_decls_0_1 = new_Variable_named(L"decls", 0);
    Array PArray21954 = new_Array_with(2, (Optr)VAR_index_0_0, (Optr)VAR_decls_0_1);
    Symbol SMB_shouldNeverHappen = new_Symbol(L"shouldNeverHappen");
    // shouldNeverHappen. 
    Send PSend21956 = new_Send((Optr)self, SMB_shouldNeverHappen, 0);
    Array PThreadedCode21955 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21956, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21953 = new_Method_with(PArray21954, empty_Array, empty_Array, PThreadedCode21955, 2, PSend21956, self);
    
    MethodClosure MC_SMB_cloneAt_for_ = new_MethodClosure((Method)PMethod21953, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_cloneAt_for_, MC_SMB_cloneAt_for_);
}


static void init_SMB_index_() {
    Symbol SMB_index_ = new_Symbol(L"index:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21958 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21960 = new_Assign((Optr)slot_Slot_AbstractSlot_index, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21959 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21960, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21957 = new_Method_with(PArray21958, empty_Array, empty_Array, PThreadedCode21959, 2, PAssign21960, self);
    
    MethodClosure MC_SMB_index_ = new_MethodClosure((Method)PMethod21957, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index_, MC_SMB_index_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21962 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_21964 = new_String(L"Slot(");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21964_Const = new_Constant((Optr)string_21964);
    // <<. 
    Send PSend21965 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21964_Const);
    // <<. 
    Send PSend21966 = new_Send((Optr)PSend21965, SMB__shiftLeft_, 1, (Optr)slot_Slot_AbstractSlot_name);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21967 = new_Send((Optr)PSend21966, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21963 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21964, (Optr)&t_send1, (Optr)PSend21965, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_send1, (Optr)PSend21966, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21967, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21961 = new_Method_with(PArray21962, empty_Array, empty_Array, PThreadedCode21963, 2, PSend21967, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21961, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asVariableAt_() {
    Symbol SMB_asVariableAt_ = new_Symbol(L"asVariableAt:");
    Variable VAR_scope_0_0 = new_Variable_named(L"scope", 0);
    Array PArray21969 = new_Array_with(1, (Optr)VAR_scope_0_0);
    Array PThreadedCode21970 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21968 = new_Method_with(PArray21969, empty_Array, empty_Array, PThreadedCode21970, 1, self);
    
    MethodClosure MC_SMB_asVariableAt_ = new_MethodClosure((Method)PMethod21968, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_asVariableAt_, MC_SMB_asVariableAt_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode21972 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_name, (Optr)&t_method_return);
    Method PMethod21971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21972, 1, slot_Slot_AbstractSlot_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod21971, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_name, MC_SMB_name);
}


static void init_SMB_index() {
    Symbol SMB_index = new_Symbol(L"index");
    Array PThreadedCode21974 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Slot_AbstractSlot_index, (Optr)&t_method_return);
    Method PMethod21973 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21974, 1, slot_Slot_AbstractSlot_index);
    
    MethodClosure MC_SMB_index = new_MethodClosure((Method)PMethod21973, AbstractSlot_Class);
    store_method(AbstractSlot_Class, SMB_index, MC_SMB_index);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21976 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21978 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend21979 = new_Send((Optr)PSend21978, SMB_name_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21977 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21978, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21979, (Optr)&t_method_return);
    Method PMethod21975 = new_Method_with(PArray21976, empty_Array, empty_Array, PThreadedCode21977, 1, PSend21979);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod21975, HEADER(AbstractSlot_Class));
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