#include <lib/class/Collections/Abstract/Collection.h>


Optr layout_Collections_Abstract_Collection_Class_class;


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray988 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray989 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign991 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray993 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend996 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign995 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend996);
    Array PThreadedCode994 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign995, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend996, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock992 = new_Block_with(PArray993, empty_Array, PThreadedCode994, 1, PAssign995);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend997 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock992);
    Array PThreadedCode990 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign991, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock992, (Optr)&t_send1, (Optr)PSend997, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod987 = new_Method_with(PArray988, PArray989, empty_Array, PThreadedCode990, 3, PAssign991, PSend997, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod987, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray999 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1002 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1004 = new_Send((Optr)self, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode1003 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1004, (Optr)&t_method_return);
    Block PBlock1001 = new_Block_with(PArray1002, empty_Array, PThreadedCode1003, 1, PSend1004);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1005 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock1001);
    Array PThreadedCode1000 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock1001, (Optr)&t_send1, (Optr)PSend1005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod998 = new_Method_with(PArray999, empty_Array, empty_Array, PThreadedCode1000, 2, PSend1005, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod998, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_detect_() {
    Symbol SMB_detect_ = new_Symbol(L"detect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1007 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_errorNotFound_ = new_Symbol(L"errorNotFound:");
    // errorNotFound:. 
    Send PSend1011 = new_Send((Optr)self, SMB_errorNotFound_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode1010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend1011, (Optr)&t_block_return);
    Block PBlock1009 = new_Block_with(empty_Array, empty_Array, PThreadedCode1010, 1, PSend1011);
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    // detect:ifNone:. 
    Send PSend1012 = new_Send((Optr)self, SMB_detect_ifNone_, 2, (Optr)VAR_aBlock_0_0, (Optr)PBlock1009);
    Array PThreadedCode1008 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_closure, (Optr)PBlock1009, (Optr)&t_send2, (Optr)PSend1012, (Optr)&t_method_return);
    Method PMethod1006 = new_Method_with(PArray1007, empty_Array, empty_Array, PThreadedCode1008, 1, PSend1012);
    
    MethodClosure MC_SMB_detect_ = new_MethodClosure((Method)PMethod1006, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_detect_, MC_SMB_detect_);
}


static void init_SMB_detect_ifNone_() {
    Symbol SMB_detect_ifNone_ = new_Symbol(L"detect:ifNone:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1014 = new_Array_with(2, (Optr)VAR_aBlock_0_0, (Optr)VAR_exceptionBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1017 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1020 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1022 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1026 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_each_2_0);
    Array PThreadedCode1025 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1026, (Optr)&t_block_return);
    Block PBlock1024 = new_Block_with(empty_Array, empty_Array, PThreadedCode1025, 1, PSend1026);
    // ifTrue:. 
    Send PSend1023 = new_Send((Optr)PSend1022, SMB_ifTrue_, 1, (Optr)PBlock1024);
    Array PThreadedCode1021 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1022, (Optr)&t_send_ifTrue_, (Optr)PSend1023, (Optr)PBlock1024, (Optr)&t_method_return);
    Block PBlock1019 = new_Block_with(PArray1020, empty_Array, PThreadedCode1021, 1, PSend1023);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1027 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1019);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1028 = new_Send((Optr)VAR_exceptionBlock_0_1, SMB_value, 0);
    Array PThreadedCode1018 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1019, (Optr)&t_send1, (Optr)PSend1027, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send0, (Optr)PSend1028, (Optr)&t_method_return);
    Block PBlock1016 = new_Block_with(PArray1017, empty_Array, PThreadedCode1018, 2, PSend1027, PSend1028);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1029 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1016);
    Array PThreadedCode1015 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1016, (Optr)&t_send1, (Optr)PSend1029, (Optr)&t_method_return);
    Method PMethod1013 = new_Method_with(PArray1014, empty_Array, empty_Array, PThreadedCode1015, 1, PSend1029);
    
    MethodClosure MC_SMB_detect_ifNone_ = new_MethodClosure((Method)PMethod1013, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_detect_ifNone_, MC_SMB_detect_ifNone_);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1032 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend1033 = new_Send((Optr)PSend1032, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode1031 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1032, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1033, (Optr)&t_method_return);
    Method PMethod1030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1031, 1, PSend1033);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod1030, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_ifNotEmpty_() {
    Symbol SMB_ifNotEmpty_ = new_Symbol(L"ifNotEmpty:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1035 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1038 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1040 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_valueWithPossibleArgument_ = new_Symbol(L"valueWithPossibleArgument:");
    // valueWithPossibleArgument:. 
    Send PSend1044 = new_Send((Optr)VAR_aBlock_0_0, SMB_valueWithPossibleArgument_, 1, (Optr)self);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1045 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1044);
    Array PThreadedCode1043 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1044, (Optr)&t_send1, (Optr)PSend1045, (Optr)&t_block_return);
    Block PBlock1042 = new_Block_with(empty_Array, empty_Array, PThreadedCode1043, 1, PSend1045);
    // ifFalse:. 
    Send PSend1041 = new_Send((Optr)PSend1040, SMB_ifFalse_, 1, (Optr)PBlock1042);
    Array PThreadedCode1039 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1040, (Optr)&t_send_ifFalse_, (Optr)PSend1041, (Optr)PBlock1042, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock1037 = new_Block_with(PArray1038, empty_Array, PThreadedCode1039, 2, PSend1041, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1046 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1037);
    Array PThreadedCode1036 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1037, (Optr)&t_send1, (Optr)PSend1046, (Optr)&t_method_return);
    Method PMethod1034 = new_Method_with(PArray1035, empty_Array, empty_Array, PThreadedCode1036, 1, PSend1046);
    
    MethodClosure MC_SMB_ifNotEmpty_ = new_MethodClosure((Method)PMethod1034, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_ifNotEmpty_, MC_SMB_ifNotEmpty_);
}


