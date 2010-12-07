#include <lib/class/Alias/Alias.h>


Optr layout_Alias_Alias_Class_class;
Optr slot_Alias_Alias_origin;
Optr slot_Alias_Alias_context;
Optr slot_Alias_Alias_value;
Optr layout_Alias_Alias;


static void init_SMB_context_() {
    Symbol SMB_context_ = new_Symbol(L"context:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21820 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21822 = new_Assign((Optr)slot_Alias_Alias_context, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21821 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21822, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21819 = new_Method_with(PArray21820, empty_Array, empty_Array, PThreadedCode21821, 2, PAssign21822, self);
    
    MethodClosure MC_SMB_context_ = new_MethodClosure((Method)PMethod21819, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context_, MC_SMB_context_);
}


static void init_SMB_origin() {
    Symbol SMB_origin = new_Symbol(L"origin");
    Array PThreadedCode21824 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_origin, (Optr)&t_method_return);
    Method PMethod21823 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21824, 1, slot_Alias_Alias_origin);
    
    MethodClosure MC_SMB_origin = new_MethodClosure((Method)PMethod21823, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin, MC_SMB_origin);
}


static void init_SMB_alias_() {
    /*
    alias: anAlias
// 	^ self new alias: anAlias
    */
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21826 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Assign PAssign21828 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21830 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Assign PAssign21829 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)PSend21830);
    Array PThreadedCode21827 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21828, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21829, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend21830, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21825 = new_Method_with(PArray21826, empty_Array, empty_Array, PThreadedCode21827, 3, PAssign21828, PAssign21829, self);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21825, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_alias_, MC_SMB_alias_);
}


static void init_SMB_origin_() {
    Symbol SMB_origin_ = new_Symbol(L"origin:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21832 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21834 = new_Assign((Optr)slot_Alias_Alias_origin, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21833 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21834, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21831 = new_Method_with(PArray21832, empty_Array, empty_Array, PThreadedCode21833, 2, PAssign21834, self);
    
    MethodClosure MC_SMB_origin_ = new_MethodClosure((Method)PMethod21831, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_origin_, MC_SMB_origin_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode21836 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_value, (Optr)&t_method_return);
    Method PMethod21835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21836, 1, slot_Alias_Alias_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod21835, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21838 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21840 = new_Assign((Optr)slot_Alias_Alias_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21839 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21840, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21837 = new_Method_with(PArray21838, empty_Array, empty_Array, PThreadedCode21839, 2, PAssign21840, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod21837, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21842 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Super PSuper21844 = new_Super(SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    String string_21847 = new_String(L" (");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_21847_Const = new_Constant((Optr)string_21847);
    // <<. 
    Send PSend21848 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21847_Const);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend21849 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    Symbol SMB_closure = new_Symbol(L"closure");
    // closure. 
    Send PSend21850 = new_Send((Optr)PSend21849, SMB_closure, 0);
    Symbol SMB_host = new_Symbol(L"host");
    // host. 
    Send PSend21851 = new_Send((Optr)PSend21850, SMB_host, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21852 = new_Send((Optr)PSend21851, SMB_name, 0);
    // <<. 
    Send PSend21853 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21852);
    String string_21854 = new_String(L">>");
    Constant string_21854_Const = new_Constant((Optr)string_21854);
    // <<. 
    Send PSend21855 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_21854_Const);
    // homeContext. 
    Send PSend21856 = new_Send((Optr)slot_Alias_Alias_context, SMB_homeContext, 0);
    // closure. 
    Send PSend21857 = new_Send((Optr)PSend21856, SMB_closure, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend21858 = new_Send((Optr)PSend21857, SMB_selector, 0);
    // <<. 
    Send PSend21859 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21858);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend21860 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode21846 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21847, (Optr)&t_send1, (Optr)PSend21848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21849, (Optr)&t_send0, (Optr)PSend21850, (Optr)&t_send0, (Optr)PSend21851, (Optr)&t_send0, (Optr)PSend21852, (Optr)&t_send1, (Optr)PSend21853, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_21854, (Optr)&t_send1, (Optr)PSend21855, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_send0, (Optr)PSend21856, (Optr)&t_send0, (Optr)PSend21857, (Optr)&t_send0, (Optr)PSend21858, (Optr)&t_send1, (Optr)PSend21859, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend21860, (Optr)&t_block_return);
    Block PBlock21845 = new_Block_with(empty_Array, empty_Array, PThreadedCode21846, 5, PSend21848, PSend21853, PSend21855, PSend21859, PSend21860);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend21861 = new_Send((Optr)slot_Alias_Alias_context, SMB_ifNotNil_, 1, (Optr)PBlock21845);
    Array PThreadedCode21843 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_super1, (Optr)PSuper21844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_push_closure, (Optr)PBlock21845, (Optr)&t_send1, (Optr)PSend21861, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21841 = new_Method_with(PArray21842, empty_Array, empty_Array, PThreadedCode21843, 3, PSuper21844, PSend21861, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21841, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_context() {
    Symbol SMB_context = new_Symbol(L"context");
    Array PThreadedCode21863 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Alias_Alias_context, (Optr)&t_method_return);
    Method PMethod21862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21863, 1, slot_Alias_Alias_context);
    
    MethodClosure MC_SMB_context = new_MethodClosure((Method)PMethod21862, Alias_Alias_Class);
    store_method(Alias_Alias_Class, SMB_context, MC_SMB_context);
}


static void init_class_SMB_alias_() {
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray21865 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21867 = new_Send((Optr)self, SMB_new, 0);
    // alias:. 
    Send PSend21868 = new_Send((Optr)PSend21867, SMB_alias_, 1, (Optr)VAR_anAlias_0_0);
    Array PThreadedCode21866 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21867, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send1, (Optr)PSend21868, (Optr)&t_method_return);
    Method PMethod21864 = new_Method_with(PArray21865, empty_Array, empty_Array, PThreadedCode21866, 1, PSend21868);
    
    MethodClosure MC_SMB_alias_ = new_MethodClosure((Method)PMethod21864, HEADER(Alias_Alias_Class));
    store_method(HEADER(Alias_Alias_Class), SMB_alias_, MC_SMB_alias_);
}

void init_Alias_PAlias_layout() {
    layout_Alias_Alias_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Alias_Alias_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Alias_Alias_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Alias_Alias_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Alias_Alias_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Alias_Alias_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Alias = new_Symbol(L"Alias");
    slot_Alias_Alias_origin = (Optr)new_Slot(0, L"origin");
    slot_Alias_Alias_context = (Optr)new_Slot(1, L"context");
    slot_Alias_Alias_value = (Optr)new_Slot(2, L"value");
    layout_Alias_Alias = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Alias_Alias)->values[0] = slot_Alias_Alias_origin; // origin 
    ((Array)layout_Alias_Alias)->values[1] = slot_Alias_Alias_context; // context 
    ((Array)layout_Alias_Alias)->values[2] = slot_Alias_Alias_value; // value 
    Alias_Alias_Class = (Class)new_Class(Object_Class, layout_Alias_Alias_Class_class);
    Alias_Alias_Class->layout = layout_Alias_Alias;
    Alias_Alias_Class->name = SMB_Alias;
    
}

void init_Alias_PAlias_methods() {
    init_SMB_context_();
    init_SMB_origin();
    init_SMB_alias_();
    init_SMB_origin_();
    init_SMB_value();
    init_SMB_value_();
    init_SMB_printOn_();
    init_SMB_context();
    init_class_SMB_alias_();
    
}