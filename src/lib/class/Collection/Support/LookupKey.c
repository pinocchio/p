#include <lib/class/Collection/Support/LookupKey.h>


Optr layout_Collection_Support_LookupKey_Class_class;
Optr slot_Collection_Support_LookupKey_key;
Optr layout_Collection_Support_LookupKey;


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7696 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend7698 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt_, 1, (Optr)self);
    Array PThreadedCode7697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7698, (Optr)&t_method_return);
    Method PMethod7695 = new_Method_with(PArray7696, empty_Array, empty_Array, PThreadedCode7697, 1, PSend7698);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PMethod7695, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    // hash. 
    Send PSend7701 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB_hash, 0);
    Array PThreadedCode7700 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_send0, (Optr)PSend7701, (Optr)&t_method_return);
    Method PMethod7699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7700, 1, PSend7701);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod7699, Collection_Support_LookupKey_Class);
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
    Array PArray7703 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7705 = new_Assign((Optr)slot_Collection_Support_LookupKey_key, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7704 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7705, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7702 = new_Method_with(PArray7703, empty_Array, empty_Array, PThreadedCode7704, 2, PAssign7705, self);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7702, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7707 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend7709 = new_Send((Optr)VAR_aMagnitude_0_0, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode7708 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend7709, (Optr)&t_method_return);
    Method PMethod7706 = new_Method_with(PArray7707, empty_Array, empty_Array, PThreadedCode7708, 1, PSend7709);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod7706, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7711 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7713 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // <. 
    Send PSend7714 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__lt_, 1, (Optr)PSend7713);
    Array PThreadedCode7712 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7713, (Optr)&t_send1, (Optr)PSend7714, (Optr)&t_method_return);
    Method PMethod7710 = new_Method_with(PArray7711, empty_Array, empty_Array, PThreadedCode7712, 1, PSend7714);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PMethod7710, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aLookupKey_0_0 = new_Variable_named(L"aLookupKey", 0);
    Array PArray7716 = new_Array_with(1, (Optr)VAR_aLookupKey_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7719 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend7721 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend7722 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_species, 0);
    // =. 
    Send PSend7723 = new_Send((Optr)PSend7721, SMB__equals_, 1, (Optr)PSend7722);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_key = new_Symbol(L"key");
    // key. 
    Send PSend7727 = new_Send((Optr)VAR_aLookupKey_0_0, SMB_key, 0);
    // =. 
    Send PSend7728 = new_Send((Optr)slot_Collection_Support_LookupKey_key, SMB__equals_, 1, (Optr)PSend7727);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7729 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7728);
    Array PThreadedCode7726 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7727, (Optr)&t_send1, (Optr)PSend7728, (Optr)&t_send1, (Optr)PSend7729, (Optr)&t_block_return);
    Block PBlock7725 = new_Block_with(empty_Array, empty_Array, PThreadedCode7726, 1, PSend7729);
    // escape:. 
    Send PSend7732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode7731 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend7732, (Optr)&t_block_return);
    Block PBlock7730 = new_Block_with(empty_Array, empty_Array, PThreadedCode7731, 1, PSend7732);
    // ifTrue:ifFalse:. 
    Send PSend7724 = new_Send((Optr)PSend7723, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock7725, (Optr)PBlock7730);
    Array PThreadedCode7720 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7721, (Optr)&t_push_variable, (Optr)VAR_aLookupKey_0_0, (Optr)&t_send0, (Optr)PSend7722, (Optr)&t_send1, (Optr)PSend7723, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend7724, (Optr)PBlock7725, (Optr)PBlock7730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7718 = new_Block_with(PArray7719, empty_Array, PThreadedCode7720, 2, PSend7724, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7733 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7718);
    Array PThreadedCode7717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7718, (Optr)&t_send1, (Optr)PSend7733, (Optr)&t_method_return);
    Method PMethod7715 = new_Method_with(PArray7716, empty_Array, empty_Array, PThreadedCode7717, 1, PSend7733);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod7715, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_key() {
    Symbol SMB_key = new_Symbol(L"key");
    Array PThreadedCode7735 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_Support_LookupKey_key, (Optr)&t_method_return);
    Method PMethod7734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7735, 1, slot_Collection_Support_LookupKey_key);
    
    MethodClosure MC_SMB_key = new_MethodClosure((Method)PMethod7734, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB_key, MC_SMB_key);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray7737 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7739 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend7740 = new_Send((Optr)PSend7739, SMB_not, 0);
    Array PThreadedCode7738 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend7739, (Optr)&t_send0, (Optr)PSend7740, (Optr)&t_method_return);
    Method PMethod7736 = new_Method_with(PArray7737, empty_Array, empty_Array, PThreadedCode7738, 1, PSend7740);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod7736, Collection_Support_LookupKey_Class);
    store_method(Collection_Support_LookupKey_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_aKey_0_0 = new_Variable_named(L"aKey", 0);
    Array PArray7742 = new_Array_with(1, (Optr)VAR_aKey_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend7744 = new_Send((Optr)self, SMB_basicNew, 0);
    // key:. 
    Send PSend7745 = new_Send((Optr)PSend7744, SMB_key_, 1, (Optr)VAR_aKey_0_0);
    Array PThreadedCode7743 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7744, (Optr)&t_push_variable, (Optr)VAR_aKey_0_0, (Optr)&t_send1, (Optr)PSend7745, (Optr)&t_method_return);
    Method PMethod7741 = new_Method_with(PArray7742, empty_Array, empty_Array, PThreadedCode7743, 1, PSend7745);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7741, HEADER(Collection_Support_LookupKey_Class));
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