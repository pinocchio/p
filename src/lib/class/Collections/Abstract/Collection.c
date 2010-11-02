#include <lib/class/Collections/Abstract/Collection.h>


Optr layout_Collections_Abstract_Collection_Class_class;


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray979 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray980 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign982 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray984 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend987 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign986 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend987);
    Array PThreadedCode985 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign986, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend987, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock983 = new_Block_with(PArray984, empty_Array, PThreadedCode985, 1, PAssign986);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend988 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock983);
    Array PThreadedCode981 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign982, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock983, (Optr)&t_send1, (Optr)PSend988, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod978 = new_Method_with(PArray979, PArray980, empty_Array, PThreadedCode981, 3, PAssign982, PSend988, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod978, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray990 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray993 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend995 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode994 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend995, (Optr)&t_method_return);
    Block PBlock992 = new_Block_with(PArray993, empty_Array, PThreadedCode994, 1, PSend995);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend996 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock992);
    Array PThreadedCode991 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock992, (Optr)&t_send1, (Optr)PSend996, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod989 = new_Method_with(PArray990, empty_Array, empty_Array, PThreadedCode991, 2, PSend996, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod989, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_detect_() {
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray998 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_errorNotFound_ = new_Symbol(L"errorNotFound:");
    // errorNotFound:. 
    Send PSend1002 = new_Send((Optr)self, SMB_errorNotFound_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode1001 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend1002, (Optr)&t_block_return);
    Block PBlock1000 = new_Block_with(empty_Array, empty_Array, PThreadedCode1001, 1, PSend1002);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend1003 = new_Send((Optr)self, SMB_detect_ifNone_, 2, (Optr)VAR_aBlock_0_0, (Optr)PBlock1000);
    Array PThreadedCode999 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_closure, (Optr)PBlock1000, (Optr)&t_send2, (Optr)PSend1003, (Optr)&t_method_return);
    Method PMethod997 = new_Method_with(PArray998, empty_Array, empty_Array, PThreadedCode999, 1, PSend1003);
    
    MethodClosure MC_SMB_detect_ = new_MethodClosure((Method)PMethod997, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_detect_, MC_SMB_detect_);
}


