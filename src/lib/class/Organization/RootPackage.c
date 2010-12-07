#include <lib/class/Organization/RootPackage.h>


Optr layout_Organization_RootPackage_Class_class;
Optr slot_Organization_RootPackage_imports;
Optr layout_Organization_RootPackage;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    Array PThreadedCode21876 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21876, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21875, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21878 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21878, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21877, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21880 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21883 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21885 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21886 = new_Send((Optr)PSend21885, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21890 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21889 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21890, (Optr)&t_block_return);
    Block PBlock21888 = new_Block_with(empty_Array, empty_Array, PThreadedCode21889, 1, PSend21890);
    // ifTrue:. 
    Send PSend21887 = new_Send((Optr)PSend21886, SMB_ifTrue_, 1, (Optr)PBlock21888);
    Array PThreadedCode21884 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21885, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21886, (Optr)&t_send_ifTrue_, (Optr)PSend21887, (Optr)PBlock21888, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21882 = new_Block_with(PArray21883, empty_Array, PThreadedCode21884, 2, PSend21887, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21891 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21882);
    Array PThreadedCode21881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21882, (Optr)&t_send1, (Optr)PSend21891, (Optr)&t_method_return);
    Method PMethod21879 = new_Method_with(PArray21880, empty_Array, empty_Array, PThreadedCode21881, 1, PSend21891);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21879, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21893 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21894 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21899 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21898 = new_Send((Optr)PSend21899, SMB_asSymbol, 0);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // flagUndefinedPath:at:. 
    Send PSend21902 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21901 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21902, (Optr)&t_block_return);
    Block PBlock21900 = new_Block_with(empty_Array, empty_Array, PThreadedCode21901, 1, PSend21902);
    // findName:ifAbsent:. 
    Send PSend21897 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21898, (Optr)PBlock21900);
    Assign PAssign21896 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21897);
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // lookupIn:at:. 
    Send PSend21903 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21895 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21896, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21899, (Optr)&t_send0, (Optr)PSend21898, (Optr)&t_push_closure, (Optr)PBlock21900, (Optr)&t_send2, (Optr)PSend21897, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21903, (Optr)&t_method_return);
    Method PMethod21892 = new_Method_with(PArray21893, PArray21894, empty_Array, PThreadedCode21895, 2, PAssign21896, PSend21903);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21892, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_ensureClassReferenceFor_() {
    Symbol SMB_ensureClassReferenceFor_ = new_Symbol(L"ensureClassReferenceFor:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21905 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21906 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21910 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21909 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21910);
    Assign PAssign21908 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21909);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21911 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21912 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21907 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21908, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21910, (Optr)&t_send1, (Optr)PSend21909, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21912, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21904 = new_Method_with(PArray21905, PArray21906, empty_Array, PThreadedCode21907, 4, PAssign21908, PSend21911, PSend21912, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21904, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReferenceFor_, MC_SMB_ensureClassReferenceFor_);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray21914 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21915 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21917 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21919 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21922 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21921 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21922);
    Array PThreadedCode21920 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21921, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21922, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21918 = new_Block_with(PArray21919, empty_Array, PThreadedCode21920, 1, PAssign21921);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21923 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21918);
    Array PThreadedCode21916 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21917, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21918, (Optr)&t_send1, (Optr)PSend21923, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21913 = new_Method_with(PArray21914, PArray21915, empty_Array, PThreadedCode21916, 3, PAssign21917, PSend21923, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21913, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21926 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21925 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21926, (Optr)&t_method_return);
    Method PMethod21924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21925, 1, PSend21926);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21924, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper21929 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21931 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21930 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21931);
    Array PThreadedCode21928 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21929, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21930, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21931, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21928, 3, PSuper21929, PAssign21930, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21927, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_initialize, MC_SMB_initialize);
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
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21945 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21946 = new_Send((Optr)PSend21945, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21950 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21949 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21950, (Optr)&t_block_return);
    Block PBlock21948 = new_Block_with(empty_Array, empty_Array, PThreadedCode21949, 1, PSend21950);
    // ifTrue:. 
    Send PSend21947 = new_Send((Optr)PSend21946, SMB_ifTrue_, 1, (Optr)PBlock21948);
    // at:ifPresent:. 
    Send PSend21951 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21952 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21938 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21939, (Optr)&t_push_closure, (Optr)PBlock21940, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21944, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21945, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21946, (Optr)&t_send_ifTrue_, (Optr)PSend21947, (Optr)PBlock21948, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21952, (Optr)&t_method_return);
    Block PBlock21936 = new_Block_with(PArray21937, empty_Array, PThreadedCode21938, 5, PAssign21939, PSend21944, PSend21947, PSend21951, PSend21952);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21953 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21936);
    Array PThreadedCode21935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21936, (Optr)&t_send1, (Optr)PSend21953, (Optr)&t_method_return);
    Method PMethod21932 = new_Method_with(PArray21933, PArray21934, empty_Array, PThreadedCode21935, 1, PSend21953);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21932, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21955 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21957 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21960 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21959 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21960, (Optr)&t_block_return);
    Block PBlock21958 = new_Block_with(empty_Array, empty_Array, PThreadedCode21959, 1, PSend21960);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21961 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21957, (Optr)PBlock21958);
    Array PThreadedCode21956 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21957, (Optr)&t_push_closure, (Optr)PBlock21958, (Optr)&t_send2, (Optr)PSend21961, (Optr)&t_method_return);
    Method PMethod21954 = new_Method_with(PArray21955, empty_Array, empty_Array, PThreadedCode21956, 1, PSend21961);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21954, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReference_, MC_SMB_ensureClassReference_);
}


