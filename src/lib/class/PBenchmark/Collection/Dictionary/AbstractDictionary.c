#include <lib/class/PBenchmark/Collection/Dictionary/AbstractDictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_AbstractDictionary_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock;
Optr slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock;
Optr layout_PBenchmark_Collection_Dictionary_AbstractDictionary;


<<<<<<< HEAD
static void init_SMB_benchIncludesKey() {
    Symbol SMB_benchIncludesKey = new_Symbol(L"benchIncludesKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7198 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
=======
static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7198 = new_Send((Optr)self, SMB_dictSize, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7199 = new_Send((Optr)PSend7198, SMB__times_, 1, (Optr)int_2_Const);
<<<<<<< HEAD
=======
    SmallInt int_73 = new_SmallInt(73);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7201 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7203 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7204 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7205 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7203, (Optr)PSend7204);
    Array PThreadedCode7202 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7203, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7204, (Optr)&t_send2, (Optr)PSend7205, (Optr)&t_method_return);
    Block PBlock7200 = new_Block_with(PArray7201, empty_Array, PThreadedCode7202, 1, PSend7205);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
<<<<<<< HEAD
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7206 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7199, (Optr)PBlock7200);
    Array PThreadedCode7197 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7198, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7199, (Optr)&t_push_closure, (Optr)PBlock7200, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7196 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7197, 2, PSend7206, self);
    
    MethodClosure MC_SMB_benchIncludesKey = new_MethodClosure((Method)PMethod7196, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKey, MC_SMB_benchIncludesKey);
}


static void init_SMB_benchAtPutExisting() {
    Symbol SMB_benchAtPutExisting = new_Symbol(L"benchAtPutExisting");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7209 = new_Send((Optr)self, SMB_dictSize, 0);
=======
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7206 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7199, (Optr)int_73_Const, (Optr)PBlock7200);
    Array PThreadedCode7197 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7198, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7199, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7200, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7196 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7197, 2, PSend7206, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7196, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchIncludesKey() {
    Symbol SMB_benchIncludesKey = new_Symbol(L"benchIncludesKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7209 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7210 = new_Send((Optr)PSend7209, SMB__times_, 1, (Optr)int_2_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7211 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7213 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7214 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7215 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7213, (Optr)PSend7214);
    Array PThreadedCode7212 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7213, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7214, (Optr)&t_send2, (Optr)PSend7215, (Optr)&t_method_return);
    Block PBlock7210 = new_Block_with(PArray7211, empty_Array, PThreadedCode7212, 1, PSend7215);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7216 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7209, (Optr)PBlock7210);
    Array PThreadedCode7208 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7209, (Optr)&t_push_closure, (Optr)PBlock7210, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7216, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7208, 2, PSend7216, self);
    
    MethodClosure MC_SMB_benchAtPutExisting = new_MethodClosure((Method)PMethod7207, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutExisting, MC_SMB_benchAtPutExisting);
=======
    Send PSend7217 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7210, (Optr)PBlock7211);
    Array PThreadedCode7208 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7209, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7210, (Optr)&t_push_closure, (Optr)PBlock7211, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7217, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7208, 2, PSend7217, self);
    
    MethodClosure MC_SMB_benchIncludesKey = new_MethodClosure((Method)PMethod7207, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKey, MC_SMB_benchIncludesKey);
}


static void init_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7219 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7221 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7220 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7221, (Optr)&t_method_return);
    Method PMethod7218 = new_Method_with(PArray7219, empty_Array, empty_Array, PThreadedCode7220, 1, PSend7221);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7218, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_key_, MC_SMB_key_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchKeysAndValuesDo() {
    Symbol SMB_benchKeysAndValuesDo = new_Symbol(L"benchKeysAndValuesDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_k_1_0 = new_Variable_named(L"k", 1);
    Variable VAR_v_1_1 = new_Variable_named(L"v", 1);
<<<<<<< HEAD
    Array PArray7222 = new_Array_with(2, (Optr)VAR_k_1_0, (Optr)VAR_v_1_1);
    Array PThreadedCode7223 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7221 = new_Block_with(PArray7222, empty_Array, PThreadedCode7223, 0);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7224 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_keysAndValuesDo_, 1, (Optr)PBlock7221);
    Array PThreadedCode7220 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7221, (Optr)&t_send1, (Optr)PSend7224, (Optr)&t_block_return);
    Block PBlock7219 = new_Block_with(empty_Array, empty_Array, PThreadedCode7220, 1, PSend7224);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7225 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7219);
    Array PThreadedCode7218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7219, (Optr)&t_send1, (Optr)PSend7225, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7217 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7218, 2, PSend7225, self);
    
    MethodClosure MC_SMB_benchKeysAndValuesDo = new_MethodClosure((Method)PMethod7217, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
=======
    Array PArray7227 = new_Array_with(2, (Optr)VAR_k_1_0, (Optr)VAR_v_1_1);
    Array PThreadedCode7228 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7226 = new_Block_with(PArray7227, empty_Array, PThreadedCode7228, 0);
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    // keysAndValuesDo:. 
    Send PSend7229 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_keysAndValuesDo_, 1, (Optr)PBlock7226);
    Array PThreadedCode7225 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7226, (Optr)&t_send1, (Optr)PSend7229, (Optr)&t_block_return);
    Block PBlock7224 = new_Block_with(empty_Array, empty_Array, PThreadedCode7225, 1, PSend7229);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7230 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7224);
    Array PThreadedCode7223 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7224, (Optr)&t_send1, (Optr)PSend7230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7223, 2, PSend7230, self);
    
    MethodClosure MC_SMB_benchKeysAndValuesDo = new_MethodClosure((Method)PMethod7222, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchKeysAndValuesDo, MC_SMB_benchKeysAndValuesDo);
}


