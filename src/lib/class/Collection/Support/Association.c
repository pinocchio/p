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
    Array PArray7774 = new_Array_with(2, (Optr)VAR_aKey_0_0, (Optr)VAR_anObject_0_1);
    Assign PAssign7776 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_aKey_0_0);
    Assign PAssign7777 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_1);
    Array PThreadedCode7775 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign7776, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7777, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7773 = new_Method_with(PArray7774, empty_Array, empty_Array, PThreadedCode7775, 3, PAssign7776, PAssign7777, self);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7773, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_key_value_, MC_SMB_key_value_);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    Array PThreadedCode7779 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_method_return);
    Method PMethod7778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7779, 1, slot_Collection_Support_Association_value);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod7778, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value, MC_SMB_value);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_anAssociation_0_0 = new_Variable_named(L"anAssociation", 0);
    Array PArray7781 = new_Array_with(1, (Optr)VAR_anAssociation_0_0);
    Super PSuper7783 = new_Super(SMB__equals_, 1, (Optr)VAR_anAssociation_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7786 = new_Send((Optr)VAR_anAssociation_0_0, SMB_value, 0);
    // =. 
    Send PSend7787 = new_Send((Optr)slot_Collection_Support_Association_value, SMB__equals_, 1, (Optr)PSend7786);
    Array PThreadedCode7785 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_Association_value, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_send0, (Optr)PSend7786, (Optr)&t_send1, (Optr)PSend7787, (Optr)&t_block_return);
    Block PBlock7784 = new_Block_with(empty_Array, empty_Array, PThreadedCode7785, 1, PSend7787);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend7788 = new_Send((Optr)PSuper7783, SMB_and_, 1, (Optr)PBlock7784);
    Array PThreadedCode7782 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anAssociation_0_0, (Optr)&t_super1, (Optr)PSuper7783, (Optr)&t_push_closure, (Optr)PBlock7784, (Optr)&t_send1, (Optr)PSend7788, (Optr)&t_method_return);
    Method PMethod7780 = new_Method_with(PArray7781, empty_Array, empty_Array, PThreadedCode7782, 1, PSend7788);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7780, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7790 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7792 = new_Assign((Optr)slot_Collection_Support_Association_value, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7791 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7792, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7789 = new_Method_with(PArray7790, empty_Array, empty_Array, PThreadedCode7791, 2, PAssign7792, self);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7789, Collection_Support_Association_Class);
    store_method(Collection_Support_Association_Class, SMB_value_, MC_SMB_value_);
}


static void init_class_SMB_key_value_() {
    Symbol SMB_key_value_ = new_Symbol(L"key:value:");
    Variable VAR_newKey_0_0 = new_Variable_named(L"newKey", 0);
    Variable VAR_newValue_0_1 = new_Variable_named(L"newValue", 0);
    Array PArray7794 = new_Array_with(2, (Optr)VAR_newKey_0_0, (Optr)VAR_newValue_0_1);
    Symbol SMB_key_ = new_Symbol(L"key:");
    Super PSuper7796 = new_Super(SMB_key_, 1, (Optr)VAR_newKey_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7797 = new_Send((Optr)PSuper7796, SMB_value_, 1, (Optr)VAR_newValue_0_1);
    Array PThreadedCode7795 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newKey_0_0, (Optr)&t_super1, (Optr)PSuper7796, (Optr)&t_push_variable, (Optr)VAR_newValue_0_1, (Optr)&t_send1, (Optr)PSend7797, (Optr)&t_method_return);
    Method PMethod7793 = new_Method_with(PArray7794, empty_Array, empty_Array, PThreadedCode7795, 1, PSend7797);
    
    MethodClosure MC_SMB_key_value_ = new_MethodClosure((Method)PMethod7793, HEADER(Collection_Support_Association_Class));
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