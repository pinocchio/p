#include <lib/class/Collections/Abstract/SequenceableCollection.h>


Optr layout_Collections_Abstract_SequenceableCollection_Class_class;


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend1261 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode1260 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1261, (Optr)&t_method_return);
    Method PMethod1259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1260, 1, PSend1261);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod1259, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray1263 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend1265 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_n_0_0);
    Array PThreadedCode1264 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send2, (Optr)PSend1265, (Optr)&t_method_return);
    Method PMethod1262 = new_Method_with(PArray1263, empty_Array, empty_Array, PThreadedCode1264, 1, PSend1265);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod1262, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB_second() {
    Symbol SMB_second = new_Symbol(L"second");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend1268 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_2_Const);
    Array PThreadedCode1267 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1268, (Optr)&t_method_return);
    Method PMethod1266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1267, 1, PSend1268);
    
    MethodClosure MC_SMB_second = new_MethodClosure((Method)PMethod1266, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_second, MC_SMB_second);
}


static void init_SMB_third() {
    Symbol SMB_third = new_Symbol(L"third");
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend1271 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_3_Const);
    Array PThreadedCode1270 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend1271, (Optr)&t_method_return);
    Method PMethod1269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1270, 1, PSend1271);
    
    MethodClosure MC_SMB_third = new_MethodClosure((Method)PMethod1269, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_third, MC_SMB_third);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Array PArray1273 = new_Array_with(1, (Optr)VAR_otherCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1276 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend1278 = new_Send((Optr)self, SMB__pequals_, 1, (Optr)VAR_otherCollection_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1282 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode1281 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend1282, (Optr)&t_block_return);
    Block PBlock1280 = new_Block_with(empty_Array, empty_Array, PThreadedCode1281, 1, PSend1282);
    // ifTrue:. 
    Send PSend1279 = new_Send((Optr)PSend1278, SMB_ifTrue_, 1, (Optr)PBlock1280);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1283 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend1284 = new_Send((Optr)VAR_otherCollection_0_0, SMB_species, 0);
    // ==. 
    Send PSend1285 = new_Send((Optr)PSend1283, SMB__pequals_, 1, (Optr)PSend1284);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // escape:. 
    Send PSend1289 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1288 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1289, (Optr)&t_block_return);
    Block PBlock1287 = new_Block_with(empty_Array, empty_Array, PThreadedCode1288, 1, PSend1289);
    // ifFalse:. 
    Send PSend1286 = new_Send((Optr)PSend1285, SMB_ifFalse_, 1, (Optr)PBlock1287);
    Symbol SMB_hasEqualElements_ = new_Symbol(L"hasEqualElements:");
    // hasEqualElements:. 
    Send PSend1290 = new_Send((Optr)self, SMB_hasEqualElements_, 1, (Optr)VAR_otherCollection_0_0);
    Array PThreadedCode1277 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send1, (Optr)PSend1278, (Optr)&t_send_ifTrue_, (Optr)PSend1279, (Optr)PBlock1280, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1283, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1284, (Optr)&t_send1, (Optr)PSend1285, (Optr)&t_send_ifFalse_, (Optr)PSend1286, (Optr)PBlock1287, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send1, (Optr)PSend1290, (Optr)&t_method_return);
    Block PBlock1275 = new_Block_with(PArray1276, empty_Array, PThreadedCode1277, 3, PSend1279, PSend1286, PSend1290);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1291 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1275);
    Array PThreadedCode1274 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1275, (Optr)&t_send1, (Optr)PSend1291, (Optr)&t_method_return);
    Method PMethod1272 = new_Method_with(PArray1273, empty_Array, empty_Array, PThreadedCode1274, 1, PSend1291);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod1272, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1293 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1295 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1297 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1299 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1300 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1299);
    Array PThreadedCode1298 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1299, (Optr)&t_send1, (Optr)PSend1300, (Optr)&t_method_return);
    Block PBlock1296 = new_Block_with(PArray1297, empty_Array, PThreadedCode1298, 1, PSend1300);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1301 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1295, (Optr)PBlock1296);
    Array PThreadedCode1294 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1295, (Optr)&t_push_closure, (Optr)PBlock1296, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1301, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1292 = new_Method_with(PArray1293, empty_Array, empty_Array, PThreadedCode1294, 2, PSend1301, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod1292, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_from_to_do_() {
    Symbol SMB_from_to_do_ = new_Symbol(L"from:to:do:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray1303 = new_Array_with(3, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1306 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1308 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1309 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)PSend1308);
    Array PThreadedCode1307 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1308, (Optr)&t_send1, (Optr)PSend1309, (Optr)&t_method_return);
    Block PBlock1305 = new_Block_with(PArray1306, empty_Array, PThreadedCode1307, 1, PSend1309);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1310 = new_Send((Optr)VAR_start_0_0, SMB_to_do_, 2, (Optr)VAR_stop_0_1, (Optr)PBlock1305);
    Array PThreadedCode1304 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_push_closure, (Optr)PBlock1305, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1310, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1302 = new_Method_with(PArray1303, empty_Array, empty_Array, PThreadedCode1304, 2, PSend1310, self);
    
    MethodClosure MC_SMB_from_to_do_ = new_MethodClosure((Method)PMethod1302, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_from_to_do_, MC_SMB_from_to_do_);
}


static void init_SMB_allButFirst_() {
    Symbol SMB_allButFirst_ = new_Symbol(L"allButFirst:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray1312 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1314 = new_Send((Optr)VAR_n_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1315 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1316 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)PSend1314, (Optr)PSend1315);
    Array PThreadedCode1313 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1314, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1315, (Optr)&t_send2, (Optr)PSend1316, (Optr)&t_method_return);
    Method PMethod1311 = new_Method_with(PArray1312, empty_Array, empty_Array, PThreadedCode1313, 1, PSend1316);
    
    MethodClosure MC_SMB_allButFirst_ = new_MethodClosure((Method)PMethod1311, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_allButFirst_, MC_SMB_allButFirst_);
}


static void init_SMB_copyAfter_() {
    Symbol SMB_copyAfter_ = new_Symbol(L"copyAfter:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1318 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1321 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend1325 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1326 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1325);
    Array PThreadedCode1324 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1325, (Optr)&t_send1, (Optr)PSend1326, (Optr)&t_block_return);
    Block PBlock1323 = new_Block_with(empty_Array, empty_Array, PThreadedCode1324, 1, PSend1326);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1327 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1323);
    Symbol SMB_allButFirst_ = new_Symbol(L"allButFirst:");
    // allButFirst:. 
    Send PSend1328 = new_Send((Optr)self, SMB_allButFirst_, 1, (Optr)PSend1327);
    Array PThreadedCode1322 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1323, (Optr)&t_send2, (Optr)PSend1327, (Optr)&t_send1, (Optr)PSend1328, (Optr)&t_method_return);
    Block PBlock1320 = new_Block_with(PArray1321, empty_Array, PThreadedCode1322, 1, PSend1328);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1329 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1320);
    Array PThreadedCode1319 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1320, (Optr)&t_send1, (Optr)PSend1329, (Optr)&t_method_return);
    Method PMethod1317 = new_Method_with(PArray1318, empty_Array, empty_Array, PThreadedCode1319, 1, PSend1329);
    
    MethodClosure MC_SMB_copyAfter_ = new_MethodClosure((Method)PMethod1317, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyAfter_, MC_SMB_copyAfter_);
}


static void init_SMB_copyEmpty() {
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1332 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend1333 = new_Send((Optr)PSend1332, SMB_new_, 1, (Optr)int_0_Const);
    Array PThreadedCode1331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1332, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1333, (Optr)&t_method_return);
    Method PMethod1330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1331, 1, PSend1333);
    
    MethodClosure MC_SMB_copyEmpty = new_MethodClosure((Method)PMethod1330, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyEmpty, MC_SMB_copyEmpty);
}


static void init_SMB_copyFrom_() {
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Array PArray1335 = new_Array_with(1, (Optr)VAR_start_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1337 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1338 = new_Send((Optr)self, SMB_copyFrom_to_, 2, (Optr)VAR_start_0_0, (Optr)PSend1337);
    Array PThreadedCode1336 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1337, (Optr)&t_send2, (Optr)PSend1338, (Optr)&t_method_return);
    Method PMethod1334 = new_Method_with(PArray1335, empty_Array, empty_Array, PThreadedCode1336, 1, PSend1338);
    
    MethodClosure MC_SMB_copyFrom_ = new_MethodClosure((Method)PMethod1334, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyFrom_, MC_SMB_copyFrom_);
}


static void init_SMB_copyFrom_to_() {
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray1340 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR_newSize_0_2 = new_Variable_named(L"newSize", 0);
    Array PArray1341 = new_Array_with(1, (Optr)VAR_newSize_0_2);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1345 = new_Send((Optr)VAR_stop_0_1, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1344 = new_Send((Optr)PSend1345, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1343 = new_Assign((Optr)VAR_newSize_0_2, (Optr)PSend1344);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1346 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1347 = new_Send((Optr)PSend1346, SMB_new_, 1, (Optr)VAR_newSize_0_2);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend1348 = new_Send((Optr)PSend1347, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)VAR_newSize_0_2, (Optr)self, (Optr)VAR_start_0_0);
    Array PThreadedCode1342 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign1343, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend1345, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1344, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1346, (Optr)&t_push_variable, (Optr)VAR_newSize_0_2, (Optr)&t_send1, (Optr)PSend1347, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newSize_0_2, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send4, (Optr)PSend1348, (Optr)&t_method_return);
    Method PMethod1339 = new_Method_with(PArray1340, PArray1341, empty_Array, PThreadedCode1342, 2, PAssign1343, PSend1348);
    
    MethodClosure MC_SMB_copyFrom_to_ = new_MethodClosure((Method)PMethod1339, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyFrom_to_, MC_SMB_copyFrom_to_);
}


