#include <lib/class/Collection/Support/LookupKey.h>


Optr layout_Collection_Support_LookupKey_Class_class;
Optr slot_Collection_Support_LookupKey_key;
Optr layout_Collection_Support_LookupKey;


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7664 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend7666 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt_, 1, (Optr)self);
    Array PThreadedCode7665 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7666, (Optr)&t_method_return);
    Method PMethod7663 = new_Method_with(PArray7664, empty_Array, empty_Array, PThreadedCode7665, 1, PSend7666);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod7663, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend7669 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB_hash, 0);
    Array PThreadedCode7668 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_send0, (Optr)PSend7669, (Optr)&t_method_return);
    Method PMethod7667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7668, 1, PSend7669);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod7667, Collection_Support_LookupKey_Class);
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
    Array PArray7671 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7673 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7673, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7670 = new_Method_with(PArray7671, empty_Array, empty_Array, PThreadedCode7672, 2, PAssign7673, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7670, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7675 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend7677 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode7676 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7677, (Optr)&t_method_return);
    Method PMethod7674 = new_Method_with(PArray7675, empty_Array, empty_Array, PThreadedCode7676, 1, PSend7677);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod7674, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7679 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7681 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // <. 
    Send PSend7682 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__lt_, 1, (Optr)PSend7681);
    Array PThreadedCode7680 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7681, (Optr)&t_send1, (Optr)PSend7682, (Optr)&t_method_return);
    Method PMethod7678 = new_Method_with(PArray7679, empty_Array, empty_Array, PThreadedCode7680, 1, PSend7682);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod7678, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7684 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7687 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7689 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7690 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_species, 0);
    // =. 
    Send PSend7691 = new_Send((Optr)PSend7689, SMB__equals_, 1, (Optr)PSend7690);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7695 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // =. 
    Send PSend7696 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__equals_, 1, (Optr)PSend7695);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7697 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7696);
    Array PThreadedCode7694 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7695, (Optr)&t_send1, (Optr)PSend7696, (Optr)&t_send1, (Optr)PSend7697, (Optr)&t_block_return);
    Block PBlock7693 = new_Block_with(empty_Array, empty_Array, PThreadedCode7694, 1, PSend7697);
    // escape:. 
    Send PSend7700 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7699 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7700, (Optr)&t_block_return);
    Block PBlock7698 = new_Block_with(empty_Array, empty_Array, PThreadedCode7699, 1, PSend7700);
    // ifTrue:ifFalse:. 
    Send PSend7692 = new_Send((Optr)PSend7691, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock7693, (Optr)PBlock7698);
    Array PThreadedCode7688 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7689, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7690, (Optr)&t_send1, (Optr)PSend7691, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend7692, (Optr)PBlock7693, (Optr)PBlock7698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7686 = new_Block_with(PArray7687, empty_Array, PThreadedCode7688, 2, PSend7692, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7701 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7686);
    Array PThreadedCode7685 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7686, (Optr)&t_send1, (Optr)PSend7701, (Optr)&t_method_return);
    Method PMethod7683 = new_Method_with(PArray7684, empty_Array, empty_Array, PThreadedCode7685, 1, PSend7701);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7683, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode7703 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_method_return);
    Method PMethod7702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7703, 1, slot_Collection_Support_LookupKey_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod7702, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key, MC_SMB_key);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7705 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7707 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend7708 = new_Send((Optr)PSend7707, SMB_not, 0);
    Array PThreadedCode7706 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend7707, (Optr)&t_send0, (Optr)PSend7708, (Optr)&t_method_return);
    Method PMethod7704 = new_Method_with(PArray7705, empty_Array, empty_Array, PThreadedCode7706, 1, PSend7708);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod7704, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray7710 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend7712 = new_Send((Optr)self, SMB_basicNew, 0);
    // key:. 
    Send PSend7713 = new_Send((Optr)PSend7712, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Array PThreadedCode7711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7712, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend7713, (Optr)&t_method_return);
    Method PMethod7709 = new_Method_with(PArray7710, empty_Array, empty_Array, PThreadedCode7711, 1, PSend7713);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7709, HEADER(Collection_Support_LookupKey_Class));
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