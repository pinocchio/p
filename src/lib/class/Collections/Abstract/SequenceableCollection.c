#include <lib/class/Collections/Abstract/SequenceableCollection.h>


Optr layout_Collections_Abstract_SequenceableCollection_Class_class;


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend1252 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode1251 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1252, (Optr)&t_method_return);
    Method PMethod1250 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1251, 1, PSend1252);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod1250, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray1254 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend1256 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_n_0_0);
    Array PThreadedCode1255 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send2, (Optr)PSend1256, (Optr)&t_method_return);
    Method PMethod1253 = new_Method_with(PArray1254, empty_Array, empty_Array, PThreadedCode1255, 1, PSend1256);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod1253, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend1259 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Array PThreadedCode1258 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1259, (Optr)&t_method_return);
    Method PMethod1257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1258, 1, PSend1259);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod1257, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_third() {
    Symbol SMB_third = new_Symbol(L"third");
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend1262 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Array PThreadedCode1261 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend1262, (Optr)&t_method_return);
    Method PMethod1260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1261, 1, PSend1262);
    
    MethodClosure MC_SMB_third = new_MethodClosure((Method)PMethod1260, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_third, MC_SMB_third);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Array PArray1264 = new_Array_with(1, (Optr)VAR_otherCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1267 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend1269 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_otherCollection_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1273 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode1272 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend1273, (Optr)&t_block_return);
    Block PBlock1271 = new_Block_with(empty_Array, empty_Array, PThreadedCode1272, 1, PSend1273);
    // ifTrue:. 
    Send PSend1270 = new_Send((Optr)PSend1269, SMB_ifTrue_, 1, (Optr)PBlock1271);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1274 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend1275 = new_Send((Optr)VAR_otherCollection_0_0, SMB_species, 0);
    // ==. 
    Send PSend1276 = new_Send((Optr)PSend1274, SMB__pequals_, 1, (Optr)PSend1275);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend1280 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1279 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1280, (Optr)&t_block_return);
    Block PBlock1278 = new_Block_with(empty_Array, empty_Array, PThreadedCode1279, 1, PSend1280);
    // ifFalse:. 
    Send PSend1277 = new_Send((Optr)PSend1276, SMB_ifFalse_, 1, (Optr)PBlock1278);
    Symbol SMB_hasEqualElements_ = new_Symbol(L"hasEqualElements:");
    // hasEqualElements:. 
    Send PSend1281 = new_Send((Optr)self, SMB_hasEqualElements_, 1, (Optr)VAR_otherCollection_0_0);
    Array PThreadedCode1268 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send1, (Optr)PSend1269, (Optr)&t_send_ifTrue_, (Optr)PSend1270, (Optr)PBlock1271, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1274, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1275, (Optr)&t_send1, (Optr)PSend1276, (Optr)&t_send_ifFalse_, (Optr)PSend1277, (Optr)PBlock1278, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send1, (Optr)PSend1281, (Optr)&t_method_return);
    Block PBlock1266 = new_Block_with(PArray1267, empty_Array, PThreadedCode1268, 3, PSend1270, PSend1277, PSend1281);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1282 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1266);
    Array PThreadedCode1265 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1266, (Optr)&t_send1, (Optr)PSend1282, (Optr)&t_method_return);
    Method PMethod1263 = new_Method_with(PArray1264, empty_Array, empty_Array, PThreadedCode1265, 1, PSend1282);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod1263, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1284 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1286 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1288 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1290 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1291 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1290);
    Array PThreadedCode1289 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1290, (Optr)&t_send1, (Optr)PSend1291, (Optr)&t_method_return);
    Block PBlock1287 = new_Block_with(PArray1288, empty_Array, PThreadedCode1289, 1, PSend1291);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1292 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1286, (Optr)PBlock1287);
    Array PThreadedCode1285 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1286, (Optr)&t_push_closure, (Optr)PBlock1287, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1292, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1283 = new_Method_with(PArray1284, empty_Array, empty_Array, PThreadedCode1285, 2, PSend1292, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod1283, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_from_to_do_() {
    Symbol SMB_from_to_do_ = new_Symbol(L"from:to:do:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray1294 = new_Array_with(3, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1297 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1299 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1300 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)PSend1299);
    Array PThreadedCode1298 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1299, (Optr)&t_send1, (Optr)PSend1300, (Optr)&t_method_return);
    Block PBlock1296 = new_Block_with(PArray1297, empty_Array, PThreadedCode1298, 1, PSend1300);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1301 = new_Send((Optr)VAR_start_0_0, SMB_to_do_, 2, (Optr)VAR_stop_0_1, (Optr)PBlock1296);
    Array PThreadedCode1295 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_push_closure, (Optr)PBlock1296, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1301, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1293 = new_Method_with(PArray1294, empty_Array, empty_Array, PThreadedCode1295, 2, PSend1301, self);
    
    MethodClosure MC_SMB_from_to_do_ = new_MethodClosure((Method)PMethod1293, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_from_to_do_, MC_SMB_from_to_do_);
}


static void init_SMB_allButFirst_() {
    Symbol SMB_allButFirst_ = new_Symbol(L"allButFirst:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray1303 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1305 = new_Send((Optr)VAR_n_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1306 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1307 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)PSend1305, (Optr)PSend1306);
    Array PThreadedCode1304 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1305, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1306, (Optr)&t_send2, (Optr)PSend1307, (Optr)&t_method_return);
    Method PMethod1302 = new_Method_with(PArray1303, empty_Array, empty_Array, PThreadedCode1304, 1, PSend1307);
    
    MethodClosure MC_SMB_allButFirst_ = new_MethodClosure((Method)PMethod1302, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_allButFirst_, MC_SMB_allButFirst_);
}


static void init_SMB_copyAfter_() {
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1309 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1312 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend1316 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1317 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1316);
    Array PThreadedCode1315 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1316, (Optr)&t_send1, (Optr)PSend1317, (Optr)&t_block_return);
    Block PBlock1314 = new_Block_with(empty_Array, empty_Array, PThreadedCode1315, 1, PSend1317);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1318 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1314);
    Symbol SMB_allButFirst_ = new_Symbol(L"allButFirst:");
    // allButFirst:. 
    Send PSend1319 = new_Send((Optr)self, SMB_allButFirst_, 1, (Optr)PSend1318);
    Array PThreadedCode1313 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1314, (Optr)&t_send2, (Optr)PSend1318, (Optr)&t_send1, (Optr)PSend1319, (Optr)&t_method_return);
    Block PBlock1311 = new_Block_with(PArray1312, empty_Array, PThreadedCode1313, 1, PSend1319);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1320 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1311);
    Array PThreadedCode1310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1311, (Optr)&t_send1, (Optr)PSend1320, (Optr)&t_method_return);
    Method PMethod1308 = new_Method_with(PArray1309, empty_Array, empty_Array, PThreadedCode1310, 1, PSend1320);
    
    MethodClosure MC_SMB_copyAfter_ = new_MethodClosure((Method)PMethod1308, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyAfter_, MC_SMB_copyAfter_);
}


static void init_SMB_copyEmpty() {
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1323 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend1324 = new_Send((Optr)PSend1323, SMB_new_, 1, (Optr)int_0_Const);
    Array PThreadedCode1322 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1323, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1324, (Optr)&t_method_return);
    Method PMethod1321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1322, 1, PSend1324);
    
    MethodClosure MC_SMB_copyEmpty = new_MethodClosure((Method)PMethod1321, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyEmpty, MC_SMB_copyEmpty);
}


static void init_SMB_copyFrom_() {
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray1326 = new_Array_with(1, (Optr)VAR_start_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1328 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1329 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)PSend1328);
    Array PThreadedCode1327 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1328, (Optr)&t_send2, (Optr)PSend1329, (Optr)&t_method_return);
    Method PMethod1325 = new_Method_with(PArray1326, empty_Array, empty_Array, PThreadedCode1327, 1, PSend1329);
    
    MethodClosure MC_SMB_copyFrom_ = new_MethodClosure((Method)PMethod1325, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyFrom_, MC_SMB_copyFrom_);
}