static void init_SMB_copyReplaceAll_with_() {
    Symbol SMB_copyReplaceAll_with_ = new_Symbol(L"copyReplaceAll:with:");
    Variable VAR_oldSubstring_0_0 = new_Variable_named(L"oldSubstring", 0);
    Variable VAR_newSubstring_0_1 = new_Variable_named(L"newSubstring", 0);
    Array PArray1350 = new_Array_with(2, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1);
    Symbol SMB_copyReplaceAll_with_asTokens_ = new_Symbol(L"copyReplaceAll:with:asTokens:");
    // copyReplaceAll:with:asTokens:. 
    Send PSend1352 = new_Send((Optr)self, SMB_copyReplaceAll_with_asTokens_, 3, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1, (Optr)false_Const);
    Array PThreadedCode1351 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_push_false, (Optr)&t_send3, (Optr)PSend1352, (Optr)&t_method_return);
    Method PMethod1349 = new_Method_with(PArray1350, empty_Array, empty_Array, PThreadedCode1351, 1, PSend1352);
    
    MethodClosure MC_SMB_copyReplaceAll_with_ = new_MethodClosure((Method)PMethod1349, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyReplaceAll_with_, MC_SMB_copyReplaceAll_with_);
}


static void init_SMB_copyReplaceAll_with_asTokens_() {
    Symbol SMB_copyReplaceAll_with_asTokens_ = new_Symbol(L"copyReplaceAll:with:asTokens:");
    Variable VAR_oldSubstring_0_0 = new_Variable_named(L"oldSubstring", 0);
    Variable VAR_newSubstring_0_1 = new_Variable_named(L"newSubstring", 0);
    Variable VAR_ifTokens_0_2 = new_Variable_named(L"ifTokens", 0);
    Array PArray1354 = new_Array_with(3, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_newSubstring_0_1, (Optr)VAR_ifTokens_0_2);
    Variable VAR_aString_0_3 = new_Variable_named(L"aString", 0);
    Variable VAR_startSearch_0_4 = new_Variable_named(L"startSearch", 0);
    Variable VAR_currentIndex_0_5 = new_Variable_named(L"currentIndex", 0);
    Variable VAR_endIndex_0_6 = new_Variable_named(L"endIndex", 0);
    Array PArray1355 = new_Array_with(4, (Optr)VAR_aString_0_3, (Optr)VAR_startSearch_0_4, (Optr)VAR_currentIndex_0_5, (Optr)VAR_endIndex_0_6);
    Symbol SMB_isString = new_Symbol(L"isString");
    // isString. 
    Send PSend1359 = new_Send((Optr)self, SMB_isString, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend1360 = new_Send((Optr)PSend1359, SMB_not, 0);
    Array PThreadedCode1358 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1359, (Optr)&t_send0, (Optr)PSend1360, (Optr)&t_block_return);
    Block PBlock1357 = new_Block_with(empty_Array, empty_Array, PThreadedCode1358, 1, PSend1360);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend1361 = new_Send((Optr)VAR_ifTokens_0_2, SMB_and_, 1, (Optr)PBlock1357);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend1365 = new_Send((Optr)self, SMB_isKindOf_, 1, (Optr)Text_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_1369 = new_String(L"Token replacement only valid for Strings");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1369_Const = new_Constant((Optr)string_1369);
    // error:. 
    Send PSend1370 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1369_Const);
    Array PThreadedCode1368 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1369, (Optr)&t_send1, (Optr)PSend1370, (Optr)&t_block_return);
    Block PBlock1367 = new_Block_with(empty_Array, empty_Array, PThreadedCode1368, 1, PSend1370);
    // ifFalse:. 
    Send PSend1366 = new_Send((Optr)PSend1365, SMB_ifFalse_, 1, (Optr)PBlock1367);
    Array PThreadedCode1364 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send1, (Optr)PSend1365, (Optr)&t_send_ifFalse_, (Optr)PSend1366, (Optr)PBlock1367, (Optr)&t_block_return);
    Block PBlock1363 = new_Block_with(empty_Array, empty_Array, PThreadedCode1364, 1, PSend1366);
    // ifTrue:. 
    Send PSend1362 = new_Send((Optr)PSend1361, SMB_ifTrue_, 1, (Optr)PBlock1363);
    Assign PAssign1371 = new_Assign((Optr)VAR_aString_0_3, (Optr)self);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1372 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)int_1_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    // indexOfSubCollection:startingAt:. 
    Send PSend1376 = new_Send((Optr)VAR_aString_0_3, SMB_indexOfSubCollection_startingAt_, 2, (Optr)VAR_oldSubstring_0_0, (Optr)VAR_startSearch_0_4);
    Assign PAssign1375 = new_Assign((Optr)VAR_currentIndex_0_5, (Optr)PSend1376);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend1377 = new_Send((Optr)PAssign1375, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode1374 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign1375, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_push_variable, (Optr)VAR_startSearch_0_4, (Optr)&t_send2, (Optr)PSend1376, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1377, (Optr)&t_block_return);
    Block PBlock1373 = new_Block_with(empty_Array, empty_Array, PThreadedCode1374, 1, PSend1377);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1383 = new_Send((Optr)VAR_oldSubstring_0_0, SMB_size, 0);
    // +. 
    Send PSend1382 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1383);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1381 = new_Send((Optr)PSend1382, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1380 = new_Assign((Optr)VAR_endIndex_0_6, (Optr)PSend1381);
    // not. 
    Send PSend1384 = new_Send((Optr)VAR_ifTokens_0_2, SMB_not, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1387 = new_Send((Optr)VAR_currentIndex_0_5, SMB__equals_, 1, (Optr)int_1_Const);
    // -. 
    Send PSend1390 = new_Send((Optr)VAR_currentIndex_0_5, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1391 = new_Send((Optr)VAR_aString_0_3, SMB_at_, 1, (Optr)PSend1390);
    Symbol SMB_isAlphaNumeric = new_Symbol(L"isAlphaNumeric");
    // isAlphaNumeric. 
    Send PSend1392 = new_Send((Optr)PSend1391, SMB_isAlphaNumeric, 0);
    // not. 
    Send PSend1393 = new_Send((Optr)PSend1392, SMB_not, 0);
    Array PThreadedCode1389 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1390, (Optr)&t_send1, (Optr)PSend1391, (Optr)&t_send0, (Optr)PSend1392, (Optr)&t_send0, (Optr)PSend1393, (Optr)&t_block_return);
    Block PBlock1388 = new_Block_with(empty_Array, empty_Array, PThreadedCode1389, 1, PSend1393);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1394 = new_Send((Optr)PSend1387, SMB_or_, 1, (Optr)PBlock1388);
    // size. 
    Send PSend1397 = new_Send((Optr)VAR_aString_0_3, SMB_size, 0);
    // =. 
    Send PSend1398 = new_Send((Optr)VAR_endIndex_0_6, SMB__equals_, 1, (Optr)PSend1397);
    // +. 
    Send PSend1401 = new_Send((Optr)VAR_endIndex_0_6, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend1402 = new_Send((Optr)VAR_aString_0_3, SMB_at_, 1, (Optr)PSend1401);
    // isAlphaNumeric. 
    Send PSend1403 = new_Send((Optr)PSend1402, SMB_isAlphaNumeric, 0);
    // not. 
    Send PSend1404 = new_Send((Optr)PSend1403, SMB_not, 0);
    Array PThreadedCode1400 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1401, (Optr)&t_send1, (Optr)PSend1402, (Optr)&t_send0, (Optr)PSend1403, (Optr)&t_send0, (Optr)PSend1404, (Optr)&t_block_return);
    Block PBlock1399 = new_Block_with(empty_Array, empty_Array, PThreadedCode1400, 1, PSend1404);
    // or:. 
    Send PSend1405 = new_Send((Optr)PSend1398, SMB_or_, 1, (Optr)PBlock1399);
    Array PThreadedCode1396 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_send0, (Optr)PSend1397, (Optr)&t_send1, (Optr)PSend1398, (Optr)&t_push_closure, (Optr)PBlock1399, (Optr)&t_send1, (Optr)PSend1405, (Optr)&t_block_return);
    Block PBlock1395 = new_Block_with(empty_Array, empty_Array, PThreadedCode1396, 1, PSend1405);
    // and:. 
    Send PSend1406 = new_Send((Optr)PSend1394, SMB_and_, 1, (Optr)PBlock1395);
    Array PThreadedCode1386 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1387, (Optr)&t_push_closure, (Optr)PBlock1388, (Optr)&t_send1, (Optr)PSend1394, (Optr)&t_push_closure, (Optr)PBlock1395, (Optr)&t_send1, (Optr)PSend1406, (Optr)&t_block_return);
    Block PBlock1385 = new_Block_with(empty_Array, empty_Array, PThreadedCode1386, 1, PSend1406);
    // or:. 
    Send PSend1407 = new_Send((Optr)PSend1384, SMB_or_, 1, (Optr)PBlock1385);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_copyReplaceFrom_to_with_ = new_Symbol(L"copyReplaceFrom:to:with:");
    // copyReplaceFrom:to:with:. 
    Send PSend1412 = new_Send((Optr)VAR_aString_0_3, SMB_copyReplaceFrom_to_with_, 3, (Optr)VAR_currentIndex_0_5, (Optr)VAR_endIndex_0_6, (Optr)VAR_newSubstring_0_1);
    Assign PAssign1411 = new_Assign((Optr)VAR_aString_0_3, (Optr)PSend1412);
    // size. 
    Send PSend1415 = new_Send((Optr)VAR_newSubstring_0_1, SMB_size, 0);
    // +. 
    Send PSend1414 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1415);
    Assign PAssign1413 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1414);
    Array PThreadedCode1410 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign1411, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_endIndex_0_6, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send3, (Optr)PSend1412, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1413, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send0, (Optr)PSend1415, (Optr)&t_send1, (Optr)PSend1414, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1409 = new_Block_with(empty_Array, empty_Array, PThreadedCode1410, 2, PAssign1411, PAssign1413);
    // +. 
    Send PSend1422 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1421 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1422);
    Array PThreadedCode1420 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign1421, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1422, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1419 = new_Block_with(empty_Array, empty_Array, PThreadedCode1420, 1, PAssign1421);
    // size. 
    Send PSend1427 = new_Send((Optr)VAR_newSubstring_0_1, SMB_size, 0);
    // +. 
    Send PSend1426 = new_Send((Optr)VAR_currentIndex_0_5, SMB__plus_, 1, (Optr)PSend1427);
    Assign PAssign1425 = new_Assign((Optr)VAR_startSearch_0_4, (Optr)PSend1426);
    Array PThreadedCode1424 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1425, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_newSubstring_0_1, (Optr)&t_send0, (Optr)PSend1427, (Optr)&t_send1, (Optr)PSend1426, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1423 = new_Block_with(empty_Array, empty_Array, PThreadedCode1424, 1, PAssign1425);
    // ifTrue:ifFalse:. 
    Send PSend1418 = new_Send((Optr)VAR_ifTokens_0_2, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1419, (Optr)PBlock1423);
    Array PThreadedCode1417 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1418, (Optr)PBlock1419, (Optr)PBlock1423, (Optr)&t_block_return);
    Block PBlock1416 = new_Block_with(empty_Array, empty_Array, PThreadedCode1417, 1, PSend1418);
    // ifTrue:ifFalse:. 
    Send PSend1408 = new_Send((Optr)PSend1407, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock1409, (Optr)PBlock1416);
    Array PThreadedCode1379 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign1380, (Optr)&t_push_variable, (Optr)VAR_currentIndex_0_5, (Optr)&t_push_variable, (Optr)VAR_oldSubstring_0_0, (Optr)&t_send0, (Optr)PSend1383, (Optr)&t_send1, (Optr)PSend1382, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1381, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_send0, (Optr)PSend1384, (Optr)&t_push_closure, (Optr)PBlock1385, (Optr)&t_send1, (Optr)PSend1407, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend1408, (Optr)PBlock1409, (Optr)PBlock1416, (Optr)&t_block_return);
    Block PBlock1378 = new_Block_with(empty_Array, empty_Array, PThreadedCode1379, 2, PAssign1380, PSend1408);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1428 = new_Send((Optr)PBlock1373, SMB_whileTrue_, 1, (Optr)PBlock1378);
    Array PThreadedCode1356 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_variable, (Optr)VAR_ifTokens_0_2, (Optr)&t_push_closure, (Optr)PBlock1357, (Optr)&t_send1, (Optr)PSend1361, (Optr)&t_send_ifTrue_, (Optr)PSend1362, (Optr)PBlock1363, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1371, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1372, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1373, (Optr)&t_push_closure, (Optr)PBlock1378, (Optr)&t_send1, (Optr)PSend1428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aString_0_3, (Optr)&t_method_return);
    Method PMethod1353 = new_Method_with(PArray1354, PArray1355, empty_Array, PThreadedCode1356, 5, PSend1362, PAssign1371, PAssign1372, PSend1428, VAR_aString_0_3);
    
    MethodClosure MC_SMB_copyReplaceAll_with_asTokens_ = new_MethodClosure((Method)PMethod1353, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyReplaceAll_with_asTokens_, MC_SMB_copyReplaceAll_with_asTokens_);
}


