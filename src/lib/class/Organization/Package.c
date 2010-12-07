#include <lib/class/Organization/Package.h>


Optr layout_Organization_Package_Class_class;
Optr slot_Organization_Package_parent;
Optr slot_Organization_Package_name;
Optr layout_Organization_Package;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    // root. 
<<<<<<< HEAD
    Send PSend22093 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode22092 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend22093, (Optr)&t_method_return);
    Method PMethod22091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22092, 1, PSend22093);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod22091, Organization_Package_Class);
=======
    Send PSend21910 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode21909 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21910, (Optr)&t_method_return);
    Method PMethod21908 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21909, 1, PSend21910);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21908, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
<<<<<<< HEAD
    Array PArray22095 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22098 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend22100 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22104 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22103 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22104, (Optr)&t_block_return);
    Block PBlock22102 = new_Block_with(empty_Array, empty_Array, PThreadedCode22103, 1, PSend22104);
    // ifTrue:. 
    Send PSend22101 = new_Send((Optr)PSend22100, SMB_ifTrue_, 1, (Optr)PBlock22102);
    // findPackageName:. 
    Send PSend22105 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode22099 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22100, (Optr)&t_send_ifTrue_, (Optr)PSend22101, (Optr)PBlock22102, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22105, (Optr)&t_method_return);
    Block PBlock22097 = new_Block_with(PArray22098, empty_Array, PThreadedCode22099, 2, PSend22101, PSend22105);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22106 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22097);
    Array PThreadedCode22096 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22097, (Optr)&t_send1, (Optr)PSend22106, (Optr)&t_method_return);
    Method PMethod22094 = new_Method_with(PArray22095, empty_Array, empty_Array, PThreadedCode22096, 1, PSend22106);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod22094, Organization_Package_Class);
=======
    Array PArray21912 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21915 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21917 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21921 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21920 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21921, (Optr)&t_block_return);
    Block PBlock21919 = new_Block_with(empty_Array, empty_Array, PThreadedCode21920, 1, PSend21921);
    // ifTrue:. 
    Send PSend21918 = new_Send((Optr)PSend21917, SMB_ifTrue_, 1, (Optr)PBlock21919);
    // findPackageName:. 
    Send PSend21922 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21916 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21917, (Optr)&t_send_ifTrue_, (Optr)PSend21918, (Optr)PBlock21919, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21922, (Optr)&t_method_return);
    Block PBlock21914 = new_Block_with(PArray21915, empty_Array, PThreadedCode21916, 2, PSend21918, PSend21922);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21923 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21914);
    Array PThreadedCode21913 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21914, (Optr)&t_send1, (Optr)PSend21923, (Optr)&t_method_return);
    Method PMethod21911 = new_Method_with(PArray21912, empty_Array, empty_Array, PThreadedCode21913, 1, PSend21923);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21911, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_parent_() {
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray22108 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign22110 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode22109 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign22110, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22107 = new_Method_with(PArray22108, empty_Array, empty_Array, PThreadedCode22109, 2, PAssign22110, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod22107, Organization_Package_Class);
=======
    Array PArray21925 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21927 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21926 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21927, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21924 = new_Method_with(PArray21925, empty_Array, empty_Array, PThreadedCode21926, 2, PAssign21927, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod21924, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_parent_, MC_SMB_parent_);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
<<<<<<< HEAD
    Array PThreadedCode22112 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod22111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22112, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod22111, Organization_Package_Class);
=======
    Array PThreadedCode21929 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod21928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21929, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21928, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_isRoot, MC_SMB_isRoot);
}


<<<<<<< HEAD
static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray22114 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend22116 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode22115 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend22116, (Optr)&t_method_return);
    Method PMethod22113 = new_Method_with(PArray22114, empty_Array, empty_Array, PThreadedCode22115, 1, PSend22116);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod22113, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