static void init_SMB_ensurePackageNamed_() {
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray21963 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21965 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21968 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21967 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21968, (Optr)&t_block_return);
    Block PBlock21966 = new_Block_with(empty_Array, empty_Array, PThreadedCode21967, 1, PSend21968);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21969 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21965, (Optr)PBlock21966);
    Array PThreadedCode21964 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21965, (Optr)&t_push_closure, (Optr)PBlock21966, (Optr)&t_send2, (Optr)PSend21969, (Optr)&t_method_return);
    Method PMethod21962 = new_Method_with(PArray21963, empty_Array, empty_Array, PThreadedCode21964, 1, PSend21969);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21962, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePackageNamed_, MC_SMB_ensurePackageNamed_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21971 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21973 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21972 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21973, (Optr)&t_method_return);
    Method PMethod21970 = new_Method_with(PArray21971, empty_Array, empty_Array, PThreadedCode21972, 1, PSend21973);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21970, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21975 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21977 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21978 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21977);
    Array PThreadedCode21976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21977, (Optr)&t_send1, (Optr)PSend21978, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21974 = new_Method_with(PArray21975, empty_Array, empty_Array, PThreadedCode21976, 2, PSend21978, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21974, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21980 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21983 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21985 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21985, (Optr)&t_method_return);
    Block PBlock21982 = new_Block_with(PArray21983, empty_Array, PThreadedCode21984, 1, PSend21985);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21986 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21982);
    Array PThreadedCode21981 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21982, (Optr)&t_send1, (Optr)PSend21986, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21979 = new_Method_with(PArray21980, empty_Array, empty_Array, PThreadedCode21981, 2, PSend21986, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21979, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21988 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21988, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21987, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21990 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21993 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21996 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21995 = new_Block_with(empty_Array, empty_Array, PThreadedCode21996, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21997 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21995);
    Array PThreadedCode21994 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21995, (Optr)&t_send2, (Optr)PSend21997, (Optr)&t_method_return);
    Block PBlock21992 = new_Block_with(PArray21993, empty_Array, PThreadedCode21994, 1, PSend21997);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21998 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21992);
    Array PThreadedCode21991 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21992, (Optr)&t_send1, (Optr)PSend21998, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21989 = new_Method_with(PArray21990, empty_Array, empty_Array, PThreadedCode21991, 2, PSend21998, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21989, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray22000 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray22001 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray22004 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend22006 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend22007 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend22006);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend22011 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode22010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend22011, (Optr)&t_block_return);
    Block PBlock22009 = new_Block_with(empty_Array, empty_Array, PThreadedCode22010, 1, PSend22011);
    // ifTrue:. 
    Send PSend22008 = new_Send((Optr)PSend22007, SMB_ifTrue_, 1, (Optr)PBlock22009);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend22015 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend22014 = new_Send((Optr)PSend22015, SMB_asSymbol, 0);
    // at:. 
    Send PSend22013 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend22014);
    Assign PAssign22012 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend22013);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend22018 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend22019 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend22018);
    Array PThreadedCode22017 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend22018, (Optr)&t_send1, (Optr)PSend22019, (Optr)&t_block_return);
    Block PBlock22016 = new_Block_with(empty_Array, empty_Array, PThreadedCode22017, 1, PSend22019);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend22020 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock22016);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend22021 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend22022 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend22021);
    Array PThreadedCode22005 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend22006, (Optr)&t_send1, (Optr)PSend22007, (Optr)&t_send_ifTrue_, (Optr)PSend22008, (Optr)PBlock22009, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign22012, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22015, (Optr)&t_send0, (Optr)PSend22014, (Optr)&t_send1, (Optr)PSend22013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock22016, (Optr)&t_send1, (Optr)PSend22020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend22021, (Optr)&t_send2, (Optr)PSend22022, (Optr)&t_method_return);
    Block PBlock22003 = new_Block_with(PArray22004, empty_Array, PThreadedCode22005, 4, PSend22008, PAssign22012, PSend22020, PSend22022);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend22023 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock22003);
    Array PThreadedCode22002 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock22003, (Optr)&t_send1, (Optr)PSend22023, (Optr)&t_method_return);
    Method PMethod21999 = new_Method_with(PArray22000, PArray22001, empty_Array, PThreadedCode22002, 1, PSend22023);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21999, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_SMB_flagUndefinedPath_at_() {
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray22025 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray22028 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend22030 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend22031 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend22032 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode22029 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend22030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend22031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend22032, (Optr)&t_method_return);
    Block PBlock22027 = new_Block_with(PArray22028, empty_Array, PThreadedCode22029, 3, PSend22030, PSend22031, PSend22032);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend22033 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend22034 = new_Send((Optr)PBlock22027, SMB_value_, 1, (Optr)PSend22033);
    Array PThreadedCode22026 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock22027, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend22033, (Optr)&t_send1, (Optr)PSend22034, (Optr)&t_method_return);
    Method PMethod22024 = new_Method_with(PArray22025, empty_Array, empty_Array, PThreadedCode22026, 1, PSend22034);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod22024, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray22036 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode22037 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod22035 = new_Method_with(PArray22036, empty_Array, empty_Array, PThreadedCode22037, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod22035, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_pathDo_separatedBy_, MC_SMB_pathDo_separatedBy_);
}