static void init_SMB_copyUpTo_() {
    Symbol SMB_copyUpTo_ = new_Symbol(L"copyUpTo:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1430 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1437 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1438 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1437);
    Array PThreadedCode1436 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1437, (Optr)&t_send1, (Optr)PSend1438, (Optr)&t_block_return);
    Block PBlock1435 = new_Block_with(empty_Array, empty_Array, PThreadedCode1436, 1, PSend1438);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1439 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1435);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1440 = new_Send((Optr)PSend1439, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_first_ = new_Symbol(L"first:");
    // first:. 
    Send PSend1441 = new_Send((Optr)self, SMB_first_, 1, (Optr)PSend1440);
    Array PThreadedCode1434 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1435, (Optr)&t_send2, (Optr)PSend1439, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1440, (Optr)&t_send1, (Optr)PSend1441, (Optr)&t_method_return);
    Block PBlock1432 = new_Block_with(PArray1433, empty_Array, PThreadedCode1434, 1, PSend1441);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1442 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1432);
    Array PThreadedCode1431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1432, (Optr)&t_send1, (Optr)PSend1442, (Optr)&t_method_return);
    Method PMethod1429 = new_Method_with(PArray1430, empty_Array, empty_Array, PThreadedCode1431, 1, PSend1442);
    
    MethodClosure MC_SMB_copyUpTo_ = new_MethodClosure((Method)PMethod1429, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyUpTo_, MC_SMB_copyUpTo_);
}


static void init_SMB_copyUpToLast_() {
    Symbol SMB_copyUpToLast_ = new_Symbol(L"copyUpToLast:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1444 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1447 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_copy = new_Symbol(L"copy");
    // copy. 
    Send PSend1451 = new_Send((Optr)self, SMB_copy, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1452 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1451);
    Array PThreadedCode1450 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1451, (Optr)&t_send1, (Optr)PSend1452, (Optr)&t_block_return);
    Block PBlock1449 = new_Block_with(empty_Array, empty_Array, PThreadedCode1450, 1, PSend1452);
    Symbol SMB_lastIndexOf_ifAbsent_ = new_Symbol(L"lastIndexOf:ifAbsent:");
    // lastIndexOf:ifAbsent:. 
    Send PSend1453 = new_Send((Optr)self, SMB_lastIndexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1449);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1454 = new_Send((Optr)PSend1453, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_first_ = new_Symbol(L"first:");
    // first:. 
    Send PSend1455 = new_Send((Optr)self, SMB_first_, 1, (Optr)PSend1454);
    Array PThreadedCode1448 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1449, (Optr)&t_send2, (Optr)PSend1453, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1454, (Optr)&t_send1, (Optr)PSend1455, (Optr)&t_method_return);
    Block PBlock1446 = new_Block_with(PArray1447, empty_Array, PThreadedCode1448, 1, PSend1455);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1456 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1446);
    Array PThreadedCode1445 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1446, (Optr)&t_send1, (Optr)PSend1456, (Optr)&t_method_return);
    Method PMethod1443 = new_Method_with(PArray1444, empty_Array, empty_Array, PThreadedCode1445, 1, PSend1456);
    
    MethodClosure MC_SMB_copyUpToLast_ = new_MethodClosure((Method)PMethod1443, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyUpToLast_, MC_SMB_copyUpToLast_);
}


static void init_SMB_copyWith_() {
    Symbol SMB_copyWith_ = new_Symbol(L"copyWith:");
    Variable VAR_newElement_0_0 = new_Variable_named(L"newElement", 0);
    Array PArray1458 = new_Array_with(1, (Optr)VAR_newElement_0_0);
    Variable VAR_newIC_0_1 = new_Variable_named(L"newIC", 0);
    Array PArray1459 = new_Array_with(1, (Optr)VAR_newIC_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1463 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1465 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1464 = new_Send((Optr)PSend1465, SMB__plus_, 1, (Optr)int_1_Const);
    // new:. 
    Send PSend1462 = new_Send((Optr)PSend1463, SMB_new_, 1, (Optr)PSend1464);
    Assign PAssign1461 = new_Assign((Optr)VAR_newIC_0_1, (Optr)PSend1462);
    // size. 
    Send PSend1466 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    // replaceFrom:to:with:startingAt:. 
    Send PSend1467 = new_Send((Optr)VAR_newIC_0_1, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend1466, (Optr)self, (Optr)int_1_Const);
    // size. 
    Send PSend1468 = new_Send((Optr)VAR_newIC_0_1, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1469 = new_Send((Optr)VAR_newIC_0_1, SMB_at_put_, 2, (Optr)PSend1468, (Optr)VAR_newElement_0_0);
    Array PThreadedCode1460 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push1, (Optr)PAssign1461, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1463, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1465, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1464, (Optr)&t_send1, (Optr)PSend1462, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1466, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend1467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_send0, (Optr)PSend1468, (Optr)&t_push_variable, (Optr)VAR_newElement_0_0, (Optr)&t_send2, (Optr)PSend1469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newIC_0_1, (Optr)&t_method_return);
    Method PMethod1457 = new_Method_with(PArray1458, PArray1459, empty_Array, PThreadedCode1460, 4, PAssign1461, PSend1467, PSend1469, VAR_newIC_0_1);
    
    MethodClosure MC_SMB_copyWith_ = new_MethodClosure((Method)PMethod1457, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_copyWith_, MC_SMB_copyWith_);
}


static void init_SMB_beginsWith_() {
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Variable VAR_aSequenceableCollection_0_0 = new_Variable_named(L"aSequenceableCollection", 0);
    Array PArray1471 = new_Array_with(1, (Optr)VAR_aSequenceableCollection_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1474 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1476 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_isEmpty, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1479 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend1480 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend1481 = new_Send((Optr)PSend1479, SMB__lt_, 1, (Optr)PSend1480);
    Array PThreadedCode1478 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1479, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_send0, (Optr)PSend1480, (Optr)&t_send1, (Optr)PSend1481, (Optr)&t_block_return);
    Block PBlock1477 = new_Block_with(empty_Array, empty_Array, PThreadedCode1478, 1, PSend1481);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend1482 = new_Send((Optr)PSend1476, SMB_or_, 1, (Optr)PBlock1477);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1486 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1485 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1486, (Optr)&t_block_return);
    Block PBlock1484 = new_Block_with(empty_Array, empty_Array, PThreadedCode1485, 1, PSend1486);
    // ifTrue:. 
    Send PSend1483 = new_Send((Optr)PSend1482, SMB_ifTrue_, 1, (Optr)PBlock1484);
    Variable VAR_each_2_0 = new_Variable_named(L"each", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray1488 = new_Array_with(2, (Optr)VAR_each_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1490 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_1);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    // ~=. 
    Send PSend1491 = new_Send((Optr)PSend1490, SMB__notEquals_, 1, (Optr)VAR_each_2_0);
    // escape:. 
    Send PSend1495 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1494 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1495, (Optr)&t_block_return);
    Block PBlock1493 = new_Block_with(empty_Array, empty_Array, PThreadedCode1494, 1, PSend1495);
    // ifTrue:. 
    Send PSend1492 = new_Send((Optr)PSend1491, SMB_ifTrue_, 1, (Optr)PBlock1493);
    Array PThreadedCode1489 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend1490, (Optr)&t_push_variable, (Optr)VAR_each_2_0, (Optr)&t_send1, (Optr)PSend1491, (Optr)&t_send_ifTrue_, (Optr)PSend1492, (Optr)PBlock1493, (Optr)&t_method_return);
    Block PBlock1487 = new_Block_with(PArray1488, empty_Array, PThreadedCode1489, 1, PSend1492);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend1496 = new_Send((Optr)VAR_aSequenceableCollection_0_0, SMB_withIndexDo_, 1, (Optr)PBlock1487);
    Array PThreadedCode1475 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_send0, (Optr)PSend1476, (Optr)&t_push_closure, (Optr)PBlock1477, (Optr)&t_send1, (Optr)PSend1482, (Optr)&t_send_ifTrue_, (Optr)PSend1483, (Optr)PBlock1484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSequenceableCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock1487, (Optr)&t_send1, (Optr)PSend1496, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1473 = new_Block_with(PArray1474, empty_Array, PThreadedCode1475, 3, PSend1483, PSend1496, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1497 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1473);
    Array PThreadedCode1472 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1473, (Optr)&t_send1, (Optr)PSend1497, (Optr)&t_method_return);
    Method PMethod1470 = new_Method_with(PArray1471, empty_Array, empty_Array, PThreadedCode1472, 1, PSend1497);
    
    MethodClosure MC_SMB_beginsWith_ = new_MethodClosure((Method)PMethod1470, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_beginsWith_, MC_SMB_beginsWith_);
}