<<<<<<< HEAD
static void init_SMB_dictSize_() {
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7227 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7229 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7229, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7226 = new_Method_with(PArray7227, empty_Array, empty_Array, PThreadedCode7228, 2, PAssign7229, self);
    
    MethodClosure MC_SMB_dictSize_ = new_MethodClosure((Method)PMethod7226, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize_, MC_SMB_dictSize_);
}


static void init_SMB_key_() {
    Symbol SMB_key_ = new_Symbol(L"key:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7231 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7233 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7232 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7233, (Optr)&t_method_return);
    Method PMethod7230 = new_Method_with(PArray7231, empty_Array, empty_Array, PThreadedCode7232, 1, PSend7233);
    
    MethodClosure MC_SMB_key_ = new_MethodClosure((Method)PMethod7230, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_key_, MC_SMB_key_);
}


static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7235 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7237 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7236 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7237, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7234 = new_Method_with(PArray7235, empty_Array, empty_Array, PThreadedCode7236, 2, PAssign7237, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7234, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_valueBlock_() {
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7239 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7241 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7240 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7241, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7238 = new_Method_with(PArray7239, empty_Array, empty_Array, PThreadedCode7240, 2, PAssign7241, self);
    
    MethodClosure MC_SMB_valueBlock_ = new_MethodClosure((Method)PMethod7238, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock_, MC_SMB_valueBlock_);
}


static void init_SMB_dict() {
    Symbol SMB_dict = new_Symbol(L"dict");
    Array PThreadedCode7243 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_method_return);
    Method PMethod7242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7243, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict);
    
    MethodClosure MC_SMB_dict = new_MethodClosure((Method)PMethod7242, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict, MC_SMB_dict);
}


