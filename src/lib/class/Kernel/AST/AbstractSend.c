#include <lib/class/Kernel/AST/AbstractSend.h>


Optr layout_Kernel_AST_AbstractSend_Class_class;
Optr slot_Kernel_AST_AbstractSend_cache;
Optr slot_Kernel_AST_AbstractSend_message;
Optr layout_Kernel_AST_AbstractSend;


static void init_SMB_inlineCache() {
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    Array PThreadedCode4333 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)&t_method_return);
    Method PMethod4332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4333, 1, slot_Kernel_AST_AbstractSend_cache);
    
    MethodClosure MC_SMB_inlineCache = new_MethodClosure((Method)PMethod4332, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inlineCache, MC_SMB_inlineCache);
}


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4335 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4337 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4336 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4337, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4334 = new_Method_with(PArray4335, empty_Array, empty_Array, PThreadedCode4336, 2, PAssign4337, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod4334, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4339 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4341 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4343 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4345 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4346 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4345, (Optr)VAR_index_1_0);
    Array PThreadedCode4344 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4345, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4346, (Optr)&t_method_return);
    Block PBlock4342 = new_Block_with(PArray4343, empty_Array, PThreadedCode4344, 1, PSend4346);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4347 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4341, (Optr)PBlock4342);
    Array PThreadedCode4340 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4341, (Optr)&t_push_closure, (Optr)PBlock4342, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4347, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4338 = new_Method_with(PArray4339, empty_Array, empty_Array, PThreadedCode4340, 2, PSend4347, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4338, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4349 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4351 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray4353 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4355 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4356 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend4355);
    Array PThreadedCode4354 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend4355, (Optr)&t_send2, (Optr)PSend4356, (Optr)&t_method_return);
    Block PBlock4352 = new_Block_with(PArray4353, empty_Array, PThreadedCode4354, 1, PSend4356);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4357 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4351, (Optr)PBlock4352);
    Array PThreadedCode4350 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4351, (Optr)&t_push_closure, (Optr)PBlock4352, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4357, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4348 = new_Method_with(PArray4349, empty_Array, empty_Array, PThreadedCode4350, 2, PSend4357, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod4348, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4361 = new_Send((Optr)PInlineCache_classReference, SMB_new, 0);
    Assign PAssign4360 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)PSend4361);
    Array PThreadedCode4359 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign4360, (Optr)&t_push_class_reference, (Optr)PInlineCache_classReference, (Optr)&t_send0, (Optr)PSend4361, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4359, 2, PAssign4360, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4358, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray4363 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4366 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4368 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4369 = new_Send((Optr)VAR_aSuper_0_0, SMB_species, 0);
    // =. 
    Send PSend4370 = new_Send((Optr)PSend4368, SMB__equals_, 1, (Optr)PSend4369);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4374 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4373 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4374, (Optr)&t_block_return);
    Block PBlock4372 = new_Block_with(empty_Array, empty_Array, PThreadedCode4373, 1, PSend4374);
    // ifFalse:. 
    Send PSend4371 = new_Send((Optr)PSend4370, SMB_ifFalse_, 1, (Optr)PBlock4372);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4375 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4376 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // =. 
    Send PSend4377 = new_Send((Optr)PSend4375, SMB__equals_, 1, (Optr)PSend4376);
    // escape:. 
    Send PSend4381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4380 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4381, (Optr)&t_block_return);
    Block PBlock4379 = new_Block_with(empty_Array, empty_Array, PThreadedCode4380, 1, PSend4381);
    // ifFalse:. 
    Send PSend4378 = new_Send((Optr)PSend4377, SMB_ifFalse_, 1, (Optr)PBlock4379);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend4382 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    // =. 
    Send PSend4383 = new_Send((Optr)slot_Kernel_AST_AbstractSend_message, SMB__equals_, 1, (Optr)PSend4382);
    // escape:. 
    Send PSend4387 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4386 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4387, (Optr)&t_block_return);
    Block PBlock4385 = new_Block_with(empty_Array, empty_Array, PThreadedCode4386, 1, PSend4387);
    // ifFalse:. 
    Send PSend4384 = new_Send((Optr)PSend4383, SMB_ifFalse_, 1, (Optr)PBlock4385);
    Variable VAR_expression_2_0 = new_Variable_named(L"expression", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4389 = new_Array_with(2, (Optr)VAR_expression_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4391 = new_Send((Optr)VAR_aSuper_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4392 = new_Send((Optr)VAR_expression_2_0, SMB__equals_, 1, (Optr)PSend4391);
    // escape:. 
    Send PSend4396 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4396, (Optr)&t_block_return);
    Block PBlock4394 = new_Block_with(empty_Array, empty_Array, PThreadedCode4395, 1, PSend4396);
    // ifFalse:. 
    Send PSend4393 = new_Send((Optr)PSend4392, SMB_ifFalse_, 1, (Optr)PBlock4394);
    Array PThreadedCode4390 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_expression_2_0, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4391, (Optr)&t_send1, (Optr)PSend4392, (Optr)&t_send_ifFalse_, (Optr)PSend4393, (Optr)PBlock4394, (Optr)&t_method_return);
    Block PBlock4388 = new_Block_with(PArray4389, empty_Array, PThreadedCode4390, 1, PSend4393);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4397 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4388);
    Array PThreadedCode4367 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4368, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4369, (Optr)&t_send1, (Optr)PSend4370, (Optr)&t_send_ifFalse_, (Optr)PSend4371, (Optr)PBlock4372, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4375, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4376, (Optr)&t_send1, (Optr)PSend4377, (Optr)&t_send_ifFalse_, (Optr)PSend4378, (Optr)PBlock4379, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4382, (Optr)&t_send1, (Optr)PSend4383, (Optr)&t_send_ifFalse_, (Optr)PSend4384, (Optr)PBlock4385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4388, (Optr)&t_send1, (Optr)PSend4397, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4365 = new_Block_with(PArray4366, empty_Array, PThreadedCode4367, 5, PSend4371, PSend4378, PSend4384, PSend4397, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4398 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4365);
    Array PThreadedCode4364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4365, (Optr)&t_send1, (Optr)PSend4398, (Optr)&t_method_return);
    Method PMethod4362 = new_Method_with(PArray4363, empty_Array, empty_Array, PThreadedCode4364, 1, PSend4398);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4362, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4400 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4402 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4404 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4406 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4407 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4406);
    Array PThreadedCode4405 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4406, (Optr)&t_send1, (Optr)PSend4407, (Optr)&t_method_return);
    Block PBlock4403 = new_Block_with(PArray4404, empty_Array, PThreadedCode4405, 1, PSend4407);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4408 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4402, (Optr)PBlock4403);
    Array PThreadedCode4401 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4402, (Optr)&t_push_closure, (Optr)PBlock4403, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4408, (Optr)&t_method_return);
    Method PMethod4399 = new_Method_with(PArray4400, empty_Array, empty_Array, PThreadedCode4401, 1, PSend4408);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4399, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4410 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4411 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4413 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4415 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4418 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4417 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4418);
    Array PThreadedCode4416 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4417, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4418, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4414 = new_Block_with(PArray4415, empty_Array, PThreadedCode4416, 1, PAssign4417);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4419 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4414);
    Array PThreadedCode4412 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4413, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4414, (Optr)&t_send1, (Optr)PSend4419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4409 = new_Method_with(PArray4410, PArray4411, empty_Array, PThreadedCode4412, 3, PAssign4413, PSend4419, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4409, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode4421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_method_return);
    Method PMethod4420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4421, 1, slot_Kernel_AST_AbstractSend_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod4420, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode4423 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4423, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod4422, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_arguments, MC_SMB_arguments);
}