static void init_SMB_copyFrom_to_() {
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray1331 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR_newSize_0_2 = new_Variable_named(L"newSize", 0);
    Array PArray1332 = new_Array_with(1, (Optr)VAR_newSize_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1336 = new_Send((Optr)VAR_stop_0_1, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1335 = new_Send((Optr)PSend1336, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1334 = new_Assign((Optr)VAR_newSize_0_2, (Optr)PSend1335);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1337 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1338 = new_Send((Optr)PSend1337, SMB_new_, 1, (Optr)VAR_newSize_0_2);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend1339 = new_Send((Optr)PSend1338, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_newSize_0_2, (Optr)self, (Optr)VAR_start_0_0);
    Array PThreadedCode1333 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign1334, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend1336, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1337, (Optr)&t_push_variable, (Optr)VAR_newSize_0_2, (Optr)&t_send1, (Optr)PSend1338, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newSize_0_2, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send4, (Optr)PSend1339, (Optr)&t_method_return);
    Method PMethod1330 = new_Method_with(PArray1331, PArray1332, empty_Array, PThreadedCode1333, 2, PAssign1334, PSend1339);
    
    MethodClosure MC_SMB_copyFrom_to_ = new_MethodClosure((Method)PMethod1330, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyFrom_to_, MC_SMB_copyFrom_to_);
}


static void init_SMB_copyReplaceAll_with_() {
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Variable VAR_oldSubstring_0_0 = new_Variable_named(L"oldSubstring", 0);
    Variable VAR_newSubstring_0_1 = new_Variable_named(L"newSubstring", 0);
    Array PArray1341 = new_Array_with(2, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1);
    Symbol SMB_copyReplaceAll_with_asTokens_ = new_Symbol(L"copyReplaceAll:with:asTokens:");
    // copyReplaceAll:with:asTokens:. 
    Send PSend1343 = new_Send((Optr)self, SMB_copyReplaceAll_with_asTokens_, 3, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1, (Optr)false_Const);
    Array PThreadedCode1342 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_push_false, (Optr)&t_send3, (Optr)PSend1343, (Optr)&t_method_return);
    Method PMethod1340 = new_Method_with(PArray1341, empty_Array, empty_Array, PThreadedCode1342, 1, PSend1343);
    
    MethodClosure MC_SMB_copyReplaceAll_with_ = new_MethodClosure((Method)PMethod1340, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyReplaceAll_with_, MC_SMB_copyReplaceAll_with_);
}


static void init_SMB_copyReplaceAll_with_asTokens_() {
    Symbol SMB_copyReplaceAll_with_asTokens_ = new_Symbol(L"copyReplaceAll:with:asTokens:");
    Variable VAR_oldSubstring_0_0 = new_Variable_named(L"oldSubstring", 0);
    Variable VAR_newSubstring_0_1 = new_Variable_named(L"newSubstring", 0);
    Variable VAR_ifTokens_0_2 = new_Variable_named(L"ifTokens", 0);
    Array PArray1345 = new_Array_with(3, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1, (Optr)VAR_ifTokens_0_2);
    Variable VAR_aString_0_3 = new_Variable_named(L"aString", 0);
    Variable VAR_startSearch_0_4 = new_Variable_named(L"startSearch", 0);
    Variable VAR_currentIndex_0_5 = new_Variable_named(L"currentIndex", 0);
    Variable VAR_endIndex_0_6 = new_Variable_named(L"endIndex", 0);
    Array PArray1346 = new_Array_with(4, (Optr)VAR_aString_0_3, (Optr)VAR_startSearch_0_4, (Optr)VAR_currentIndex_0_5, (Optr)VAR_endIndex_0_6);
    Symbol SMB_isString = new_Symbol(L"isString");
    // isString. 
    Send PSend1350 = new_Send((Optr)self, SMB_isString, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend1351 = new_Send((Optr)PSend1350, SMB_not, 0);
    Array PThreadedCode1349 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1350, (Optr)&t_send0, (Optr)PSend1351, (Optr)&t_block_return);
    Block PBlock1348 = new_Block_with(empty_Array, empty_Array, PThreadedCode1349, 1, PSend1351);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend1352 = new_Send((Optr)VAR_ifTokens_0_2, SMB_and_, 1, (Optr)PBlock1348);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend1356 = new_Send((Optr)self, SMB_isKindOf_, 1, (Optr)Text_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_1360 = new_String(L"Token replacement only valid for Strings");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1360_Const = new_Constant((Optr)string_1360);
    // error:. 
    Send PSend1361 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1360_Const);
    Array PThreadedCode1359 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1360, (Optr)&t_send1, (Optr)PSend1361, (Optr)&t_block_return);
    Block PBlock1358 = new_Block_with(empty_Array, empty_Array, PThreadedCode1359, 1, PSend1361);
    // ifFalse:. 
    Send PSend1357 = new_Send((Optr)PSend1356, SMB_ifFalse_, 1, (Optr)PBlock1358);
    Array PThreadedCode1355 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send1, (Optr)PSend1356, (Optr)&t_send_ifFalse_, (Optr)PSend1357, (Optr)PBlock1358, (Optr)&t_block_return);
    Block PBlock1354 = new_Block_with(empty_Array, empty_Array, PThreadedCode1355, 1, PSend1357);
    // ifTrue:. 
    Send PSend1353 = new_Send((Optr)PSend1352, SMB_ifTrue_, 1, (Optr)PBlock1354);
    Assign PAssign1362 = new_Assign((Optr)VAR_aString_0_3, (Optr)self);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1363 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)int_1_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    // indexOfSubCollection:startingAt:. 
    Send PSend1367 = new_Send((Optr)VAR_aString_0_3, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_startSearch_0_4);
    Assign PAssign1366 = new_Assign((Optr)VAR_currentIndex_0_5, (Optr)PSend1367);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend1368 = new_Send((Optr)PAssign1366, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode1365 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign1366, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_push_variable, (Optr)VAR_startSearch_0_4, (Optr)&t_send2, (Optr)PSend1367, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1368, (Optr)&t_block_return);
    Block PBlock1364 = new_Block_with(empty_Array, empty_Array, PThreadedCode1365, 1, PSend1368);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1374 = new_Send((Optr)VAR_oldSubstring_0_0, SMB_size, 0);
    // +. 
    Send PSend1373 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1374);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1372 = new_Send((Optr)PSend1373, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1371 = new_Assign((Optr)VAR_endIndex_0_6, (Optr)PSend1372);
    // not. 
    Send PSend1375 = new_Send((Optr)VAR_ifTokens_0_2, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1378 = new_Send((Optr)VAR_currentIndex_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend1381 = new_Send((Optr)VAR_currentIndex_0_5, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1382 = new_Send((Optr)VAR_aString_0_3, SMB_at_, 1, (Optr)PSend1381);
    Symbol SMB_isAlphaNumeric = new_Symbol(L"isAlphaNumeric");
    // isAlphaNumeric. 
    Send PSend1383 = new_Send((Optr)PSend1382, SMB_isAlphaNumeric, 0);
    // not. 
    Send PSend1384 = new_Send((Optr)PSend1383, SMB_not, 0);
    Array PThreadedCode1380 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1381, (Optr)&t_send1, (Optr)PSend1382, (Optr)&t_send0, (Optr)PSend1383, (Optr)&t_send0, (Optr)PSend1384, (Optr)&t_block_return);
    Block PBlock1379 = new_Block_with(empty_Array, empty_Array, PThreadedCode1380, 1, PSend1384);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1385 = new_Send((Optr)PSend1378, SMB_or_, 1, (Optr)PBlock1379);
    // size. 
    Send PSend1388 = new_Send((Optr)VAR_aString_0_3, SMB_size, 0);
    // =. 
    Send PSend1389 = new_Send((Optr)VAR_endIndex_0_6, SMB__equals_, 1, (Optr)PSend1388);
    // +. 
    Send PSend1392 = new_Send((Optr)VAR_endIndex_0_6, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend1393 = new_Send((Optr)VAR_aString_0_3, SMB_at_, 1, (Optr)PSend1392);
    // isAlphaNumeric. 
    Send PSend1394 = new_Send((Optr)PSend1393, SMB_isAlphaNumeric, 0);
    // not. 
    Send PSend1395 = new_Send((Optr)PSend1394, SMB_not, 0);
    Array PThreadedCode1391 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1392, (Optr)&t_send1, (Optr)PSend1393, (Optr)&t_send0, (Optr)PSend1394, (Optr)&t_send0, (Optr)PSend1395, (Optr)&t_block_return);
    Block PBlock1390 = new_Block_with(empty_Array, empty_Array, PThreadedCode1391, 1, PSend1395);
    // or:. 
    Send PSend1396 = new_Send((Optr)PSend1389, SMB_or_, 1, (Optr)PBlock1390);
    Array PThreadedCode1387 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_send0, (Optr)PSend1388, (Optr)&t_send1, (Optr)PSend1389, (Optr)&t_push_closure, (Optr)PBlock1390, (Optr)&t_send1, (Optr)PSend1396, (Optr)&t_block_return);
    Block PBlock1386 = new_Block_with(empty_Array, empty_Array, PThreadedCode1387, 1, PSend1396);
    // and:. 
    Send PSend1397 = new_Send((Optr)PSend1385, SMB_and_, 1, (Optr)PBlock1386);
    Array PThreadedCode1377 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1378, (Optr)&t_push_closure, (Optr)PBlock1379, (Optr)&t_send1, (Optr)PSend1385, (Optr)&t_push_closure, (Optr)PBlock1386, (Optr)&t_send1, (Optr)PSend1397, (Optr)&t_block_return);
    Block PBlock1376 = new_Block_with(empty_Array, empty_Array, PThreadedCode1377, 1, PSend1397);
    // or:. 
    Send PSend1398 = new_Send((Optr)PSend1375, SMB_or_, 1, (Optr)PBlock1376);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_copyReplaceFrom_to_with_ = new_Symbol(L"copyReplaceFrom:to:with:");
    // copyReplaceFrom:to:with:. 
    Send PSend1403 = new_Send((Optr)VAR_aString_0_3, SMB_copyReplaceFrom_to_with_, 3, (Optr)VAR_currentIndex_0_5, (Optr)VAR_endIndex_0_6, (Optr)VAR_newSubstring_0_1);
    Assign PAssign1402 = new_Assign((Optr)VAR_aString_0_3, (Optr)PSend1403);
    // size. 
    Send PSend1406 = new_Send((Optr)VAR_newSubstring_0_1, SMB_size, 0);
    // +. 
    Send PSend1405 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1406);
    Assign PAssign1404 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1405);
    Array PThreadedCode1401 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign1402, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send3, (Optr)PSend1403, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1404, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send0, (Optr)PSend1406, (Optr)&t_send1, (Optr)PSend1405, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1400 = new_Block_with(empty_Array, empty_Array, PThreadedCode1401, 2, PAssign1402, PAssign1404);
    // +. 
    Send PSend1413 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1412 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1413);
    Array PThreadedCode1411 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign1412, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1413, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1410 = new_Block_with(empty_Array, empty_Array, PThreadedCode1411, 1, PAssign1412);
    // size. 
    Send PSend1418 = new_Send((Optr)VAR_newSubstring_0_1, SMB_size, 0);
    // +. 
    Send PSend1417 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1418);
    Assign PAssign1416 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1417);
    Array PThreadedCode1415 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1416, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send0, (Optr)PSend1418, (Optr)&t_send1, (Optr)PSend1417, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1414 = new_Block_with(empty_Array, empty_Array, PThreadedCode1415, 1, PAssign1416);
    // ifTrue:ifFalse:. 
    Send PSend1409 = new_Send((Optr)VAR_ifTokens_0_2, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1410, (Optr)PBlock1414);
    Array PThreadedCode1408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1409, (Optr)PBlock1410, (Optr)PBlock1414, (Optr)&t_block_return);
    Block PBlock1407 = new_Block_with(empty_Array, empty_Array, PThreadedCode1408, 1, PSend1409);
    // ifTrue:ifFalse:. 
    Send PSend1399 = new_Send((Optr)PSend1398, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1400, (Optr)PBlock1407);
    Array PThreadedCode1370 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign1371, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_send0, (Optr)PSend1374, (Optr)&t_send1, (Optr)PSend1373, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1372, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_send0, (Optr)PSend1375, (Optr)&t_push_closure, (Optr)PBlock1376, (Optr)&t_send1, (Optr)PSend1398, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1399, (Optr)PBlock1400, (Optr)PBlock1407, (Optr)&t_block_return);
    Block PBlock1369 = new_Block_with(empty_Array, empty_Array, PThreadedCode1370, 2, PAssign1371, PSend1399);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1419 = new_Send((Optr)PBlock1364, SMB_whileTrue_, 1, (Optr)PBlock1369);
    Array PThreadedCode1347 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_push_closure, (Optr)PBlock1348, (Optr)&t_send1, (Optr)PSend1352, (Optr)&t_send_ifTrue_, (Optr)PSend1353, (Optr)PBlock1354, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1362, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1363, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1364, (Optr)&t_push_closure, (Optr)PBlock1369, (Optr)&t_send1, (Optr)PSend1419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_method_return);
    Method PMethod1344 = new_Method_with(PArray1345, PArray1346, empty_Array, PThreadedCode1347, 5, PSend1353, PAssign1362, PAssign1363, PSend1419, VAR_aString_0_3);
    
    MethodClosure MC_SMB_copyReplaceAll_with_asTokens_ = new_MethodClosure((Method)PMethod1344, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyReplaceAll_with_asTokens_, MC_SMB_copyReplaceAll_with_asTokens_);
}