static void init_SMB_hasReturnExpression() {
    Symbol SMB_hasReturnExpression = new_Symbol(L"hasReturnExpression");
    Variable VAR_el_1_0 = new_Variable_named(L"el", 1);
    Array PArray1050 = new_Array_with(1, (Optr)VAR_el_1_0);
    Symbol SMB_isReturnExpression = new_Symbol(L"isReturnExpression");
    // isReturnExpression. 
    Send PSend1052 = new_Send((Optr)VAR_el_1_0, SMB_isReturnExpression, 0);
    // hasReturnExpression. 
    Send PSend1055 = new_Send((Optr)VAR_el_1_0, SMB_hasReturnExpression, 0);
    Array PThreadedCode1054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_el_1_0, (Optr)&t_send0, (Optr)PSend1055, (Optr)&t_block_return);
    Block PBlock1053 = new_Block_with(empty_Array, empty_Array, PThreadedCode1054, 1, PSend1055);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1056 = new_Send((Optr)PSend1052, SMB_or_, 1, (Optr)PBlock1053);
    Array PThreadedCode1051 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_el_1_0, (Optr)&t_send0, (Optr)PSend1052, (Optr)&t_push_closure, (Optr)PBlock1053, (Optr)&t_send1, (Optr)PSend1056, (Optr)&t_method_return);
    Block PBlock1049 = new_Block_with(PArray1050, empty_Array, PThreadedCode1051, 1, PSend1056);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend1057 = new_Send((Optr)self, SMB_anySatisfy_, 1, (Optr)PBlock1049);
    Array PThreadedCode1048 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1049, (Optr)&t_send1, (Optr)PSend1057, (Optr)&t_method_return);
    Method PMethod1047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1048, 1, PSend1057);
    
    MethodClosure MC_SMB_hasReturnExpression = new_MethodClosure((Method)PMethod1047, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_hasReturnExpression, MC_SMB_hasReturnExpression);
}


