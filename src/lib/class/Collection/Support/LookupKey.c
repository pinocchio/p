#include <lib/class/Collection/Support/LookupKey.h>


Optr layout_Collection_Support_LookupKey_Class_class;
Optr slot_Collection_Support_LookupKey_key;
Optr layout_Collection_Support_LookupKey;


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7430 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend7432 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt_, 1, (Optr)self);
    Array PThreadedCode7431 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7432, (Optr)&t_method_return);
    Method PMethod7429 = new_Method_with(PArray7430, empty_Array, empty_Array, PThreadedCode7431, 1, PSend7432);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod7429, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend7435 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB_hash, 0);
    Array PThreadedCode7434 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_send0, (Optr)PSend7435, (Optr)&t_method_return);
    Method PMethod7433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7434, 1, PSend7435);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod7433, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_key_() {
    /*
    key: aKey 
// 	"Answer an instance of me with the argument as the lookup up."
// 
// 	^self basicNew key: aKey
    */
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7437 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7439 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7438 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7439, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7436 = new_Method_with(PArray7437, empty_Array, empty_Array, PThreadedCode7438, 2, PAssign7439, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7436, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7441 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend7443 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode7442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7443, (Optr)&t_method_return);
    Method PMethod7440 = new_Method_with(PArray7441, empty_Array, empty_Array, PThreadedCode7442, 1, PSend7443);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod7440, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7445 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7447 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // <. 
    Send PSend7448 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__lt_, 1, (Optr)PSend7447);
    Array PThreadedCode7446 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7447, (Optr)&t_send1, (Optr)PSend7448, (Optr)&t_method_return);
    Method PMethod7444 = new_Method_with(PArray7445, empty_Array, empty_Array, PThreadedCode7446, 1, PSend7448);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod7444, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7450 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7453 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7455 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7456 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_species, 0);
    // =. 
    Send PSend7457 = new_Send((Optr)PSend7455, SMB__equals_, 1, (Optr)PSend7456);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7461 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // =. 
    Send PSend7462 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__equals_, 1, (Optr)PSend7461);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7463 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7462);
    Array PThreadedCode7460 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7461, (Optr)&t_send1, (Optr)PSend7462, (Optr)&t_send1, (Optr)PSend7463, (Optr)&t_block_return);
    Block PBlock7459 = new_Block_with(empty_Array, empty_Array, PThreadedCode7460, 1, PSend7463);
    // escape:. 
    Send PSend7466 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7465 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7466, (Optr)&t_block_return);
    Block PBlock7464 = new_Block_with(empty_Array, empty_Array, PThreadedCode7465, 1, PSend7466);
    // ifTrue:ifFalse:. 
    Send PSend7458 = new_Send((Optr)PSend7457, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock7459, (Optr)PBlock7464);
    Array PThreadedCode7454 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7455, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7456, (Optr)&t_send1, (Optr)PSend7457, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend7458, (Optr)PBlock7459, (Optr)PBlock7464, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7452 = new_Block_with(PArray7453, empty_Array, PThreadedCode7454, 2, PSend7458, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7467 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7452);
    Array PThreadedCode7451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7452, (Optr)&t_send1, (Optr)PSend7467, (Optr)&t_method_return);
    Method PMethod7449 = new_Method_with(PArray7450, empty_Array, empty_Array, PThreadedCode7451, 1, PSend7467);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7449, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode7469 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_method_return);
    Method PMethod7468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7469, 1, slot_Collection_Support_LookupKey_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod7468, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key, MC_SMB_key);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7471 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7473 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend7474 = new_Send((Optr)PSend7473, SMB_not, 0);
    Array PThreadedCode7472 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend7473, (Optr)&t_send0, (Optr)PSend7474, (Optr)&t_method_return);
    Method PMethod7470 = new_Method_with(PArray7471, empty_Array, empty_Array, PThreadedCode7472, 1, PSend7474);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod7470, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray7476 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend7478 = new_Send((Optr)self, SMB_basicNew, 0);
    // key:. 
    Send PSend7479 = new_Send((Optr)PSend7478, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Array PThreadedCode7477 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7478, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend7479, (Optr)&t_method_return);
    Method PMethod7475 = new_Method_with(PArray7476, empty_Array, empty_Array, PThreadedCode7477, 1, PSend7479);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7475, HEADER(Collection_Support_LookupKey_Class));
    store_method(HEADER(Collection_Support_LookupKey_Class), SMB_key_, MC_SMB_key_);
}

void init_Collection_Support_PLookupKey_layout() {
    layout_Collection_Support_LookupKey_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Support_LookupKey_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_LookupKey = new_Symbol(L"LookupKey");
    slot_Collection_Support_LookupKey_key = (Optr)new_Slot(0, L"key");
    layout_Collection_Support_LookupKey = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Collection_Support_LookupKey)->values[0] = slot_Collection_Support_LookupKey_key; // key 
    Collection_Support_LookupKey_Class = (Class)new_Class(Object_Class, layout_Collection_Support_LookupKey_Class_class);
    Collection_Support_LookupKey_Class->layout = layout_Collection_Support_LookupKey;
    Collection_Support_LookupKey_Class->name = SMB_LookupKey;
    
}

void init_Collection_Support_PLookupKey_methods() {
    init_SMB__gt_();
    init_SMB_hash();
    init_SMB_key_();
    init_SMB__gt__equals_();
    init_SMB__lt_();
    init_SMB__equals_();
    init_SMB_key();
    init_SMB__lt__equals_();
    init_class_SMB_key_();
    
}