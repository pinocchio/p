#include <lib/class/PBenchmark/Collection/Dictionary/AbstractDictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock;
Optr layout_PBenchmark_Collection_Dictionary_AbstractDictionary;


static void init_SMB_benchIncludesKey() {
    Symbol SMB_benchIncludesKey = new_Symbol(L"benchIncludesKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7199 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7200 = new_Send((Optr)PSend7199, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7202 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7204 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7205 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7206 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7204, (Optr)PSend7205);
    Array PThreadedCode7203 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7204, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7205, (Optr)&t_send2, (Optr)PSend7206, (Optr)&t_method_return);
    Block PBlock7201 = new_Block_with(PArray7202, empty_Array, PThreadedCode7203, 1, PSend7206);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7207 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7200, (Optr)PBlock7201);
    Array PThreadedCode7198 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7199, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7200, (Optr)&t_push_closure, (Optr)PBlock7201, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7207, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7198, 2, PSend7207, self);
    
    MethodClosure MC_SMB_benchIncludesKey = new_MethodClosure((Method)PMethod7197, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKey, MC_SMB_benchIncludesKey);
}


static void init_SMB_benchAtPutExisting() {
    Symbol SMB_benchAtPutExisting = new_Symbol(L"benchAtPutExisting");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7210 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7212 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7214 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7215 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7216 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7214, (Optr)PSend7215);
    Array PThreadedCode7213 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7214, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7215, (Optr)&t_send2, (Optr)PSend7216, (Optr)&t_method_return);
    Block PBlock7211 = new_Block_with(PArray7212, empty_Array, PThreadedCode7213, 1, PSend7216);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7217 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7210, (Optr)PBlock7211);
    Array PThreadedCode7209 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7210, (Optr)&t_push_closure, (Optr)PBlock7211, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7217, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7208 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7209, 2, PSend7217, self);
    
    MethodClosure MC_SMB_benchAtPutExisting = new_MethodClosure((Method)PMethod7208, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutExisting, MC_SMB_benchAtPutExisting);
}


static void init_SMB_benchKeysAndValuesDo() {
    Symbol SMB_benchKeysAndValuesDo = new_Symbol(L"benchKeysAndValuesDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_k_1_0 = new_Variable_named(L"k", 1);
    Variable VAR_v_1_1 = new_Variable_named(L"v", 1);
    Array PArray7223 = new_Array_with(2, (Optr)VAR_k_1_0, (Optr)VAR_v_1_1);
    Array PThreadedCode7224 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7222 = new_Block_with(PArray7223, empty_Array, PThreadedCode7224, 0);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7225 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_keysAndValuesDo_, 1, (Optr)PBlock7222);
    Array PThreadedCode7221 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7222, (Optr)&t_send1, (Optr)PSend7225, (Optr)&t_block_return);
    Block PBlock7220 = new_Block_with(empty_Array, empty_Array, PThreadedCode7221, 1, PSend7225);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7226 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7220);
    Array PThreadedCode7219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7220, (Optr)&t_send1, (Optr)PSend7226, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7219, 2, PSend7226, self);
    
    MethodClosure MC_SMB_benchKeysAndValuesDo = new_MethodClosure((Method)PMethod7218, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchKeysAndValuesDo, MC_SMB_benchKeysAndValuesDo);
}


static void init_SMB_dictSize_() {
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7228 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7230 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7229 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7230, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7227 = new_Method_with(PArray7228, empty_Array, empty_Array, PThreadedCode7229, 2, PAssign7230, self);
    
    MethodClosure MC_SMB_dictSize_ = new_MethodClosure((Method)PMethod7227, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize_, MC_SMB_dictSize_);
}


static void init_SMB_benchAtIfAbsentPut() {
    Symbol SMB_benchAtIfAbsentPut = new_Symbol(L"benchAtIfAbsentPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7233 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7234 = new_Send((Optr)PSend7233, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7236 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7238 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7239 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7240 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7238, (Optr)PSend7239);
    Array PThreadedCode7237 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7238, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7239, (Optr)&t_send2, (Optr)PSend7240, (Optr)&t_method_return);
    Block PBlock7235 = new_Block_with(PArray7236, empty_Array, PThreadedCode7237, 1, PSend7240);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7241 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7234, (Optr)PBlock7235);
    Array PThreadedCode7232 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7233, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7234, (Optr)&t_push_closure, (Optr)PBlock7235, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7241, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7231 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7232, 2, PSend7241, self);
    
    MethodClosure MC_SMB_benchAtIfAbsentPut = new_MethodClosure((Method)PMethod7231, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtIfAbsentPut, MC_SMB_benchAtIfAbsentPut);
}