static void init_SMB_doWithIndex_() {
    Symbol SMB_doWithIndex_ = new_Symbol(L"doWithIndex:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray1499 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend1501 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)VAR_elementAndIndexBlock_0_0);
    Array PThreadedCode1500 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_send1, (Optr)PSend1501, (Optr)&t_method_return);
    Method PMethod1498 = new_Method_with(PArray1499, empty_Array, empty_Array, PThreadedCode1500, 1, PSend1501);
    
    MethodClosure MC_SMB_doWithIndex_ = new_MethodClosure((Method)PMethod1498, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_doWithIndex_, MC_SMB_doWithIndex_);
}


static void init_SMB_findFirst_() {
    Symbol SMB_findFirst_ = new_Symbol(L"findFirst:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1503 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray1504 = new_Array_with(1, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1507 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign1509 = new_Assign((Optr)VAR_index_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1513 = new_Send((Optr)VAR_index_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1512 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1513);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1514 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1515 = new_Send((Optr)PAssign1512, SMB__lt__equals_, 1, (Optr)PSend1514);
    Array PThreadedCode1511 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign1512, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1513, (Optr)&t_assign, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1514, (Optr)&t_send1, (Optr)PSend1515, (Optr)&t_block_return);
    Block PBlock1510 = new_Block_with(empty_Array, empty_Array, PThreadedCode1511, 1, PSend1515);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1518 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1519 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1518);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1523 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_0_1);
    Array PThreadedCode1522 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1523, (Optr)&t_block_return);
    Block PBlock1521 = new_Block_with(empty_Array, empty_Array, PThreadedCode1522, 1, PSend1523);
    // ifTrue:. 
    Send PSend1520 = new_Send((Optr)PSend1519, SMB_ifTrue_, 1, (Optr)PBlock1521);
    Array PThreadedCode1517 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1518, (Optr)&t_send1, (Optr)PSend1519, (Optr)&t_send_ifTrue_, (Optr)PSend1520, (Optr)PBlock1521, (Optr)&t_block_return);
    Block PBlock1516 = new_Block_with(empty_Array, empty_Array, PThreadedCode1517, 1, PSend1520);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1524 = new_Send((Optr)PBlock1510, SMB_whileTrue_, 1, (Optr)PBlock1516);
    Array PThreadedCode1508 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign1509, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1510, (Optr)&t_push_closure, (Optr)PBlock1516, (Optr)&t_send1, (Optr)PSend1524, (Optr)&t_zap, (Optr)&t_method_return_0);
    Block PBlock1506 = new_Block_with(PArray1507, empty_Array, PThreadedCode1508, 3, PAssign1509, PSend1524, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1525 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1506);
    Array PThreadedCode1505 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1506, (Optr)&t_send1, (Optr)PSend1525, (Optr)&t_method_return);
    Method PMethod1502 = new_Method_with(PArray1503, PArray1504, empty_Array, PThreadedCode1505, 1, PSend1525);
    
    MethodClosure MC_SMB_findFirst_ = new_MethodClosure((Method)PMethod1502, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_findFirst_, MC_SMB_findFirst_);
}


static void init_SMB_findLast_() {
    Symbol SMB_findLast_ = new_Symbol(L"findLast:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1527 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray1528 = new_Array_with(1, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1531 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1535 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1534 = new_Send((Optr)PSend1535, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1533 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1534);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1539 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1538 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend1539);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend1540 = new_Send((Optr)PAssign1538, SMB__gt__equals_, 1, (Optr)int_1_Const);
    Array PThreadedCode1537 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1538, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1539, (Optr)&t_assign, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1540, (Optr)&t_block_return);
    Block PBlock1536 = new_Block_with(empty_Array, empty_Array, PThreadedCode1537, 1, PSend1540);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1543 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1544 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1543);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1548 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_0_1);
    Array PThreadedCode1547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1548, (Optr)&t_block_return);
    Block PBlock1546 = new_Block_with(empty_Array, empty_Array, PThreadedCode1547, 1, PSend1548);
    // ifTrue:. 
    Send PSend1545 = new_Send((Optr)PSend1544, SMB_ifTrue_, 1, (Optr)PBlock1546);
    Array PThreadedCode1542 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend1543, (Optr)&t_send1, (Optr)PSend1544, (Optr)&t_send_ifTrue_, (Optr)PSend1545, (Optr)PBlock1546, (Optr)&t_block_return);
    Block PBlock1541 = new_Block_with(empty_Array, empty_Array, PThreadedCode1542, 1, PSend1545);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1549 = new_Send((Optr)PBlock1536, SMB_whileTrue_, 1, (Optr)PBlock1541);
    Array PThreadedCode1532 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign1533, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1535, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1534, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1536, (Optr)&t_push_closure, (Optr)PBlock1541, (Optr)&t_send1, (Optr)PSend1549, (Optr)&t_zap, (Optr)&t_method_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1530 = new_Block_with(PArray1531, empty_Array, PThreadedCode1532, 3, PAssign1533, PSend1549, int_0_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1550 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1530);
    Array PThreadedCode1529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1530, (Optr)&t_send1, (Optr)PSend1550, (Optr)&t_method_return);
    Method PMethod1526 = new_Method_with(PArray1527, PArray1528, empty_Array, PThreadedCode1529, 1, PSend1550);
    
    MethodClosure MC_SMB_findLast_ = new_MethodClosure((Method)PMethod1526, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_findLast_, MC_SMB_findLast_);
}