static void init_SMB_copyUpTo_() {
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1421 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1424 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1428 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1429 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1428);
    Array PThreadedCode1427 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1428, (Optr)&t_send1, (Optr)PSend1429, (Optr)&t_block_return);
    Block PBlock1426 = new_Block_with(empty_Array, empty_Array, PThreadedCode1427, 1, PSend1429);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1430 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1426);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1431 = new_Send((Optr)PSend1430, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_first_ = new_Symbol(L"first:");
    // first:. 
    Send PSend1432 = new_Send((Optr)self, SMB_first_, 1, (Optr)PSend1431);
    Array PThreadedCode1425 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1426, (Optr)&t_send2, (Optr)PSend1430, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1431, (Optr)&t_send1, (Optr)PSend1432, (Optr)&t_method_return);
    Block PBlock1423 = new_Block_with(PArray1424, empty_Array, PThreadedCode1425, 1, PSend1432);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1433 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1423);
    Array PThreadedCode1422 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1423, (Optr)&t_send1, (Optr)PSend1433, (Optr)&t_method_return);
    Method PMethod1420 = new_Method_with(PArray1421, empty_Array, empty_Array, PThreadedCode1422, 1, PSend1433);
    
    MethodClosure MC_SMB_copyUpTo_ = new_MethodClosure((Method)PMethod1420, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyUpTo_, MC_SMB_copyUpTo_);
}


static void init_SMB_copyUpToLast_() {
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1435 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1438 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1442 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1442);
    Array PThreadedCode1441 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1442, (Optr)&t_send1, (Optr)PSend1443, (Optr)&t_block_return);
    Block PBlock1440 = new_Block_with(empty_Array, empty_Array, PThreadedCode1441, 1, PSend1443);
    Symbol SMB_lastIndexOf_ifAbsent_ = new_Symbol(L"lastIndexOf:ifAbsent:");
    // lastIndexOf:ifAbsent:. 
    Send PSend1444 = new_Send((Optr)self, SMB_lastIndexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1440);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1445 = new_Send((Optr)PSend1444, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_first_ = new_Symbol(L"first:");
    // first:. 
    Send PSend1446 = new_Send((Optr)self, SMB_first_, 1, (Optr)PSend1445);
    Array PThreadedCode1439 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1440, (Optr)&t_send2, (Optr)PSend1444, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1445, (Optr)&t_send1, (Optr)PSend1446, (Optr)&t_method_return);
    Block PBlock1437 = new_Block_with(PArray1438, empty_Array, PThreadedCode1439, 1, PSend1446);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1447 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1437);
    Array PThreadedCode1436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1437, (Optr)&t_send1, (Optr)PSend1447, (Optr)&t_method_return);
    Method PMethod1434 = new_Method_with(PArray1435, empty_Array, empty_Array, PThreadedCode1436, 1, PSend1447);
    
    MethodClosure MC_SMB_copyUpToLast_ = new_MethodClosure((Method)PMethod1434, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyUpToLast_, MC_SMB_copyUpToLast_);
}