static void init_SMB_asOrderedCollection() {
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    Symbol SMB_as_ = new_Symbol(L"as:");
    // as:. 
    Send PSend1060 = new_Send((Optr)self, SMB_as_, 1, (Optr)OrderedCollection_classReference);
    Array PThreadedCode1059 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send1, (Optr)PSend1060, (Optr)&t_method_return);
    Method PMethod1058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1059, 1, PSend1060);
    
    MethodClosure MC_SMB_asOrderedCollection = new_MethodClosure((Method)PMethod1058, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_asOrderedCollection, MC_SMB_asOrderedCollection);
}


static void init_SMB_anySatisfy_() {
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1062 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1065 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1068 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1070 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1074 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode1073 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend1074, (Optr)&t_block_return);
    Block PBlock1072 = new_Block_with(empty_Array, empty_Array, PThreadedCode1073, 1, PSend1074);
    // ifTrue:. 
    Send PSend1071 = new_Send((Optr)PSend1070, SMB_ifTrue_, 1, (Optr)PBlock1072);
    Array PThreadedCode1069 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1070, (Optr)&t_send_ifTrue_, (Optr)PSend1071, (Optr)PBlock1072, (Optr)&t_method_return);
    Block PBlock1067 = new_Block_with(PArray1068, empty_Array, PThreadedCode1069, 1, PSend1071);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1075 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1067);
    Array PThreadedCode1066 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1067, (Optr)&t_send1, (Optr)PSend1075, (Optr)&t_zap, (Optr)&t_method_return_false);
    Block PBlock1064 = new_Block_with(PArray1065, empty_Array, PThreadedCode1066, 2, PSend1075, false_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1076 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1064);
    Array PThreadedCode1063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1064, (Optr)&t_send1, (Optr)PSend1076, (Optr)&t_method_return);
    Method PMethod1061 = new_Method_with(PArray1062, empty_Array, empty_Array, PThreadedCode1063, 1, PSend1076);
    
    MethodClosure MC_SMB_anySatisfy_ = new_MethodClosure((Method)PMethod1061, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_anySatisfy_, MC_SMB_anySatisfy_);
}


static void init_SMB_allSatisfy_() {
    Symbol SMB_allSatisfy_ = new_Symbol(L"allSatisfy:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1078 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1081 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1084 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1086 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_2_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1089 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1090, (Optr)&t_block_return);
    Block PBlock1088 = new_Block_with(empty_Array, empty_Array, PThreadedCode1089, 1, PSend1090);
    // ifFalse:. 
    Send PSend1087 = new_Send((Optr)PSend1086, SMB_ifFalse_, 1, (Optr)PBlock1088);
    Array PThreadedCode1085 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1086, (Optr)&t_send_ifFalse_, (Optr)PSend1087, (Optr)PBlock1088, (Optr)&t_method_return);
    Block PBlock1083 = new_Block_with(PArray1084, empty_Array, PThreadedCode1085, 1, PSend1087);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1091 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1083);
    Array PThreadedCode1082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1083, (Optr)&t_send1, (Optr)PSend1091, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1080 = new_Block_with(PArray1081, empty_Array, PThreadedCode1082, 2, PSend1091, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1092 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1080);
    Array PThreadedCode1079 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1080, (Optr)&t_send1, (Optr)PSend1092, (Optr)&t_method_return);
    Method PMethod1077 = new_Method_with(PArray1078, empty_Array, empty_Array, PThreadedCode1079, 1, PSend1092);
    
    MethodClosure MC_SMB_allSatisfy_ = new_MethodClosure((Method)PMethod1077, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_allSatisfy_, MC_SMB_allSatisfy_);
}


