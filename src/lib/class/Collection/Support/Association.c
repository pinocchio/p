#include <lib/class/Collection/Support/Association.h>


Optr layout_Collection_Support_Association_Class_class;
Optr slot_Collection_Support_Association_value;
Optr layout_Collection_Support_Association;


static void init_SMB_key_value_() {
    /*
    key: newKey value: newValue
// 	"Answer an instance of me with the arguments as the key and value of 
// 	the association."
// 
// 	^(super key: newKey) value: newValue
    */
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray7715 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Assign PAssign7717 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_aKey_0_0);
    Assign PAssign7718 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_1);
    Array PThreadedCode7716 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign7717, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7718, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7714 = new_Method_with(PArray7715, empty_Array, empty_Array, PThreadedCode7716, 3, PAssign7717, PAssign7718, self);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7714, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_key_value_, MC_SMB_key_value_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode7720 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_method_return);
    Method PMethod7719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7720, 1, slot_Collection_Support_Association_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod7719, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_anAssociation_0_0 = new_Variable_named(L"anAssociation", 0);
    Array PArray7722 = new_Array_with(1, (Optr)VAR_anAssociation_0_0);
    Super PSuper7724 = new_Super(SMB__equals_, 1, (Optr)VAR_anAssociation_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7727 = new_Send((Optr)VAR_anAssociation_0_0, SMB_value, 0);
    // =. 
    Send PSend7728 = new_Send((Optr)slot_Collection_Support_Association_value, SMB__equals_, 1, (Optr)PSend7727);
    Array PThreadedCode7726 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_send0, (Optr)PSend7727, (Optr)&t_send1, (Optr)PSend7728, (Optr)&t_block_return);
    Block PBlock7725 = new_Block_with(empty_Array, empty_Array, PThreadedCode7726, 1, PSend7728);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend7729 = new_Send((Optr)PSuper7724, SMB_and_, 1, (Optr)PBlock7725);
    Array PThreadedCode7723 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_super1, (Optr)PSuper7724, (Optr)&t_push_closure, (Optr)PBlock7725, (Optr)&t_send1, (Optr)PSend7729, (Optr)&t_method_return);
    Method PMethod7721 = new_Method_with(PArray7722, empty_Array, empty_Array, PThreadedCode7723, 1, PSend7729);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7721, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7731 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7733 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7733, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7730 = new_Method_with(PArray7731, empty_Array, empty_Array, PThreadedCode7732, 2, PAssign7733, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7730, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_key_value_() {
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    Variable VAR_newKey_0_0 = new_Variable_named(L"newKey", 0);
    Variable VAR_newValue_0_1 = new_Variable_named(L"newValue", 0);
    Array PArray7735 = new_Array_with(2, (Optr)VAR_newKey_0_0, (Optr)VAR_newValue_0_1);
    Symbol SMB_key_ = new_Symbol(L"key:");
    Super PSuper7737 = new_Super(SMB_key_, 1, (Optr)VAR_newKey_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7738 = new_Send((Optr)PSuper7737, SMB_value_, 1, (Optr)VAR_newValue_0_1);
    Array PThreadedCode7736 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newKey_0_0, (Optr)&t_super1, (Optr)PSuper7737, (Optr)&t_push_variable, (Optr)VAR_newValue_0_1, (Optr)&t_send1, (Optr)PSend7738, (Optr)&t_method_return);
    Method PMethod7734 = new_Method_with(PArray7735, empty_Array, empty_Array, PThreadedCode7736, 1, PSend7738);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7734, HEADER(Collection_Support_Association_Class));
    store_method(HEADER(Collection_Support_Association_Class), SMB_key_value_, MC_SMB_key_value_);
}

void init_Collection_Support_PAssociation_layout() {
    layout_Collection_Support_Association_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Support_Association_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Support_Association_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Support_Association_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Support_Association_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Support_Association_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Association = new_Symbol(L"Association");
    slot_Collection_Support_Association_value = (Optr)new_Slot(1, L"value");
    layout_Collection_Support_Association = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Collection_Support_Association)->values[0] = slot_Collection_Support_LookupKey_key; // key 
    ((Array)layout_Collection_Support_Association)->values[1] = slot_Collection_Support_Association_value; // value 
    Collection_Support_Association_Class = (Class)new_Class(Collection_Support_LookupKey_Class, layout_Collection_Support_Association_Class_class);
    Collection_Support_Association_Class->layout = layout_Collection_Support_Association;
    Collection_Support_Association_Class->name = SMB_Association;
    
}

void init_Collection_Support_PAssociation_methods() {
    init_SMB_key_value_();
    init_SMB_value();
    init_SMB__equals_();
    init_SMB_value_();
    init_class_SMB_key_value_();
    
}