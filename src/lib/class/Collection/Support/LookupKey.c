#include <lib/class/Collection/Support/LookupKey.h>


Optr layout_Collection_Support_LookupKey_Class_class;
Optr slot_Collection_Support_LookupKey_key;
Optr layout_Collection_Support_LookupKey;


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7475 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend7477 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt_, 1, (Optr)self);
    Array PThreadedCode7476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7477, (Optr)&t_method_return);
    Method PMethod7474 = new_Method_with(PArray7475, empty_Array, empty_Array, PThreadedCode7476, 1, PSend7477);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod7474, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend7480 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB_hash, 0);
    Array PThreadedCode7479 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_send0, (Optr)PSend7480, (Optr)&t_method_return);
    Method PMethod7478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7479, 1, PSend7480);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod7478, Collection_Support_LookupKey_Class);
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
    Array PArray7482 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7484 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7483 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7484, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7481 = new_Method_with(PArray7482, empty_Array, empty_Array, PThreadedCode7483, 2, PAssign7484, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7481, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7486 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend7488 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode7487 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7488, (Optr)&t_method_return);
    Method PMethod7485 = new_Method_with(PArray7486, empty_Array, empty_Array, PThreadedCode7487, 1, PSend7488);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod7485, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7490 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7492 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // <. 
    Send PSend7493 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__lt_, 1, (Optr)PSend7492);
    Array PThreadedCode7491 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7492, (Optr)&t_send1, (Optr)PSend7493, (Optr)&t_method_return);
    Method PMethod7489 = new_Method_with(PArray7490, empty_Array, empty_Array, PThreadedCode7491, 1, PSend7493);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod7489, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7495 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7498 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7500 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7501 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_species, 0);
    // =. 
    Send PSend7502 = new_Send((Optr)PSend7500, SMB__equals_, 1, (Optr)PSend7501);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7506 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // =. 
    Send PSend7507 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__equals_, 1, (Optr)PSend7506);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7508 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7507);
    Array PThreadedCode7505 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7506, (Optr)&t_send1, (Optr)PSend7507, (Optr)&t_send1, (Optr)PSend7508, (Optr)&t_block_return);
    Block PBlock7504 = new_Block_with(empty_Array, empty_Array, PThreadedCode7505, 1, PSend7508);
    // escape:. 
    Send PSend7511 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7510 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7511, (Optr)&t_block_return);
    Block PBlock7509 = new_Block_with(empty_Array, empty_Array, PThreadedCode7510, 1, PSend7511);
    // ifTrue:ifFalse:. 
    Send PSend7503 = new_Send((Optr)PSend7502, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock7504, (Optr)PBlock7509);
    Array PThreadedCode7499 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7500, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7501, (Optr)&t_send1, (Optr)PSend7502, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend7503, (Optr)PBlock7504, (Optr)PBlock7509, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7497 = new_Block_with(PArray7498, empty_Array, PThreadedCode7499, 2, PSend7503, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7512 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7497);
    Array PThreadedCode7496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7497, (Optr)&t_send1, (Optr)PSend7512, (Optr)&t_method_return);
    Method PMethod7494 = new_Method_with(PArray7495, empty_Array, empty_Array, PThreadedCode7496, 1, PSend7512);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7494, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode7514 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_method_return);
    Method PMethod7513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7514, 1, slot_Collection_Support_LookupKey_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod7513, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key, MC_SMB_key);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7516 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7518 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend7519 = new_Send((Optr)PSend7518, SMB_not, 0);
    Array PThreadedCode7517 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend7518, (Optr)&t_send0, (Optr)PSend7519, (Optr)&t_method_return);
    Method PMethod7515 = new_Method_with(PArray7516, empty_Array, empty_Array, PThreadedCode7517, 1, PSend7519);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod7515, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray7521 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend7523 = new_Send((Optr)self, SMB_basicNew, 0);
    // key:. 
    Send PSend7524 = new_Send((Optr)PSend7523, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Array PThreadedCode7522 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7523, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend7524, (Optr)&t_method_return);
    Method PMethod7520 = new_Method_with(PArray7521, empty_Array, empty_Array, PThreadedCode7522, 1, PSend7524);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7520, HEADER(Collection_Support_LookupKey_Class));
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