static void init_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7243 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7245 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7244 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7245, (Optr)&t_method_return);
    Method PMethod7242 = new_Method_with(PArray7243, empty_Array, empty_Array, PThreadedCode7244, 1, PSend7245);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7242, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7248 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)nil_Const);
    Array PThreadedCode7247 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7248, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7246 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7247, 2, PAssign7248, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7246, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7250 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7252 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7251 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7252, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7249 = new_Method_with(PArray7250, empty_Array, empty_Array, PThreadedCode7251, 2, PAssign7252, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7249, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_valueBlock_() {
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7254 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7256 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7255 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7256, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7253 = new_Method_with(PArray7254, empty_Array, empty_Array, PThreadedCode7255, 2, PAssign7256, self);
    
    MethodClosure MC_SMB_valueBlock_ = new_MethodClosure((Method)PMethod7253, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock_, MC_SMB_valueBlock_);
}


static void init_SMB_benchRemoveKey() {
    Symbol SMB_benchRemoveKey = new_Symbol(L"benchRemoveKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7259 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7261 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7263 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    // removeKey:. 
    Send PSend7264 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_removeKey_, 1, (Optr)PSend7263);
    Array PThreadedCode7262 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7263, (Optr)&t_send1, (Optr)PSend7264, (Optr)&t_method_return);
    Block PBlock7260 = new_Block_with(PArray7261, empty_Array, PThreadedCode7262, 1, PSend7264);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7265 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7259, (Optr)int_73_Const, (Optr)PBlock7260);
    Array PThreadedCode7258 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7259, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7260, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7265, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7258, 2, PSend7265, self);
    
    MethodClosure MC_SMB_benchRemoveKey = new_MethodClosure((Method)PMethod7257, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchRemoveKey, MC_SMB_benchRemoveKey);
}


static void init_SMB_dict() {
    Symbol SMB_dict = new_Symbol(L"dict");
    Array PThreadedCode7267 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_method_return);
    Method PMethod7266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7267, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict);
    
    MethodClosure MC_SMB_dict = new_MethodClosure((Method)PMethod7266, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict, MC_SMB_dict);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // dictSize:. 
    Send PSend7270 = new_Send((Optr)self, SMB_dictSize_, 1, (Optr)int_10000_Const);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7271 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7272 = new_Send((Optr)DummyDictionary_classReference, SMB_new_, 1, (Optr)PSend7271);
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    // dict:. 
    Send PSend7273 = new_Send((Optr)self, SMB_dict_, 1, (Optr)PSend7272);
    Array PThreadedCode7269 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7270, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DummyDictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7271, (Optr)&t_send1, (Optr)PSend7272, (Optr)&t_send1, (Optr)PSend7273, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7269, 3, PSend7270, PSend7273, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7268, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_dictSize() {
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    Array PThreadedCode7275 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)&t_method_return);
    Method PMethod7274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7275, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize);
    
    MethodClosure MC_SMB_dictSize = new_MethodClosure((Method)PMethod7274, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize, MC_SMB_dictSize);
}