static void init_SMB_benchIncludesKeyNew() {
    Symbol SMB_benchIncludesKeyNew = new_Symbol(L"benchIncludesKeyNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7246 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    // size. 
    Send PSend7247 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
=======
static void init_SMB_keyBlock_() {
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7232 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7234 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7233 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7234, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7231 = new_Method_with(PArray7232, empty_Array, empty_Array, PThreadedCode7233, 2, PAssign7234, self);
    
    MethodClosure MC_SMB_keyBlock_ = new_MethodClosure((Method)PMethod7231, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock_, MC_SMB_keyBlock_);
}


static void init_SMB_benchAtPutNew() {
    Symbol SMB_benchAtPutNew = new_Symbol(L"benchAtPutNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7237 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7238 = new_Send((Optr)self, SMB_dictSize, 0);
    SmallInt int_5 = new_SmallInt(5);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
<<<<<<< HEAD
    Send PSend7248 = new_Send((Optr)PSend7247, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7250 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7252 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7253 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7254 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7252, (Optr)PSend7253);
    Array PThreadedCode7251 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7252, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7253, (Optr)&t_send2, (Optr)PSend7254, (Optr)&t_method_return);
    Block PBlock7249 = new_Block_with(PArray7250, empty_Array, PThreadedCode7251, 1, PSend7254);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7255 = new_Send((Optr)PSend7246, SMB_to_do_, 2, (Optr)PSend7248, (Optr)PBlock7249);
    Array PThreadedCode7245 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7246, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7247, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7248, (Optr)&t_push_closure, (Optr)PBlock7249, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7255, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7245, 2, PSend7255, self);
    
    MethodClosure MC_SMB_benchIncludesKeyNew = new_MethodClosure((Method)PMethod7244, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKeyNew, MC_SMB_benchIncludesKeyNew);
}


static void init_SMB_dictSize() {
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    Array PThreadedCode7257 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)&t_method_return);
    Method PMethod7256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7257, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize);
    
    MethodClosure MC_SMB_dictSize = new_MethodClosure((Method)PMethod7256, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize, MC_SMB_dictSize);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7260 = new_Super(SMB_initialize, 0);
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // dictSize:. 
    Send PSend7261 = new_Send((Optr)self, SMB_dictSize_, 1, (Optr)int_10000_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray7264 = new_Array_with(1, (Optr)VAR_key_1_0);
    Array PThreadedCode7265 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_method_return);
    Block PBlock7263 = new_Block_with(PArray7264, empty_Array, PThreadedCode7265, 1, VAR_key_1_0);
    Assign PAssign7262 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)PBlock7263);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray7268 = new_Array_with(1, (Optr)VAR_value_1_0);
    Array PThreadedCode7269 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_method_return);
    Block PBlock7267 = new_Block_with(PArray7268, empty_Array, PThreadedCode7269, 1, VAR_value_1_0);
    Assign PAssign7266 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)PBlock7267);
    Array PThreadedCode7259 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7260, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7261, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7262, (Optr)&t_push_closure, (Optr)PBlock7263, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7266, (Optr)&t_push_closure, (Optr)PBlock7267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7258 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7259, 5, PSuper7260, PSend7261, PAssign7262, PAssign7266, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7258, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7271 = new_Array_with(1, (Optr)VAR_int_0_0);
    // value:. 
    Send PSend7273 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7272 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7273, (Optr)&t_method_return);
    Method PMethod7270 = new_Method_with(PArray7271, empty_Array, empty_Array, PThreadedCode7272, 1, PSend7273);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7270, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_benchDo() {
    Symbol SMB_benchDo = new_Symbol(L"benchDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7279 = new_Array_with(1, (Optr)VAR_i_1_0);
    Array PThreadedCode7280 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7278 = new_Block_with(PArray7279, empty_Array, PThreadedCode7280, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7281 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_do_, 1, (Optr)PBlock7278);
    Array PThreadedCode7277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7278, (Optr)&t_send1, (Optr)PSend7281, (Optr)&t_block_return);
    Block PBlock7276 = new_Block_with(empty_Array, empty_Array, PThreadedCode7277, 1, PSend7281);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7282 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7276);
    Array PThreadedCode7275 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7276, (Optr)&t_send1, (Optr)PSend7282, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7275, 2, PSend7282, self);
    
    MethodClosure MC_SMB_benchDo = new_MethodClosure((Method)PMethod7274, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchDo, MC_SMB_benchDo);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7284 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_method_return);
    Method PMethod7283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7284, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7283, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock, MC_SMB_keyBlock);
=======
    Send PSend7239 = new_Send((Optr)PSend7238, SMB__times_, 1, (Optr)int_5_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7241 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7243 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7244 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7245 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7243, (Optr)PSend7244);
    Array PThreadedCode7242 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7243, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7244, (Optr)&t_send2, (Optr)PSend7245, (Optr)&t_method_return);
    Block PBlock7240 = new_Block_with(PArray7241, empty_Array, PThreadedCode7242, 1, PSend7245);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7246 = new_Send((Optr)PSend7237, SMB_to_do_, 2, (Optr)PSend7239, (Optr)PBlock7240);
    Array PThreadedCode7236 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7237, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7238, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7239, (Optr)&t_push_closure, (Optr)PBlock7240, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7246, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7235 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7236, 2, PSend7246, self);
    
    MethodClosure MC_SMB_benchAtPutNew = new_MethodClosure((Method)PMethod7235, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutNew, MC_SMB_benchAtPutNew);
}


static void init_SMB_benchDo() {
    Symbol SMB_benchDo = new_Symbol(L"benchDo");
    SmallInt int_4 = new_SmallInt(4);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7252 = new_Array_with(1, (Optr)VAR_i_1_0);
    Array PThreadedCode7253 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_nil);
    Block PBlock7251 = new_Block_with(PArray7252, empty_Array, PThreadedCode7253, 0);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend7254 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_do_, 1, (Optr)PBlock7251);
    Array PThreadedCode7250 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_closure, (Optr)PBlock7251, (Optr)&t_send1, (Optr)PSend7254, (Optr)&t_block_return);
    Block PBlock7249 = new_Block_with(empty_Array, empty_Array, PThreadedCode7250, 1, PSend7254);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7255 = new_Send((Optr)int_4_Const, SMB_timesRepeat_, 1, (Optr)PBlock7249);
    Array PThreadedCode7248 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock7249, (Optr)&t_send1, (Optr)PSend7255, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7248, 2, PSend7255, self);
    
    MethodClosure MC_SMB_benchDo = new_MethodClosure((Method)PMethod7247, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchDo, MC_SMB_benchDo);
}