static void init_SMB_copyWith_() {
    Symbol SMB_copyWith_ = new_Symbol(L"copyWith:");
    Variable VAR_newElement_0_0 = new_Variable_named(L"newElement", 0);
    Array PArray1449 = new_Array_with(1, (Optr)VAR_newElement_0_0);
    Variable VAR_newIC_0_1 = new_Variable_named(L"newIC", 0);
    Array PArray1450 = new_Array_with(1, (Optr)VAR_newIC_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1454 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1456 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1455 = new_Send((Optr)PSend1456, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend1453 = new_Send((Optr)PSend1454, SMB_new_, 1, (Optr)PSend1455);
    Assign PAssign1452 = new_Assign((Optr)VAR_newIC_0_1, (Optr)PSend1453);
    // size. 
    Send PSend1457 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend1458 = new_Send((Optr)VAR_newIC_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend1457, (Optr)self, (Optr)int_1_Const);
    // size. 
    Send PSend1459 = new_Send((Optr)VAR_newIC_0_1, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1460 = new_Send((Optr)VAR_newIC_0_1, SMB_at_put_, 2, (Optr)PSend1459, (Optr)VAR_newElement_0_0);
    Array PThreadedCode1451 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign1452, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1454, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1456, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1455, (Optr)&t_send1, (Optr)PSend1453, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1457, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend1458, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_send0, (Optr)PSend1459, (Optr)&t_push_variable, (Optr)VAR_newElement_0_0, (Optr)&t_send2, (Optr)PSend1460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_method_return);
    Method PMethod1448 = new_Method_with(PArray1449, PArray1450, empty_Array, PThreadedCode1451, 4, PAssign1452, PSend1458, PSend1460, VAR_newIC_0_1);
    
    MethodClosure MC_SMB_copyWith_ = new_MethodClosure((Method)PMethod1448, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyWith_, MC_SMB_copyWith_);
}


static void init_SMB_beginsWith_() {
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Variable VAR_aSequenceableCollection_0_0 = new_Variable_named(L"aSequenceableCollection", 0);
    Array PArray1462 = new_Array_with(1, (Optr)VAR_aSequenceableCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1465 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1467 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_isEmpty, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1470 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend1471 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend1472 = new_Send((Optr)PSend1470, SMB__lt_, 1, (Optr)PSend1471);
    Array PThreadedCode1469 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1470, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_send0, (Optr)PSend1471, (Optr)&t_send1, (Optr)PSend1472, (Optr)&t_block_return);
    Block PBlock1468 = new_Block_with(empty_Array, empty_Array, PThreadedCode1469, 1, PSend1472);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1473 = new_Send((Optr)PSend1467, SMB_or_, 1, (Optr)PBlock1468);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1477 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1476 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1477, (Optr)&t_block_return);
    Block PBlock1475 = new_Block_with(empty_Array, empty_Array, PThreadedCode1476, 1, PSend1477);
    // ifTrue:. 
    Send PSend1474 = new_Send((Optr)PSend1473, SMB_ifTrue_, 1, (Optr)PBlock1475);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray1479 = new_Array_with(2, (Optr)VAR_each_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1481 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_1);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    // ~=. 
    Send PSend1482 = new_Send((Optr)PSend1481, SMB__notEquals_, 1, (Optr)VAR_each_2_0);
    // escape:. 
    Send PSend1486 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1485 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1486, (Optr)&t_block_return);
    Block PBlock1484 = new_Block_with(empty_Array, empty_Array, PThreadedCode1485, 1, PSend1486);
    // ifTrue:. 
    Send PSend1483 = new_Send((Optr)PSend1482, SMB_ifTrue_, 1, (Optr)PBlock1484);
    Array PThreadedCode1480 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend1481, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1482, (Optr)&t_send_ifTrue_, (Optr)PSend1483, (Optr)PBlock1484, (Optr)&t_method_return);
    Block PBlock1478 = new_Block_with(PArray1479, empty_Array, PThreadedCode1480, 1, PSend1483);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend1487 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_withIndexDo_, 1, (Optr)PBlock1478);
    Array PThreadedCode1466 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_send0, (Optr)PSend1467, (Optr)&t_push_closure, (Optr)PBlock1468, (Optr)&t_send1, (Optr)PSend1473, (Optr)&t_send_ifTrue_, (Optr)PSend1474, (Optr)PBlock1475, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock1478, (Optr)&t_send1, (Optr)PSend1487, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1464 = new_Block_with(PArray1465, empty_Array, PThreadedCode1466, 3, PSend1474, PSend1487, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1488 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1464);
    Array PThreadedCode1463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1464, (Optr)&t_send1, (Optr)PSend1488, (Optr)&t_method_return);
    Method PMethod1461 = new_Method_with(PArray1462, empty_Array, empty_Array, PThreadedCode1463, 1, PSend1488);
    
    MethodClosure MC_SMB_beginsWith_ = new_MethodClosure((Method)PMethod1461, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_beginsWith_, MC_SMB_beginsWith_);
}


static void init_SMB_doWithIndex_() {
    Symbol SMB_doWithIndex_ = new_Symbol(L"doWithIndex:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray1490 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend1492 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)VAR_elementAndIndexBlock_0_0);
    Array PThreadedCode1491 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_send1, (Optr)PSend1492, (Optr)&t_method_return);
    Method PMethod1489 = new_Method_with(PArray1490, empty_Array, empty_Array, PThreadedCode1491, 1, PSend1492);
    
    MethodClosure MC_SMB_doWithIndex_ = new_MethodClosure((Method)PMethod1489, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_doWithIndex_, MC_SMB_doWithIndex_);
}


static void init_SMB_findFirst_() {
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1494 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray1495 = new_Array_with(1, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1498 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign1500 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1504 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1503 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1504);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1505 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1506 = new_Send((Optr)PAssign1503, SMB__lt__equals_, 1, (Optr)PSend1505);
    Array PThreadedCode1502 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign1503, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1504, (Optr)&t_assign, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1505, (Optr)&t_send1, (Optr)PSend1506, (Optr)&t_block_return);
    Block PBlock1501 = new_Block_with(empty_Array, empty_Array, PThreadedCode1502, 1, PSend1506);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1509 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1510 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1509);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1514 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_0_1);
    Array PThreadedCode1513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1514, (Optr)&t_block_return);
    Block PBlock1512 = new_Block_with(empty_Array, empty_Array, PThreadedCode1513, 1, PSend1514);
    // ifTrue:. 
    Send PSend1511 = new_Send((Optr)PSend1510, SMB_ifTrue_, 1, (Optr)PBlock1512);
    Array PThreadedCode1508 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1509, (Optr)&t_send1, (Optr)PSend1510, (Optr)&t_send_ifTrue_, (Optr)PSend1511, (Optr)PBlock1512, (Optr)&t_block_return);
    Block PBlock1507 = new_Block_with(empty_Array, empty_Array, PThreadedCode1508, 1, PSend1511);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1515 = new_Send((Optr)PBlock1501, SMB_whileTrue_, 1, (Optr)PBlock1507);
    Array PThreadedCode1499 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign1500, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1501, (Optr)&t_push_closure, (Optr)PBlock1507, (Optr)&t_send1, (Optr)PSend1515, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock1497 = new_Block_with(PArray1498, empty_Array, PThreadedCode1499, 3, PAssign1500, PSend1515, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1516 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1497);
    Array PThreadedCode1496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1497, (Optr)&t_send1, (Optr)PSend1516, (Optr)&t_method_return);
    Method PMethod1493 = new_Method_with(PArray1494, PArray1495, empty_Array, PThreadedCode1496, 1, PSend1516);
    
    MethodClosure MC_SMB_findFirst_ = new_MethodClosure((Method)PMethod1493, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_findFirst_, MC_SMB_findFirst_);
}


static void init_SMB_findLast_() {
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1518 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray1519 = new_Array_with(1, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1522 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1526 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1525 = new_Send((Optr)PSend1526, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1524 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1525);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1530 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1529 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1530);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend1531 = new_Send((Optr)PAssign1529, SMB__gt__equals_, 1, (Optr)int_1_Const);
    Array PThreadedCode1528 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1529, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1530, (Optr)&t_assign, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1531, (Optr)&t_block_return);
    Block PBlock1527 = new_Block_with(empty_Array, empty_Array, PThreadedCode1528, 1, PSend1531);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1534 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1535 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1534);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1539 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_0_1);
    Array PThreadedCode1538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1539, (Optr)&t_block_return);
    Block PBlock1537 = new_Block_with(empty_Array, empty_Array, PThreadedCode1538, 1, PSend1539);
    // ifTrue:. 
    Send PSend1536 = new_Send((Optr)PSend1535, SMB_ifTrue_, 1, (Optr)PBlock1537);
    Array PThreadedCode1533 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1534, (Optr)&t_send1, (Optr)PSend1535, (Optr)&t_send_ifTrue_, (Optr)PSend1536, (Optr)PBlock1537, (Optr)&t_block_return);
    Block PBlock1532 = new_Block_with(empty_Array, empty_Array, PThreadedCode1533, 1, PSend1536);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1540 = new_Send((Optr)PBlock1527, SMB_whileTrue_, 1, (Optr)PBlock1532);
    Array PThreadedCode1523 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1524, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1526, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1525, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1527, (Optr)&t_push_closure, (Optr)PBlock1532, (Optr)&t_send1, (Optr)PSend1540, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1521 = new_Block_with(PArray1522, empty_Array, PThreadedCode1523, 3, PAssign1524, PSend1540, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1541 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1521);
    Array PThreadedCode1520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1521, (Optr)&t_send1, (Optr)PSend1541, (Optr)&t_method_return);
    Method PMethod1517 = new_Method_with(PArray1518, PArray1519, empty_Array, PThreadedCode1520, 1, PSend1541);
    
    MethodClosure MC_SMB_findLast_ = new_MethodClosure((Method)PMethod1517, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_findLast_, MC_SMB_findLast_);
}