static void init_SMB_includes_() {
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1094 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1097 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1099 = new_Send((Optr)VAR_each_1_0, SMB__equals_, 1, (Optr)VAR_anObject_0_0);
    Array PThreadedCode1098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend1099, (Optr)&t_method_return);
    Block PBlock1096 = new_Block_with(PArray1097, empty_Array, PThreadedCode1098, 1, PSend1099);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend1100 = new_Send((Optr)self, SMB_anySatisfy_, 1, (Optr)PBlock1096);
    Array PThreadedCode1095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1096, (Optr)&t_send1, (Optr)PSend1100, (Optr)&t_method_return);
    Method PMethod1093 = new_Method_with(PArray1094, empty_Array, empty_Array, PThreadedCode1095, 1, PSend1100);
    
    MethodClosure MC_SMB_includes_ = new_MethodClosure((Method)PMethod1093, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_includes_, MC_SMB_includes_);
}


static void init_SMB_emptyCheck() {
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1103 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_errorEmptyCollection = new_Symbol(L"errorEmptyCollection");
    // errorEmptyCollection. 
    Send PSend1107 = new_Send((Optr)self, SMB_errorEmptyCollection, 0);
    Array PThreadedCode1106 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1107, (Optr)&t_block_return);
    Block PBlock1105 = new_Block_with(empty_Array, empty_Array, PThreadedCode1106, 1, PSend1107);
    // ifTrue:. 
    Send PSend1104 = new_Send((Optr)PSend1103, SMB_ifTrue_, 1, (Optr)PBlock1105);
    Array PThreadedCode1102 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1103, (Optr)&t_send_ifTrue_, (Optr)PSend1104, (Optr)PBlock1105, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1102, 2, PSend1104, self);
    
    MethodClosure MC_SMB_emptyCheck = new_MethodClosure((Method)PMethod1101, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_emptyCheck, MC_SMB_emptyCheck);
}


static void init_SMB_errorNotFound_() {
    Symbol SMB_errorNotFound_ = new_Symbol(L"errorNotFound:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1109 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    String string_1111 = new_String(L"Object is not in the collection.");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1111_Const = new_Constant((Optr)string_1111);
    // error:. 
    Send PSend1112 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1111_Const);
    Array PThreadedCode1110 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1111, (Optr)&t_send1, (Optr)PSend1112, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1108 = new_Method_with(PArray1109, empty_Array, empty_Array, PThreadedCode1110, 2, PSend1112, self);
    
    MethodClosure MC_SMB_errorNotFound_ = new_MethodClosure((Method)PMethod1108, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_errorNotFound_, MC_SMB_errorNotFound_);
}