static void init_SMB_dictSize_() {
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7257 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7259 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7258 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7259, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7256 = new_Method_with(PArray7257, empty_Array, empty_Array, PThreadedCode7258, 2, PAssign7259, self);
    
    MethodClosure MC_SMB_dictSize_ = new_MethodClosure((Method)PMethod7256, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize_, MC_SMB_dictSize_);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7262 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)nil_Const);
    Array PThreadedCode7261 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7262, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7261, 2, PAssign7262, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7260, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_tearDown, MC_SMB_tearDown);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_baseBenchmark() {
    Symbol SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Variable VAR_inst_0_0 = new_Variable_named(L"inst", 0);
    Array PArray7286 = new_Array_with(1, (Optr)VAR_inst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7289 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7291 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7292 = new_Send((Optr)PSend7291, SMB__pequals_, 1, (Optr)PBAbstractDictionary_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7296 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode7295 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend7296, (Optr)&t_block_return);
    Block PBlock7294 = new_Block_with(empty_Array, empty_Array, PThreadedCode7295, 1, PSend7296);
    // ifTrue:. 
    Send PSend7293 = new_Send((Optr)PSend7292, SMB_ifTrue_, 1, (Optr)PBlock7294);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7298 = new_Send((Optr)PBAbstractDictionary_classReference, SMB_new, 0);
    Assign PAssign7297 = new_Assign((Optr)VAR_inst_0_0, (Optr)PSend7298);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7299 = new_Send((Optr)self, SMB_keyBlock, 0);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7300 = new_Send((Optr)VAR_inst_0_0, SMB_keyBlock_, 1, (Optr)PSend7299);
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    // valueBlock. 
    Send PSend7301 = new_Send((Optr)self, SMB_valueBlock, 0);
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
<<<<<<< HEAD
    // valueBlock:. 
    Send PSend7302 = new_Send((Optr)VAR_inst_0_0, SMB_valueBlock_, 1, (Optr)PSend7301);
    Array PThreadedCode7290 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7291, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send1, (Optr)PSend7292, (Optr)&t_send_ifTrue_, (Optr)PSend7293, (Optr)PBlock7294, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7297, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send0, (Optr)PSend7298, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7299, (Optr)&t_send1, (Optr)PSend7300, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7301, (Optr)&t_send1, (Optr)PSend7302, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_method_return);
    Block PBlock7288 = new_Block_with(PArray7289, empty_Array, PThreadedCode7290, 5, PSend7293, PAssign7297, PSend7300, PSend7302, VAR_inst_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7303 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7288);
    Array PThreadedCode7287 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7288, (Optr)&t_send1, (Optr)PSend7303, (Optr)&t_method_return);
    Method PMethod7285 = new_Method_with(empty_Array, PArray7286, empty_Array, PThreadedCode7287, 1, PSend7303);
    
    MethodClosure MC_SMB_baseBenchmark = new_MethodClosure((Method)PMethod7285, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_baseBenchmark, MC_SMB_baseBenchmark);
}


static void init_SMB_benchAtIfAbsentPut() {
    Symbol SMB_benchAtIfAbsentPut = new_Symbol(L"benchAtIfAbsentPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7306 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7307 = new_Send((Optr)PSend7306, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7309 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7311 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7312 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7313 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7311, (Optr)PSend7312);
    Array PThreadedCode7310 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7311, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7312, (Optr)&t_send2, (Optr)PSend7313, (Optr)&t_method_return);
    Block PBlock7308 = new_Block_with(PArray7309, empty_Array, PThreadedCode7310, 1, PSend7313);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7314 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7307, (Optr)PBlock7308);
    Array PThreadedCode7305 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7306, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7307, (Optr)&t_push_closure, (Optr)PBlock7308, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7314, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7304 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7305, 2, PSend7314, self);
    
    MethodClosure MC_SMB_benchAtIfAbsentPut = new_MethodClosure((Method)PMethod7304, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtIfAbsentPut, MC_SMB_benchAtIfAbsentPut);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7317 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)nil_Const);
    Array PThreadedCode7316 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7317, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7316, 2, PAssign7317, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7315, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_tearDown, MC_SMB_tearDown);
