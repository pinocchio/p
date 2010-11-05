#include <lib/class/Organization/RootPackage.h>


Optr layout_Organization_RootPackage_Class_class;
Optr slot_Organization_RootPackage_imports;
Optr layout_Organization_RootPackage;


static void init_SMB_root() {
    Symbol SMB_root = new_Symbol(L"root");
    Array PThreadedCode21327 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21327, 1, self);
    
    MethodClosure MC_SMB_root = new_MethodClosure((Method)PMethod21326, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_root, MC_SMB_root);
}


static void init_SMB_isRoot() {
    Symbol SMB_isRoot = new_Symbol(L"isRoot");
    Array PThreadedCode21329 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod21328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21329, 1, true_Const);
    
    MethodClosure MC_SMB_isRoot = new_MethodClosure((Method)PMethod21328, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_isRoot, MC_SMB_isRoot);
}


static void init_SMB_findPackageName_() {
    Symbol SMB_findPackageName_ = new_Symbol(L"findPackageName:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray21331 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21334 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21336 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21337 = new_Send((Optr)PSend21336, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21341 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21340 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21341, (Optr)&t_block_return);
    Block PBlock21339 = new_Block_with(empty_Array, empty_Array, PThreadedCode21340, 1, PSend21341);
    // ifTrue:. 
    Send PSend21338 = new_Send((Optr)PSend21337, SMB_ifTrue_, 1, (Optr)PBlock21339);
    Array PThreadedCode21335 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21336, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21337, (Optr)&t_send_ifTrue_, (Optr)PSend21338, (Optr)PBlock21339, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock21333 = new_Block_with(PArray21334, empty_Array, PThreadedCode21335, 2, PSend21338, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21342 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21333);
    Array PThreadedCode21332 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21333, (Optr)&t_send1, (Optr)PSend21342, (Optr)&t_method_return);
    Method PMethod21330 = new_Method_with(PArray21331, empty_Array, empty_Array, PThreadedCode21332, 1, PSend21342);
    
    MethodClosure MC_SMB_findPackageName_ = new_MethodClosure((Method)PMethod21330, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findPackageName_, MC_SMB_findPackageName_);
}


static void init_SMB_lookup_() {
    Symbol SMB_lookup_ = new_Symbol(L"lookup:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Array PArray21344 = new_Array_with(1, (Optr)VAR_aPath_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21345 = new_Array_with(1, (Optr)VAR_package_0_1);
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend21350 = new_Send((Optr)VAR_aPath_0_0, SMB_first, 0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21349 = new_Send((Optr)PSend21350, SMB_asSymbol, 0);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // flagUndefinedPath:at:. 
    Send PSend21353 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_1_Const);
    Array PThreadedCode21352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_1, (Optr)&t_send2, (Optr)PSend21353, (Optr)&t_block_return);
    Block PBlock21351 = new_Block_with(empty_Array, empty_Array, PThreadedCode21352, 1, PSend21353);
    // findName:ifAbsent:. 
    Send PSend21348 = new_Send((Optr)self, SMB_findName_ifAbsent_, 2, (Optr)PSend21349, (Optr)PBlock21351);
    Assign PAssign21347 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21348);
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // lookupIn:at:. 
    Send PSend21354 = new_Send((Optr)VAR_package_0_1, SMB_lookupIn_at_, 2, (Optr)VAR_aPath_0_0, (Optr)int_2_Const);
    Array PThreadedCode21346 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21347, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send0, (Optr)PSend21350, (Optr)&t_send0, (Optr)PSend21349, (Optr)&t_push_closure, (Optr)PBlock21351, (Optr)&t_send2, (Optr)PSend21348, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_push_2, (Optr)&t_send2, (Optr)PSend21354, (Optr)&t_method_return);
    Method PMethod21343 = new_Method_with(PArray21344, PArray21345, empty_Array, PThreadedCode21346, 2, PAssign21347, PSend21354);
    
    MethodClosure MC_SMB_lookup_ = new_MethodClosure((Method)PMethod21343, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookup_, MC_SMB_lookup_);
}