static void init_SMB_hasEqualElements_() {
    Symbol SMB_hasEqualElements_ = new_Symbol(L"hasEqualElements:");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Array PArray1543 = new_Array_with(1, (Optr)VAR_otherCollection_0_0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray1544 = new_Array_with(1, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1547 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend1549 = new_Send((Optr)VAR_otherCollection_0_0, SMB_isKindOf_, 1, (Optr)SequenceableCollection_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1553 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1552 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1553, (Optr)&t_block_return);
    Block PBlock1551 = new_Block_with(empty_Array, empty_Array, PThreadedCode1552, 1, PSend1553);
    // ifFalse:. 
    Send PSend1550 = new_Send((Optr)PSend1549, SMB_ifFalse_, 1, (Optr)PBlock1551);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1555 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign1554 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend1555);
    // size. 
    Send PSend1556 = new_Send((Optr)VAR_otherCollection_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1557 = new_Send((Optr)PAssign1554, SMB__equals_, 1, (Optr)PSend1556);
    // escape:. 
    Send PSend1561 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1560 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1561, (Optr)&t_block_return);
    Block PBlock1559 = new_Block_with(empty_Array, empty_Array, PThreadedCode1560, 1, PSend1561);
    // ifFalse:. 
    Send PSend1558 = new_Send((Optr)PSend1557, SMB_ifFalse_, 1, (Optr)PBlock1559);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1563 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1565 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend1566 = new_Send((Optr)VAR_otherCollection_0_0, SMB_at_, 1, (Optr)VAR_index_2_0);
    // =. 
    Send PSend1567 = new_Send((Optr)PSend1565, SMB__equals_, 1, (Optr)PSend1566);
    // escape:. 
    Send PSend1571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1570 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1571, (Optr)&t_block_return);
    Block PBlock1569 = new_Block_with(empty_Array, empty_Array, PThreadedCode1570, 1, PSend1571);
    // ifFalse:. 
    Send PSend1568 = new_Send((Optr)PSend1567, SMB_ifFalse_, 1, (Optr)PBlock1569);
    Array PThreadedCode1564 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1565, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1566, (Optr)&t_send1, (Optr)PSend1567, (Optr)&t_send_ifFalse_, (Optr)PSend1568, (Optr)PBlock1569, (Optr)&t_method_return);
    Block PBlock1562 = new_Block_with(PArray1563, empty_Array, PThreadedCode1564, 1, PSend1568);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1572 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_1, (Optr)PBlock1562);
    Array PThreadedCode1548 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_class_reference, (Optr)SequenceableCollection_classReference, (Optr)&t_send1, (Optr)PSend1549, (Optr)&t_send_ifFalse_, (Optr)PSend1550, (Optr)PBlock1551, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1554, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1555, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1556, (Optr)&t_send1, (Optr)PSend1557, (Optr)&t_send_ifFalse_, (Optr)PSend1558, (Optr)PBlock1559, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_closure, (Optr)PBlock1562, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1572, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1546 = new_Block_with(PArray1547, empty_Array, PThreadedCode1548, 4, PSend1550, PSend1558, PSend1572, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1573 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1546);
    Array PThreadedCode1545 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1546, (Optr)&t_send1, (Optr)PSend1573, (Optr)&t_method_return);
    Method PMethod1542 = new_Method_with(PArray1543, PArray1544, empty_Array, PThreadedCode1545, 1, PSend1573);
    
    MethodClosure MC_SMB_hasEqualElements_ = new_MethodClosure((Method)PMethod1542, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_hasEqualElements_, MC_SMB_hasEqualElements_);
}


static void init_SMB_indexOf_() {
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1575 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Array PThreadedCode1578 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1577 = new_Block_with(empty_Array, empty_Array, PThreadedCode1578, 1, int_0_Const);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1579 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1577);
    Array PThreadedCode1576 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1577, (Optr)&t_send2, (Optr)PSend1579, (Optr)&t_method_return);
    Method PMethod1574 = new_Method_with(PArray1575, empty_Array, empty_Array, PThreadedCode1576, 1, PSend1579);
    
    MethodClosure MC_SMB_indexOf_ = new_MethodClosure((Method)PMethod1574, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_, MC_SMB_indexOf_);
}


static void init_SMB_indexOf_ifAbsent_() {
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1581 = new_Array_with(2, (Optr)VAR_anElement_0_0, (Optr)VAR_exceptionBlock_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend1583 = new_Send((Optr)self, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anElement_0_0, (Optr)int_1_Const, (Optr)VAR_exceptionBlock_0_1);
    Array PThreadedCode1582 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send3, (Optr)PSend1583, (Optr)&t_method_return);
    Method PMethod1580 = new_Method_with(PArray1581, empty_Array, empty_Array, PThreadedCode1582, 1, PSend1583);
    
    MethodClosure MC_SMB_indexOf_ifAbsent_ = new_MethodClosure((Method)PMethod1580, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_ifAbsent_, MC_SMB_indexOf_ifAbsent_);
}


static void init_SMB_indexOf_startingAt_ifAbsent_() {
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1585 = new_Array_with(3, (Optr)VAR_anElement_0_0, (Optr)VAR_start_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1588 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1590 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1592 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1594 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1595 = new_Send((Optr)PSend1594, SMB__equals_, 1, (Optr)VAR_anElement_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1599 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode1598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1599, (Optr)&t_block_return);
    Block PBlock1597 = new_Block_with(empty_Array, empty_Array, PThreadedCode1598, 1, PSend1599);
    // ifTrue:. 
    Send PSend1596 = new_Send((Optr)PSend1595, SMB_ifTrue_, 1, (Optr)PBlock1597);
    Array PThreadedCode1593 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1594, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send1, (Optr)PSend1595, (Optr)&t_send_ifTrue_, (Optr)PSend1596, (Optr)PBlock1597, (Optr)&t_method_return);
    Block PBlock1591 = new_Block_with(PArray1592, empty_Array, PThreadedCode1593, 1, PSend1596);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1600 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend1590, (Optr)PBlock1591);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1601 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1589 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1590, (Optr)&t_push_closure, (Optr)PBlock1591, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1601, (Optr)&t_method_return);
    Block PBlock1587 = new_Block_with(PArray1588, empty_Array, PThreadedCode1589, 2, PSend1600, PSend1601);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1602 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1587);
    Array PThreadedCode1586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1587, (Optr)&t_send1, (Optr)PSend1602, (Optr)&t_method_return);
    Method PMethod1584 = new_Method_with(PArray1585, empty_Array, empty_Array, PThreadedCode1586, 1, PSend1602);
    
    MethodClosure MC_SMB_indexOf_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1584, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_startingAt_ifAbsent_, MC_SMB_indexOf_startingAt_ifAbsent_);
}


static void init_SMB_indexOfSubCollection_startingAt_() {
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Variable VAR_aSubCollection_0_0 = new_Variable_named(L"aSubCollection", 0);
    Variable VAR_anIndex_0_1 = new_Variable_named(L"anIndex", 0);
    Array PArray1604 = new_Array_with(2, (Optr)VAR_aSubCollection_0_0, (Optr)VAR_anIndex_0_1);
    Array PThreadedCode1607 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1606 = new_Block_with(empty_Array, empty_Array, PThreadedCode1607, 1, int_0_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_Symbol(L"indexOfSubCollection:startingAt:ifAbsent:");
    // indexOfSubCollection:startingAt:ifAbsent:. 
    Send PSend1608 = new_Send((Optr)self, SMB_indexOfSubCollection_startingAt_ifAbsent_, 3, (Optr)VAR_aSubCollection_0_0, (Optr)VAR_anIndex_0_1, (Optr)PBlock1606);
    Array PThreadedCode1605 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSubCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_1, (Optr)&t_push_closure, (Optr)PBlock1606, (Optr)&t_send3, (Optr)PSend1608, (Optr)&t_method_return);
    Method PMethod1603 = new_Method_with(PArray1604, empty_Array, empty_Array, PThreadedCode1605, 1, PSend1608);
    
    MethodClosure MC_SMB_indexOfSubCollection_startingAt_ = new_MethodClosure((Method)PMethod1603, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOfSubCollection_startingAt_, MC_SMB_indexOfSubCollection_startingAt_);
}