=======
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7264 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7266 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7265 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7266, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7263 = new_Method_with(PArray7264, empty_Array, empty_Array, PThreadedCode7265, 2, PAssign7266, self);
    
    MethodClosure MC_SMB_valueBlock_ = new_MethodClosure((Method)PMethod7263, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock_, MC_SMB_valueBlock_);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchRemoveKey() {
    Symbol SMB_benchRemoveKey = new_Symbol(L"benchRemoveKey");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend7320 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7322 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7324 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    // removeKey:. 
    Send PSend7325 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_removeKey_, 1, (Optr)PSend7324);
    Array PThreadedCode7323 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7324, (Optr)&t_send1, (Optr)PSend7325, (Optr)&t_method_return);
    Block PBlock7321 = new_Block_with(PArray7322, empty_Array, PThreadedCode7323, 1, PSend7325);
=======
    Send PSend7269 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7271 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7273 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    // removeKey:. 
    Send PSend7274 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_removeKey_, 1, (Optr)PSend7273);
    Array PThreadedCode7272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7273, (Optr)&t_send1, (Optr)PSend7274, (Optr)&t_method_return);
    Block PBlock7270 = new_Block_with(PArray7271, empty_Array, PThreadedCode7272, 1, PSend7274);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
<<<<<<< HEAD
    Send PSend7326 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7320, (Optr)int_73_Const, (Optr)PBlock7321);
    Array PThreadedCode7319 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7320, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7321, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7326, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7319, 2, PSend7326, self);
    
    MethodClosure MC_SMB_benchRemoveKey = new_MethodClosure((Method)PMethod7318, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
=======
    Send PSend7275 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7269, (Optr)int_73_Const, (Optr)PBlock7270);
    Array PThreadedCode7268 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7269, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7270, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7275, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7267 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7268, 2, PSend7275, self);
    
    MethodClosure MC_SMB_benchRemoveKey = new_MethodClosure((Method)PMethod7267, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchRemoveKey, MC_SMB_benchRemoveKey);
}


<<<<<<< HEAD
=======
static void init_SMB_dict() {
    Symbol SMB_dict = new_Symbol(L"dict");
    Array PThreadedCode7277 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_method_return);
    Method PMethod7276 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7277, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict);
    
    MethodClosure MC_SMB_dict = new_MethodClosure((Method)PMethod7276, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict, MC_SMB_dict);
}


>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
<<<<<<< HEAD
    Send PSend7329 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7330 = new_Send((Optr)DummyDictionary_classReference, SMB_new_, 1, (Optr)PSend7329);
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    // dict:. 
    Send PSend7331 = new_Send((Optr)self, SMB_dict_, 1, (Optr)PSend7330);
    Array PThreadedCode7328 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DummyDictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7329, (Optr)&t_send1, (Optr)PSend7330, (Optr)&t_send1, (Optr)PSend7331, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7328, 2, PSend7331, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7327, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
=======
    Send PSend7280 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7281 = new_Send((Optr)DummyDictionary_classReference, SMB_new_, 1, (Optr)PSend7280);
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    // dict:. 
    Send PSend7282 = new_Send((Optr)self, SMB_dict_, 1, (Optr)PSend7281);
    Array PThreadedCode7279 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)DummyDictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7280, (Optr)&t_send1, (Optr)PSend7281, (Optr)&t_send1, (Optr)PSend7282, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7278 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7279, 2, PSend7282, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7278, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_setUp, MC_SMB_setUp);
}


<<<<<<< HEAD
static void init_SMB_valueBlock() {
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    Array PThreadedCode7333 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_method_return);
    Method PMethod7332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7333, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock);
    
    MethodClosure MC_SMB_valueBlock = new_MethodClosure((Method)PMethod7332, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock, MC_SMB_valueBlock);
}


static void init_SMB_benchIncludesKeyExisting() {
    Symbol SMB_benchIncludesKeyExisting = new_Symbol(L"benchIncludesKeyExisting");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7336 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7338 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7340 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7341 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7342 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7340, (Optr)PSend7341);
    Array PThreadedCode7339 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7340, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7341, (Optr)&t_send2, (Optr)PSend7342, (Optr)&t_method_return);
    Block PBlock7337 = new_Block_with(PArray7338, empty_Array, PThreadedCode7339, 1, PSend7342);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7343 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7336, (Optr)PBlock7337);
    Array PThreadedCode7335 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7336, (Optr)&t_push_closure, (Optr)PBlock7337, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7334 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7335, 2, PSend7343, self);
    
    MethodClosure MC_SMB_benchIncludesKeyExisting = new_MethodClosure((Method)PMethod7334, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludesKeyExisting, MC_SMB_benchIncludesKeyExisting);
}