static void init_SMB_valueBlock() {
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    Array PThreadedCode7277 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_method_return);
    Method PMethod7276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7277, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock);
    
    MethodClosure MC_SMB_valueBlock = new_MethodClosure((Method)PMethod7276, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock, MC_SMB_valueBlock);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7279 = new_Array_with(1, (Optr)VAR_int_0_0);
    // value:. 
    Send PSend7281 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7281, (Optr)&t_method_return);
    Method PMethod7278 = new_Method_with(PArray7279, empty_Array, empty_Array, PThreadedCode7280, 1, PSend7281);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7278, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_benchDo() {
    Symbol SMB_benchDo = new_Symbol(L"benchDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7287 = new_Array_with(1, (Optr)VAR_i_1_0);
    Array PThreadedCode7288 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7286 = new_Block_with(PArray7287, empty_Array, PThreadedCode7288, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7289 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_do_, 1, (Optr)PBlock7286);
    Array PThreadedCode7285 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7286, (Optr)&t_send1, (Optr)PSend7289, (Optr)&t_block_return);
    Block PBlock7284 = new_Block_with(empty_Array, empty_Array, PThreadedCode7285, 1, PSend7289);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7290 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7284);
    Array PThreadedCode7283 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7284, (Optr)&t_send1, (Optr)PSend7290, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7282 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7283, 2, PSend7290, self);
    
    MethodClosure MC_SMB_benchDo = new_MethodClosure((Method)PMethod7282, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchDo, MC_SMB_benchDo);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7293 = new_Super(SMB_initialize, 0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray7296 = new_Array_with(1, (Optr)VAR_key_1_0);
    Array PThreadedCode7297 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_method_return);
    Block PBlock7295 = new_Block_with(PArray7296, empty_Array, PThreadedCode7297, 1, VAR_key_1_0);
    Assign PAssign7294 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)PBlock7295);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray7300 = new_Array_with(1, (Optr)VAR_value_1_0);
    Array PThreadedCode7301 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_method_return);
    Block PBlock7299 = new_Block_with(PArray7300, empty_Array, PThreadedCode7301, 1, VAR_value_1_0);
    Assign PAssign7298 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)PBlock7299);
    Array PThreadedCode7292 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7293, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7294, (Optr)&t_push_closure, (Optr)PBlock7295, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7298, (Optr)&t_push_closure, (Optr)PBlock7299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7292, 4, PSuper7293, PAssign7294, PAssign7298, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7291, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_dict_() {
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7303 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7305 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7304 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7305, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7302 = new_Method_with(PArray7303, empty_Array, empty_Array, PThreadedCode7304, 2, PAssign7305, self);
    
    MethodClosure MC_SMB_dict_ = new_MethodClosure((Method)PMethod7302, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict_, MC_SMB_dict_);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7308 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7309 = new_Send((Optr)PSend7308, SMB__times_, 1, (Optr)int_2_Const);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7311 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7313 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7314 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7315 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7313, (Optr)PSend7314);
    Array PThreadedCode7312 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7313, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7314, (Optr)&t_send2, (Optr)PSend7315, (Optr)&t_method_return);
    Block PBlock7310 = new_Block_with(PArray7311, empty_Array, PThreadedCode7312, 1, PSend7315);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7316 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7309, (Optr)int_73_Const, (Optr)PBlock7310);
    Array PThreadedCode7307 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7308, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7309, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7310, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7316, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7307, 2, PSend7316, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7306, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchAtPutNew() {
    Symbol SMB_benchAtPutNew = new_Symbol(L"benchAtPutNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7319 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7320 = new_Send((Optr)self, SMB_dictSize, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7321 = new_Send((Optr)PSend7320, SMB__times_, 1, (Optr)int_5_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7323 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7325 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7326 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7327 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7325, (Optr)PSend7326);
    Array PThreadedCode7324 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7325, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7326, (Optr)&t_send2, (Optr)PSend7327, (Optr)&t_method_return);
    Block PBlock7322 = new_Block_with(PArray7323, empty_Array, PThreadedCode7324, 1, PSend7327);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7328 = new_Send((Optr)PSend7319, SMB_to_do_, 2, (Optr)PSend7321, (Optr)PBlock7322);
    Array PThreadedCode7318 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7319, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7320, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7321, (Optr)&t_push_closure, (Optr)PBlock7322, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7328, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7318, 2, PSend7328, self);
    
    MethodClosure MC_SMB_benchAtPutNew = new_MethodClosure((Method)PMethod7317, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutNew, MC_SMB_benchAtPutNew);
}


static void init_SMB_benchAtPut() {
    Symbol SMB_benchAtPut = new_Symbol(L"benchAtPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7331 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7332 = new_Send((Optr)PSend7331, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7334 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7336 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7337 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7338 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7336, (Optr)PSend7337);
    Array PThreadedCode7335 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7336, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7337, (Optr)&t_send2, (Optr)PSend7338, (Optr)&t_method_return);
    Block PBlock7333 = new_Block_with(PArray7334, empty_Array, PThreadedCode7335, 1, PSend7338);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7339 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7332, (Optr)PBlock7333);
    Array PThreadedCode7330 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7331, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7332, (Optr)&t_push_closure, (Optr)PBlock7333, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7330, 2, PSend7339, self);
    
    MethodClosure MC_SMB_benchAtPut = new_MethodClosure((Method)PMethod7329, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPut, MC_SMB_benchAtPut);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7341 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_method_return);
    Method PMethod7340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7341, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7340, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock, MC_SMB_keyBlock);
}