static void init_SMB_detect_ifNone_() {
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1005 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_exceptionBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1008 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1011 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1013 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1017 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_each_2_0);
    Array PThreadedCode1016 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1017, (Optr)&t_block_return);
    Block PBlock1015 = new_Block_with(empty_Array, empty_Array, PThreadedCode1016, 1, PSend1017);
    // ifTrue:. 
    Send PSend1014 = new_Send((Optr)PSend1013, SMB_ifTrue_, 1, (Optr)PBlock1015);
    Array PThreadedCode1012 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1013, (Optr)&t_send_ifTrue_, (Optr)PSend1014, (Optr)PBlock1015, (Optr)&t_method_return);
    Block PBlock1010 = new_Block_with(PArray1011, empty_Array, PThreadedCode1012, 1, PSend1014);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1018 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1010);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1019 = new_Send((Optr)VAR_exceptionBlock_0_1, SMB_value, 0);
    Array PThreadedCode1009 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1010, (Optr)&t_send1, (Optr)PSend1018, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send0, (Optr)PSend1019, (Optr)&t_method_return);
    Block PBlock1007 = new_Block_with(PArray1008, empty_Array, PThreadedCode1009, 2, PSend1018, PSend1019);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1020 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1007);
    Array PThreadedCode1006 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1007, (Optr)&t_send1, (Optr)PSend1020, (Optr)&t_method_return);
    Method PMethod1004 = new_Method_with(PArray1005, empty_Array, empty_Array, PThreadedCode1006, 1, PSend1020);
    
    MethodClosure MC_SMB_detect_ifNone_ = new_MethodClosure((Method)PMethod1004, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_detect_ifNone_, MC_SMB_detect_ifNone_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1023 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend1024 = new_Send((Optr)PSend1023, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode1022 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1023, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1024, (Optr)&t_method_return);
    Method PMethod1021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1022, 1, PSend1024);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod1021, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_ifNotEmpty_() {
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1026 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1029 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1031 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_valueWithPossibleArgument_ = new_Symbol(L"valueWithPossibleArgument:");
    // valueWithPossibleArgument:. 
    Send PSend1035 = new_Send((Optr)VAR_aBlock_0_0, SMB_valueWithPossibleArgument_, 1, (Optr)self);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1036 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1035);
    Array PThreadedCode1034 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1035, (Optr)&t_send1, (Optr)PSend1036, (Optr)&t_block_return);
    Block PBlock1033 = new_Block_with(empty_Array, empty_Array, PThreadedCode1034, 1, PSend1036);
    // ifFalse:. 
    Send PSend1032 = new_Send((Optr)PSend1031, SMB_ifFalse_, 1, (Optr)PBlock1033);
    Array PThreadedCode1030 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1031, (Optr)&t_send_ifFalse_, (Optr)PSend1032, (Optr)PBlock1033, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock1028 = new_Block_with(PArray1029, empty_Array, PThreadedCode1030, 2, PSend1032, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1037 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1028);
    Array PThreadedCode1027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1028, (Optr)&t_send1, (Optr)PSend1037, (Optr)&t_method_return);
    Method PMethod1025 = new_Method_with(PArray1026, empty_Array, empty_Array, PThreadedCode1027, 1, PSend1037);
    
    MethodClosure MC_SMB_ifNotEmpty_ = new_MethodClosure((Method)PMethod1025, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_ifNotEmpty_, MC_SMB_ifNotEmpty_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Variable VAR_el_1_0 = new_Variable_named(L"el", 1);
    Array PArray1041 = new_Array_with(1, (Optr)VAR_el_1_0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend1043 = new_Send((Optr)VAR_el_1_0, SMB_isReturnExpression, 0);
    // hasReturnExpression. 
    Send PSend1046 = new_Send((Optr)VAR_el_1_0, SMB_hasReturnExpression, 0);
    Array PThreadedCode1045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_el_1_0, (Optr)&t_send0, (Optr)PSend1046, (Optr)&t_block_return);
    Block PBlock1044 = new_Block_with(empty_Array, empty_Array, PThreadedCode1045, 1, PSend1046);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1047 = new_Send((Optr)PSend1043, SMB_or_, 1, (Optr)PBlock1044);
    Array PThreadedCode1042 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_el_1_0, (Optr)&t_send0, (Optr)PSend1043, (Optr)&t_push_closure, (Optr)PBlock1044, (Optr)&t_send1, (Optr)PSend1047, (Optr)&t_method_return);
    Block PBlock1040 = new_Block_with(PArray1041, empty_Array, PThreadedCode1042, 1, PSend1047);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend1048 = new_Send((Optr)self, SMB_anySatisfy_, 1, (Optr)PBlock1040);
    Array PThreadedCode1039 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1040, (Optr)&t_send1, (Optr)PSend1048, (Optr)&t_method_return);
    Method PMethod1038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1039, 1, PSend1048);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod1038, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Symbol SMB_as_ = new_Symbol(L"as:");
    // as:. 
    Send PSend1051 = new_Send((Optr)self, SMB_as_, 1, (Optr)OrderedCollection_classReference);
    Array PThreadedCode1050 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send1, (Optr)PSend1051, (Optr)&t_method_return);
    Method PMethod1049 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1050, 1, PSend1051);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod1049, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_anySatisfy_() {
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1053 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1056 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1059 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1061 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode1064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend1065, (Optr)&t_block_return);
    Block PBlock1063 = new_Block_with(empty_Array, empty_Array, PThreadedCode1064, 1, PSend1065);
    // ifTrue:. 
    Send PSend1062 = new_Send((Optr)PSend1061, SMB_ifTrue_, 1, (Optr)PBlock1063);
    Array PThreadedCode1060 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1061, (Optr)&t_send_ifTrue_, (Optr)PSend1062, (Optr)PBlock1063, (Optr)&t_method_return);
    Block PBlock1058 = new_Block_with(PArray1059, empty_Array, PThreadedCode1060, 1, PSend1062);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1066 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1058);
    Array PThreadedCode1057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1058, (Optr)&t_send1, (Optr)PSend1066, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock1055 = new_Block_with(PArray1056, empty_Array, PThreadedCode1057, 2, PSend1066, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1067 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1055);
    Array PThreadedCode1054 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1055, (Optr)&t_send1, (Optr)PSend1067, (Optr)&t_method_return);
    Method PMethod1052 = new_Method_with(PArray1053, empty_Array, empty_Array, PThreadedCode1054, 1, PSend1067);
    
    MethodClosure MC_SMB_anySatisfy_ = new_MethodClosure((Method)PMethod1052, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_anySatisfy_, MC_SMB_anySatisfy_);
}