static void init_SMB_dict_() {
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7345 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7347 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7346 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7347, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7344 = new_Method_with(PArray7345, empty_Array, empty_Array, PThreadedCode7346, 2, PAssign7347, self);
    
    MethodClosure MC_SMB_dict_ = new_MethodClosure((Method)PMethod7344, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict_, MC_SMB_dict_);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7350 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7351 = new_Send((Optr)PSend7350, SMB__times_, 1, (Optr)int_2_Const);
    SmallInt int_73 = new_SmallInt(73);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7353 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7355 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7356 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7357 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7355, (Optr)PSend7356);
    Array PThreadedCode7354 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7355, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7356, (Optr)&t_send2, (Optr)PSend7357, (Optr)&t_method_return);
    Block PBlock7352 = new_Block_with(PArray7353, empty_Array, PThreadedCode7354, 1, PSend7357);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_73_Const = new_Constant((Optr)int_73);
    // to:by:do:. 
    Send PSend7358 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7351, (Optr)int_73_Const, (Optr)PBlock7352);
    Array PThreadedCode7349 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7350, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7351, (Optr)&t_push1, (Optr)int_73, (Optr)&t_push_closure, (Optr)PBlock7352, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7349, 2, PSend7358, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7348, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchAtPutNew() {
    Symbol SMB_benchAtPutNew = new_Symbol(L"benchAtPutNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7361 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_size, 0);
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7362 = new_Send((Optr)self, SMB_dictSize, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7363 = new_Send((Optr)PSend7362, SMB__times_, 1, (Optr)int_5_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7365 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7367 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7368 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7369 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7367, (Optr)PSend7368);
    Array PThreadedCode7366 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7367, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7368, (Optr)&t_send2, (Optr)PSend7369, (Optr)&t_method_return);
    Block PBlock7364 = new_Block_with(PArray7365, empty_Array, PThreadedCode7366, 1, PSend7369);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7370 = new_Send((Optr)PSend7361, SMB_to_do_, 2, (Optr)PSend7363, (Optr)PBlock7364);
    Array PThreadedCode7360 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_send0, (Optr)PSend7361, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7362, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7363, (Optr)&t_push_closure, (Optr)PBlock7364, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7370, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7360, 2, PSend7370, self);
    
    MethodClosure MC_SMB_benchAtPutNew = new_MethodClosure((Method)PMethod7359, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutNew, MC_SMB_benchAtPutNew);
=======
static void init_SMB_dictSize() {
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    Array PThreadedCode7284 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize, (Optr)&t_method_return);
    Method PMethod7283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7284, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize);
    
    MethodClosure MC_SMB_dictSize = new_MethodClosure((Method)PMethod7283, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dictSize, MC_SMB_dictSize);
}


static void init_SMB_benchAtPutExisting() {
    Symbol SMB_benchAtPutExisting = new_Symbol(L"benchAtPutExisting");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7287 = new_Send((Optr)self, SMB_dictSize, 0);
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
    Array PThreadedCode7286 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7287, (Optr)&t_push_closure, (Optr)PBlock7288, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7294, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7286, 2, PSend7294, self);
    
    MethodClosure MC_SMB_benchAtPutExisting = new_MethodClosure((Method)PMethod7285, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPutExisting, MC_SMB_benchAtPutExisting);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchAtPut() {
    Symbol SMB_benchAtPut = new_Symbol(L"benchAtPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
<<<<<<< HEAD
    Send PSend7373 = new_Send((Optr)self, SMB_dictSize, 0);
=======
    Send PSend7297 = new_Send((Optr)self, SMB_dictSize, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
<<<<<<< HEAD
    Send PSend7374 = new_Send((Optr)PSend7373, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7376 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7378 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7379 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7380 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7378, (Optr)PSend7379);
    Array PThreadedCode7377 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7378, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7379, (Optr)&t_send2, (Optr)PSend7380, (Optr)&t_method_return);
    Block PBlock7375 = new_Block_with(PArray7376, empty_Array, PThreadedCode7377, 1, PSend7380);
=======
    Send PSend7298 = new_Send((Optr)PSend7297, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7300 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7302 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7303 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7304 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7302, (Optr)PSend7303);
    Array PThreadedCode7301 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7302, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7303, (Optr)&t_send2, (Optr)PSend7304, (Optr)&t_method_return);
    Block PBlock7299 = new_Block_with(PArray7300, empty_Array, PThreadedCode7301, 1, PSend7304);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7381 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7374, (Optr)PBlock7375);
    Array PThreadedCode7372 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7373, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7374, (Optr)&t_push_closure, (Optr)PBlock7375, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7381, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7371 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7372, 2, PSend7381, self);
    
    MethodClosure MC_SMB_benchAtPut = new_MethodClosure((Method)PMethod7371, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPut, MC_SMB_benchAtPut);
}