static void init_SMB_hasEqualElements_() {
    Symbol SMB_hasEqualElements_ = new_Symbol(L"hasEqualElements:");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Array PArray1552 = new_Array_with(1, (Optr)VAR_otherCollection_0_0);
    Variable VAR_size_0_1 = new_Variable_named(L"size", 0);
    Array PArray1553 = new_Array_with(1, (Optr)VAR_size_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1556 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend1558 = new_Send((Optr)VAR_otherCollection_0_0, SMB_isKindOf_, 1, (Optr)SequenceableCollection_classReference);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1562 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1561 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1562, (Optr)&t_block_return);
    Block PBlock1560 = new_Block_with(empty_Array, empty_Array, PThreadedCode1561, 1, PSend1562);
    // ifFalse:. 
    Send PSend1559 = new_Send((Optr)PSend1558, SMB_ifFalse_, 1, (Optr)PBlock1560);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1564 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign1563 = new_Assign((Optr)VAR_size_0_1, (Optr)PSend1564);
    // size. 
    Send PSend1565 = new_Send((Optr)VAR_otherCollection_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1566 = new_Send((Optr)PAssign1563, SMB__equals_, 1, (Optr)PSend1565);
    // escape:. 
    Send PSend1570 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1569 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1570, (Optr)&t_block_return);
    Block PBlock1568 = new_Block_with(empty_Array, empty_Array, PThreadedCode1569, 1, PSend1570);
    // ifFalse:. 
    Send PSend1567 = new_Send((Optr)PSend1566, SMB_ifFalse_, 1, (Optr)PBlock1568);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1572 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1574 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    // at:. 
    Send PSend1575 = new_Send((Optr)VAR_otherCollection_0_0, SMB_at_, 1, (Optr)VAR_index_2_0);
    // =. 
    Send PSend1576 = new_Send((Optr)PSend1574, SMB__equals_, 1, (Optr)PSend1575);
    // escape:. 
    Send PSend1580 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode1579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend1580, (Optr)&t_block_return);
    Block PBlock1578 = new_Block_with(empty_Array, empty_Array, PThreadedCode1579, 1, PSend1580);
    // ifFalse:. 
    Send PSend1577 = new_Send((Optr)PSend1576, SMB_ifFalse_, 1, (Optr)PBlock1578);
    Array PThreadedCode1573 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1574, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1575, (Optr)&t_send1, (Optr)PSend1576, (Optr)&t_send_ifFalse_, (Optr)PSend1577, (Optr)PBlock1578, (Optr)&t_method_return);
    Block PBlock1571 = new_Block_with(PArray1572, empty_Array, PThreadedCode1573, 1, PSend1577);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1581 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_1, (Optr)PBlock1571);
    Array PThreadedCode1557 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_class_reference, (Optr)SequenceableCollection_classReference, (Optr)&t_send1, (Optr)PSend1558, (Optr)&t_send_ifFalse_, (Optr)PSend1559, (Optr)PBlock1560, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1563, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1564, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1565, (Optr)&t_send1, (Optr)PSend1566, (Optr)&t_send_ifFalse_, (Optr)PSend1567, (Optr)PBlock1568, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_1, (Optr)&t_push_closure, (Optr)PBlock1571, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1581, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock1555 = new_Block_with(PArray1556, empty_Array, PThreadedCode1557, 4, PSend1559, PSend1567, PSend1581, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1582 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1555);
    Array PThreadedCode1554 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1555, (Optr)&t_send1, (Optr)PSend1582, (Optr)&t_method_return);
    Method PMethod1551 = new_Method_with(PArray1552, PArray1553, empty_Array, PThreadedCode1554, 1, PSend1582);
    
    MethodClosure MC_SMB_hasEqualElements_ = new_MethodClosure((Method)PMethod1551, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_hasEqualElements_, MC_SMB_hasEqualElements_);
}


static void init_SMB_indexOf_() {
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Array PArray1584 = new_Array_with(1, (Optr)VAR_anElement_0_0);
    Array PThreadedCode1587 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1586 = new_Block_with(empty_Array, empty_Array, PThreadedCode1587, 1, int_0_Const);
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    // indexOf:ifAbsent:. 
    Send PSend1588 = new_Send((Optr)self, SMB_indexOf_ifAbsent_, 2, (Optr)VAR_anElement_0_0, (Optr)PBlock1586);
    Array PThreadedCode1585 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_closure, (Optr)PBlock1586, (Optr)&t_send2, (Optr)PSend1588, (Optr)&t_method_return);
    Method PMethod1583 = new_Method_with(PArray1584, empty_Array, empty_Array, PThreadedCode1585, 1, PSend1588);
    
    MethodClosure MC_SMB_indexOf_ = new_MethodClosure((Method)PMethod1583, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_, MC_SMB_indexOf_);
}


static void init_SMB_indexOf_ifAbsent_() {
    Symbol SMB_indexOf_ifAbsent_ = new_Symbol(L"indexOf:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1590 = new_Array_with(2, (Optr)VAR_anElement_0_0, (Optr)VAR_exceptionBlock_0_1);
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // indexOf:startingAt:ifAbsent:. 
    Send PSend1592 = new_Send((Optr)self, SMB_indexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anElement_0_0, (Optr)int_1_Const, (Optr)VAR_exceptionBlock_0_1);
    Array PThreadedCode1591 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send3, (Optr)PSend1592, (Optr)&t_method_return);
    Method PMethod1589 = new_Method_with(PArray1590, empty_Array, empty_Array, PThreadedCode1591, 1, PSend1592);
    
    MethodClosure MC_SMB_indexOf_ifAbsent_ = new_MethodClosure((Method)PMethod1589, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_ifAbsent_, MC_SMB_indexOf_ifAbsent_);
}


static void init_SMB_indexOf_startingAt_ifAbsent_() {
    Symbol SMB_indexOf_startingAt_ifAbsent_ = new_Symbol(L"indexOf:startingAt:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1594 = new_Array_with(3, (Optr)VAR_anElement_0_0, (Optr)VAR_start_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1597 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1599 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1601 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1603 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1604 = new_Send((Optr)PSend1603, SMB__equals_, 1, (Optr)VAR_anElement_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1608 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode1607 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1608, (Optr)&t_block_return);
    Block PBlock1606 = new_Block_with(empty_Array, empty_Array, PThreadedCode1607, 1, PSend1608);
    // ifTrue:. 
    Send PSend1605 = new_Send((Optr)PSend1604, SMB_ifTrue_, 1, (Optr)PBlock1606);
    Array PThreadedCode1602 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1603, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send1, (Optr)PSend1604, (Optr)&t_send_ifTrue_, (Optr)PSend1605, (Optr)PBlock1606, (Optr)&t_method_return);
    Block PBlock1600 = new_Block_with(PArray1601, empty_Array, PThreadedCode1602, 1, PSend1605);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1609 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend1599, (Optr)PBlock1600);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1610 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1598 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1599, (Optr)&t_push_closure, (Optr)PBlock1600, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1609, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1610, (Optr)&t_method_return);
    Block PBlock1596 = new_Block_with(PArray1597, empty_Array, PThreadedCode1598, 2, PSend1609, PSend1610);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1611 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1596);
    Array PThreadedCode1595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1596, (Optr)&t_send1, (Optr)PSend1611, (Optr)&t_method_return);
    Method PMethod1593 = new_Method_with(PArray1594, empty_Array, empty_Array, PThreadedCode1595, 1, PSend1611);
    
    MethodClosure MC_SMB_indexOf_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1593, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOf_startingAt_ifAbsent_, MC_SMB_indexOf_startingAt_ifAbsent_);
}


static void init_SMB_indexOfSubCollection_startingAt_() {
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    Variable VAR_aSubCollection_0_0 = new_Variable_named(L"aSubCollection", 0);
    Variable VAR_anIndex_0_1 = new_Variable_named(L"anIndex", 0);
    Array PArray1613 = new_Array_with(2, (Optr)VAR_aSubCollection_0_0, (Optr)VAR_anIndex_0_1);
    Array PThreadedCode1616 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Block PBlock1615 = new_Block_with(empty_Array, empty_Array, PThreadedCode1616, 1, int_0_Const);
    Symbol SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_Symbol(L"indexOfSubCollection:startingAt:ifAbsent:");
    // indexOfSubCollection:startingAt:ifAbsent:. 
    Send PSend1617 = new_Send((Optr)self, SMB_indexOfSubCollection_startingAt_ifAbsent_, 3, (Optr)VAR_aSubCollection_0_0, (Optr)VAR_anIndex_0_1, (Optr)PBlock1615);
    Array PThreadedCode1614 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSubCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_anIndex_0_1, (Optr)&t_push_closure, (Optr)PBlock1615, (Optr)&t_send3, (Optr)PSend1617, (Optr)&t_method_return);
    Method PMethod1612 = new_Method_with(PArray1613, empty_Array, empty_Array, PThreadedCode1614, 1, PSend1617);
    
    MethodClosure MC_SMB_indexOfSubCollection_startingAt_ = new_MethodClosure((Method)PMethod1612, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOfSubCollection_startingAt_, MC_SMB_indexOfSubCollection_startingAt_);
}