static void init_SMB_indexOfSubCollection_startingAt_ifAbsent_() {
    Symbol SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_Symbol(L"indexOfSubCollection:startingAt:ifAbsent:");
    Variable VAR_sub_0_0 = new_Variable_named(L"sub", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1610 = new_Array_with(3, (Optr)VAR_sub_0_0, (Optr)VAR_start_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Array PArray1611 = new_Array_with(2, (Optr)VAR_first_0_3, (Optr)VAR_index_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1614 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1616 = new_Send((Optr)VAR_sub_0_0, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1620 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1621 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1620);
    Array PThreadedCode1619 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1620, (Optr)&t_send1, (Optr)PSend1621, (Optr)&t_block_return);
    Block PBlock1618 = new_Block_with(empty_Array, empty_Array, PThreadedCode1619, 1, PSend1621);
    // ifTrue:. 
    Send PSend1617 = new_Send((Optr)PSend1616, SMB_ifTrue_, 1, (Optr)PBlock1618);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend1623 = new_Send((Optr)VAR_sub_0_0, SMB_first, 0);
    Assign PAssign1622 = new_Assign((Optr)VAR_first_0_3, (Optr)PSend1623);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1624 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend1625 = new_Send((Optr)VAR_sub_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1626 = new_Send((Optr)PSend1624, SMB__minus_, 1, (Optr)PSend1625);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1627 = new_Send((Optr)PSend1626, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_startIndex_2_0 = new_Variable_named(L"startIndex", 2);
    Array PArray1629 = new_Array_with(1, (Optr)VAR_startIndex_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1631 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_startIndex_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1632 = new_Send((Optr)PSend1631, SMB__equals_, 1, (Optr)VAR_first_0_3);
    Assign PAssign1636 = new_Assign((Optr)VAR_index_0_4, (Optr)int_1_Const);
    // +. 
    Send PSend1639 = new_Send((Optr)VAR_startIndex_2_0, SMB__plus_, 1, (Optr)VAR_index_0_4);
    // -. 
    Send PSend1640 = new_Send((Optr)PSend1639, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend1641 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1640);
    // at:. 
    Send PSend1642 = new_Send((Optr)VAR_sub_0_0, SMB_at_, 1, (Optr)VAR_index_0_4);
    // =. 
    Send PSend1643 = new_Send((Optr)PSend1641, SMB__equals_, 1, (Optr)PSend1642);
    Array PThreadedCode1638 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1639, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1640, (Optr)&t_send1, (Optr)PSend1641, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1642, (Optr)&t_send1, (Optr)PSend1643, (Optr)&t_block_return);
    Block PBlock1637 = new_Block_with(empty_Array, empty_Array, PThreadedCode1638, 1, PSend1643);
    // size. 
    Send PSend1646 = new_Send((Optr)VAR_sub_0_0, SMB_size, 0);
    // =. 
    Send PSend1647 = new_Send((Optr)VAR_index_0_4, SMB__equals_, 1, (Optr)PSend1646);
    // escape:. 
    Send PSend1651 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_startIndex_2_0);
    Array PThreadedCode1650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_send1, (Optr)PSend1651, (Optr)&t_block_return);
    Block PBlock1649 = new_Block_with(empty_Array, empty_Array, PThreadedCode1650, 1, PSend1651);
    // ifTrue:. 
    Send PSend1648 = new_Send((Optr)PSend1647, SMB_ifTrue_, 1, (Optr)PBlock1649);
    // +. 
    Send PSend1653 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1652 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1653);
    Array PThreadedCode1645 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1646, (Optr)&t_send1, (Optr)PSend1647, (Optr)&t_send_ifTrue_, (Optr)PSend1648, (Optr)PBlock1649, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1652, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1653, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1644 = new_Block_with(empty_Array, empty_Array, PThreadedCode1645, 2, PSend1648, PAssign1652);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1654 = new_Send((Optr)PBlock1637, SMB_whileTrue_, 1, (Optr)PBlock1644);
    Array PThreadedCode1635 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1636, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1637, (Optr)&t_push_closure, (Optr)PBlock1644, (Optr)&t_send1, (Optr)PSend1654, (Optr)&t_block_return);
    Block PBlock1634 = new_Block_with(empty_Array, empty_Array, PThreadedCode1635, 2, PAssign1636, PSend1654);
    // ifTrue:. 
    Send PSend1633 = new_Send((Optr)PSend1632, SMB_ifTrue_, 1, (Optr)PBlock1634);
    Array PThreadedCode1630 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_send1, (Optr)PSend1631, (Optr)&t_push_variable, (Optr)VAR_first_0_3, (Optr)&t_send1, (Optr)PSend1632, (Optr)&t_send_ifTrue_, (Optr)PSend1633, (Optr)PBlock1634, (Optr)&t_method_return);
    Block PBlock1628 = new_Block_with(PArray1629, empty_Array, PThreadedCode1630, 1, PSend1633);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1655 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend1627, (Optr)PBlock1628);
    // value. 
    Send PSend1656 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1615 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1616, (Optr)&t_send_ifTrue_, (Optr)PSend1617, (Optr)PBlock1618, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1622, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1624, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1625, (Optr)&t_send1, (Optr)PSend1626, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1627, (Optr)&t_push_closure, (Optr)PBlock1628, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1655, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1656, (Optr)&t_method_return);
    Block PBlock1613 = new_Block_with(PArray1614, empty_Array, PThreadedCode1615, 4, PSend1617, PAssign1622, PSend1655, PSend1656);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1657 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1613);
    Array PThreadedCode1612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1613, (Optr)&t_send1, (Optr)PSend1657, (Optr)&t_method_return);
    Method PMethod1609 = new_Method_with(PArray1610, PArray1611, empty_Array, PThreadedCode1612, 1, PSend1657);
    
    MethodClosure MC_SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1609, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOfSubCollection_startingAt_ifAbsent_, MC_SMB_indexOfSubCollection_startingAt_ifAbsent_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1660 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1661 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1660);
    Array PThreadedCode1659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1660, (Optr)&t_send1, (Optr)PSend1661, (Optr)&t_method_return);
    Method PMethod1658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1659, 1, PSend1661);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod1658, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_lastIndexOf_ifAbsent_() {
    Symbol SMB_lastIndexOf_ifAbsent_ = new_Symbol(L"lastIndexOf:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1663 = new_Array_with(2, (Optr)VAR_anElement_0_0, (Optr)VAR_exceptionBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1665 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_lastIndexOf_startingAt_ifAbsent_ = new_Symbol(L"lastIndexOf:startingAt:ifAbsent:");
    // lastIndexOf:startingAt:ifAbsent:. 
    Send PSend1666 = new_Send((Optr)self, SMB_lastIndexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anElement_0_0, (Optr)PSend1665, (Optr)VAR_exceptionBlock_0_1);
    Array PThreadedCode1664 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1665, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send3, (Optr)PSend1666, (Optr)&t_method_return);
    Method PMethod1662 = new_Method_with(PArray1663, empty_Array, empty_Array, PThreadedCode1664, 1, PSend1666);
    
    MethodClosure MC_SMB_lastIndexOf_ifAbsent_ = new_MethodClosure((Method)PMethod1662, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_lastIndexOf_ifAbsent_, MC_SMB_lastIndexOf_ifAbsent_);
}


static void init_SMB_lastIndexOf_startingAt_ifAbsent_() {
    Symbol SMB_lastIndexOf_startingAt_ifAbsent_ = new_Symbol(L"lastIndexOf:startingAt:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_lastIndex_0_1 = new_Variable_named(L"lastIndex", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1668 = new_Array_with(3, (Optr)VAR_anElement_0_0, (Optr)VAR_lastIndex_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1671 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_n1 = new_SmallInt(-1);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1674 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1676 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1677 = new_Send((Optr)PSend1676, SMB__equals_, 1, (Optr)VAR_anElement_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1681 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode1680 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1681, (Optr)&t_block_return);
    Block PBlock1679 = new_Block_with(empty_Array, empty_Array, PThreadedCode1680, 1, PSend1681);
    // ifTrue:. 
    Send PSend1678 = new_Send((Optr)PSend1677, SMB_ifTrue_, 1, (Optr)PBlock1679);
    Array PThreadedCode1675 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1676, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send1, (Optr)PSend1677, (Optr)&t_send_ifTrue_, (Optr)PSend1678, (Optr)PBlock1679, (Optr)&t_method_return);
    Block PBlock1673 = new_Block_with(PArray1674, empty_Array, PThreadedCode1675, 1, PSend1678);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // to:by:do:. 
    Send PSend1682 = new_Send((Optr)VAR_lastIndex_0_1, SMB_to_by_do_, 3, (Optr)int_1_Const, (Optr)int_n1_Const, (Optr)PBlock1673);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1683 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1672 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_lastIndex_0_1, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_push_closure, (Optr)PBlock1673, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend1682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1683, (Optr)&t_method_return);
    Block PBlock1670 = new_Block_with(PArray1671, empty_Array, PThreadedCode1672, 2, PSend1682, PSend1683);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1684 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1670);
    Array PThreadedCode1669 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1670, (Optr)&t_send1, (Optr)PSend1684, (Optr)&t_method_return);
    Method PMethod1667 = new_Method_with(PArray1668, empty_Array, empty_Array, PThreadedCode1669, 1, PSend1684);
    
    MethodClosure MC_SMB_lastIndexOf_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1667, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_lastIndexOf_startingAt_ifAbsent_, MC_SMB_lastIndexOf_startingAt_ifAbsent_);
}


static void init_SMB_middle() {
    Symbol SMB_middle = new_Symbol(L"middle");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1687 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend1688 = new_Send((Optr)PSend1687, SMB__quotient_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1689 = new_Send((Optr)PSend1688, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1690 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1689);
    Array PThreadedCode1686 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1687, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1688, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1689, (Optr)&t_send1, (Optr)PSend1690, (Optr)&t_method_return);
    Method PMethod1685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1686, 1, PSend1690);
    
    MethodClosure MC_SMB_middle = new_MethodClosure((Method)PMethod1685, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_middle, MC_SMB_middle);
}