static void init_SMB_reject_() {
    Symbol SMB_reject_ = new_Symbol(L"reject:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1114 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_element_1_0 = new_Variable_named(L"element", 1);
    Array PArray1117 = new_Array_with(1, (Optr)VAR_element_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1119 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_element_1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend1120 = new_Send((Optr)PSend1119, SMB__pequals_, 1, (Optr)false_Const);
    Array PThreadedCode1118 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_element_1_0, (Optr)&t_send1, (Optr)PSend1119, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1120, (Optr)&t_method_return);
    Block PBlock1116 = new_Block_with(PArray1117, empty_Array, PThreadedCode1118, 1, PSend1120);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend1121 = new_Send((Optr)self, SMB_select_, 1, (Optr)PBlock1116);
    Array PThreadedCode1115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1116, (Optr)&t_send1, (Optr)PSend1121, (Optr)&t_method_return);
    Method PMethod1113 = new_Method_with(PArray1114, empty_Array, empty_Array, PThreadedCode1115, 1, PSend1121);
    
    MethodClosure MC_SMB_reject_ = new_MethodClosure((Method)PMethod1113, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_reject_, MC_SMB_reject_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1123 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1124 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1128 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1127 = new_Send((Optr)PSend1128, SMB_new, 0);
    Assign PAssign1126 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1127);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1130 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1132 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1136 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode1135 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1136, (Optr)&t_block_return);
    Block PBlock1134 = new_Block_with(empty_Array, empty_Array, PThreadedCode1135, 1, PSend1136);
    // ifTrue:. 
    Send PSend1133 = new_Send((Optr)PSend1132, SMB_ifTrue_, 1, (Optr)PBlock1134);
    Array PThreadedCode1131 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1132, (Optr)&t_send_ifTrue_, (Optr)PSend1133, (Optr)PBlock1134, (Optr)&t_method_return);
    Block PBlock1129 = new_Block_with(PArray1130, empty_Array, PThreadedCode1131, 1, PSend1133);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1137 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1129);
    Array PThreadedCode1125 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1126, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1128, (Optr)&t_send0, (Optr)PSend1127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1129, (Optr)&t_send1, (Optr)PSend1137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1122 = new_Method_with(PArray1123, PArray1124, empty_Array, PThreadedCode1125, 3, PAssign1126, PSend1137, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod1122, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1139 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1140 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1144 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1143 = new_Send((Optr)PSend1144, SMB_new, 0);
    Assign PAssign1142 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1143);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray1146 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1148 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)VAR_each_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1149 = new_Send((Optr)VAR_newCollection_0_1, SMB_add_, 1, (Optr)PSend1148);
    Array PThreadedCode1147 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend1148, (Optr)&t_send1, (Optr)PSend1149, (Optr)&t_method_return);
    Block PBlock1145 = new_Block_with(PArray1146, empty_Array, PThreadedCode1147, 1, PSend1149);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1150 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1145);
    Array PThreadedCode1141 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1142, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1144, (Optr)&t_send0, (Optr)PSend1143, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1145, (Optr)&t_send1, (Optr)PSend1150, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1138 = new_Method_with(PArray1139, PArray1140, empty_Array, PThreadedCode1141, 3, PAssign1142, PSend1150, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod1138, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_stdev() {
    Symbol SMB_stdev = new_Symbol(L"stdev");
    Variable VAR_avg_0_0 = new_Variable_named(L"avg", 0);
    Variable VAR_sample_0_1 = new_Variable_named(L"sample", 0);
    Variable VAR_sum_0_2 = new_Variable_named(L"sum", 0);
    Array PArray1152 = new_Array_with(3, (Optr)VAR_avg_0_0, (Optr)VAR_sample_0_1, (Optr)VAR_sum_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1155 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_average = new_Symbol(L"average");
    // average. 
    Send PSend1159 = new_Send((Optr)self, SMB_average, 0);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend1158 = new_Send((Optr)PSend1159, SMB_asFloat, 0);
    Assign PAssign1157 = new_Assign((Optr)VAR_avg_0_0, (Optr)PSend1158);
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    // anyOne. 
    Send PSend1161 = new_Send((Optr)self, SMB_anyOne, 0);
    Assign PAssign1160 = new_Assign((Optr)VAR_sample_0_1, (Optr)PSend1161);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_accum_2_0 = new_Variable_named(L"accum", 2);
    Variable VAR_each_2_1 = new_Variable_named(L"each", 2);
    Array PArray1165 = new_Array_with(2, (Optr)VAR_accum_2_0, (Optr)VAR_each_2_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1167 = new_Send((Optr)VAR_each_2_1, SMB__minus_, 1, (Optr)VAR_avg_0_0);
    Symbol SMB_squared = new_Symbol(L"squared");
    // squared. 
    Send PSend1168 = new_Send((Optr)PSend1167, SMB_squared, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1169 = new_Send((Optr)VAR_accum_2_0, SMB__plus_, 1, (Optr)PSend1168);
    Array PThreadedCode1166 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_accum_2_0, (Optr)&t_push_variable, (Optr)VAR_each_2_1, (Optr)&t_push_variable, (Optr)VAR_avg_0_0, (Optr)&t_send1, (Optr)PSend1167, (Optr)&t_send0, (Optr)PSend1168, (Optr)&t_send1, (Optr)PSend1169, (Optr)&t_method_return);
    Block PBlock1164 = new_Block_with(PArray1165, empty_Array, PThreadedCode1166, 1, PSend1169);
    // inject:into:. 
    Send PSend1163 = new_Send((Optr)self, SMB_inject_into_, 2, (Optr)VAR_sample_0_1, (Optr)PBlock1164);
    Assign PAssign1162 = new_Assign((Optr)VAR_sum_0_2, (Optr)PSend1163);
    // -. 
    Send PSend1171 = new_Send((Optr)VAR_sum_0_2, SMB__minus_, 1, (Optr)VAR_sample_0_1);
    Assign PAssign1170 = new_Assign((Optr)VAR_sum_0_2, (Optr)PSend1171);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend1172 = new_Send((Optr)VAR_sum_0_2, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1176 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_0_Const);
    Array PThreadedCode1175 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1176, (Optr)&t_block_return);
    Block PBlock1174 = new_Block_with(empty_Array, empty_Array, PThreadedCode1175, 1, PSend1176);
    // ifTrue:. 
    Send PSend1173 = new_Send((Optr)PSend1172, SMB_ifTrue_, 1, (Optr)PBlock1174);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1177 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1178 = new_Send((Optr)PSend1177, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend1179 = new_Send((Optr)VAR_sum_0_2, SMB__divide_, 1, (Optr)PSend1178);
    Symbol SMB_sqrt = new_Symbol(L"sqrt");
    // sqrt. 
    Send PSend1180 = new_Send((Optr)PSend1179, SMB_sqrt, 0);
    Array PThreadedCode1156 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign1157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1159, (Optr)&t_send0, (Optr)PSend1158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1160, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1162, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_push_closure, (Optr)PBlock1164, (Optr)&t_send2, (Optr)PSend1163, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1170, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_send1, (Optr)PSend1171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1172, (Optr)&t_send_ifTrue_, (Optr)PSend1173, (Optr)PBlock1174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1177, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1178, (Optr)&t_send1, (Optr)PSend1179, (Optr)&t_send0, (Optr)PSend1180, (Optr)&t_method_return);
    Block PBlock1154 = new_Block_with(PArray1155, empty_Array, PThreadedCode1156, 6, PAssign1157, PAssign1160, PAssign1162, PAssign1170, PSend1173, PSend1180);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1181 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1154);
    Array PThreadedCode1153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1154, (Optr)&t_send1, (Optr)PSend1181, (Optr)&t_method_return);
    Method PMethod1151 = new_Method_with(empty_Array, PArray1152, empty_Array, PThreadedCode1153, 1, PSend1181);
    
    MethodClosure MC_SMB_stdev = new_MethodClosure((Method)PMethod1151, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_stdev, MC_SMB_stdev);
}