void init_Organization_PRootPackage_layout() {
    layout_Organization_RootPackage_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Organization_RootPackage_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Organization_RootPackage_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Organization_RootPackage_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Organization_RootPackage_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Organization_RootPackage_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_RootPackage = new_Symbol(L"RootPackage");
    slot_Organization_RootPackage_imports = (Optr)new_Slot(5, L"imports");
    layout_Organization_RootPackage = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Organization_RootPackage)->values[0] = slot_Collection_HashedCollection_size; // size 
    ((Array)layout_Organization_RootPackage)->values[1] = slot_Collection_HashedCollection_maxLinear; // maxLinear 
    ((Array)layout_Organization_RootPackage)->values[2] = slot_Collection_HashedCollection_ratio; // ratio 
    ((Array)layout_Organization_RootPackage)->values[3] = slot_Collection_HashedCollection_buckets; // buckets 
    ((Array)layout_Organization_RootPackage)->values[4] = slot_Collection_HashedCollection_linear; // linear 
    ((Array)layout_Organization_RootPackage)->values[5] = slot_Organization_RootPackage_imports; // imports 
    Organization_RootPackage_Class = (Class)new_Class(IdentityDictionary_Class, layout_Organization_RootPackage_Class_class);
    Organization_RootPackage_Class->layout = layout_Organization_RootPackage;
    Organization_RootPackage_Class->name = SMB_RootPackage;
    
}

void init_Organization_PRootPackage_methods() {
    init_SMB_root();
    init_SMB_isRoot();
    init_SMB_findPackageName_();
    init_SMB_lookup_();
    init_SMB_ensureClassReferenceFor_();
    init_SMB_ensurePath_();
    init_SMB_asNode();
    init_SMB_initialize();
    init_SMB_findName_ifAbsent_();
    init_SMB_ensureClassReference_();
    init_SMB_ensurePackageNamed_();
    init_SMB_accept_();
    init_SMB_printOn_();
    init_SMB_packagesDo_();
    init_SMB_shortName();
    init_SMB_import_();
    init_SMB_lookupIn_at_();
    init_SMB_flagUndefinedPath_at_();
    init_SMB_pathDo_separatedBy_();
    
}