static void init_SMB_allSatisfy_() {
    Symbol SMB_allSatisfy_ = new_Symbol(L"allSatisfy:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1069 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1072 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1075 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1077 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1081 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1080 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1081, (Optr)&t_block_return);
    Block PBlock1079 = new_Block_with(empty_Array, empty_Array, PThreadedCode1080, 1, PSend1081);
    // ifFalse:. 
    Send PSend1078 = new_Send((Optr)PSend1077, SMB_ifFalse_, 1, (Optr)PBlock1079);
    Array PThreadedCode1076 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1077, (Optr)&t_send_ifFalse_, (Optr)PSend1078, (Optr)PBlock1079, (Optr)&t_method_return);
    Block PBlock1074 = new_Block_with(PArray1075, empty_Array, PThreadedCode1076, 1, PSend1078);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1082 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1074);
    Array PThreadedCode1073 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1074, (Optr)&t_send1, (Optr)PSend1082, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1071 = new_Block_with(PArray1072, empty_Array, PThreadedCode1073, 2, PSend1082, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1083 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1071);
    Array PThreadedCode1070 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1071, (Optr)&t_send1, (Optr)PSend1083, (Optr)&t_method_return);
    Method PMethod1068 = new_Method_with(PArray1069, empty_Array, empty_Array, PThreadedCode1070, 1, PSend1083);
    
    MethodClosure MC_SMB_allSatisfy_ = new_MethodClosure((Method)PMethod1068, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_allSatisfy_, MC_SMB_allSatisfy_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1085 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1088 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1090 = new_Send((Optr)VAR_each_1_0, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode1089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend1090, (Optr)&t_method_return);
    Block PBlock1087 = new_Block_with(PArray1088, empty_Array, PThreadedCode1089, 1, PSend1090);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend1091 = new_Send((Optr)self, SMB_anySatisfy_, 1, (Optr)PBlock1087);
    Array PThreadedCode1086 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1087, (Optr)&t_send1, (Optr)PSend1091, (Optr)&t_method_return);
    Method PMethod1084 = new_Method_with(PArray1085, empty_Array, empty_Array, PThreadedCode1086, 1, PSend1091);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod1084, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_emptyCheck() {
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1094 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_errorEmptyCollection = new_Symbol(L"errorEmptyCollection");
    // errorEmptyCollection. 
    Send PSend1098 = new_Send((Optr)self, SMB_errorEmptyCollection, 0);
    Array PThreadedCode1097 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1098, (Optr)&t_block_return);
    Block PBlock1096 = new_Block_with(empty_Array, empty_Array, PThreadedCode1097, 1, PSend1098);
    // ifTrue:. 
    Send PSend1095 = new_Send((Optr)PSend1094, SMB_ifTrue_, 1, (Optr)PBlock1096);
    Array PThreadedCode1093 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1094, (Optr)&t_send_ifTrue_, (Optr)PSend1095, (Optr)PBlock1096, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1093, 2, PSend1095, self);
    
    MethodClosure MC_SMB_emptyCheck = new_MethodClosure((Method)PMethod1092, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_emptyCheck, MC_SMB_emptyCheck);
}