static void init_SMB_anyOne() {
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1185 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend1187 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Array PArray1189 = new_Array_with(1, (Optr)VAR_each_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1191 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_each_2_0);
    Array PThreadedCode1190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1191, (Optr)&t_method_return);
    Block PBlock1188 = new_Block_with(PArray1189, empty_Array, PThreadedCode1190, 1, PSend1191);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend1192 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock1188);
    Array PThreadedCode1186 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1187, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock1188, (Optr)&t_send1, (Optr)PSend1192, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock1184 = new_Block_with(PArray1185, empty_Array, PThreadedCode1186, 3, PSend1187, PSend1192, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1193 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1184);
    Array PThreadedCode1183 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1184, (Optr)&t_send1, (Optr)PSend1193, (Optr)&t_method_return);
    Method PMethod1182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1183, 1, PSend1193);
    
    MethodClosure MC_SMB_anyOne = new_MethodClosure((Method)PMethod1182, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_anyOne, MC_SMB_anyOne);
}


static void init_SMB_average() {
    Symbol SMB_average = new_Symbol(L"average");
    Symbol SMB_sum = new_Symbol(L"sum");
    // sum. 
    Send PSend1196 = new_Send((Optr)self, SMB_sum, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1197 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend1198 = new_Send((Optr)PSend1196, SMB__divide_, 1, (Optr)PSend1197);
    Array PThreadedCode1195 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1196, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1197, (Optr)&t_send1, (Optr)PSend1198, (Optr)&t_method_return);
    Method PMethod1194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1195, 1, PSend1198);
    
    MethodClosure MC_SMB_average = new_MethodClosure((Method)PMethod1194, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_average, MC_SMB_average);
}