<<<<<<< HEAD
    Array PArray22118 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray22119 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22122 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray22126 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22128 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode22127 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend22128, (Optr)&t_method_return);
    Block PBlock22125 = new_Block_with(PArray22126, empty_Array, PThreadedCode22127, 1, PSend22128);
    Assign PAssign22124 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock22125);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend22129 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend22130 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend22134 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22133 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22134, (Optr)&t_block_return);
    Block PBlock22132 = new_Block_with(empty_Array, empty_Array, PThreadedCode22133, 1, PSend22134);
    // ifTrue:. 
    Send PSend22131 = new_Send((Optr)PSend22130, SMB_ifTrue_, 1, (Optr)PBlock22132);
    // at:ifPresent:. 
    Send PSend22135 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend22136 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode22123 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign22124, (Optr)&t_push_closure, (Optr)PBlock22125, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend22129, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend22130, (Optr)&t_send_ifTrue_, (Optr)PSend22131, (Optr)PBlock22132, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend22135, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend22136, (Optr)&t_method_return);
    Block PBlock22121 = new_Block_with(PArray22122, empty_Array, PThreadedCode22123, 5, PAssign22124, PSend22129, PSend22131, PSend22135, PSend22136);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22137 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22121);
    Array PThreadedCode22120 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22121, (Optr)&t_send1, (Optr)PSend22137, (Optr)&t_method_return);
    Method PMethod22117 = new_Method_with(PArray22118, PArray22119, empty_Array, PThreadedCode22120, 1, PSend22137);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod22117, Organization_Package_Class);
=======
    Array PArray21931 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21932 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21935 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21939 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21941 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21940 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21941, (Optr)&t_method_return);
    Block PBlock21938 = new_Block_with(PArray21939, empty_Array, PThreadedCode21940, 1, PSend21941);
    Assign PAssign21937 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21938);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21942 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21943 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21947 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21946 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21947, (Optr)&t_block_return);
    Block PBlock21945 = new_Block_with(empty_Array, empty_Array, PThreadedCode21946, 1, PSend21947);
    // ifTrue:. 
    Send PSend21944 = new_Send((Optr)PSend21943, SMB_ifTrue_, 1, (Optr)PBlock21945);
    // at:ifPresent:. 
    Send PSend21948 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend21949 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode21936 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign21937, (Optr)&t_push_closure, (Optr)PBlock21938, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21942, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21943, (Optr)&t_send_ifTrue_, (Optr)PSend21944, (Optr)PBlock21945, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21948, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend21949, (Optr)&t_method_return);
    Block PBlock21934 = new_Block_with(PArray21935, empty_Array, PThreadedCode21936, 5, PAssign21937, PSend21942, PSend21944, PSend21948, PSend21949);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21950 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21934);
    Array PThreadedCode21933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21934, (Optr)&t_send1, (Optr)PSend21950, (Optr)&t_method_return);
    Method PMethod21930 = new_Method_with(PArray21931, PArray21932, empty_Array, PThreadedCode21933, 1, PSend21950);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21930, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode21952 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod21951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21952, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21951, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21954 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend21956 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode21955 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21956, (Optr)&t_method_return);
    Method PMethod21953 = new_Method_with(PArray21954, empty_Array, empty_Array, PThreadedCode21955, 1, PSend21956);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21953, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21958 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend21960 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend21964 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21965 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode21963 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend21964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend21965, (Optr)&t_block_return);
    Block PBlock21962 = new_Block_with(empty_Array, empty_Array, PThreadedCode21963, 2, PSend21964, PSend21965);
    // ifFalse:. 
    Send PSend21961 = new_Send((Optr)PSend21960, SMB_ifFalse_, 1, (Optr)PBlock21962);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21966 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode21959 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21960, (Optr)&t_send_ifFalse_, (Optr)PSend21961, (Optr)PBlock21962, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21957 = new_Method_with(PArray21958, empty_Array, empty_Array, PThreadedCode21959, 3, PSend21961, PSend21966, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21957, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
<<<<<<< HEAD
    Array PArray22139 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend22141 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode22140 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22141, (Optr)&t_method_return);
    Method PMethod22138 = new_Method_with(PArray22139, empty_Array, empty_Array, PThreadedCode22140, 1, PSend22141);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod22138, Organization_Package_Class);