static void init_SMB_errorNotFound_() {
    Symbol SMB_errorNotFound_ = new_Symbol(L"errorNotFound:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1100 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    String string_1102 = new_String(L"Object is not in the collection.");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1102_Const = new_Constant((Optr)string_1102);
    // error:. 
    Send PSend1103 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1102_Const);
    Array PThreadedCode1101 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1102, (Optr)&t_send1, (Optr)PSend1103, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1099 = new_Method_with(PArray1100, empty_Array, empty_Array, PThreadedCode1101, 2, PSend1103, self);
    
    MethodClosure MC_SMB_errorNotFound_ = new_MethodClosure((Method)PMethod1099, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_errorNotFound_, MC_SMB_errorNotFound_);
}


static void init_SMB_reject_() {
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1105 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray1108 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1110 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_element_1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend1111 = new_Send((Optr)PSend1110, SMB__pequals_, 1, (Optr)false_Const);
    Array PThreadedCode1109 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend1110, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1111, (Optr)&t_method_return);
    Block PBlock1107 = new_Block_with(PArray1108, empty_Array, PThreadedCode1109, 1, PSend1111);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend1112 = new_Send((Optr)self, SMB_select_, 1, (Optr)PBlock1107);
    Array PThreadedCode1106 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1107, (Optr)&t_send1, (Optr)PSend1112, (Optr)&t_method_return);
    Method PMethod1104 = new_Method_with(PArray1105, empty_Array, empty_Array, PThreadedCode1106, 1, PSend1112);
    
    MethodClosure MC_SMB_reject_ = new_MethodClosure((Method)PMethod1104, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_reject_, MC_SMB_reject_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1114 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1115 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1119 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1118 = new_Send((Optr)PSend1119, SMB_new, 0);
    Assign PAssign1117 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1118);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1121 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1123 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1127 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode1126 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1127, (Optr)&t_block_return);
    Block PBlock1125 = new_Block_with(empty_Array, empty_Array, PThreadedCode1126, 1, PSend1127);
    // ifTrue:. 
    Send PSend1124 = new_Send((Optr)PSend1123, SMB_ifTrue_, 1, (Optr)PBlock1125);
    Array PThreadedCode1122 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1123, (Optr)&t_send_ifTrue_, (Optr)PSend1124, (Optr)PBlock1125, (Optr)&t_method_return);
    Block PBlock1120 = new_Block_with(PArray1121, empty_Array, PThreadedCode1122, 1, PSend1124);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1128 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1120);
    Array PThreadedCode1116 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1117, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1119, (Optr)&t_send0, (Optr)PSend1118, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1120, (Optr)&t_send1, (Optr)PSend1128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1113 = new_Method_with(PArray1114, PArray1115, empty_Array, PThreadedCode1116, 3, PAssign1117, PSend1128, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod1113, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1130 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1131 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1135 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1134 = new_Send((Optr)PSend1135, SMB_new, 0);
    Assign PAssign1133 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1134);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1137 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1139 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1140 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)PSend1139);
    Array PThreadedCode1138 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1139, (Optr)&t_send1, (Optr)PSend1140, (Optr)&t_method_return);
    Block PBlock1136 = new_Block_with(PArray1137, empty_Array, PThreadedCode1138, 1, PSend1140);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1141 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1136);
    Array PThreadedCode1132 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1133, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1135, (Optr)&t_send0, (Optr)PSend1134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1136, (Optr)&t_send1, (Optr)PSend1141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1129 = new_Method_with(PArray1130, PArray1131, empty_Array, PThreadedCode1132, 3, PAssign1133, PSend1141, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod1129, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Variable VAR_sample_0_1 = new_Variable_named(L"sample", 0);
    Variable VAR_sum_0_2 = new_Variable_named(L"sum", 0);
    Array PArray1143 = new_Array_with(3, (Optr)VAR_avg_0_0, (Optr)VAR_sample_0_1, (Optr)VAR_sum_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1146 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend1150 = new_Send((Optr)self, SMB_average, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend1149 = new_Send((Optr)PSend1150, SMB_asFloat, 0);
    Assign PAssign1148 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend1149);
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    // anyOne. 
    Send PSend1152 = new_Send((Optr)self, SMB_anyOne, 0);
    Assign PAssign1151 = new_Assign((Optr)VAR_sample_0_1, (Optr)PSend1152);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_accum_2_0 = new_Variable_named(L"accum", 2);
    Variable VAR_each_2_1 = new_Variable_named(L"each", 2);
    Array PArray1156 = new_Array_with(2, (Optr)VAR_accum_2_0, (Optr)VAR_each_2_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1158 = new_Send((Optr)VAR_each_2_1, SMB__minus_, 1, (Optr)VAR_avg_0_0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend1159 = new_Send((Optr)PSend1158, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1160 = new_Send((Optr)VAR_accum_2_0, SMB__plus_, 1, (Optr)PSend1159);
    Array PThreadedCode1157 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_accum_2_0, (Optr)&t_push_variable, (Optr)VAR_each_2_1, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_send1, (Optr)PSend1158, (Optr)&t_send0, (Optr)PSend1159, (Optr)&t_send1, (Optr)PSend1160, (Optr)&t_method_return);
    Block PBlock1155 = new_Block_with(PArray1156, empty_Array, PThreadedCode1157, 1, PSend1160);
    // inject:into:. 
    Send PSend1154 = new_Send((Optr)self, SMB_inject_into_, 2, (Optr)VAR_sample_0_1, (Optr)PBlock1155);
    Assign PAssign1153 = new_Assign((Optr)VAR_sum_0_2, (Optr)PSend1154);
    // -. 
    Send PSend1162 = new_Send((Optr)VAR_sum_0_2, SMB__minus_, 1, (Optr)VAR_sample_0_1);
    Assign PAssign1161 = new_Assign((Optr)VAR_sum_0_2, (Optr)PSend1162);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend1163 = new_Send((Optr)VAR_sum_0_2, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1167 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode1166 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1167, (Optr)&t_block_return);
    Block PBlock1165 = new_Block_with(empty_Array, empty_Array, PThreadedCode1166, 1, PSend1167);
    // ifTrue:. 
    Send PSend1164 = new_Send((Optr)PSend1163, SMB_ifTrue_, 1, (Optr)PBlock1165);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1168 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1169 = new_Send((Optr)PSend1168, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend1170 = new_Send((Optr)VAR_sum_0_2, SMB__divide_, 1, (Optr)PSend1169);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend1171 = new_Send((Optr)PSend1170, SMB_sqrt, 0);
    Array PThreadedCode1147 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign1148, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1150, (Optr)&t_send0, (Optr)PSend1149, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1151, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1152, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1153, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_push_closure, (Optr)PBlock1155, (Optr)&t_send2, (Optr)PSend1154, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1161, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_send1, (Optr)PSend1162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1163, (Optr)&t_send_ifTrue_, (Optr)PSend1164, (Optr)PBlock1165, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1168, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1169, (Optr)&t_send1, (Optr)PSend1170, (Optr)&t_send0, (Optr)PSend1171, (Optr)&t_method_return);
    Block PBlock1145 = new_Block_with(PArray1146, empty_Array, PThreadedCode1147, 6, PAssign1148, PAssign1151, PAssign1153, PAssign1161, PSend1164, PSend1171);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1172 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1145);
    Array PThreadedCode1144 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1145, (Optr)&t_send1, (Optr)PSend1172, (Optr)&t_method_return);
    Method PMethod1142 = new_Method_with(empty_Array, PArray1143, empty_Array, PThreadedCode1144, 1, PSend1172);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod1142, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_anyOne() {
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1176 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend1178 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1180 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1182 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_each_2_0);
    Array PThreadedCode1181 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1182, (Optr)&t_method_return);
    Block PBlock1179 = new_Block_with(PArray1180, empty_Array, PThreadedCode1181, 1, PSend1182);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1183 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1179);
    Array PThreadedCode1177 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1178, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1179, (Optr)&t_send1, (Optr)PSend1183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock1175 = new_Block_with(PArray1176, empty_Array, PThreadedCode1177, 3, PSend1178, PSend1183, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1184 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1175);
    Array PThreadedCode1174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1175, (Optr)&t_send1, (Optr)PSend1184, (Optr)&t_method_return);
    Method PMethod1173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1174, 1, PSend1184);
    
    MethodClosure MC_SMB_anyOne = new_MethodClosure((Method)PMethod1173, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_anyOne, MC_SMB_anyOne);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend1187 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1188 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend1189 = new_Send((Optr)PSend1187, SMB__divide_, 1, (Optr)PSend1188);
    Array PThreadedCode1186 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1187, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1188, (Optr)&t_send1, (Optr)PSend1189, (Optr)&t_method_return);
    Method PMethod1185 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1186, 1, PSend1189);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod1185, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_notEmpty() {
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1192 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend1193 = new_Send((Optr)PSend1192, SMB_not, 0);
    Array PThreadedCode1191 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1192, (Optr)&t_send0, (Optr)PSend1193, (Optr)&t_method_return);
    Method PMethod1190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1191, 1, PSend1193);
    
    MethodClosure MC_SMB_notEmpty = new_MethodClosure((Method)PMethod1190, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_notEmpty, MC_SMB_notEmpty);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_0_0 = new_Variable_named(L"sum", 0);
    Variable VAR_sample_0_1 = new_Variable_named(L"sample", 0);
    Array PArray1195 = new_Array_with(2, (Optr)VAR_sum_0_0, (Optr)VAR_sample_0_1);
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    // anyOne. 
    Send PSend1198 = new_Send((Optr)self, SMB_anyOne, 0);
    Assign PAssign1197 = new_Assign((Optr)VAR_sample_0_1, (Optr)PSend1198);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_accum_1_0 = new_Variable_named(L"accum", 1);
    Variable VAR_each_1_1 = new_Variable_named(L"each", 1);
    Array PArray1202 = new_Array_with(2, (Optr)VAR_accum_1_0, (Optr)VAR_each_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1204 = new_Send((Optr)VAR_accum_1_0, SMB__plus_, 1, (Optr)VAR_each_1_1);
    Array PThreadedCode1203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_accum_1_0, (Optr)&t_push_variable, (Optr)VAR_each_1_1, (Optr)&t_send1, (Optr)PSend1204, (Optr)&t_method_return);
    Block PBlock1201 = new_Block_with(PArray1202, empty_Array, PThreadedCode1203, 1, PSend1204);
    // inject:into:. 
    Send PSend1200 = new_Send((Optr)self, SMB_inject_into_, 2, (Optr)VAR_sample_0_1, (Optr)PBlock1201);
    Assign PAssign1199 = new_Assign((Optr)VAR_sum_0_0, (Optr)PSend1200);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1205 = new_Send((Optr)VAR_sum_0_0, SMB__minus_, 1, (Optr)VAR_sample_0_1);
    Array PThreadedCode1196 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1197, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1199, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_push_closure, (Optr)PBlock1201, (Optr)&t_send2, (Optr)PSend1200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_0, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_send1, (Optr)PSend1205, (Optr)&t_method_return);
    Method PMethod1194 = new_Method_with(empty_Array, PArray1195, empty_Array, PThreadedCode1196, 3, PAssign1197, PAssign1199, PSend1205);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod1194, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_sum, MC_SMB_sum);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1207 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1210 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1212 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1213 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1211 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend1212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1213, (Optr)&t_method_return);
    Block PBlock1209 = new_Block_with(PArray1210, empty_Array, PThreadedCode1211, 2, PSend1212, PSend1213);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1214 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1215 = new_Send((Optr)PBlock1209, SMB_value_, 1, (Optr)PSend1214);
    Array PThreadedCode1208 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1209, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1214, (Optr)&t_send1, (Optr)PSend1215, (Optr)&t_method_return);
    Method PMethod1206 = new_Method_with(PArray1207, empty_Array, empty_Array, PThreadedCode1208, 1, PSend1215);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod1206, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_with_with_() {
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Array PArray1217 = new_Array_with(2, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1220 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1222 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_firstObject_0_0);
    // add:. 
    Send PSend1223 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_secondObject_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1224 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1221 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send1, (Optr)PSend1222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send1, (Optr)PSend1223, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1224, (Optr)&t_method_return);
    Block PBlock1219 = new_Block_with(PArray1220, empty_Array, PThreadedCode1221, 3, PSend1222, PSend1223, PSend1224);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1225 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1226 = new_Send((Optr)PBlock1219, SMB_value_, 1, (Optr)PSend1225);
    Array PThreadedCode1218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1219, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1225, (Optr)&t_send1, (Optr)PSend1226, (Optr)&t_method_return);
    Method PMethod1216 = new_Method_with(PArray1217, empty_Array, empty_Array, PThreadedCode1218, 1, PSend1226);
    
    MethodClosure MC_SMB_with_with_ = new_MethodClosure((Method)PMethod1216, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_with_, MC_SMB_with_with_);
}