static void init_SMB_baseBenchmark() {
    Symbol SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Variable VAR_inst_0_0 = new_Variable_named(L"inst", 0);
    Array PArray7343 = new_Array_with(1, (Optr)VAR_inst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7346 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7348 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7349 = new_Send((Optr)PSend7348, SMB__pequals_, 1, (Optr)PBAbstractDictionary_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7353 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode7352 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend7353, (Optr)&t_block_return);
    Block PBlock7351 = new_Block_with(empty_Array, empty_Array, PThreadedCode7352, 1, PSend7353);
    // ifTrue:. 
    Send PSend7350 = new_Send((Optr)PSend7349, SMB_ifTrue_, 1, (Optr)PBlock7351);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7355 = new_Send((Optr)PBAbstractDictionary_classReference, SMB_new, 0);
    Assign PAssign7354 = new_Assign((Optr)VAR_inst_0_0, (Optr)PSend7355);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7356 = new_Send((Optr)self, SMB_keyBlock, 0);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7357 = new_Send((Optr)VAR_inst_0_0, SMB_keyBlock_, 1, (Optr)PSend7356);
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    // valueBlock. 
    Send PSend7358 = new_Send((Optr)self, SMB_valueBlock, 0);
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    // valueBlock:. 
    Send PSend7359 = new_Send((Optr)VAR_inst_0_0, SMB_valueBlock_, 1, (Optr)PSend7358);
    Array PThreadedCode7347 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7348, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send1, (Optr)PSend7349, (Optr)&t_send_ifTrue_, (Optr)PSend7350, (Optr)PBlock7351, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7354, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send0, (Optr)PSend7355, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7356, (Optr)&t_send1, (Optr)PSend7357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7358, (Optr)&t_send1, (Optr)PSend7359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_method_return);
    Block PBlock7345 = new_Block_with(PArray7346, empty_Array, PThreadedCode7347, 5, PSend7350, PAssign7354, PSend7357, PSend7359, VAR_inst_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7360 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7345);
    Array PThreadedCode7344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7345, (Optr)&t_send1, (Optr)PSend7360, (Optr)&t_method_return);
    Method PMethod7342 = new_Method_with(empty_Array, PArray7343, empty_Array, PThreadedCode7344, 1, PSend7360);
    
    MethodClosure MC_SMB_baseBenchmark = new_MethodClosure((Method)PMethod7342, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_baseBenchmark, MC_SMB_baseBenchmark);
}

void init_PBenchmark_Collection_Dictionary_PBAbstractDictionary_layout() {
    layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractDictionary = new_Symbol(L"AbstractDictionary");
    slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict = (Optr)new_Slot(2, L"dict");
    slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize = (Optr)new_Slot(3, L"dictSize");
    slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock = (Optr)new_Slot(4, L"keyBlock");
    slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock = (Optr)new_Slot(5, L"valueBlock");
    layout_PBenchmark_Collection_Dictionary_AbstractDictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[2] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict; // dict 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[3] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize; // dictSize 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[4] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock; // keyBlock 
    ((Array)layout_PBenchmark_Collection_Dictionary_AbstractDictionary)->values[5] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock; // valueBlock 
    PBenchmark_Collection_Dictionary_AbstractDictionary_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class);
    PBenchmark_Collection_Dictionary_AbstractDictionary_Class->layout = layout_PBenchmark_Collection_Dictionary_AbstractDictionary;
    PBenchmark_Collection_Dictionary_AbstractDictionary_Class->name = SMB_AbstractDictionary;
    
}

void init_PBenchmark_Collection_Dictionary_PBAbstractDictionary_methods() {
    init_SMB_benchIncludesKey();
    init_SMB_benchAtPutExisting();
    init_SMB_benchKeysAndValuesDo();
    init_SMB_dictSize_();
    init_SMB_benchAtIfAbsentPut();
    init_SMB_key_();
    init_SMB_tearDown();
    init_SMB_keyBlock_();
    init_SMB_valueBlock_();
    init_SMB_benchRemoveKey();
    init_SMB_dict();
    init_SMB_setUp();
    init_SMB_dictSize();
    init_SMB_valueBlock();
    init_SMB_value_();
    init_SMB_benchDo();
    init_SMB_initialize();
    init_SMB_dict_();
    init_SMB_benchIncludes();
    init_SMB_benchAtPutNew();
    init_SMB_benchAtPut();
    init_SMB_keyBlock();
    init_SMB_baseBenchmark();
    
}