void init_Kernel_AST_PAbstractSend_layout() {
    layout_Kernel_AST_AbstractSend_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_AbstractSend_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_AbstractSend_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_AbstractSend_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_AbstractSend_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_AbstractSend_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractSend = new_Symbol(L"AbstractSend");
    slot_Kernel_AST_AbstractSend_cache = (Optr)new_Slot(0, L"cache");
    slot_Kernel_AST_AbstractSend_message = (Optr)new_Slot(1, L"message");
    layout_Kernel_AST_AbstractSend = (Optr)create_layout_with_vars(ArrayLayout_Class, 2);
    ((Array)layout_Kernel_AST_AbstractSend)->values[0] = slot_Kernel_AST_AbstractSend_cache;
    ((Array)layout_Kernel_AST_AbstractSend)->values[1] = slot_Kernel_AST_AbstractSend_message;
    Kernel_AST_AbstractSend_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_AbstractSend_Class_class);
    Kernel_AST_AbstractSend_Class->layout = layout_Kernel_AST_AbstractSend;
    Kernel_AST_AbstractSend_Class->name = SMB_AbstractSend;
    
}

void init_Kernel_AST_PAbstractSend_methods() {
    init_SMB_inlineCache();
    init_SMB_message_();
    init_SMB_withIndexDo_();
    init_SMB_arguments_();
    init_SMB_initialize();
    init_SMB__equals_();
    init_SMB_do_();
    init_SMB_inject_into_();
    init_SMB_message();
    init_SMB_arguments();
    
}