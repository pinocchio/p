#include <lib/class/Kernel/AST/AbstractSend.h>


Optr layout_Kernel_AST_AbstractSend_Class_class;
Optr slot_Kernel_AST_AbstractSend_cache;
Optr slot_Kernel_AST_AbstractSend_message;
Optr layout_Kernel_AST_AbstractSend;


static void init_SMB_inlineCache() {
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    Array PThreadedCode4334 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)&t_method_return);
    Method PMethod4333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4334, 1, slot_Kernel_AST_AbstractSend_cache);
    
    MethodClosure MC_SMB_inlineCache = new_MethodClosure((Method)PMethod4333, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inlineCache, MC_SMB_inlineCache);
}


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4336 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4338 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4337 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4338, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4335 = new_Method_with(PArray4336, empty_Array, empty_Array, PThreadedCode4337, 2, PAssign4338, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod4335, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4340 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4342 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4344 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4346 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4347 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4346, (Optr)VAR_index_1_0);
    Array PThreadedCode4345 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4346, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4347, (Optr)&t_method_return);
    Block PBlock4343 = new_Block_with(PArray4344, empty_Array, PThreadedCode4345, 1, PSend4347);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4348 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4342, (Optr)PBlock4343);
    Array PThreadedCode4341 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4342, (Optr)&t_push_closure, (Optr)PBlock4343, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4348, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4339 = new_Method_with(PArray4340, empty_Array, empty_Array, PThreadedCode4341, 2, PSend4348, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4339, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4350 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4352 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray4354 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4356 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4357 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend4356);
    Array PThreadedCode4355 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend4356, (Optr)&t_send2, (Optr)PSend4357, (Optr)&t_method_return);
    Block PBlock4353 = new_Block_with(PArray4354, empty_Array, PThreadedCode4355, 1, PSend4357);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4358 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4352, (Optr)PBlock4353);
    Array PThreadedCode4351 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4352, (Optr)&t_push_closure, (Optr)PBlock4353, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4358, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4349 = new_Method_with(PArray4350, empty_Array, empty_Array, PThreadedCode4351, 2, PSend4358, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod4349, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4362 = new_Send((Optr)PInlineCache_classReference, SMB_new, 0);
    Assign PAssign4361 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)PSend4362);
    Array PThreadedCode4360 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign4361, (Optr)&t_push_class_reference, (Optr)PInlineCache_classReference, (Optr)&t_send0, (Optr)PSend4362, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4359 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4360, 2, PAssign4361, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4359, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray4364 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4367 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4369 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4370 = new_Send((Optr)VAR_aSuper_0_0, SMB_species, 0);
    // =. 
    Send PSend4371 = new_Send((Optr)PSend4369, SMB__equals_, 1, (Optr)PSend4370);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4374 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4375, (Optr)&t_block_return);
    Block PBlock4373 = new_Block_with(empty_Array, empty_Array, PThreadedCode4374, 1, PSend4375);
    // ifFalse:. 
    Send PSend4372 = new_Send((Optr)PSend4371, SMB_ifFalse_, 1, (Optr)PBlock4373);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4376 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4377 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // =. 
    Send PSend4378 = new_Send((Optr)PSend4376, SMB__equals_, 1, (Optr)PSend4377);
    // escape:. 
    Send PSend4382 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4381 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4382, (Optr)&t_block_return);
    Block PBlock4380 = new_Block_with(empty_Array, empty_Array, PThreadedCode4381, 1, PSend4382);
    // ifFalse:. 
    Send PSend4379 = new_Send((Optr)PSend4378, SMB_ifFalse_, 1, (Optr)PBlock4380);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend4383 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    // =. 
    Send PSend4384 = new_Send((Optr)slot_Kernel_AST_AbstractSend_message, SMB__equals_, 1, (Optr)PSend4383);
    // escape:. 
    Send PSend4388 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4387 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4388, (Optr)&t_block_return);
    Block PBlock4386 = new_Block_with(empty_Array, empty_Array, PThreadedCode4387, 1, PSend4388);
    // ifFalse:. 
    Send PSend4385 = new_Send((Optr)PSend4384, SMB_ifFalse_, 1, (Optr)PBlock4386);
    Variable VAR_expression_2_0 = new_Variable_named(L"expression", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4390 = new_Array_with(2, (Optr)VAR_expression_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4392 = new_Send((Optr)VAR_aSuper_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4393 = new_Send((Optr)VAR_expression_2_0, SMB__equals_, 1, (Optr)PSend4392);
    // escape:. 
    Send PSend4397 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4396 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4397, (Optr)&t_block_return);
    Block PBlock4395 = new_Block_with(empty_Array, empty_Array, PThreadedCode4396, 1, PSend4397);
    // ifFalse:. 
    Send PSend4394 = new_Send((Optr)PSend4393, SMB_ifFalse_, 1, (Optr)PBlock4395);
    Array PThreadedCode4391 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_expression_2_0, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4392, (Optr)&t_send1, (Optr)PSend4393, (Optr)&t_send_ifFalse_, (Optr)PSend4394, (Optr)PBlock4395, (Optr)&t_method_return);
    Block PBlock4389 = new_Block_with(PArray4390, empty_Array, PThreadedCode4391, 1, PSend4394);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4398 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4389);
    Array PThreadedCode4368 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4369, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4370, (Optr)&t_send1, (Optr)PSend4371, (Optr)&t_send_ifFalse_, (Optr)PSend4372, (Optr)PBlock4373, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4376, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4377, (Optr)&t_send1, (Optr)PSend4378, (Optr)&t_send_ifFalse_, (Optr)PSend4379, (Optr)PBlock4380, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4383, (Optr)&t_send1, (Optr)PSend4384, (Optr)&t_send_ifFalse_, (Optr)PSend4385, (Optr)PBlock4386, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4389, (Optr)&t_send1, (Optr)PSend4398, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4366 = new_Block_with(PArray4367, empty_Array, PThreadedCode4368, 5, PSend4372, PSend4379, PSend4385, PSend4398, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4399 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4366);
    Array PThreadedCode4365 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4366, (Optr)&t_send1, (Optr)PSend4399, (Optr)&t_method_return);
    Method PMethod4363 = new_Method_with(PArray4364, empty_Array, empty_Array, PThreadedCode4365, 1, PSend4399);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4363, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4401 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4403 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4405 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4407 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4408 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4407);
    Array PThreadedCode4406 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4407, (Optr)&t_send1, (Optr)PSend4408, (Optr)&t_method_return);
    Block PBlock4404 = new_Block_with(PArray4405, empty_Array, PThreadedCode4406, 1, PSend4408);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4409 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4403, (Optr)PBlock4404);
    Array PThreadedCode4402 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4403, (Optr)&t_push_closure, (Optr)PBlock4404, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4409, (Optr)&t_method_return);
    Method PMethod4400 = new_Method_with(PArray4401, empty_Array, empty_Array, PThreadedCode4402, 1, PSend4409);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4400, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4411 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4412 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4414 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4416 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4419 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4418 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4419);
    Array PThreadedCode4417 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4418, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4419, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4415 = new_Block_with(PArray4416, empty_Array, PThreadedCode4417, 1, PAssign4418);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4420 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4415);
    Array PThreadedCode4413 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4414, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4415, (Optr)&t_send1, (Optr)PSend4420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4410 = new_Method_with(PArray4411, PArray4412, empty_Array, PThreadedCode4413, 3, PAssign4414, PSend4420, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4410, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode4422 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_method_return);
    Method PMethod4421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4422, 1, slot_Kernel_AST_AbstractSend_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod4421, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode4424 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4424, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod4423, Kernel_AST_AbstractSend_Class);
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