=======
    Send PSend7305 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7298, (Optr)PBlock7299);
    Array PThreadedCode7296 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7297, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7298, (Optr)&t_push_closure, (Optr)PBlock7299, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7305, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7295 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7296, 2, PSend7305, self);
    
    MethodClosure MC_SMB_benchAtPut = new_MethodClosure((Method)PMethod7295, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtPut, MC_SMB_benchAtPut);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7307 = new_Array_with(1, (Optr)VAR_int_0_0);
    // value:. 
    Send PSend7309 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, SMB_value_, 1, (Optr)VAR_int_0_0);
    Array PThreadedCode7308 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send1, (Optr)PSend7309, (Optr)&t_method_return);
    Method PMethod7306 = new_Method_with(PArray7307, empty_Array, empty_Array, PThreadedCode7308, 1, PSend7309);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7306, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper7312 = new_Super(SMB_initialize, 0);
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_dictSize_ = new_Symbol(L"dictSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // dictSize:. 
    Send PSend7313 = new_Send((Optr)self, SMB_dictSize_, 1, (Optr)int_10000_Const);
    Variable VAR_key_1_0 = new_Variable_named(L"key", 1);
    Array PArray7316 = new_Array_with(1, (Optr)VAR_key_1_0);
    Array PThreadedCode7317 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_key_1_0, (Optr)&t_method_return);
    Block PBlock7315 = new_Block_with(PArray7316, empty_Array, PThreadedCode7317, 1, VAR_key_1_0);
    Assign PAssign7314 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)PBlock7315);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Array PArray7320 = new_Array_with(1, (Optr)VAR_value_1_0);
    Array PThreadedCode7321 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_method_return);
    Block PBlock7319 = new_Block_with(PArray7320, empty_Array, PThreadedCode7321, 1, VAR_value_1_0);
    Assign PAssign7318 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)PBlock7319);
    Array PThreadedCode7311 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7312, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7313, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7314, (Optr)&t_push_closure, (Optr)PBlock7315, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7318, (Optr)&t_push_closure, (Optr)PBlock7319, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7311, 5, PSuper7312, PSend7313, PAssign7314, PAssign7318, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod7310, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_baseBenchmark() {
    Symbol SMB_baseBenchmark = new_Symbol(L"baseBenchmark");
    Variable VAR_inst_0_0 = new_Variable_named(L"inst", 0);
    Array PArray7323 = new_Array_with(1, (Optr)VAR_inst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7326 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend7328 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend7329 = new_Send((Optr)PSend7328, SMB__pequals_, 1, (Optr)PBAbstractDictionary_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7333 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode7332 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend7333, (Optr)&t_block_return);
    Block PBlock7331 = new_Block_with(empty_Array, empty_Array, PThreadedCode7332, 1, PSend7333);
    // ifTrue:. 
    Send PSend7330 = new_Send((Optr)PSend7329, SMB_ifTrue_, 1, (Optr)PBlock7331);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend7335 = new_Send((Optr)PBAbstractDictionary_classReference, SMB_new, 0);
    Assign PAssign7334 = new_Assign((Optr)VAR_inst_0_0, (Optr)PSend7335);
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    // keyBlock. 
    Send PSend7336 = new_Send((Optr)self, SMB_keyBlock, 0);
    Symbol SMB_keyBlock_ = new_Symbol(L"keyBlock:");
    // keyBlock:. 
    Send PSend7337 = new_Send((Optr)VAR_inst_0_0, SMB_keyBlock_, 1, (Optr)PSend7336);
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    // valueBlock. 
    Send PSend7338 = new_Send((Optr)self, SMB_valueBlock, 0);
    Symbol SMB_valueBlock_ = new_Symbol(L"valueBlock:");
    // valueBlock:. 
    Send PSend7339 = new_Send((Optr)VAR_inst_0_0, SMB_valueBlock_, 1, (Optr)PSend7338);
    Array PThreadedCode7327 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7328, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send1, (Optr)PSend7329, (Optr)&t_send_ifTrue_, (Optr)PSend7330, (Optr)PBlock7331, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7334, (Optr)&t_push_class_reference, (Optr)PBAbstractDictionary_classReference, (Optr)&t_send0, (Optr)PSend7335, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7336, (Optr)&t_send1, (Optr)PSend7337, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7338, (Optr)&t_send1, (Optr)PSend7339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_inst_0_0, (Optr)&t_method_return);
    Block PBlock7325 = new_Block_with(PArray7326, empty_Array, PThreadedCode7327, 5, PSend7330, PAssign7334, PSend7337, PSend7339, VAR_inst_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7340 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7325);
    Array PThreadedCode7324 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7325, (Optr)&t_send1, (Optr)PSend7340, (Optr)&t_method_return);
    Method PMethod7322 = new_Method_with(empty_Array, PArray7323, empty_Array, PThreadedCode7324, 1, PSend7340);
    
    MethodClosure MC_SMB_baseBenchmark = new_MethodClosure((Method)PMethod7322, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_baseBenchmark, MC_SMB_baseBenchmark);
}