=======
    Array PArray21968 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend21970 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode21969 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21970, (Optr)&t_method_return);
    Method PMethod21967 = new_Method_with(PArray21968, empty_Array, empty_Array, PThreadedCode21969, 1, PSend21970);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21967, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray22143 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray22146 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend22148 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend22149 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend22148);
    Array PThreadedCode22147 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend22148, (Optr)&t_send1, (Optr)PSend22149, (Optr)&t_method_return);
    Block PBlock22145 = new_Block_with(PArray22146, empty_Array, PThreadedCode22147, 1, PSend22149);
    Character char_2907 = new_Character(L'.');
    Constant char_2907_Const = new_Constant((Optr)char_2907);
    // <<. 
    Send PSend22152 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2907_Const);
    Array PThreadedCode22151 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2907, (Optr)&t_send1, (Optr)PSend22152, (Optr)&t_block_return);
    Block PBlock22150 = new_Block_with(empty_Array, empty_Array, PThreadedCode22151, 1, PSend22152);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend22153 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock22145, (Optr)PBlock22150);
    Array PThreadedCode22144 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22145, (Optr)&t_push_closure, (Optr)PBlock22150, (Optr)&t_send2, (Optr)PSend22153, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22142 = new_Method_with(PArray22143, empty_Array, empty_Array, PThreadedCode22144, 2, PSend22153, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod22142, Organization_Package_Class);
=======
    Array PArray21972 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21975 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21977 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21978 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21977);
    Array PThreadedCode21976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend21977, (Optr)&t_send1, (Optr)PSend21978, (Optr)&t_method_return);
    Block PBlock21974 = new_Block_with(PArray21975, empty_Array, PThreadedCode21976, 1, PSend21978);
    Character char_2919 = new_Character(L'.');
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend21981 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    Array PThreadedCode21980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend21981, (Optr)&t_block_return);
    Block PBlock21979 = new_Block_with(empty_Array, empty_Array, PThreadedCode21980, 1, PSend21981);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend21982 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock21974, (Optr)PBlock21979);
    Array PThreadedCode21973 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21974, (Optr)&t_push_closure, (Optr)PBlock21979, (Optr)&t_send2, (Optr)PSend21982, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21971 = new_Method_with(PArray21972, empty_Array, empty_Array, PThreadedCode21973, 2, PSend21982, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21971, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray22155 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22157 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray22159 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend22161 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode22160 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend22161, (Optr)&t_method_return);
    Block PBlock22158 = new_Block_with(PArray22159, empty_Array, PThreadedCode22160, 1, PSend22161);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend22162 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock22158);
    Array PThreadedCode22156 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22157, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock22158, (Optr)&t_send1, (Optr)PSend22162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22154 = new_Method_with(PArray22155, empty_Array, empty_Array, PThreadedCode22156, 3, PSend22157, PSend22162, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod22154, Organization_Package_Class);
=======
    Array PArray21984 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21986 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21988 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21990 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21990, (Optr)&t_method_return);
    Block PBlock21987 = new_Block_with(PArray21988, empty_Array, PThreadedCode21989, 1, PSend21990);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21991 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21987);
    Array PThreadedCode21985 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21986, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21987, (Optr)&t_send1, (Optr)PSend21991, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21983 = new_Method_with(PArray21984, empty_Array, empty_Array, PThreadedCode21985, 3, PSend21986, PSend21991, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21983, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_parent() {
    Symbol SMB_parent = new_Symbol(L"parent");
<<<<<<< HEAD
    Array PThreadedCode22164 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod22163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22164, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod22163, Organization_Package_Class);
=======
    Array PThreadedCode21993 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod21992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21993, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod21992, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_parent, MC_SMB_parent);
}


static void init_SMB_packageName_() {
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
<<<<<<< HEAD
    Array PArray22166 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend22169 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign22168 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend22169);
    Array PThreadedCode22167 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign22168, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend22169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22165 = new_Method_with(PArray22166, empty_Array, empty_Array, PThreadedCode22167, 2, PAssign22168, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod22165, Organization_Package_Class);
=======
    Array PArray21995 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21998 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign21997 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend21998);
    Array PThreadedCode21996 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign21997, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend21998, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21994 = new_Method_with(PArray21995, empty_Array, empty_Array, PThreadedCode21996, 2, PAssign21997, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod21994, Organization_Package_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Organization_Package_Class, SMB_packageName_, MC_SMB_packageName_);
}