static void init_SMB_readStream() {
    Symbol SMB_readStream = new_Symbol(L"readStream");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1693 = new_Send((Optr)ReadStream_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1692 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)ReadStream_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1693, (Optr)&t_method_return);
    Method PMethod1691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1692, 1, PSend1693);
    
    MethodClosure MC_SMB_readStream = new_MethodClosure((Method)PMethod1691, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_readStream, MC_SMB_readStream);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray1695 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray1696 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1699 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign1698 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend1699);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1701 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1700 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1701);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1705 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1704 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1705);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1706 = new_Send((Optr)PAssign1704, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode1703 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign1704, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1705, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend1706, (Optr)&t_block_return);
    Block PBlock1702 = new_Block_with(empty_Array, empty_Array, PThreadedCode1703, 1, PSend1706);
    // +. 
    Send PSend1709 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1710 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend1709);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1711 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend1710);
    Array PThreadedCode1708 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1709, (Optr)&t_send1, (Optr)PSend1710, (Optr)&t_send2, (Optr)PSend1711, (Optr)&t_block_return);
    Block PBlock1707 = new_Block_with(empty_Array, empty_Array, PThreadedCode1708, 1, PSend1711);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1712 = new_Send((Optr)PBlock1702, SMB_whileTrue_, 1, (Optr)PBlock1707);
    Array PThreadedCode1697 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign1698, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend1699, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1700, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1701, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1702, (Optr)&t_push_closure, (Optr)PBlock1707, (Optr)&t_send1, (Optr)PSend1712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1694 = new_Method_with(PArray1695, PArray1696, empty_Array, PThreadedCode1697, 4, PAssign1698, PAssign1700, PSend1712, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod1694, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    Symbol SMB_reversed = new_Symbol(L"reversed");
    // reversed. 
    Send PSend1715 = new_Send((Optr)self, SMB_reversed, 0);
    Array PThreadedCode1714 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1715, (Optr)&t_method_return);
    Method PMethod1713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1714, 1, PSend1715);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod1713, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_src_0_2 = new_Variable_named(L"src", 0);
    Array PArray1717 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_result_0_1, (Optr)VAR_src_0_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1720 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign1719 = new_Assign((Optr)VAR_n_0_0, (Optr)PSend1720);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1723 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1722 = new_Send((Optr)PSend1723, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign1721 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend1722);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1725 = new_Send((Optr)VAR_n_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1724 = new_Assign((Optr)VAR_src_0_2, (Optr)PSend1725);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray1727 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1730 = new_Send((Optr)VAR_src_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1729 = new_Assign((Optr)VAR_src_0_2, (Optr)PSend1730);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1731 = new_Send((Optr)self, SMB_at_, 1, (Optr)PAssign1729);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1732 = new_Send((Optr)VAR_result_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend1731);
    Array PThreadedCode1728 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign1729, (Optr)&t_push_variable, (Optr)VAR_src_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1730, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend1731, (Optr)&t_send2, (Optr)PSend1732, (Optr)&t_method_return);
    Block PBlock1726 = new_Block_with(PArray1727, empty_Array, PThreadedCode1728, 1, PSend1732);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1733 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_n_0_0, (Optr)PBlock1726);
    Array PThreadedCode1718 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign1719, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1720, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1721, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1723, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend1722, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1724, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1725, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_closure, (Optr)PBlock1726, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod1716 = new_Method_with(empty_Array, PArray1717, empty_Array, PThreadedCode1718, 5, PAssign1719, PAssign1721, PAssign1724, PSend1733, VAR_result_0_1);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod1716, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1735 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1737 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1739 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1741 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1742 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1741);
    Array PThreadedCode1740 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1741, (Optr)&t_send1, (Optr)PSend1742, (Optr)&t_method_return);
    Block PBlock1738 = new_Block_with(PArray1739, empty_Array, PThreadedCode1740, 1, PSend1742);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // to:by:do:. 
    Send PSend1743 = new_Send((Optr)PSend1737, SMB_to_by_do_, 3, (Optr)int_1_Const, (Optr)int_n1_Const, (Optr)PBlock1738);
    Array PThreadedCode1736 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1737, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_push_closure, (Optr)PBlock1738, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend1743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1734 = new_Method_with(PArray1735, empty_Array, empty_Array, PThreadedCode1736, 2, PSend1743, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod1734, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray1745 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1747 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1749 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1751 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend1752 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend1751, (Optr)VAR_index_1_0);
    Array PThreadedCode1750 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1751, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend1752, (Optr)&t_method_return);
    Block PBlock1748 = new_Block_with(PArray1749, empty_Array, PThreadedCode1750, 1, PSend1752);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1753 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1747, (Optr)PBlock1748);
    Array PThreadedCode1746 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1747, (Optr)&t_push_closure, (Optr)PBlock1748, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1753, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1744 = new_Method_with(PArray1745, empty_Array, empty_Array, PThreadedCode1746, 2, PSend1753, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod1744, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_joinUsing_() {
    Symbol SMB_joinUsing_ = new_Symbol(L"joinUsing:");
    Variable VAR_joiner_0_0 = new_Variable_named(L"joiner", 0);
    Array PArray1755 = new_Array_with(1, (Optr)VAR_joiner_0_0);
    Symbol SMB_join_ = new_Symbol(L"join:");
    // join:. 
    Send PSend1757 = new_Send((Optr)VAR_joiner_0_0, SMB_join_, 1, (Optr)self);
    Array PThreadedCode1756 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_joiner_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1757, (Optr)&t_method_return);
    Method PMethod1754 = new_Method_with(PArray1755, empty_Array, empty_Array, PThreadedCode1756, 1, PSend1757);
    
    MethodClosure MC_SMB_joinUsing_ = new_MethodClosure((Method)PMethod1754, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_joinUsing_, MC_SMB_joinUsing_);
}