static void init_class_SMB_with_with_with_() {
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Variable VAR_thirdObject_0_2 = new_Variable_named(L"thirdObject", 0);
    Array PArray1228 = new_Array_with(3, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1, (Optr)VAR_thirdObject_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1231 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1233 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_firstObject_0_0);
    // add:. 
    Send PSend1234 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_secondObject_0_1);
    // add:. 
    Send PSend1235 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_thirdObject_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1236 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1232 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send1, (Optr)PSend1233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send1, (Optr)PSend1234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_thirdObject_0_2, (Optr)&t_send1, (Optr)PSend1235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1236, (Optr)&t_method_return);
    Block PBlock1230 = new_Block_with(PArray1231, empty_Array, PThreadedCode1232, 4, PSend1233, PSend1234, PSend1235, PSend1236);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1237 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1238 = new_Send((Optr)PBlock1230, SMB_value_, 1, (Optr)PSend1237);
    Array PThreadedCode1229 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1230, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1237, (Optr)&t_send1, (Optr)PSend1238, (Optr)&t_method_return);
    Method PMethod1227 = new_Method_with(PArray1228, empty_Array, empty_Array, PThreadedCode1229, 1, PSend1238);
    
    MethodClosure MC_SMB_with_with_with_ = new_MethodClosure((Method)PMethod1227, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_with_with_, MC_SMB_with_with_with_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1240 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1243 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend1245 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1246 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1244 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend1245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1246, (Optr)&t_method_return);
    Block PBlock1242 = new_Block_with(PArray1243, empty_Array, PThreadedCode1244, 2, PSend1245, PSend1246);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1247 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1248 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1247);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1249 = new_Send((Optr)PBlock1242, SMB_value_, 1, (Optr)PSend1248);
    Array PThreadedCode1241 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock1242, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1247, (Optr)&t_send1, (Optr)PSend1248, (Optr)&t_send1, (Optr)PSend1249, (Optr)&t_method_return);
    Method PMethod1239 = new_Method_with(PArray1240, empty_Array, empty_Array, PThreadedCode1241, 1, PSend1249);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod1239, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_withAll_, MC_SMB_withAll_);
}