static void init_SMB_ensureClassReferenceFor_() {
    Symbol SMB_ensureClassReferenceFor_ = new_Symbol(L"ensureClassReferenceFor:");
    Variable VAR_aPinocchioClass_0_0 = new_Variable_named(L"aPinocchioClass", 0);
    Array PArray21356 = new_Array_with(1, (Optr)VAR_aPinocchioClass_0_0);
    Variable VAR_reference_0_1 = new_Variable_named(L"reference", 0);
    Array PArray21357 = new_Array_with(1, (Optr)VAR_reference_0_1);
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend21361 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_name, 0);
    // ensureClassReference:. 
    Send PSend21360 = new_Send((Optr)self, SMB_ensureClassReference_, 1, (Optr)PSend21361);
    Assign PAssign21359 = new_Assign((Optr)VAR_reference_0_1, (Optr)PSend21360);
    Symbol SMB_ensurePinocchioClass_ = new_Symbol(L"ensurePinocchioClass:");
    // ensurePinocchioClass:. 
    Send PSend21362 = new_Send((Optr)VAR_reference_0_1, SMB_ensurePinocchioClass_, 1, (Optr)VAR_aPinocchioClass_0_0);
    Symbol SMB_package_ = new_Symbol(L"package:");
    // package:. 
    Send PSend21363 = new_Send((Optr)VAR_aPinocchioClass_0_0, SMB_package_, 1, (Optr)self);
    Array PThreadedCode21358 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign21359, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send0, (Optr)PSend21361, (Optr)&t_send1, (Optr)PSend21360, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_send1, (Optr)PSend21362, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aPinocchioClass_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21363, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_reference_0_1, (Optr)&t_method_return);
    Method PMethod21355 = new_Method_with(PArray21356, PArray21357, empty_Array, PThreadedCode21358, 4, PAssign21359, PSend21362, PSend21363, VAR_reference_0_1);
    
    MethodClosure MC_SMB_ensureClassReferenceFor_ = new_MethodClosure((Method)PMethod21355, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReferenceFor_, MC_SMB_ensureClassReferenceFor_);
}


static void init_SMB_ensurePath_() {
    Symbol SMB_ensurePath_ = new_Symbol(L"ensurePath:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray21365 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_package_0_1 = new_Variable_named(L"package", 0);
    Array PArray21366 = new_Array_with(1, (Optr)VAR_package_0_1);
    Assign PAssign21368 = new_Assign((Optr)VAR_package_0_1, (Optr)self);
    Variable VAR_segment_1_0 = new_Variable_named(L"segment", 1);
    Array PArray21370 = new_Array_with(1, (Optr)VAR_segment_1_0);
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    // ensurePackageNamed:. 
    Send PSend21373 = new_Send((Optr)VAR_package_0_1, SMB_ensurePackageNamed_, 1, (Optr)VAR_segment_1_0);
    Assign PAssign21372 = new_Assign((Optr)VAR_package_0_1, (Optr)PSend21373);
    Array PThreadedCode21371 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign21372, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_push_variable, (Optr)VAR_segment_1_0, (Optr)&t_send1, (Optr)PSend21373, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock21369 = new_Block_with(PArray21370, empty_Array, PThreadedCode21371, 1, PAssign21372);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21374 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock21369);
    Array PThreadedCode21367 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign21368, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock21369, (Optr)&t_send1, (Optr)PSend21374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_package_0_1, (Optr)&t_method_return);
    Method PMethod21364 = new_Method_with(PArray21365, PArray21366, empty_Array, PThreadedCode21367, 3, PAssign21368, PSend21374, VAR_package_0_1);
    
    MethodClosure MC_SMB_ensurePath_ = new_MethodClosure((Method)PMethod21364, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePath_, MC_SMB_ensurePath_);
}