static void init_SMB_split_() {
    Symbol SMB_split_ = new_Symbol(L"split:");
    Variable VAR_aSequencableCollection_0_0 = new_Variable_named(L"aSequencableCollection", 0);
    Array PArray1759 = new_Array_with(1, (Optr)VAR_aSequencableCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_position_0_2 = new_Variable_named(L"position", 0);
    Variable VAR_oldPosition_0_3 = new_Variable_named(L"oldPosition", 0);
    Array PArray1760 = new_Array_with(3, (Optr)VAR_result_0_1, (Optr)VAR_position_0_2, (Optr)VAR_oldPosition_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1763 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1762 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend1763);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1764 = new_Assign((Optr)VAR_position_0_2, (Optr)int_1_Const);
    Assign PAssign1765 = new_Assign((Optr)VAR_oldPosition_0_3, (Optr)VAR_position_0_2);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    // indexOfSubCollection:startingAt:. 
    Send PSend1767 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_indexOfSubCollection_startingAt_, 2, (Optr)self, (Optr)VAR_position_0_2);
    Assign PAssign1766 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1767);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend1770 = new_Send((Optr)VAR_position_0_2, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode1769 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1770, (Optr)&t_block_return);
    Block PBlock1768 = new_Block_with(empty_Array, empty_Array, PThreadedCode1769, 1, PSend1770);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1773 = new_Send((Optr)VAR_position_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1774 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_copyFrom_to_, 2, (Optr)VAR_oldPosition_0_3, (Optr)PSend1773);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1775 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend1774);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1778 = new_Send((Optr)self, SMB_size, 0);
    // +. 
    Send PSend1777 = new_Send((Optr)VAR_position_0_2, SMB__plus_, 1, (Optr)PSend1778);
    Assign PAssign1776 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1777);
    Assign PAssign1779 = new_Assign((Optr)VAR_oldPosition_0_3, (Optr)VAR_position_0_2);
    // indexOfSubCollection:startingAt:. 
    Send PSend1781 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_indexOfSubCollection_startingAt_, 2, (Optr)self, (Optr)VAR_position_0_2);
    Assign PAssign1780 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1781);
    Array PThreadedCode1772 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_oldPosition_0_3, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1773, (Optr)&t_send2, (Optr)PSend1774, (Optr)&t_send1, (Optr)PSend1775, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1776, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1778, (Optr)&t_send1, (Optr)PSend1777, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1779, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1780, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_send2, (Optr)PSend1781, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1771 = new_Block_with(empty_Array, empty_Array, PThreadedCode1772, 4, PSend1775, PAssign1776, PAssign1779, PAssign1780);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1782 = new_Send((Optr)PBlock1768, SMB_whileTrue_, 1, (Optr)PBlock1771);
    // size. 
    Send PSend1783 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend1784 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_copyFrom_to_, 2, (Optr)VAR_oldPosition_0_3, (Optr)PSend1783);
    // add:. 
    Send PSend1785 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend1784);
    Array PThreadedCode1761 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign1762, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1763, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1764, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1765, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1766, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_send2, (Optr)PSend1767, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1768, (Optr)&t_push_closure, (Optr)PBlock1771, (Optr)&t_send1, (Optr)PSend1782, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_oldPosition_0_3, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_send0, (Optr)PSend1783, (Optr)&t_send2, (Optr)PSend1784, (Optr)&t_send1, (Optr)PSend1785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod1758 = new_Method_with(PArray1759, PArray1760, empty_Array, PThreadedCode1761, 7, PAssign1762, PAssign1764, PAssign1765, PAssign1766, PSend1782, PSend1785, VAR_result_0_1);
    
    MethodClosure MC_SMB_split_ = new_MethodClosure((Method)PMethod1758, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_split_, MC_SMB_split_);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray1787 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1789 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1791 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend1793 = new_Send((Optr)VAR_index_1_0, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1797 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode1796 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend1797, (Optr)&t_block_return);
    Block PBlock1795 = new_Block_with(empty_Array, empty_Array, PThreadedCode1796, 1, PSend1797);
    // ifFalse:. 
    Send PSend1794 = new_Send((Optr)PSend1793, SMB_ifFalse_, 1, (Optr)PBlock1795);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1798 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1799 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend1798);
    Array PThreadedCode1792 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1793, (Optr)&t_send_ifFalse_, (Optr)PSend1794, (Optr)PBlock1795, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1798, (Optr)&t_send1, (Optr)PSend1799, (Optr)&t_method_return);
    Block PBlock1790 = new_Block_with(PArray1791, empty_Array, PThreadedCode1792, 2, PSend1794, PSend1799);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1800 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1789, (Optr)PBlock1790);
    Array PThreadedCode1788 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1789, (Optr)&t_push_closure, (Optr)PBlock1790, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1800, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1786 = new_Method_with(PArray1787, empty_Array, empty_Array, PThreadedCode1788, 2, PSend1800, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod1786, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1802 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1803 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1807 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1808 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend1806 = new_Send((Optr)PSend1807, SMB_new_, 1, (Optr)PSend1808);
    Assign PAssign1805 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1806);
    // size. 
    Send PSend1809 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1811 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1813 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1814 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1813);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1815 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend1814);
    Array PThreadedCode1812 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1813, (Optr)&t_send1, (Optr)PSend1814, (Optr)&t_send2, (Optr)PSend1815, (Optr)&t_method_return);
    Block PBlock1810 = new_Block_with(PArray1811, empty_Array, PThreadedCode1812, 1, PSend1815);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1816 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1809, (Optr)PBlock1810);
    Array PThreadedCode1804 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1805, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1808, (Optr)&t_send1, (Optr)PSend1806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1809, (Optr)&t_push_closure, (Optr)PBlock1810, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1816, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1801 = new_Method_with(PArray1802, PArray1803, empty_Array, PThreadedCode1804, 3, PAssign1805, PSend1816, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod1801, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1818 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray1819 = new_Array_with(1, (Optr)VAR_aStream_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1824 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1825 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend1823 = new_Send((Optr)PSend1824, SMB_new_, 1, (Optr)PSend1825);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend1822 = new_Send((Optr)PSend1823, SMB_writeStream, 0);
    Assign PAssign1821 = new_Assign((Optr)VAR_aStream_0_1, (Optr)PSend1822);
    // size. 
    Send PSend1826 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1828 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1830 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1831 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1830);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // at:. 
    Send PSend1835 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend1836 = new_Send((Optr)VAR_aStream_0_1, SMB_write_, 1, (Optr)PSend1835);
    Array PThreadedCode1834 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1835, (Optr)&t_send1, (Optr)PSend1836, (Optr)&t_block_return);
    Block PBlock1833 = new_Block_with(empty_Array, empty_Array, PThreadedCode1834, 1, PSend1836);
    // ifTrue:. 
    Send PSend1832 = new_Send((Optr)PSend1831, SMB_ifTrue_, 1, (Optr)PBlock1833);
    Array PThreadedCode1829 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1830, (Optr)&t_send1, (Optr)PSend1831, (Optr)&t_send_ifTrue_, (Optr)PSend1832, (Optr)PBlock1833, (Optr)&t_method_return);
    Block PBlock1827 = new_Block_with(PArray1828, empty_Array, PThreadedCode1829, 1, PSend1832);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1837 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1826, (Optr)PBlock1827);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend1838 = new_Send((Optr)VAR_aStream_0_1, SMB_contents, 0);
    Array PThreadedCode1820 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign1821, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1824, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1825, (Optr)&t_send1, (Optr)PSend1823, (Optr)&t_send0, (Optr)PSend1822, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1826, (Optr)&t_push_closure, (Optr)PBlock1827, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1837, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send0, (Optr)PSend1838, (Optr)&t_method_return);
    Method PMethod1817 = new_Method_with(PArray1818, PArray1819, empty_Array, PThreadedCode1820, 3, PAssign1821, PSend1837, PSend1838);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod1817, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_writeStream() {
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1841 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1840 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1841, (Optr)&t_method_return);
    Method PMethod1839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1840, 1, PSend1841);
    
    MethodClosure MC_SMB_writeStream = new_MethodClosure((Method)PMethod1839, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_writeStream, MC_SMB_writeStream);
}


static void init_SMB_with_do_() {
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Variable VAR_twoArgBlock_0_1 = new_Variable_named(L"twoArgBlock", 0);
    Array PArray1843 = new_Array_with(2, (Optr)VAR_otherCollection_0_0, (Optr)VAR_twoArgBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1845 = new_Send((Optr)VAR_otherCollection_0_0, SMB_size, 0);
    // size. 
    Send PSend1846 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1847 = new_Send((Optr)PSend1845, SMB__equals_, 1, (Optr)PSend1846);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_1851 = new_String(L"otherCollection must be the same size");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1851_Const = new_Constant((Optr)string_1851);
    // error:. 
    Send PSend1852 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1851_Const);
    Array PThreadedCode1850 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1851, (Optr)&t_send1, (Optr)PSend1852, (Optr)&t_block_return);
    Block PBlock1849 = new_Block_with(empty_Array, empty_Array, PThreadedCode1850, 1, PSend1852);
    // ifFalse:. 
    Send PSend1848 = new_Send((Optr)PSend1847, SMB_ifFalse_, 1, (Optr)PBlock1849);
    // size. 
    Send PSend1853 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1855 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1857 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    // at:. 
    Send PSend1858 = new_Send((Optr)VAR_otherCollection_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend1859 = new_Send((Optr)VAR_twoArgBlock_0_1, SMB_value_value_, 2, (Optr)PSend1857, (Optr)PSend1858);
    Array PThreadedCode1856 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_twoArgBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1857, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1858, (Optr)&t_send2, (Optr)PSend1859, (Optr)&t_method_return);
    Block PBlock1854 = new_Block_with(PArray1855, empty_Array, PThreadedCode1856, 1, PSend1859);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1860 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1853, (Optr)PBlock1854);
    Array PThreadedCode1844 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1845, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1846, (Optr)&t_send1, (Optr)PSend1847, (Optr)&t_send_ifFalse_, (Optr)PSend1848, (Optr)PBlock1849, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1853, (Optr)&t_push_closure, (Optr)PBlock1854, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1860, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1842 = new_Method_with(PArray1843, empty_Array, empty_Array, PThreadedCode1844, 3, PSend1848, PSend1860, self);
    
    MethodClosure MC_SMB_with_do_ = new_MethodClosure((Method)PMethod1842, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_with_do_, MC_SMB_with_do_);
}

void init_Collections_Abstract_SequenceableCollection_layout() {
    layout_Collections_Abstract_SequenceableCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Abstract_SequenceableCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Abstract_SequenceableCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Abstract_SequenceableCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Abstract_SequenceableCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Abstract_SequenceableCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SequenceableCollection = new_Symbol(L"SequenceableCollection");
    Collections_Abstract_SequenceableCollection_Class = (Class)new_Class(Collections_Abstract_Collection_Class, layout_Collections_Abstract_SequenceableCollection_Class_class);
    Collections_Abstract_SequenceableCollection_Class->layout = empty_object_layout;
    Collections_Abstract_SequenceableCollection_Class->name = SMB_SequenceableCollection;
    
}

void init_Collections_Abstract_SequenceableCollection_methods() {
    init_SMB_first();
    init_SMB_first_();
    init_SMB_second();
    init_SMB_third();
    init_SMB__equals_();
    init_SMB_do_();
    init_SMB_from_to_do_();
    init_SMB_allButFirst_();
    init_SMB_copyAfter_();
    init_SMB_copyEmpty();
    init_SMB_copyFrom_();
    init_SMB_copyFrom_to_();
    init_SMB_copyReplaceAll_with_();
    init_SMB_copyReplaceAll_with_asTokens_();
    init_SMB_copyUpTo_();
    init_SMB_copyUpToLast_();
    init_SMB_copyWith_();
    init_SMB_beginsWith_();
    init_SMB_doWithIndex_();
    init_SMB_findFirst_();
    init_SMB_findLast_();
    init_SMB_hasEqualElements_();
    init_SMB_indexOf_();
    init_SMB_indexOf_ifAbsent_();
    init_SMB_indexOf_startingAt_ifAbsent_();
    init_SMB_indexOfSubCollection_startingAt_();
    init_SMB_indexOfSubCollection_startingAt_ifAbsent_();
    init_SMB_last();
    init_SMB_lastIndexOf_ifAbsent_();
    init_SMB_lastIndexOf_startingAt_ifAbsent_();
    init_SMB_middle();
    init_SMB_readStream();
    init_SMB_replaceFrom_to_with_startingAt_();
    init_SMB_reverse();
    init_SMB_reversed();
    init_SMB_reverseDo_();
    init_SMB_withIndexDo_();
    init_SMB_joinUsing_();
    init_SMB_split_();
    init_SMB_do_separatedBy_();
    init_SMB_collect_();
    init_SMB_select_();
    init_SMB_writeStream();
    init_SMB_with_do_();
    
}