static void init_SMB_notEmpty() {
    Symbol SMB_notEmpty = new_Symbol(L"notEmpty");
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1201 = new_Send((Optr)self, SMB_isEmpty, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend1202 = new_Send((Optr)PSend1201, SMB_not, 0);
    Array PThreadedCode1200 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1201, (Optr)&t_send0, (Optr)PSend1202, (Optr)&t_method_return);
    Method PMethod1199 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1200, 1, PSend1202);
    
    MethodClosure MC_SMB_notEmpty = new_MethodClosure((Method)PMethod1199, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_notEmpty, MC_SMB_notEmpty);
}


static void init_SMB_sum() {
    Symbol SMB_sum = new_Symbol(L"sum");
    Variable VAR_sum_0_0 = new_Variable_named(L"sum", 0);
    Variable VAR_sample_0_1 = new_Variable_named(L"sample", 0);
    Array PArray1204 = new_Array_with(2, (Optr)VAR_sum_0_0, (Optr)VAR_sample_0_1);
    Symbol SMB_anyOne = new_Symbol(L"anyOne");
    // anyOne. 
    Send PSend1207 = new_Send((Optr)self, SMB_anyOne, 0);
    Assign PAssign1206 = new_Assign((Optr)VAR_sample_0_1, (Optr)PSend1207);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_accum_1_0 = new_Variable_named(L"accum", 1);
    Variable VAR_each_1_1 = new_Variable_named(L"each", 1);
    Array PArray1211 = new_Array_with(2, (Optr)VAR_accum_1_0, (Optr)VAR_each_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1213 = new_Send((Optr)VAR_accum_1_0, SMB__plus_, 1, (Optr)VAR_each_1_1);
    Array PThreadedCode1212 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_accum_1_0, (Optr)&t_push_variable, (Optr)VAR_each_1_1, (Optr)&t_send1, (Optr)PSend1213, (Optr)&t_method_return);
    Block PBlock1210 = new_Block_with(PArray1211, empty_Array, PThreadedCode1212, 1, PSend1213);
    // inject:into:. 
    Send PSend1209 = new_Send((Optr)self, SMB_inject_into_, 2, (Optr)VAR_sample_0_1, (Optr)PBlock1210);
    Assign PAssign1208 = new_Assign((Optr)VAR_sum_0_0, (Optr)PSend1209);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1214 = new_Send((Optr)VAR_sum_0_0, SMB__minus_, 1, (Optr)VAR_sample_0_1);
    Array PThreadedCode1205 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1206, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1207, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1208, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_push_closure, (Optr)PBlock1210, (Optr)&t_send2, (Optr)PSend1209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sum_0_0, (Optr)&t_push_variable, (Optr)VAR_sample_0_1, (Optr)&t_send1, (Optr)PSend1214, (Optr)&t_method_return);
    Method PMethod1203 = new_Method_with(empty_Array, PArray1204, empty_Array, PThreadedCode1205, 3, PAssign1206, PAssign1208, PSend1214);
    
    MethodClosure MC_SMB_sum = new_MethodClosure((Method)PMethod1203, Collections_Abstract_Collection_Class);
    store_method(Collections_Abstract_Collection_Class, SMB_sum, MC_SMB_sum);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray1216 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1219 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1221 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_anObject_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1222 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1220 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send1, (Optr)PSend1221, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1222, (Optr)&t_method_return);
    Block PBlock1218 = new_Block_with(PArray1219, empty_Array, PThreadedCode1220, 2, PSend1221, PSend1222);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1223 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1224 = new_Send((Optr)PBlock1218, SMB_value_, 1, (Optr)PSend1223);
    Array PThreadedCode1217 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1218, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1223, (Optr)&t_send1, (Optr)PSend1224, (Optr)&t_method_return);
    Method PMethod1215 = new_Method_with(PArray1216, empty_Array, empty_Array, PThreadedCode1217, 1, PSend1224);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod1215, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_, MC_SMB_with_);
}


