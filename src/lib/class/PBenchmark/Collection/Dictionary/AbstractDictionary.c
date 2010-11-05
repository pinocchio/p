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
    Send PSend7154 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7155 = new_Send((Optr)PSend7154, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7157 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7159 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7160 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7161 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7159, (Optr)PSend7160);
    Array PThreadedCode7158 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7159, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7160, (Optr)&t_send2, (Optr)PSend7161, (Optr)&t_method_return);
    Block PBlock7156 = new_Block_with(PArray7157, empty_Array, PThreadedCode7158, 1, PSend7161);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7162 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7155, (Optr)PBlock7156);
    Array PThreadedCode7153 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7154, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7155, (Optr)&t_push_closure, (Optr)PBlock7156, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7153, 2, PSend7162, self);
    
    MethodClosure MC_SMB_benchIncludesKey = new_MethodClosure((Method)PMethod7152, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKey, MC_SMB_benchIncludesKey);
}


static void init_SMB_benchAtPutExisting() {
    Symbol SMB_benchAtPutExisting = new_Symbol(L"benchAtPutExisting");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7165 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7167 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7169 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7170 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7171 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7169, (Optr)PSend7170);
    Array PThreadedCode7168 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7169, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7170, (Optr)&t_send2, (Optr)PSend7171, (Optr)&t_method_return);
    Block PBlock7166 = new_Block_with(PArray7167, empty_Array, PThreadedCode7168, 1, PSend7171);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7172 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7165, (Optr)PBlock7166);
    Array PThreadedCode7164 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7165, (Optr)&t_push_closure, (Optr)PBlock7166, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7172, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7164, 2, PSend7172, self);
    
    MethodClosure MC_SMB_benchAtPutExisting = new_MethodClosure((Method)PMethod7163, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutExisting, MC_SMB_benchAtPutExisting);
}


static void init_SMB_benchKeysAndValuesDo() {
    Symbol SMB_benchKeysAndValuesDo = new_Symbol(L"benchKeysAndValuesDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_k_1_0 = new_Variable_named(L"k", 1);
    Variable VAR_v_1_1 = new_Variable_named(L"v", 1);
    Array PArray7178 = new_Array_with(2, (Optr)VAR_k_1_0, (Optr)VAR_v_1_1);
    Array PThreadedCode7179 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7177 = new_Block_with(PArray7178, empty_Array, PThreadedCode7179, 0);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7180 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_keysAndValuesDo_, 1, (Optr)PBlock7177);
    Array PThreadedCode7176 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7177, (Optr)&t_send1, (Optr)PSend7180, (Optr)&t_block_return);
    Block PBlock7175 = new_Block_with(empty_Array, empty_Array, PThreadedCode7176, 1, PSend7180);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7181 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7175);
    Array PThreadedCode7174 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7175, (Optr)&t_send1, (Optr)PSend7181, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7174, 2, PSend7181, self);
    
    MethodClosure MC_SMB_benchKeysAndValuesDo = new_MethodClosure((Method)PMethod7173, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchKeysAndValuesDo, MC_SMB_benchKeysAndValuesDo);
}


static void init_SMB_dictSize_() {
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7183 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7185 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7185, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7182 = new_Method_with(PArray7183, empty_Array, empty_Array, PThreadedCode7184, 2, PAssign7185, self);
    
    MethodClosure MC_SMB_dictSize_ = new_MethodClosure((Method)PMethod7182, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize_, MC_SMB_dictSize_);
}


static void init_SMB_benchAtIfAbsentPut() {
    Symbol SMB_benchAtIfAbsentPut = new_Symbol(L"benchAtIfAbsentPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7188 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7189 = new_Send((Optr)PSend7188, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7191 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7193 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7194 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7195 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7193, (Optr)PSend7194);
    Array PThreadedCode7192 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7193, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7194, (Optr)&t_send2, (Optr)PSend7195, (Optr)&t_method_return);
    Block PBlock7190 = new_Block_with(PArray7191, empty_Array, PThreadedCode7192, 1, PSend7195);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7196 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7189, (Optr)PBlock7190);
    Array PThreadedCode7187 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7188, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7189, (Optr)&t_push_closure, (Optr)PBlock7190, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7196, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7187, 2, PSend7196, self);
    
    MethodClosure MC_SMB_benchAtIfAbsentPut = new_MethodClosure((Method)PMethod7186, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtIfAbsentPut, MC_SMB_benchAtIfAbsentPut);
}