static void init_SMB_indexOfSubCollection_startingAt_ifAbsent_() {
    Symbol SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_Symbol(L"indexOfSubCollection:startingAt:ifAbsent:");
    Variable VAR_sub_0_0 = new_Variable_named(L"sub", 0);
    Variable VAR_start_0_1 = new_Variable_named(L"start", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1619 = new_Array_with(3, (Optr)VAR_sub_0_0, (Optr)VAR_start_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR_first_0_3 = new_Variable_named(L"first", 0);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Array PArray1620 = new_Array_with(2, (Optr)VAR_first_0_3, (Optr)VAR_index_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1623 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend1625 = new_Send((Optr)VAR_sub_0_0, SMB_isEmpty, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1629 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1630 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend1629);
    Array PThreadedCode1628 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1629, (Optr)&t_send1, (Optr)PSend1630, (Optr)&t_block_return);
    Block PBlock1627 = new_Block_with(empty_Array, empty_Array, PThreadedCode1628, 1, PSend1630);
    // ifTrue:. 
    Send PSend1626 = new_Send((Optr)PSend1625, SMB_ifTrue_, 1, (Optr)PBlock1627);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend1632 = new_Send((Optr)VAR_sub_0_0, SMB_first, 0);
    Assign PAssign1631 = new_Assign((Optr)VAR_first_0_3, (Optr)PSend1632);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1633 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend1634 = new_Send((Optr)VAR_sub_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1635 = new_Send((Optr)PSend1633, SMB__minus_, 1, (Optr)PSend1634);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1636 = new_Send((Optr)PSend1635, SMB__plus_, 1, (Optr)int_1_Const);
    Variable VAR_startIndex_2_0 = new_Variable_named(L"startIndex", 2);
    Array PArray1638 = new_Array_with(1, (Optr)VAR_startIndex_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1640 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_startIndex_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1641 = new_Send((Optr)PSend1640, SMB__equals_, 1, (Optr)VAR_first_0_3);
    Assign PAssign1645 = new_Assign((Optr)VAR_index_0_4, (Optr)int_1_Const);
    // +. 
    Send PSend1648 = new_Send((Optr)VAR_startIndex_2_0, SMB__plus_, 1, (Optr)VAR_index_0_4);
    // -. 
    Send PSend1649 = new_Send((Optr)PSend1648, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend1650 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1649);
    // at:. 
    Send PSend1651 = new_Send((Optr)VAR_sub_0_0, SMB_at_, 1, (Optr)VAR_index_0_4);
    // =. 
    Send PSend1652 = new_Send((Optr)PSend1650, SMB__equals_, 1, (Optr)PSend1651);
    Array PThreadedCode1647 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1648, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1649, (Optr)&t_send1, (Optr)PSend1650, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1651, (Optr)&t_send1, (Optr)PSend1652, (Optr)&t_block_return);
    Block PBlock1646 = new_Block_with(empty_Array, empty_Array, PThreadedCode1647, 1, PSend1652);
    // size. 
    Send PSend1655 = new_Send((Optr)VAR_sub_0_0, SMB_size, 0);
    // =. 
    Send PSend1656 = new_Send((Optr)VAR_index_0_4, SMB__equals_, 1, (Optr)PSend1655);
    // escape:. 
    Send PSend1660 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_startIndex_2_0);
    Array PThreadedCode1659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_send1, (Optr)PSend1660, (Optr)&t_block_return);
    Block PBlock1658 = new_Block_with(empty_Array, empty_Array, PThreadedCode1659, 1, PSend1660);
    // ifTrue:. 
    Send PSend1657 = new_Send((Optr)PSend1656, SMB_ifTrue_, 1, (Optr)PBlock1658);
    // +. 
    Send PSend1662 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1661 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1662);
    Array PThreadedCode1654 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1655, (Optr)&t_send1, (Optr)PSend1656, (Optr)&t_send_ifTrue_, (Optr)PSend1657, (Optr)PBlock1658, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1661, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1662, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1653 = new_Block_with(empty_Array, empty_Array, PThreadedCode1654, 2, PSend1657, PAssign1661);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1663 = new_Send((Optr)PBlock1646, SMB_whileTrue_, 1, (Optr)PBlock1653);
    Array PThreadedCode1644 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign1645, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1646, (Optr)&t_push_closure, (Optr)PBlock1653, (Optr)&t_send1, (Optr)PSend1663, (Optr)&t_block_return);
    Block PBlock1643 = new_Block_with(empty_Array, empty_Array, PThreadedCode1644, 2, PAssign1645, PSend1663);
    // ifTrue:. 
    Send PSend1642 = new_Send((Optr)PSend1641, SMB_ifTrue_, 1, (Optr)PBlock1643);
    Array PThreadedCode1639 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_startIndex_2_0, (Optr)&t_send1, (Optr)PSend1640, (Optr)&t_push_variable, (Optr)VAR_first_0_3, (Optr)&t_send1, (Optr)PSend1641, (Optr)&t_send_ifTrue_, (Optr)PSend1642, (Optr)PBlock1643, (Optr)&t_method_return);
    Block PBlock1637 = new_Block_with(PArray1638, empty_Array, PThreadedCode1639, 1, PSend1642);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1664 = new_Send((Optr)VAR_start_0_1, SMB_to_do_, 2, (Optr)PSend1636, (Optr)PBlock1637);
    // value. 
    Send PSend1665 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1624 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1625, (Optr)&t_send_ifTrue_, (Optr)PSend1626, (Optr)PBlock1627, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1631, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1632, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_start_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1633, (Optr)&t_push_variable, (Optr)VAR_sub_0_0, (Optr)&t_send0, (Optr)PSend1634, (Optr)&t_send1, (Optr)PSend1635, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1636, (Optr)&t_push_closure, (Optr)PBlock1637, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1664, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1665, (Optr)&t_method_return);
    Block PBlock1622 = new_Block_with(PArray1623, empty_Array, PThreadedCode1624, 4, PSend1626, PAssign1631, PSend1664, PSend1665);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1666 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1622);
    Array PThreadedCode1621 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1622, (Optr)&t_send1, (Optr)PSend1666, (Optr)&t_method_return);
    Method PMethod1618 = new_Method_with(PArray1619, PArray1620, empty_Array, PThreadedCode1621, 1, PSend1666);
    
    MethodClosure MC_SMB_indexOfSubCollection_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1618, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_indexOfSubCollection_startingAt_ifAbsent_, MC_SMB_indexOfSubCollection_startingAt_ifAbsent_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1669 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1670 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1669);
    Array PThreadedCode1668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1669, (Optr)&t_send1, (Optr)PSend1670, (Optr)&t_method_return);
    Method PMethod1667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1668, 1, PSend1670);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod1667, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_lastIndexOf_ifAbsent_() {
    Symbol SMB_lastIndexOf_ifAbsent_ = new_Symbol(L"lastIndexOf:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_exceptionBlock_0_1 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1672 = new_Array_with(2, (Optr)VAR_anElement_0_0, (Optr)VAR_exceptionBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1674 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_lastIndexOf_startingAt_ifAbsent_ = new_Symbol(L"lastIndexOf:startingAt:ifAbsent:");
    // lastIndexOf:startingAt:ifAbsent:. 
    Send PSend1675 = new_Send((Optr)self, SMB_lastIndexOf_startingAt_ifAbsent_, 3, (Optr)VAR_anElement_0_0, (Optr)PSend1674, (Optr)VAR_exceptionBlock_0_1);
    Array PThreadedCode1673 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1674, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_1, (Optr)&t_send3, (Optr)PSend1675, (Optr)&t_method_return);
    Method PMethod1671 = new_Method_with(PArray1672, empty_Array, empty_Array, PThreadedCode1673, 1, PSend1675);
    
    MethodClosure MC_SMB_lastIndexOf_ifAbsent_ = new_MethodClosure((Method)PMethod1671, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_lastIndexOf_ifAbsent_, MC_SMB_lastIndexOf_ifAbsent_);
}


static void init_SMB_lastIndexOf_startingAt_ifAbsent_() {
    Symbol SMB_lastIndexOf_startingAt_ifAbsent_ = new_Symbol(L"lastIndexOf:startingAt:ifAbsent:");
    Variable VAR_anElement_0_0 = new_Variable_named(L"anElement", 0);
    Variable VAR_lastIndex_0_1 = new_Variable_named(L"lastIndex", 0);
    Variable VAR_exceptionBlock_0_2 = new_Variable_named(L"exceptionBlock", 0);
    Array PArray1677 = new_Array_with(3, (Optr)VAR_anElement_0_0, (Optr)VAR_lastIndex_0_1, (Optr)VAR_exceptionBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray1680 = new_Array_with(1, (Optr)VAR__return__1_0);
    SmallInt int_n1 = new_SmallInt(-1);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray1683 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1685 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_2_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1686 = new_Send((Optr)PSend1685, SMB__equals_, 1, (Optr)VAR_anElement_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend1690 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_index_2_0);
    Array PThreadedCode1689 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1690, (Optr)&t_block_return);
    Block PBlock1688 = new_Block_with(empty_Array, empty_Array, PThreadedCode1689, 1, PSend1690);
    // ifTrue:. 
    Send PSend1687 = new_Send((Optr)PSend1686, SMB_ifTrue_, 1, (Optr)PBlock1688);
    Array PThreadedCode1684 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_send1, (Optr)PSend1685, (Optr)&t_push_variable, (Optr)VAR_anElement_0_0, (Optr)&t_send1, (Optr)PSend1686, (Optr)&t_send_ifTrue_, (Optr)PSend1687, (Optr)PBlock1688, (Optr)&t_method_return);
    Block PBlock1682 = new_Block_with(PArray1683, empty_Array, PThreadedCode1684, 1, PSend1687);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // to:by:do:. 
    Send PSend1691 = new_Send((Optr)VAR_lastIndex_0_1, SMB_to_by_do_, 3, (Optr)int_1_Const, (Optr)int_n1_Const, (Optr)PBlock1682);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1692 = new_Send((Optr)VAR_exceptionBlock_0_2, SMB_value, 0);
    Array PThreadedCode1681 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_lastIndex_0_1, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_push_closure, (Optr)PBlock1682, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend1691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_exceptionBlock_0_2, (Optr)&t_send0, (Optr)PSend1692, (Optr)&t_method_return);
    Block PBlock1679 = new_Block_with(PArray1680, empty_Array, PThreadedCode1681, 2, PSend1691, PSend1692);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1693 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock1679);
    Array PThreadedCode1678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock1679, (Optr)&t_send1, (Optr)PSend1693, (Optr)&t_method_return);
    Method PMethod1676 = new_Method_with(PArray1677, empty_Array, empty_Array, PThreadedCode1678, 1, PSend1693);
    
    MethodClosure MC_SMB_lastIndexOf_startingAt_ifAbsent_ = new_MethodClosure((Method)PMethod1676, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_lastIndexOf_startingAt_ifAbsent_, MC_SMB_lastIndexOf_startingAt_ifAbsent_);
}


static void init_SMB_middle() {
    Symbol SMB_middle = new_Symbol(L"middle");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1696 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend1697 = new_Send((Optr)PSend1696, SMB__quotient_, 1, (Optr)int_2_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1698 = new_Send((Optr)PSend1697, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1699 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend1698);
    Array PThreadedCode1695 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1696, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend1697, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1698, (Optr)&t_send1, (Optr)PSend1699, (Optr)&t_method_return);
    Method PMethod1694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1695, 1, PSend1699);
    
    MethodClosure MC_SMB_middle = new_MethodClosure((Method)PMethod1694, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_middle, MC_SMB_middle);
}


static void init_SMB_readStream() {
    Symbol SMB_readStream = new_Symbol(L"readStream");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1702 = new_Send((Optr)ReadStream_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)ReadStream_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1702, (Optr)&t_method_return);
    Method PMethod1700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1701, 1, PSend1702);
    
    MethodClosure MC_SMB_readStream = new_MethodClosure((Method)PMethod1700, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_readStream, MC_SMB_readStream);
}