static void init_SMB_asNode() {
    Symbol SMB_asNode = new_Symbol(L"asNode");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21377 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)self);
    Array PThreadedCode21376 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21377, (Optr)&t_method_return);
    Method PMethod21375 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21376, 1, PSend21377);
    
    MethodClosure MC_SMB_asNode = new_MethodClosure((Method)PMethod21375, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_asNode, MC_SMB_asNode);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper21380 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21382 = new_Send((Optr)IdentityDictionary_classReference, SMB_new, 0);
    Assign PAssign21381 = new_Assign((Optr)slot_Organization_RootPackage_imports, (Optr)PSend21382);
    Array PThreadedCode21379 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21380, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21381, (Optr)&t_push_class_reference, (Optr)IdentityDictionary_classReference, (Optr)&t_send0, (Optr)PSend21382, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21379, 3, PSuper21380, PAssign21381, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21378, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_findName_ifAbsent_() {
    Symbol SMB_findName_ifAbsent_ = new_Symbol(L"findName:ifAbsent:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray21384 = new_Array_with(2, (Optr)VAR_aName_0_0, (Optr)VAR_block_0_1);
    Variable VAR_returnBlock_0_2 = new_Variable_named(L"returnBlock", 0);
    Array PArray21385 = new_Array_with(1, (Optr)VAR_returnBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21388 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_value_2_0 = new_Variable_named(L"value", 2);
    Array PArray21392 = new_Array_with(1, (Optr)VAR_value_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_2_0);
    Array PThreadedCode21393 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_2_0, (Optr)&t_send1, (Optr)PSend21394, (Optr)&t_method_return);
    Block PBlock21391 = new_Block_with(PArray21392, empty_Array, PThreadedCode21393, 1, PSend21394);
    Assign PAssign21390 = new_Assign((Optr)VAR_returnBlock_0_2, (Optr)PBlock21391);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend21395 = new_Send((Optr)self, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21396 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend21397 = new_Send((Optr)PSend21396, SMB__pequals_, 1, (Optr)VAR_aName_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend21401 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21400 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21401, (Optr)&t_block_return);
    Block PBlock21399 = new_Block_with(empty_Array, empty_Array, PThreadedCode21400, 1, PSend21401);
    // ifTrue:. 
    Send PSend21398 = new_Send((Optr)PSend21397, SMB_ifTrue_, 1, (Optr)PBlock21399);
    // at:ifPresent:. 
    Send PSend21402 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifPresent_, 2, (Optr)VAR_aName_0_0, (Optr)VAR_returnBlock_0_2);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend21403 = new_Send((Optr)VAR_block_0_1, SMB_value, 0);
    Array PThreadedCode21389 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign21390, (Optr)&t_push_closure, (Optr)PBlock21391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21395, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21396, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_send1, (Optr)PSend21397, (Optr)&t_send_ifTrue_, (Optr)PSend21398, (Optr)PBlock21399, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_push_variable, (Optr)VAR_returnBlock_0_2, (Optr)&t_send2, (Optr)PSend21402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_send0, (Optr)PSend21403, (Optr)&t_method_return);
    Block PBlock21387 = new_Block_with(PArray21388, empty_Array, PThreadedCode21389, 5, PAssign21390, PSend21395, PSend21398, PSend21402, PSend21403);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21404 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21387);
    Array PThreadedCode21386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21387, (Optr)&t_send1, (Optr)PSend21404, (Optr)&t_method_return);
    Method PMethod21383 = new_Method_with(PArray21384, PArray21385, empty_Array, PThreadedCode21386, 1, PSend21404);
    
    MethodClosure MC_SMB_findName_ifAbsent_ = new_MethodClosure((Method)PMethod21383, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_findName_ifAbsent_, MC_SMB_findName_ifAbsent_);
}


static void init_SMB_ensureClassReference_() {
    Symbol SMB_ensureClassReference_ = new_Symbol(L"ensureClassReference:");
    Variable VAR_aNameSymbol_0_0 = new_Variable_named(L"aNameSymbol", 0);
    Array PArray21406 = new_Array_with(1, (Optr)VAR_aNameSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21408 = new_Send((Optr)VAR_aNameSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_in_ = new_Symbol(L"in:");
    // in:. 
    Send PSend21411 = new_Send((Optr)PClassReference_classReference, SMB_in_, 1, (Optr)self);
    Array PThreadedCode21410 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PClassReference_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21411, (Optr)&t_block_return);
    Block PBlock21409 = new_Block_with(empty_Array, empty_Array, PThreadedCode21410, 1, PSend21411);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21412 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21408, (Optr)PBlock21409);
    Array PThreadedCode21407 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aNameSymbol_0_0, (Optr)&t_send0, (Optr)PSend21408, (Optr)&t_push_closure, (Optr)PBlock21409, (Optr)&t_send2, (Optr)PSend21412, (Optr)&t_method_return);
    Method PMethod21405 = new_Method_with(PArray21406, empty_Array, empty_Array, PThreadedCode21407, 1, PSend21412);
    
    MethodClosure MC_SMB_ensureClassReference_ = new_MethodClosure((Method)PMethod21405, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensureClassReference_, MC_SMB_ensureClassReference_);
}