static void init_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7198 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7200 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7199 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7200, (Optr)&t_method_return);
    Method PMethod7197 = new_Method_with(PArray7198, empty_Array, empty_Array, PThreadedCode7199, 1, PSend7200);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7197, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7203 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)nil_Const);
    Array PThreadedCode7202 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7203, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7202, 2, PAssign7203, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7201, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7205 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7207 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7206 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7207, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7204 = new_Method_with(PArray7205, empty_Array, empty_Array, PThreadedCode7206, 2, PAssign7207, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7204, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_valueBlock_() {
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7209 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7211 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7210 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7211, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7208 = new_Method_with(PArray7209, empty_Array, empty_Array, PThreadedCode7210, 2, PAssign7211, self);
    
    MethodClosure MC_SMB_valueBlock_ = new_MethodClosure((Method)PMethod7208, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock_, MC_SMB_valueBlock_);
}


static void init_SMB_benchRemoveKey() {
    Symbol SMB_benchRemoveKey = new_Symbol(L"benchRemoveKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7214 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7216 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7218 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    // removeKey:. 
    Send PSend7219 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_removeKey_, 1, (Optr)PSend7218);
    Array PThreadedCode7217 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7218, (Optr)&t_send1, (Optr)PSend7219, (Optr)&t_method_return);
    Block PBlock7215 = new_Block_with(PArray7216, empty_Array, PThreadedCode7217, 1, PSend7219);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7220 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7214, (Optr)int_73_Const, (Optr)PBlock7215);
    Array PThreadedCode7213 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7214, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7215, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7220, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7213, 2, PSend7220, self);
    
    MethodClosure MC_SMB_benchRemoveKey = new_MethodClosure((Method)PMethod7212, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchRemoveKey, MC_SMB_benchRemoveKey);
}


static void init_SMB_dict() {
    Symbol SMB_dict = new_Symbol(L"dict");
    Array PThreadedCode7222 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_method_return);
    Method PMethod7221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7222, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict);
    
    MethodClosure MC_SMB_dict = new_MethodClosure((Method)PMethod7221, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict, MC_SMB_dict);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // dictSize:. 
    Send PSend7225 = new_Send((Optr)self, SMB_dictSize_, 1, (Optr)int_10000_Const);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7226 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7227 = new_Send((Optr)DummyDictionary_classReference, SMB_new_, 1, (Optr)PSend7226);
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    // dict:. 
    Send PSend7228 = new_Send((Optr)self, SMB_dict_, 1, (Optr)PSend7227);
    Array PThreadedCode7224 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7225, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DummyDictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7226, (Optr)&t_send1, (Optr)PSend7227, (Optr)&t_send1, (Optr)PSend7228, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7223 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7224, 3, PSend7225, PSend7228, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7223, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_dictSize() {
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    Array PThreadedCode7230 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)&t_method_return);
    Method PMethod7229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7230, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize);
    
    MethodClosure MC_SMB_dictSize = new_MethodClosure((Method)PMethod7229, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize, MC_SMB_dictSize);
}


static void init_SMB_valueBlock() {
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    Array PThreadedCode7232 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_method_return);
    Method PMethod7231 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7232, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock);
    
    MethodClosure MC_SMB_valueBlock = new_MethodClosure((Method)PMethod7231, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock, MC_SMB_valueBlock);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7234 = new_Array_with(1, (Optr)VAR_int_0_0);
    // value:. 
    Send PSend7236 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7235 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7236, (Optr)&t_method_return);
    Method PMethod7233 = new_Method_with(PArray7234, empty_Array, empty_Array, PThreadedCode7235, 1, PSend7236);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7233, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_benchDo() {
    Symbol SMB_benchDo = new_Symbol(L"benchDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7242 = new_Array_with(1, (Optr)VAR_i_1_0);
    Array PThreadedCode7243 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7241 = new_Block_with(PArray7242, empty_Array, PThreadedCode7243, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7244 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_do_, 1, (Optr)PBlock7241);
    Array PThreadedCode7240 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7241, (Optr)&t_send1, (Optr)PSend7244, (Optr)&t_block_return);
    Block PBlock7239 = new_Block_with(empty_Array, empty_Array, PThreadedCode7240, 1, PSend7244);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7245 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7239);
    Array PThreadedCode7238 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7239, (Optr)&t_send1, (Optr)PSend7245, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7237 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7238, 2, PSend7245, self);
    
    MethodClosure MC_SMB_benchDo = new_MethodClosure((Method)PMethod7237, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchDo, MC_SMB_benchDo);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7248 = new_Super(SMB_initialize, 0);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray7251 = new_Array_with(1, (Optr)VAR_key_1_0);
    Array PThreadedCode7252 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_method_return);
    Block PBlock7250 = new_Block_with(PArray7251, empty_Array, PThreadedCode7252, 1, VAR_key_1_0);
    Assign PAssign7249 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)PBlock7250);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray7255 = new_Array_with(1, (Optr)VAR_value_1_0);
    Array PThreadedCode7256 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_method_return);
    Block PBlock7254 = new_Block_with(PArray7255, empty_Array, PThreadedCode7256, 1, VAR_value_1_0);
    Assign PAssign7253 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)PBlock7254);
    Array PThreadedCode7247 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7248, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7249, (Optr)&t_push_closure, (Optr)PBlock7250, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7253, (Optr)&t_push_closure, (Optr)PBlock7254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7246 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7247, 4, PSuper7248, PAssign7249, PAssign7253, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7246, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_dict_() {
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7258 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7260 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7259 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7260, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7257 = new_Method_with(PArray7258, empty_Array, empty_Array, PThreadedCode7259, 2, PAssign7260, self);
    
    MethodClosure MC_SMB_dict_ = new_MethodClosure((Method)PMethod7257, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict_, MC_SMB_dict_);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7263 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7264 = new_Send((Optr)PSend7263, SMB__times_, 1, (Optr)int_2_Const);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7266 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7268 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7269 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7270 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7268, (Optr)PSend7269);
    Array PThreadedCode7267 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7268, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7269, (Optr)&t_send2, (Optr)PSend7270, (Optr)&t_method_return);
    Block PBlock7265 = new_Block_with(PArray7266, empty_Array, PThreadedCode7267, 1, PSend7270);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7271 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7264, (Optr)int_73_Const, (Optr)PBlock7265);
    Array PThreadedCode7262 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7263, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7264, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7265, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7271, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7262, 2, PSend7271, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7261, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchAtPutNew() {
    Symbol SMB_benchAtPutNew = new_Symbol(L"benchAtPutNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7274 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7275 = new_Send((Optr)self, SMB_dictSize, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7276 = new_Send((Optr)PSend7275, SMB__times_, 1, (Optr)int_5_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7278 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7280 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7281 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7282 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7280, (Optr)PSend7281);
    Array PThreadedCode7279 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7280, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7281, (Optr)&t_send2, (Optr)PSend7282, (Optr)&t_method_return);
    Block PBlock7277 = new_Block_with(PArray7278, empty_Array, PThreadedCode7279, 1, PSend7282);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7283 = new_Send((Optr)PSend7274, SMB_to_do_, 2, (Optr)PSend7276, (Optr)PBlock7277);
    Array PThreadedCode7273 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7274, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7275, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7276, (Optr)&t_push_closure, (Optr)PBlock7277, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7283, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7273, 2, PSend7283, self);
    
    MethodClosure MC_SMB_benchAtPutNew = new_MethodClosure((Method)PMethod7272, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutNew, MC_SMB_benchAtPutNew);
}


