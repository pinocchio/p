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
    Array PArray7526 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Assign PAssign7528 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_aKey_0_0);
    Assign PAssign7529 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_1);
    Array PThreadedCode7527 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign7528, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7529, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7525 = new_Method_with(PArray7526, empty_Array, empty_Array, PThreadedCode7527, 3, PAssign7528, PAssign7529, self);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7525, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_key_value_, MC_SMB_key_value_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode7531 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_method_return);
    Method PMethod7530 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7531, 1, slot_Collection_Support_Association_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod7530, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_anAssociation_0_0 = new_Variable_named(L"anAssociation", 0);
    Array PArray7533 = new_Array_with(1, (Optr)VAR_anAssociation_0_0);
    Super PSuper7535 = new_Super(SMB__equals_, 1, (Optr)VAR_anAssociation_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7538 = new_Send((Optr)VAR_anAssociation_0_0, SMB_value, 0);
    // =. 
    Send PSend7539 = new_Send((Optr)slot_Collection_Support_Association_value, SMB__equals_, 1, (Optr)PSend7538);
    Array PThreadedCode7537 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_send0, (Optr)PSend7538, (Optr)&t_send1, (Optr)PSend7539, (Optr)&t_block_return);
    Block PBlock7536 = new_Block_with(empty_Array, empty_Array, PThreadedCode7537, 1, PSend7539);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend7540 = new_Send((Optr)PSuper7535, SMB_and_, 1, (Optr)PBlock7536);
    Array PThreadedCode7534 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_super1, (Optr)PSuper7535, (Optr)&t_push_closure, (Optr)PBlock7536, (Optr)&t_send1, (Optr)PSend7540, (Optr)&t_method_return);
    Method PMethod7532 = new_Method_with(PArray7533, empty_Array, empty_Array, PThreadedCode7534, 1, PSend7540);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7532, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7542 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7544 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7544, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7541 = new_Method_with(PArray7542, empty_Array, empty_Array, PThreadedCode7543, 2, PAssign7544, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7541, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_key_value_() {
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    Variable VAR_newKey_0_0 = new_Variable_named(L"newKey", 0);
    Variable VAR_newValue_0_1 = new_Variable_named(L"newValue", 0);
    Array PArray7546 = new_Array_with(2, (Optr)VAR_newKey_0_0, (Optr)VAR_newValue_0_1);
    Symbol SMB_key_ = new_Symbol(L"key:");
    Super PSuper7548 = new_Super(SMB_key_, 1, (Optr)VAR_newKey_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7549 = new_Send((Optr)PSuper7548, SMB_value_, 1, (Optr)VAR_newValue_0_1);
    Array PThreadedCode7547 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newKey_0_0, (Optr)&t_super1, (Optr)PSuper7548, (Optr)&t_push_variable, (Optr)VAR_newValue_0_1, (Optr)&t_send1, (Optr)PSend7549, (Optr)&t_method_return);
    Method PMethod7545 = new_Method_with(PArray7546, empty_Array, empty_Array, PThreadedCode7547, 1, PSend7549);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7545, HEADER(Collection_Support_Association_Class));
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