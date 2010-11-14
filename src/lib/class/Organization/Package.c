#include <lib/class/Organization/Package.h>


Optr layout_Organization_Package_Class_class;
Optr slot_Organization_Package_parent;
Optr slot_Organization_Package_name;
Optr layout_Organization_Package;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    // root. 
    Send PSend21912 = new_Send((Optr)slot_Organization_Package_parent, SMB_root, 0);
    Array PThreadedCode21911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21912, (Optr)&t_method_return);
    Method PMethod21910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21911, 1, PSend21912);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21910, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21914 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21917 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend21919 = new_Send((Optr)slot_Organization_Package_name, SMB__equals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21923 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21922 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21923, (Optr)&t_block_return);
    Block PBlock21921 = new_Block_with(empty_Array, empty_Array, PThreadedCode21922, 1, PSend21923);
    // ifTrue:. 
    Send PSend21920 = new_Send((Optr)PSend21919, SMB_ifTrue_, 1, (Optr)PBlock21921);
    // findPackageName:. 
    Send PSend21924 = new_Send((Optr)slot_Organization_Package_parent, SMB_findPackageName_, 1, (Optr)VAR_aName_0_0);
    Array PThreadedCode21918 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21919, (Optr)&t_send_ifTrue_, (Optr)PSend21920, (Optr)PBlock21921, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21924, (Optr)&t_method_return);
    Block PBlock21916 = new_Block_with(PArray21917, empty_Array, PThreadedCode21918, 2, PSend21920, PSend21924);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21925 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21916);
    Array PThreadedCode21915 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21916, (Optr)&t_send1, (Optr)PSend21925, (Optr)&t_method_return);
    Method PMethod21913 = new_Method_with(PArray21914, empty_Array, empty_Array, PThreadedCode21915, 1, PSend21925);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21913, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_parent_() {
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray21927 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign21929 = new_Assign((Optr)slot_Organization_Package_parent, (Optr)VAR_anObject_0_0);
    Array PThreadedCode21928 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21929, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21926 = new_Method_with(PArray21927, empty_Array, empty_Array, PThreadedCode21928, 2, PAssign21929, self);
    
    MethodClosure MC_SMB_parent_ = new_MethodClosure((Method)PMethod21926, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent_, MC_SMB_parent_);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21931 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_false);
    Method PMethod21930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21931, 1, false_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21930, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21933 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21934 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21937 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21941 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21943 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21942 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21943, (Optr)&t_method_return);
    Block PBlock21940 = new_Block_with(PArray21941, empty_Array, PThreadedCode21942, 1, PSend21943);
    Assign PAssign21939 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21940);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21944 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21945 = new_Send((Optr)slot_Organization_Package_name, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21949 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21948 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21949, (Optr)&t_block_return);
    Block PBlock21947 = new_Block_with(empty_Array, empty_Array, PThreadedCode21948, 1, PSend21949);
    // ifTrue:. 
    Send PSend21946 = new_Send((Optr)PSend21945, SMB_ifTrue_, 1, (Optr)PBlock21947);
    // at:ifPresent:. 
    Send PSend21950 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    // findName:ifAbsent:. 
    Send PSend21951 = new_Send((Optr)slot_Organization_Package_parent, SMB_findName_ifAbsent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Array PThreadedCode21938 = instantiate_Array_with(ThreadedCode_Class, 0, 42, (Optr)&t_push1, (Optr)PAssign21939, (Optr)&t_push_closure, (Optr)PBlock21940, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21944, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21945, (Optr)&t_send_ifTrue_, (Optr)PSend21946, (Optr)PBlock21947, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21950, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send2, (Optr)PSend21951, (Optr)&t_method_return);
    Block PBlock21936 = new_Block_with(PArray21937, empty_Array, PThreadedCode21938, 5, PAssign21939, PSend21944, PSend21946, PSend21950, PSend21951);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21952 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21936);
    Array PThreadedCode21935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21936, (Optr)&t_send1, (Optr)PSend21952, (Optr)&t_method_return);
    Method PMethod21932 = new_Method_with(PArray21933, PArray21934, empty_Array, PThreadedCode21935, 1, PSend21952);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21932, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Array PThreadedCode21954 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_name, (Optr)&t_method_return);
    Method PMethod21953 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21954, 1, slot_Organization_Package_name);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21953, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21956 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    // ensurePath:. 
    Send PSend21958 = new_Send((Optr)slot_Organization_Package_parent, SMB_ensurePath_, 1, (Optr)VAR_aPath_0_0);
    Array PThreadedCode21957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21958, (Optr)&t_method_return);
    Method PMethod21955 = new_Method_with(PArray21956, empty_Array, empty_Array, PThreadedCode21957, 1, PSend21958);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21955, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21960 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    // isRoot. 
    Send PSend21962 = new_Send((Optr)slot_Organization_Package_parent, SMB_isRoot, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // pathDo:separatedBy:. 
    Send PSend21966 = new_Send((Optr)slot_Organization_Package_parent, SMB_pathDo_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21967 = new_Send((Optr)VAR_separator_0_1, SMB_value, 0);
    Array PThreadedCode21965 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send2, (Optr)PSend21966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separator_0_1, (Optr)&t_send0, (Optr)PSend21967, (Optr)&t_block_return);
    Block PBlock21964 = new_Block_with(empty_Array, empty_Array, PThreadedCode21965, 2, PSend21966, PSend21967);
    // ifFalse:. 
    Send PSend21963 = new_Send((Optr)PSend21962, SMB_ifFalse_, 1, (Optr)PBlock21964);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21968 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)self);
    Array PThreadedCode21961 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_send0, (Optr)PSend21962, (Optr)&t_send_ifFalse_, (Optr)PSend21963, (Optr)PBlock21964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21968, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21959 = new_Method_with(PArray21960, empty_Array, empty_Array, PThreadedCode21961, 3, PSend21963, PSend21968, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21959, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21970 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitPackage_ = new_Symbol(L"visitPackage:");
    // visitPackage:. 
    Send PSend21972 = new_Send((Optr)VAR_visitor_0_0, SMB_visitPackage_, 1, (Optr)self);
    Array PThreadedCode21971 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21972, (Optr)&t_method_return);
    Method PMethod21969 = new_Method_with(PArray21970, empty_Array, empty_Array, PThreadedCode21971, 1, PSend21972);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21969, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21974 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21977 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21979 = new_Send((Optr)VAR_segment_1_0, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21980 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21979);
    Array PThreadedCode21978 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send0, (Optr)PSend21979, (Optr)&t_send1, (Optr)PSend21980, (Optr)&t_method_return);
    Block PBlock21976 = new_Block_with(PArray21977, empty_Array, PThreadedCode21978, 1, PSend21980);
    Character char_2919 = new_Character(L'.');
    Constant char_2919_Const = new_Constant((Optr)char_2919);
    // <<. 
    Send PSend21983 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_2919_Const);
    Array PThreadedCode21982 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_2919, (Optr)&t_send1, (Optr)PSend21983, (Optr)&t_block_return);
    Block PBlock21981 = new_Block_with(empty_Array, empty_Array, PThreadedCode21982, 1, PSend21983);
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    // pathDo:separatedBy:. 
    Send PSend21984 = new_Send((Optr)self, SMB_pathDo_separatedBy_, 2, (Optr)PBlock21976, (Optr)PBlock21981);
    Array PThreadedCode21975 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21976, (Optr)&t_push_closure, (Optr)PBlock21981, (Optr)&t_send2, (Optr)PSend21984, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21973 = new_Method_with(PArray21974, empty_Array, empty_Array, PThreadedCode21975, 2, PSend21984, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21973, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21986 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21988 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)self);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21990 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21992 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21991 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21992, (Optr)&t_method_return);
    Block PBlock21989 = new_Block_with(PArray21990, empty_Array, PThreadedCode21991, 1, PSend21992);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21993 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21989);
    Array PThreadedCode21987 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21988, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21989, (Optr)&t_send1, (Optr)PSend21993, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21985 = new_Method_with(PArray21986, empty_Array, empty_Array, PThreadedCode21987, 3, PSend21988, PSend21993, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21985, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_parent() {
    Symbol SMB_parent = new_Symbol(L"parent");
    Array PThreadedCode21995 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Organization_Package_parent, (Optr)&t_method_return);
    Method PMethod21994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21995, 1, slot_Organization_Package_parent);
    
    MethodClosure MC_SMB_parent = new_MethodClosure((Method)PMethod21994, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_parent, MC_SMB_parent);
}