static void init_SMB_keyBlock() {
    Symbol SMB_keyBlock = new_Symbol(L"keyBlock");
    Array PThreadedCode7342 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock, (Optr)&t_method_return);
    Method PMethod7341 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7342, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock);
    
    MethodClosure MC_SMB_keyBlock = new_MethodClosure((Method)PMethod7341, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_keyBlock, MC_SMB_keyBlock);
}


static void init_SMB_dict_() {
    Symbol SMB_dict_ = new_Symbol(L"dict:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7344 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7346 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7345 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7346, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7343 = new_Method_with(PArray7344, empty_Array, empty_Array, PThreadedCode7345, 2, PAssign7346, self);
    
    MethodClosure MC_SMB_dict_ = new_MethodClosure((Method)PMethod7343, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_dict_, MC_SMB_dict_);
}


static void init_SMB_valueBlock() {
    Symbol SMB_valueBlock = new_Symbol(L"valueBlock");
    Array PThreadedCode7348 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock, (Optr)&t_method_return);
    Method PMethod7347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7348, 1, slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock);
    
    MethodClosure MC_SMB_valueBlock = new_MethodClosure((Method)PMethod7347, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_valueBlock, MC_SMB_valueBlock);
}


static void init_SMB_benchAtIfAbsentPut() {
    Symbol SMB_benchAtIfAbsentPut = new_Symbol(L"benchAtIfAbsentPut");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7351 = new_Send((Optr)self, SMB_dictSize, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7352 = new_Send((Optr)PSend7351, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7354 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7356 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7357 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    // at:ifAbsentPut:. 
    Send PSend7358 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_ifAbsentPut_, 2, (Optr)PSend7356, (Optr)PSend7357);
    Array PThreadedCode7355 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7356, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7357, (Optr)&t_send2, (Optr)PSend7358, (Optr)&t_method_return);
    Block PBlock7353 = new_Block_with(PArray7354, empty_Array, PThreadedCode7355, 1, PSend7358);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7359 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7352, (Optr)PBlock7353);
    Array PThreadedCode7350 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7351, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7352, (Optr)&t_push_closure, (Optr)PBlock7353, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7359, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7350, 2, PSend7359, self);
    
    MethodClosure MC_SMB_benchAtIfAbsentPut = new_MethodClosure((Method)PMethod7349, PBenchmark_Collection_Dictionary_AbstractDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, SMB_benchAtIfAbsentPut, MC_SMB_benchAtIfAbsentPut);
}

>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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
    init_SMB_benchIncludes();
    init_SMB_benchIncludesKey();
    init_SMB_key_();
    init_SMB_benchKeysAndValuesDo();
    init_SMB_keyBlock_();
    init_SMB_benchAtPutNew();
    init_SMB_benchDo();
    init_SMB_dictSize_();
<<<<<<< HEAD
    init_SMB_key_();
    init_SMB_keyBlock_();
=======
    init_SMB_tearDown();
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    init_SMB_valueBlock_();
    init_SMB_dict();
    init_SMB_benchIncludesKeyNew();
    init_SMB_dictSize();
<<<<<<< HEAD
    init_SMB_initialize();
    init_SMB_value_();
    init_SMB_benchDo();
    init_SMB_keyBlock();
    init_SMB_baseBenchmark();
    init_SMB_benchAtIfAbsentPut();
    init_SMB_tearDown();
    init_SMB_benchRemoveKey();
    init_SMB_setUp();
    init_SMB_valueBlock();
    init_SMB_benchIncludesKeyExisting();
    init_SMB_dict_();
    init_SMB_benchIncludes();
    init_SMB_benchAtPutNew();
    init_SMB_benchAtPut();
=======
    init_SMB_benchAtPutExisting();
    init_SMB_benchAtPut();
    init_SMB_value_();
    init_SMB_initialize();
    init_SMB_baseBenchmark();
    init_SMB_keyBlock();
    init_SMB_dict_();
    init_SMB_valueBlock();
    init_SMB_benchAtIfAbsentPut();
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    
}