static void init_SMB_ensurePackageNamed_() {
    Symbol SMB_ensurePackageNamed_ = new_Symbol(L"ensurePackageNamed:");
    Variable VAR_aPinocchioSymbol_0_0 = new_Variable_named(L"aPinocchioSymbol", 0);
    Array PArray21414 = new_Array_with(1, (Optr)VAR_aPinocchioSymbol_0_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21416 = new_Send((Optr)VAR_aPinocchioSymbol_0_0, SMB_asSymbol, 0);
    Symbol SMB_named_in_ = new_Symbol(L"named:in:");
    // named:in:. 
    Send PSend21419 = new_Send((Optr)PPackage_classReference, SMB_named_in_, 2, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)self);
    Array PThreadedCode21418 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PPackage_classReference, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_push_self, (Optr)&t_send2, (Optr)PSend21419, (Optr)&t_block_return);
    Block PBlock21417 = new_Block_with(empty_Array, empty_Array, PThreadedCode21418, 1, PSend21419);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21420 = new_Send((Optr)self, SMB_at_ifAbsentPut_, 2, (Optr)PSend21416, (Optr)PBlock21417);
    Array PThreadedCode21415 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aPinocchioSymbol_0_0, (Optr)&t_send0, (Optr)PSend21416, (Optr)&t_push_closure, (Optr)PBlock21417, (Optr)&t_send2, (Optr)PSend21420, (Optr)&t_method_return);
    Method PMethod21413 = new_Method_with(PArray21414, empty_Array, empty_Array, PThreadedCode21415, 1, PSend21420);
    
    MethodClosure MC_SMB_ensurePackageNamed_ = new_MethodClosure((Method)PMethod21413, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_ensurePackageNamed_, MC_SMB_ensurePackageNamed_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray21422 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitRootPackage_ = new_Symbol(L"visitRootPackage:");
    // visitRootPackage:. 
    Send PSend21424 = new_Send((Optr)VAR_visitor_0_0, SMB_visitRootPackage_, 1, (Optr)self);
    Array PThreadedCode21423 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21424, (Optr)&t_method_return);
    Method PMethod21421 = new_Method_with(PArray21422, empty_Array, empty_Array, PThreadedCode21423, 1, PSend21424);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod21421, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray21426 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_shortName = new_Symbol(L"shortName");
    // shortName. 
    Send PSend21428 = new_Send((Optr)self, SMB_shortName, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend21429 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend21428);
    Array PThreadedCode21427 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21428, (Optr)&t_send1, (Optr)PSend21429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21425 = new_Method_with(PArray21426, empty_Array, empty_Array, PThreadedCode21427, 2, PSend21429, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod21425, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_packagesDo_() {
    Symbol SMB_packagesDo_ = new_Symbol(L"packagesDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray21431 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray21434 = new_Array_with(1, (Optr)VAR_element_1_0);
    // packagesDo:. 
    Send PSend21436 = new_Send((Optr)VAR_element_1_0, SMB_packagesDo_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode21435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend21436, (Optr)&t_method_return);
    Block PBlock21433 = new_Block_with(PArray21434, empty_Array, PThreadedCode21435, 1, PSend21436);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend21437 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock21433);
    Array PThreadedCode21432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock21433, (Optr)&t_send1, (Optr)PSend21437, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21430 = new_Method_with(PArray21431, empty_Array, empty_Array, PThreadedCode21432, 2, PSend21437, self);
    
    MethodClosure MC_SMB_packagesDo_ = new_MethodClosure((Method)PMethod21430, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_packagesDo_, MC_SMB_packagesDo_);
}


static void init_SMB_shortName() {
    Symbol SMB_shortName = new_Symbol(L"shortName");
    Symbol  SMB_Pinocchio = new_Symbol(L"Pinocchio");
    Array PThreadedCode21439 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)SMB_Pinocchio, (Optr)&t_method_return);
    Constant SMB_Pinocchio_Const = new_Constant((Optr)SMB_Pinocchio);
    Method PMethod21438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21439, 1, SMB_Pinocchio_Const);
    
    MethodClosure MC_SMB_shortName = new_MethodClosure((Method)PMethod21438, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_shortName, MC_SMB_shortName);
}