void init_Collections_Abstract_Collection_layout() {
    layout_Collections_Abstract_Collection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Abstract_Collection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Abstract_Collection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Abstract_Collection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Abstract_Collection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Abstract_Collection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Collection = new_Symbol(L"Collection");
    Collections_Abstract_Collection_Class = (Class)new_Class(Object_Class, layout_Collections_Abstract_Collection_Class_class);
    Collections_Abstract_Collection_Class->layout = empty_object_layout;
    Collections_Abstract_Collection_Class->name = SMB_Collection;
    
}

void init_Collections_Abstract_Collection_methods() {
    init_SMB_inject_into_();
    init_SMB_addAll_();
    init_SMB_detect_();
    init_SMB_detect_ifNone_();
    init_SMB_isEmpty();
    init_SMB_ifNotEmpty_();
    init_SMB_hasReturnExpression();
    init_SMB_asOrderedCollection();
    init_SMB_anySatisfy_();
    init_SMB_allSatisfy_();
    init_SMB_includes_();
    init_SMB_emptyCheck();
    init_SMB_errorNotFound_();
    init_SMB_reject_();
    init_SMB_select_();
    init_SMB_collect_();
    init_SMB_stdev();
    init_SMB_anyOne();
    init_SMB_average();
    init_SMB_notEmpty();
    init_SMB_sum();
    init_class_SMB_with_();
    init_class_SMB_with_with_();
    init_class_SMB_with_with_with_();
    init_class_SMB_withAll_();
    
}