<<<<<<< HEAD
static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode22171 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod22170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode22171, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod22170, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray22173 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend22175 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend22179 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend22180 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode22178 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend22179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend22180, (Optr)&t_block_return);
    Block PBlock22177 = new_Block_with(empty_Array, empty_Array, PThreadedCode22178, 2, PSend22179, PSend22180);
    // ifFalse:. 
    Send PSend22176 = new_Send((Optr)PSend22175, SMB_ifFalse_, 1, (Optr)PBlock22177);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22181 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode22174 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend22175, (Optr)&t_send_ifFalse_, (Optr)PSend22176, (Optr)PBlock22177, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22181, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod22172 = new_Method_with(PArray22173, empty_Array, empty_Array, PThreadedCode22174, 3, PSend22176, PSend22181, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod22172, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


=======
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_class_SMB_named_in_() {
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
<<<<<<< HEAD
    Array PArray22183 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend22185 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend22186 = new_Send((Optr)PSend22185, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode22184 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22185, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend22186, (Optr)&t_method_return);
    Method PMethod22182 = new_Method_with(PArray22183, empty_Array, empty_Array, PThreadedCode22184, 1, PSend22186);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod22182, HEADER(Organization_Package_Class));
=======
    Array PArray22000 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend22002 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend22003 = new_Send((Optr)PSend22002, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode22001 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22002, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend22003, (Optr)&t_method_return);
    Method PMethod21999 = new_Method_with(PArray22000, empty_Array, empty_Array, PThreadedCode22001, 1, PSend22003);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod21999, HEADER(Organization_Package_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Organization_Package_Class), SMB_named_in_, MC_SMB_named_in_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
<<<<<<< HEAD
    Array PArray22188 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22190 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend22191 = new_Send((Optr)PSend22190, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode22189 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22190, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22191, (Optr)&t_method_return);
    Method PMethod22187 = new_Method_with(PArray22188, empty_Array, empty_Array, PThreadedCode22189, 1, PSend22191);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod22187, HEADER(Organization_Package_Class));
=======
    Array PArray22005 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22007 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend22008 = new_Send((Optr)PSend22007, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode22006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22007, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22008, (Optr)&t_method_return);
    Method PMethod22004 = new_Method_with(PArray22005, empty_Array, empty_Array, PThreadedCode22006, 1, PSend22008);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod22004, HEADER(Organization_Package_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Organization_Package_Class), SMB_named_, MC_SMB_named_);
}

void init_Organization_PPackage_layout() {
    layout_Organization_Package_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_Package_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_Package_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_Package_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_Package_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_Package_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Package = new_Symbol(L"Package");
    slot_Organization_Package_parent = (Optr)new_Slot(6, L"parent");
    slot_Organization_Package_name = (Optr)new_Slot(7, L"name");
    layout_Organization_Package = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_Organization_Package)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Organization_Package)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Organization_Package)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Organization_Package)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Organization_Package)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    ((Array)layout_Organization_Package)->values[5] = slot_Organization_RootPackage_imports; // imports 
    ((Array)layout_Organization_Package)->values[6] = slot_Organization_Package_parent; // parent 
    ((Array)layout_Organization_Package)->values[7] = slot_Organization_Package_name; // name 
    Organization_Package_Class = (Class)new_Class(Organization_RootPackage_Class, layout_Organization_Package_Class_class);
    Organization_Package_Class->layout = layout_Organization_Package;
    Organization_Package_Class->name = SMB_Package;
    
}

void init_Organization_PPackage_methods() {
    init_SMB_root();
    init_SMB_findPackageName_();
    init_SMB_parent_();
    init_SMB_isRoot();
    init_SMB_findName_ifAbsent_();
    init_SMB_shortName();
    init_SMB_ensurePath_();
    init_SMB_pathDo_separatedBy_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_packagesDo_();
    init_SMB_parent();
    init_SMB_packageName_();
    init_class_SMB_named_in_();
    init_class_SMB_named_();
    
}