static void init_SMB_import_() {
    Symbol SMB_import_ = new_Symbol(L"import:");
    Variable VAR_package_0_0 = new_Variable_named(L"package", 0);
    Array PArray21441 = new_Array_with(1, (Optr)VAR_package_0_0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Variable VAR_value_1_1 = new_Variable_named(L"value", 1);
    Array PArray21444 = new_Array_with(2, (Optr)VAR_key_1_0, (Optr)VAR_value_1_1);
    Array PThreadedCode21447 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_1, (Optr)&t_block_return);
    Block PBlock21446 = new_Block_with(empty_Array, empty_Array, PThreadedCode21447, 1, VAR_value_1_1);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend21448 = new_Send((Optr)slot_Organization_RootPackage_imports, SMB_at_ifAbsentPut_, 2, (Optr)VAR_key_1_0, (Optr)PBlock21446);
    Array PThreadedCode21445 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Organization_RootPackage_imports, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_push_closure, (Optr)PBlock21446, (Optr)&t_send2, (Optr)PSend21448, (Optr)&t_method_return);
    Block PBlock21443 = new_Block_with(PArray21444, empty_Array, PThreadedCode21445, 1, PSend21448);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend21449 = new_Send((Optr)VAR_package_0_0, SMB_keysAndValuesDo_, 1, (Optr)PBlock21443);
    Array PThreadedCode21442 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_package_0_0, (Optr)&t_push_closure, (Optr)PBlock21443, (Optr)&t_send1, (Optr)PSend21449, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21440 = new_Method_with(PArray21441, empty_Array, empty_Array, PThreadedCode21442, 2, PSend21449, self);
    
    MethodClosure MC_SMB_import_ = new_MethodClosure((Method)PMethod21440, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_import_, MC_SMB_import_);
}