static void init_SMB_replaceFrom_to_with_startingAt_() {
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Variable VAR_replacement_0_2 = new_Variable_named(L"replacement", 0);
    Variable VAR_repStart_0_3 = new_Variable_named(L"repStart", 0);
    Array PArray1704 = new_Array_with(4, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1, (Optr)VAR_replacement_0_2, (Optr)VAR_repStart_0_3);
    Variable VAR_index_0_4 = new_Variable_named(L"index", 0);
    Variable VAR_repOff_0_5 = new_Variable_named(L"repOff", 0);
    Array PArray1705 = new_Array_with(2, (Optr)VAR_index_0_4, (Optr)VAR_repOff_0_5);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1708 = new_Send((Optr)VAR_repStart_0_3, SMB__minus_, 1, (Optr)VAR_start_0_0);
    Assign PAssign1707 = new_Assign((Optr)VAR_repOff_0_5, (Optr)PSend1708);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend1710 = new_Send((Optr)VAR_start_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1709 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1710);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend1714 = new_Send((Optr)VAR_index_0_4, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1713 = new_Assign((Optr)VAR_index_0_4, (Optr)PSend1714);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend1715 = new_Send((Optr)PAssign1713, SMB__lt__equals_, 1, (Optr)VAR_stop_0_1);
    Array PThreadedCode1712 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign1713, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1714, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend1715, (Optr)&t_block_return);
    Block PBlock1711 = new_Block_with(empty_Array, empty_Array, PThreadedCode1712, 1, PSend1715);
    // +. 
    Send PSend1718 = new_Send((Optr)VAR_repOff_0_5, SMB__plus_, 1, (Optr)VAR_index_0_4);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1719 = new_Send((Optr)VAR_replacement_0_2, SMB_at_, 1, (Optr)PSend1718);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1720 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_0_4, (Optr)PSend1719);
    Array PThreadedCode1717 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_push_variable, (Optr)VAR_replacement_0_2, (Optr)&t_push_variable, (Optr)VAR_repOff_0_5, (Optr)&t_push_variable, (Optr)VAR_index_0_4, (Optr)&t_send1, (Optr)PSend1718, (Optr)&t_send1, (Optr)PSend1719, (Optr)&t_send2, (Optr)PSend1720, (Optr)&t_block_return);
    Block PBlock1716 = new_Block_with(empty_Array, empty_Array, PThreadedCode1717, 1, PSend1720);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1721 = new_Send((Optr)PBlock1711, SMB_whileTrue_, 1, (Optr)PBlock1716);
    Array PThreadedCode1706 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign1707, (Optr)&t_push_variable, (Optr)VAR_repStart_0_3, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_send1, (Optr)PSend1708, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1709, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1710, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1711, (Optr)&t_push_closure, (Optr)PBlock1716, (Optr)&t_send1, (Optr)PSend1721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1703 = new_Method_with(PArray1704, PArray1705, empty_Array, PThreadedCode1706, 4, PAssign1707, PAssign1709, PSend1721, self);
    
    MethodClosure MC_SMB_replaceFrom_to_with_startingAt_ = new_MethodClosure((Method)PMethod1703, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_replaceFrom_to_with_startingAt_, MC_SMB_replaceFrom_to_with_startingAt_);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    Symbol SMB_reversed = new_Symbol(L"reversed");
    // reversed. 
    Send PSend1724 = new_Send((Optr)self, SMB_reversed, 0);
    Array PThreadedCode1723 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1724, (Optr)&t_method_return);
    Method PMethod1722 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1723, 1, PSend1724);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod1722, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_src_0_2 = new_Variable_named(L"src", 0);
    Array PArray1726 = new_Array_with(3, (Optr)VAR_n_0_0, (Optr)VAR_result_0_1, (Optr)VAR_src_0_2);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1729 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign1728 = new_Assign((Optr)VAR_n_0_0, (Optr)PSend1729);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1732 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend1731 = new_Send((Optr)PSend1732, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign1730 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend1731);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend1734 = new_Send((Optr)VAR_n_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign1733 = new_Assign((Optr)VAR_src_0_2, (Optr)PSend1734);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray1736 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1739 = new_Send((Optr)VAR_src_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign1738 = new_Assign((Optr)VAR_src_0_2, (Optr)PSend1739);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1740 = new_Send((Optr)self, SMB_at_, 1, (Optr)PAssign1738);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1741 = new_Send((Optr)VAR_result_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend1740);
    Array PThreadedCode1737 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)PAssign1738, (Optr)&t_push_variable, (Optr)VAR_src_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1739, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend1740, (Optr)&t_send2, (Optr)PSend1741, (Optr)&t_method_return);
    Block PBlock1735 = new_Block_with(PArray1736, empty_Array, PThreadedCode1737, 1, PSend1741);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1742 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_n_0_0, (Optr)PBlock1735);
    Array PThreadedCode1727 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign1728, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1732, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend1731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1733, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1734, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_push_closure, (Optr)PBlock1735, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1742, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod1725 = new_Method_with(empty_Array, PArray1726, empty_Array, PThreadedCode1727, 5, PAssign1728, PAssign1730, PAssign1733, PSend1742, VAR_result_0_1);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod1725, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1744 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1746 = new_Send((Optr)self, SMB_size, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1748 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1750 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1751 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1750);
    Array PThreadedCode1749 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1750, (Optr)&t_send1, (Optr)PSend1751, (Optr)&t_method_return);
    Block PBlock1747 = new_Block_with(PArray1748, empty_Array, PThreadedCode1749, 1, PSend1751);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // to:by:do:. 
    Send PSend1752 = new_Send((Optr)PSend1746, SMB_to_by_do_, 3, (Optr)int_1_Const, (Optr)int_n1_Const, (Optr)PBlock1747);
    Array PThreadedCode1745 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1746, (Optr)&t_push_1, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_push_closure, (Optr)PBlock1747, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend1752, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1743 = new_Method_with(PArray1744, empty_Array, empty_Array, PThreadedCode1745, 2, PSend1752, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod1743, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray1754 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1756 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1758 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1760 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend1761 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend1760, (Optr)VAR_index_1_0);
    Array PThreadedCode1759 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1760, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend1761, (Optr)&t_method_return);
    Block PBlock1757 = new_Block_with(PArray1758, empty_Array, PThreadedCode1759, 1, PSend1761);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1762 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1756, (Optr)PBlock1757);
    Array PThreadedCode1755 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1756, (Optr)&t_push_closure, (Optr)PBlock1757, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1753 = new_Method_with(PArray1754, empty_Array, empty_Array, PThreadedCode1755, 2, PSend1762, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod1753, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_joinUsing_() {
    Symbol SMB_joinUsing_ = new_Symbol(L"joinUsing:");
    Variable VAR_joiner_0_0 = new_Variable_named(L"joiner", 0);
    Array PArray1764 = new_Array_with(1, (Optr)VAR_joiner_0_0);
    Symbol SMB_join_ = new_Symbol(L"join:");
    // join:. 
    Send PSend1766 = new_Send((Optr)VAR_joiner_0_0, SMB_join_, 1, (Optr)self);
    Array PThreadedCode1765 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_joiner_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1766, (Optr)&t_method_return);
    Method PMethod1763 = new_Method_with(PArray1764, empty_Array, empty_Array, PThreadedCode1765, 1, PSend1766);
    
    MethodClosure MC_SMB_joinUsing_ = new_MethodClosure((Method)PMethod1763, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_joinUsing_, MC_SMB_joinUsing_);
}