static void init_SMB_benchAtPut() {
    Symbol SMB_benchAtPut = new_Symbol(L"benchAtPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7286 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7287 = new_Send((Optr)PSend7286, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7289 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7291 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7292 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7293 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7291, (Optr)PSend7292);
    Array PThreadedCode7290 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7291, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7292, (Optr)&t_send2, (Optr)PSend7293, (Optr)&t_method_return);
    Block PBlock7288 = new_Block_with(PArray7289, empty_Array, PThreadedCode7290, 1, PSend7293);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7294 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7287, (Optr)PBlock7288);
    Array PThreadedCode7285 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7286, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7287, (Optr)&t_push_closure, (Optr)PBlock7288, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7294, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7284 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7285, 2, PSend7294, self);
    
    MethodClosure MC_SMB_benchAtPut = new_MethodClosure((Method)PMethod7284, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPut, MC_SMB_benchAtPut);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7296 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_method_return);
    Method PMethod7295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7296, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7295, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock, MC_SMB_keyBlock);
}


static void init_SMB_baseBenchmark() {
    Symbol SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Variable VAR_inst_0_0 = new_Variable_named(L"inst", 0);
    Array PArray7298 = new_Array_with(1, (Optr)VAR_inst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7301 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7303 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7304 = new_Send((Optr)PSend7303, SMB__pequals_, 1, (Optr)PBAbstractDictionary_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7308 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode7307 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend7308, (Optr)&t_block_return);
    Block PBlock7306 = new_Block_with(empty_Array, empty_Array, PThreadedCode7307, 1, PSend7308);
    // ifTrue:. 
    Send PSend7305 = new_Send((Optr)PSend7304, SMB_ifTrue_, 1, (Optr)PBlock7306);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7310 = new_Send((Optr)PBAbstractDictionary_classReference, SMB_new, 0);
    Assign PAssign7309 = new_Assign((Optr)VAR_inst_0_0, (Optr)PSend7310);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7311 = new_Send((Optr)self, SMB_keyBlock, 0);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7312 = new_Send((Optr)VAR_inst_0_0, SMB_keyBlock_, 1, (Optr)PSend7311);
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    // valueBlock. 
    Send PSend7313 = new_Send((Optr)self, SMB_valueBlock, 0);
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    // valueBlock:. 
    Send PSend7314 = new_Send((Optr)VAR_inst_0_0, SMB_valueBlock_, 1, (Optr)PSend7313);
    Array PThreadedCode7302 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7303, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send1, (Optr)PSend7304, (Optr)&t_send_ifTrue_, (Optr)PSend7305, (Optr)PBlock7306, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7309, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send0, (Optr)PSend7310, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7311, (Optr)&t_send1, (Optr)PSend7312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7313, (Optr)&t_send1, (Optr)PSend7314, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock7300 = new_Block_with(PArray7301, empty_Array, PThreadedCode7302, 5, PSend7305, PAssign7309, PSend7312, PSend7314, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7315 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7300);
    Array PThreadedCode7299 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7300, (Optr)&t_send1, (Optr)PSend7315, (Optr)&t_method_return);
    Method PMethod7297 = new_Method_with(empty_Array, PArray7298, empty_Array, PThreadedCode7299, 1, PSend7315);
    
    MethodClosure MC_SMB_baseBenchmark = new_MethodClosure((Method)PMethod7297, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
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