static void init_SMB_lookupIn_at_() {
    Symbol SMB_lookupIn_at_ = new_Symbol(L"lookupIn:at:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21451 = new_Array_with(2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    Variable VAR_subPackage_0_2 = new_Variable_named(L"subPackage", 0);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Array PArray21452 = new_Array_with(2, (Optr)VAR_subPackage_0_2, (Optr)VAR_first_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray21455 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend21457 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend21458 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)PSend21457);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend21462 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode21461 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend21462, (Optr)&t_block_return);
    Block PBlock21460 = new_Block_with(empty_Array, empty_Array, PThreadedCode21461, 1, PSend21462);
    // ifTrue:. 
    Send PSend21459 = new_Send((Optr)PSend21458, SMB_ifTrue_, 1, (Optr)PBlock21460);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21466 = new_Send((Optr)VAR_aCollection_0_0, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend21465 = new_Send((Optr)PSend21466, SMB_asSymbol, 0);
    // at:. 
    Send PSend21464 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend21465);
    Assign PAssign21463 = new_Assign((Optr)VAR_subPackage_0_2, (Optr)PSend21464);
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    // flagUndefinedPath:at:. 
    Send PSend21469 = new_Send((Optr)self, SMB_flagUndefinedPath_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)VAR_index_0_1);
    // escape:. 
    Send PSend21470 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend21469);
    Array PThreadedCode21468 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send2, (Optr)PSend21469, (Optr)&t_send1, (Optr)PSend21470, (Optr)&t_block_return);
    Block PBlock21467 = new_Block_with(empty_Array, empty_Array, PThreadedCode21468, 1, PSend21470);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21471 = new_Send((Optr)VAR_subPackage_0_2, SMB_ifNil_, 1, (Optr)PBlock21467);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21472 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    // lookupIn:at:. 
    Send PSend21473 = new_Send((Optr)VAR_subPackage_0_2, SMB_lookupIn_at_, 2, (Optr)VAR_aCollection_0_0, (Optr)PSend21472);
    Array PThreadedCode21456 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend21457, (Optr)&t_send1, (Optr)PSend21458, (Optr)&t_send_ifTrue_, (Optr)PSend21459, (Optr)PBlock21460, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21463, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21466, (Optr)&t_send0, (Optr)PSend21465, (Optr)&t_send1, (Optr)PSend21464, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_closure, (Optr)PBlock21467, (Optr)&t_send1, (Optr)PSend21471, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_subPackage_0_2, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21472, (Optr)&t_send2, (Optr)PSend21473, (Optr)&t_method_return);
    Block PBlock21454 = new_Block_with(PArray21455, empty_Array, PThreadedCode21456, 4, PSend21459, PAssign21463, PSend21471, PSend21473);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend21474 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock21454);
    Array PThreadedCode21453 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock21454, (Optr)&t_send1, (Optr)PSend21474, (Optr)&t_method_return);
    Method PMethod21450 = new_Method_with(PArray21451, PArray21452, empty_Array, PThreadedCode21453, 1, PSend21474);
    
    MethodClosure MC_SMB_lookupIn_at_ = new_MethodClosure((Method)PMethod21450, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_lookupIn_at_, MC_SMB_lookupIn_at_);
}


static void init_SMB_flagUndefinedPath_at_() {
    Symbol SMB_flagUndefinedPath_at_ = new_Symbol(L"flagUndefinedPath:at:");
    Variable VAR_aPath_0_0 = new_Variable_named(L"aPath", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray21476 = new_Array_with(2, (Optr)VAR_aPath_0_0, (Optr)VAR_index_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray21479 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend21481 = new_Send((Optr)VAR__receiver__1_0, SMB_path_, 1, (Optr)VAR_aPath_0_0);
    Symbol SMB_index_ = new_Symbol(L"index:");
    // index:. 
    Send PSend21482 = new_Send((Optr)VAR__receiver__1_0, SMB_index_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend21483 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode21480 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aPath_0_0, (Optr)&t_send1, (Optr)PSend21481, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend21482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend21483, (Optr)&t_method_return);
    Block PBlock21478 = new_Block_with(PArray21479, empty_Array, PThreadedCode21480, 3, PSend21481, PSend21482, PSend21483);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21484 = new_Send((Optr)PUndefinedPathReference_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend21485 = new_Send((Optr)PBlock21478, SMB_value_, 1, (Optr)PSend21484);
    Array PThreadedCode21477 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock21478, (Optr)&t_push_class_reference, (Optr)PUndefinedPathReference_classReference, (Optr)&t_send0, (Optr)PSend21484, (Optr)&t_send1, (Optr)PSend21485, (Optr)&t_method_return);
    Method PMethod21475 = new_Method_with(PArray21476, empty_Array, empty_Array, PThreadedCode21477, 1, PSend21485);
    
    MethodClosure MC_SMB_flagUndefinedPath_at_ = new_MethodClosure((Method)PMethod21475, Organization_RootPackage_Class);
    store_method(Organization_RootPackage_Class, SMB_flagUndefinedPath_at_, MC_SMB_flagUndefinedPath_at_);
}


static void init_SMB_pathDo_separatedBy_() {
    Symbol SMB_pathDo_separatedBy_ = new_Symbol(L"pathDo:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separator_0_1 = new_Variable_named(L"separator", 0);
    Array PArray21487 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separator_0_1);
    Array PThreadedCode21488 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod21486 = new_Method_with(PArray21487, empty_Array, empty_Array, PThreadedCode21488, 1, self);
    
    MethodClosure MC_SMB_pathDo_separatedBy_ = new_MethodClosure((Method)PMethod21486, Organization_RootPackage_Class);
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