static void init_SMB_split_() {
    Symbol SMB_split_ = new_Symbol(L"split:");
    Variable VAR_aSequencableCollection_0_0 = new_Variable_named(L"aSequencableCollection", 0);
    Array PArray1768 = new_Array_with(1, (Optr)VAR_aSequencableCollection_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Variable VAR_position_0_2 = new_Variable_named(L"position", 0);
    Variable VAR_oldPosition_0_3 = new_Variable_named(L"oldPosition", 0);
    Array PArray1769 = new_Array_with(3, (Optr)VAR_result_0_1, (Optr)VAR_position_0_2, (Optr)VAR_oldPosition_0_3);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend1772 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign1771 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend1772);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign1773 = new_Assign((Optr)VAR_position_0_2, (Optr)int_1_Const);
    Assign PAssign1774 = new_Assign((Optr)VAR_oldPosition_0_3, (Optr)VAR_position_0_2);
    Symbol SMB_indexOfSubCollection_startingAt_ = new_Symbol(L"indexOfSubCollection:startingAt:");
    // indexOfSubCollection:startingAt:. 
    Send PSend1776 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_indexOfSubCollection_startingAt_, 2, (Optr)self, (Optr)VAR_position_0_2);
    Assign PAssign1775 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1776);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend1779 = new_Send((Optr)VAR_position_0_2, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode1778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend1779, (Optr)&t_block_return);
    Block PBlock1777 = new_Block_with(empty_Array, empty_Array, PThreadedCode1778, 1, PSend1779);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend1782 = new_Send((Optr)VAR_position_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    // copyFrom:to:. 
    Send PSend1783 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_copyFrom_to_, 2, (Optr)VAR_oldPosition_0_3, (Optr)PSend1782);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend1784 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend1783);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1787 = new_Send((Optr)self, SMB_size, 0);
    // +. 
    Send PSend1786 = new_Send((Optr)VAR_position_0_2, SMB__plus_, 1, (Optr)PSend1787);
    Assign PAssign1785 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1786);
    Assign PAssign1788 = new_Assign((Optr)VAR_oldPosition_0_3, (Optr)VAR_position_0_2);
    // indexOfSubCollection:startingAt:. 
    Send PSend1790 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_indexOfSubCollection_startingAt_, 2, (Optr)self, (Optr)VAR_position_0_2);
    Assign PAssign1789 = new_Assign((Optr)VAR_position_0_2, (Optr)PSend1790);
    Array PThreadedCode1781 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_oldPosition_0_3, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1782, (Optr)&t_send2, (Optr)PSend1783, (Optr)&t_send1, (Optr)PSend1784, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1785, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1787, (Optr)&t_send1, (Optr)PSend1786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1788, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1789, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_send2, (Optr)PSend1790, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock1780 = new_Block_with(empty_Array, empty_Array, PThreadedCode1781, 4, PSend1784, PAssign1785, PAssign1788, PAssign1789);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend1791 = new_Send((Optr)PBlock1777, SMB_whileTrue_, 1, (Optr)PBlock1780);
    // size. 
    Send PSend1792 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_size, 0);
    // copyFrom:to:. 
    Send PSend1793 = new_Send((Optr)VAR_aSequencableCollection_0_0, SMB_copyFrom_to_, 2, (Optr)VAR_oldPosition_0_3, (Optr)PSend1792);
    // add:. 
    Send PSend1794 = new_Send((Optr)VAR_result_0_1, SMB_add_, 1, (Optr)PSend1793);
    Array PThreadedCode1770 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push1, (Optr)PAssign1771, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend1772, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1773, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1774, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign1775, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_position_0_2, (Optr)&t_send2, (Optr)PSend1776, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock1777, (Optr)&t_push_closure, (Optr)PBlock1780, (Optr)&t_send1, (Optr)PSend1791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_oldPosition_0_3, (Optr)&t_push_variable, (Optr)VAR_aSequencableCollection_0_0, (Optr)&t_send0, (Optr)PSend1792, (Optr)&t_send2, (Optr)PSend1793, (Optr)&t_send1, (Optr)PSend1794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_method_return);
    Method PMethod1767 = new_Method_with(PArray1768, PArray1769, empty_Array, PThreadedCode1770, 7, PAssign1771, PAssign1773, PAssign1774, PAssign1775, PSend1791, PSend1794, VAR_result_0_1);
    
    MethodClosure MC_SMB_split_ = new_MethodClosure((Method)PMethod1767, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_split_, MC_SMB_split_);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray1796 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1798 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1800 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend1802 = new_Send((Optr)VAR_index_1_0, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend1806 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode1805 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend1806, (Optr)&t_block_return);
    Block PBlock1804 = new_Block_with(empty_Array, empty_Array, PThreadedCode1805, 1, PSend1806);
    // ifFalse:. 
    Send PSend1803 = new_Send((Optr)PSend1802, SMB_ifFalse_, 1, (Optr)PBlock1804);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1807 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1808 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend1807);
    Array PThreadedCode1801 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend1802, (Optr)&t_send_ifFalse_, (Optr)PSend1803, (Optr)PBlock1804, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1807, (Optr)&t_send1, (Optr)PSend1808, (Optr)&t_method_return);
    Block PBlock1799 = new_Block_with(PArray1800, empty_Array, PThreadedCode1801, 2, PSend1803, PSend1808);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1809 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1798, (Optr)PBlock1799);
    Array PThreadedCode1797 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1798, (Optr)&t_push_closure, (Optr)PBlock1799, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1809, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1795 = new_Method_with(PArray1796, empty_Array, empty_Array, PThreadedCode1797, 2, PSend1809, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod1795, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1811 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray1812 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1816 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1817 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend1815 = new_Send((Optr)PSend1816, SMB_new_, 1, (Optr)PSend1817);
    Assign PAssign1814 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend1815);
    // size. 
    Send PSend1818 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1820 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1822 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1823 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1822);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend1824 = new_Send((Optr)VAR_newCollection_0_1, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend1823);
    Array PThreadedCode1821 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1822, (Optr)&t_send1, (Optr)PSend1823, (Optr)&t_send2, (Optr)PSend1824, (Optr)&t_method_return);
    Block PBlock1819 = new_Block_with(PArray1820, empty_Array, PThreadedCode1821, 1, PSend1824);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1825 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1818, (Optr)PBlock1819);
    Array PThreadedCode1813 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign1814, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1816, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1817, (Optr)&t_send1, (Optr)PSend1815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1818, (Optr)&t_push_closure, (Optr)PBlock1819, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod1810 = new_Method_with(PArray1811, PArray1812, empty_Array, PThreadedCode1813, 3, PAssign1814, PSend1825, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod1810, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray1827 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_aStream_0_1 = new_Variable_named(L"aStream", 0);
    Array PArray1828 = new_Array_with(1, (Optr)VAR_aStream_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend1833 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1834 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend1832 = new_Send((Optr)PSend1833, SMB_new_, 1, (Optr)PSend1834);
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    // writeStream. 
    Send PSend1831 = new_Send((Optr)PSend1832, SMB_writeStream, 0);
    Assign PAssign1830 = new_Assign((Optr)VAR_aStream_0_1, (Optr)PSend1831);
    // size. 
    Send PSend1835 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1837 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1839 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend1840 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend1839);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // at:. 
    Send PSend1844 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend1845 = new_Send((Optr)VAR_aStream_0_1, SMB_write_, 1, (Optr)PSend1844);
    Array PThreadedCode1843 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1844, (Optr)&t_send1, (Optr)PSend1845, (Optr)&t_block_return);
    Block PBlock1842 = new_Block_with(empty_Array, empty_Array, PThreadedCode1843, 1, PSend1845);
    // ifTrue:. 
    Send PSend1841 = new_Send((Optr)PSend1840, SMB_ifTrue_, 1, (Optr)PBlock1842);
    Array PThreadedCode1838 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1839, (Optr)&t_send1, (Optr)PSend1840, (Optr)&t_send_ifTrue_, (Optr)PSend1841, (Optr)PBlock1842, (Optr)&t_method_return);
    Block PBlock1836 = new_Block_with(PArray1837, empty_Array, PThreadedCode1838, 1, PSend1841);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1846 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1835, (Optr)PBlock1836);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend1847 = new_Send((Optr)VAR_aStream_0_1, SMB_contents, 0);
    Array PThreadedCode1829 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push1, (Optr)PAssign1830, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1833, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1834, (Optr)&t_send1, (Optr)PSend1832, (Optr)&t_send0, (Optr)PSend1831, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1835, (Optr)&t_push_closure, (Optr)PBlock1836, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1846, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_1, (Optr)&t_send0, (Optr)PSend1847, (Optr)&t_method_return);
    Method PMethod1826 = new_Method_with(PArray1827, PArray1828, empty_Array, PThreadedCode1829, 3, PAssign1830, PSend1846, PSend1847);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod1826, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_writeStream() {
    Symbol SMB_writeStream = new_Symbol(L"writeStream");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend1850 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode1849 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend1850, (Optr)&t_method_return);
    Method PMethod1848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode1849, 1, PSend1850);
    
    MethodClosure MC_SMB_writeStream = new_MethodClosure((Method)PMethod1848, Collections_Abstract_SequenceableCollection_Class);
    store_method(Collections_Abstract_SequenceableCollection_Class, SMB_writeStream, MC_SMB_writeStream);
}


static void init_SMB_with_do_() {
    Symbol SMB_with_do_ = new_Symbol(L"with:do:");
    Variable VAR_otherCollection_0_0 = new_Variable_named(L"otherCollection", 0);
    Variable VAR_twoArgBlock_0_1 = new_Variable_named(L"twoArgBlock", 0);
    Array PArray1852 = new_Array_with(2, (Optr)VAR_otherCollection_0_0, (Optr)VAR_twoArgBlock_0_1);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend1854 = new_Send((Optr)VAR_otherCollection_0_0, SMB_size, 0);
    // size. 
    Send PSend1855 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend1856 = new_Send((Optr)PSend1854, SMB__equals_, 1, (Optr)PSend1855);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_1860 = new_String(L"otherCollection must be the same size");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_1860_Const = new_Constant((Optr)string_1860);
    // error:. 
    Send PSend1861 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_1860_Const);
    Array PThreadedCode1859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_1860, (Optr)&t_send1, (Optr)PSend1861, (Optr)&t_block_return);
    Block PBlock1858 = new_Block_with(empty_Array, empty_Array, PThreadedCode1859, 1, PSend1861);
    // ifFalse:. 
    Send PSend1857 = new_Send((Optr)PSend1856, SMB_ifFalse_, 1, (Optr)PBlock1858);
    // size. 
    Send PSend1862 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray1864 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend1866 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    // at:. 
    Send PSend1867 = new_Send((Optr)VAR_otherCollection_0_0, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend1868 = new_Send((Optr)VAR_twoArgBlock_0_1, SMB_value_value_, 2, (Optr)PSend1866, (Optr)PSend1867);
    Array PThreadedCode1865 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_twoArgBlock_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1866, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend1867, (Optr)&t_send2, (Optr)PSend1868, (Optr)&t_method_return);
    Block PBlock1863 = new_Block_with(PArray1864, empty_Array, PThreadedCode1865, 1, PSend1868);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend1869 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend1862, (Optr)PBlock1863);
    Array PThreadedCode1853 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR_otherCollection_0_0, (Optr)&t_send0, (Optr)PSend1854, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1855, (Optr)&t_send1, (Optr)PSend1856, (Optr)&t_send_ifFalse_, (Optr)PSend1857, (Optr)PBlock1858, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend1862, (Optr)&t_push_closure, (Optr)PBlock1863, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend1869, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod1851 = new_Method_with(PArray1852, empty_Array, empty_Array, PThreadedCode1853, 3, PSend1857, PSend1869, self);
    
    MethodClosure MC_SMB_with_do_ = new_MethodClosure((Method)PMethod1851, Collections_Abstract_SequenceableCollection_Class);
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