static void init_class_SMB_with_with_() {
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Array PArray1226 = new_Array_with(2, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1229 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1231 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_firstObject_0_0);
    // add:. 
    Send PSend1232 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_secondObject_0_1);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1233 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1230 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send1, (Optr)PSend1231, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send1, (Optr)PSend1232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1233, (Optr)&t_method_return);
    Block PBlock1228 = new_Block_with(PArray1229, empty_Array, PThreadedCode1230, 3, PSend1231, PSend1232, PSend1233);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1234 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1235 = new_Send((Optr)PBlock1228, SMB_value_, 1, (Optr)PSend1234);
    Array PThreadedCode1227 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1228, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1234, (Optr)&t_send1, (Optr)PSend1235, (Optr)&t_method_return);
    Method PMethod1225 = new_Method_with(PArray1226, empty_Array, empty_Array, PThreadedCode1227, 1, PSend1235);
    
    MethodClosure MC_SMB_with_with_ = new_MethodClosure((Method)PMethod1225, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_with_, MC_SMB_with_with_);
}


static void init_class_SMB_with_with_with_() {
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Variable VAR_secondObject_0_1 = new_Variable_named(L"secondObject", 0);
    Variable VAR_thirdObject_0_2 = new_Variable_named(L"thirdObject", 0);
    Array PArray1237 = new_Array_with(3, (Optr)VAR_firstObject_0_0, (Optr)VAR_secondObject_0_1, (Optr)VAR_thirdObject_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1240 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1242 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_firstObject_0_0);
    // add:. 
    Send PSend1243 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_secondObject_0_1);
    // add:. 
    Send PSend1244 = new_Send((Optr)VAR__receiver__1_0, SMB_add_, 1, (Optr)VAR_thirdObject_0_2);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1245 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1241 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_send1, (Optr)PSend1242, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_secondObject_0_1, (Optr)&t_send1, (Optr)PSend1243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_thirdObject_0_2, (Optr)&t_send1, (Optr)PSend1244, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1245, (Optr)&t_method_return);
    Block PBlock1239 = new_Block_with(PArray1240, empty_Array, PThreadedCode1241, 4, PSend1242, PSend1243, PSend1244, PSend1245);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1246 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1247 = new_Send((Optr)PBlock1239, SMB_value_, 1, (Optr)PSend1246);
    Array PThreadedCode1238 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock1239, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1246, (Optr)&t_send1, (Optr)PSend1247, (Optr)&t_method_return);
    Method PMethod1236 = new_Method_with(PArray1237, empty_Array, empty_Array, PThreadedCode1238, 1, PSend1247);
    
    MethodClosure MC_SMB_with_with_with_ = new_MethodClosure((Method)PMethod1236, HEADER(Collections_Abstract_Collection_Class));
    store_method(HEADER(Collections_Abstract_Collection_Class), SMB_with_with_with_, MC_SMB_with_with_with_);
}


static void init_class_SMB_withAll_() {
    Symbol SMB_withAll_ = new_Symbol(L"withAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray1249 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray1252 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend1254 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend1255 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode1253 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend1254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend1255, (Optr)&t_method_return);
    Block PBlock1251 = new_Block_with(PArray1252, empty_Array, PThreadedCode1253, 2, PSend1254, PSend1255);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1256 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1257 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend1256);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1258 = new_Send((Optr)PBlock1251, SMB_value_, 1, (Optr)PSend1257);
    Array PThreadedCode1250 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock1251, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend1256, (Optr)&t_send1, (Optr)PSend1257, (Optr)&t_send1, (Optr)PSend1258, (Optr)&t_method_return);
    Method PMethod1248 = new_Method_with(PArray1249, empty_Array, empty_Array, PThreadedCode1250, 1, PSend1258);
    
    MethodClosure MC_SMB_withAll_ = new_MethodClosure((Method)PMethod1248, HEADER(Collections_Abstract_Collection_Class));
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