static void init_SMB_packageName_() {
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21997 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend22000 = new_Send((Optr)VAR_aName_0_0, SMB_asSymbol, 0);
    Assign PAssign21999 = new_Assign((Optr)slot_Organization_Package_name, (Optr)PSend22000);
    Array PThreadedCode21998 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign21999, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send0, (Optr)PSend22000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21996 = new_Method_with(PArray21997, empty_Array, empty_Array, PThreadedCode21998, 2, PAssign21999, self);
    
    MethodClosure MC_SMB_packageName_ = new_MethodClosure((Method)PMethod21996, Organization_Package_Class);
    store_method(Organization_Package_Class, SMB_packageName_, MC_SMB_packageName_);
}


static void init_class_SMB_named_in_() {
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray22002 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_package_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend22004 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_parent_ = new_Symbol(L"parent:");
    // parent:. 
    Send PSend22005 = new_Send((Optr)PSend22004, SMB_parent_, 1, (Optr)VAR_package_0_1);
    Array PThreadedCode22003 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22004, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_send1, (Optr)PSend22005, (Optr)&t_method_return);
    Method PMethod22001 = new_Method_with(PArray22002, empty_Array, empty_Array, PThreadedCode22003, 1, PSend22005);
    
    MethodClosure MC_SMB_named_in_ = new_MethodClosure((Method)PMethod22001, HEADER(Organization_Package_Class));
    store_method(HEADER(Organization_Package_Class), SMB_named_in_, MC_SMB_named_in_);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray22007 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22009 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_packageName_ = new_Symbol(L"packageName:");
    // packageName:. 
    Send PSend22010 = new_Send((Optr)PSend22009, SMB_packageName_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode22008 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend22009, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend22010, (Optr)&t_method_return);
    Method PMethod22006 = new_Method_with(PArray22007, empty_Array, empty_Array, PThreadedCode22008, 1, PSend22010);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod22006, HEADER(Organization_Package_Class));
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