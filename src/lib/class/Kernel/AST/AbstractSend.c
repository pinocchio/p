#include <lib/class/Kernel/AST/AbstractSend.h>


Optr layout_Kernel_AST_AbstractSend_Class_class;
Optr slot_Kernel_AST_AbstractSend_cache;
Optr slot_Kernel_AST_AbstractSend_message;
Optr layout_Kernel_AST_AbstractSend;


static void init_SMB_inlineCache() {
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    Array PThreadedCode4336 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)&t_method_return);
    Method PMethod4335 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4336, 1, slot_Kernel_AST_AbstractSend_cache);
    
    MethodClosure MC_SMB_inlineCache = new_MethodClosure((Method)PMethod4335, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inlineCache, MC_SMB_inlineCache);
}


static void init_SMB_message_() {
    Symbol SMB_message_ = new_Symbol(L"message:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4338 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4340 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_message, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4340, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4337 = new_Method_with(PArray4338, empty_Array, empty_Array, PThreadedCode4339, 2, PAssign4340, self);
    
    MethodClosure MC_SMB_message_ = new_MethodClosure((Method)PMethod4337, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message_, MC_SMB_message_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4342 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4344 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4346 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4348 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4349 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4348, (Optr)VAR_index_1_0);
    Array PThreadedCode4347 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4348, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4349, (Optr)&t_method_return);
    Block PBlock4345 = new_Block_with(PArray4346, empty_Array, PThreadedCode4347, 1, PSend4349);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4350 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4344, (Optr)PBlock4345);
    Array PThreadedCode4343 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4344, (Optr)&t_push_closure, (Optr)PBlock4345, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4350, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4341 = new_Method_with(PArray4342, empty_Array, empty_Array, PThreadedCode4343, 2, PSend4350, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4341, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_arguments_() {
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4352 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4354 = new_Send((Optr)VAR_anObject_0_0, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray4356 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4358 = new_Send((Optr)VAR_anObject_0_0, SMB_at_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4359 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend4358);
    Array PThreadedCode4357 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend4358, (Optr)&t_send2, (Optr)PSend4359, (Optr)&t_method_return);
    Block PBlock4355 = new_Block_with(PArray4356, empty_Array, PThreadedCode4357, 1, PSend4359);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4360 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4354, (Optr)PBlock4355);
    Array PThreadedCode4353 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend4354, (Optr)&t_push_closure, (Optr)PBlock4355, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4351 = new_Method_with(PArray4352, empty_Array, empty_Array, PThreadedCode4353, 2, PSend4360, self);
    
    MethodClosure MC_SMB_arguments_ = new_MethodClosure((Method)PMethod4351, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_arguments_, MC_SMB_arguments_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend4364 = new_Send((Optr)PInlineCache_classReference, SMB_new, 0);
    Assign PAssign4363 = new_Assign((Optr)slot_Kernel_AST_AbstractSend_cache, (Optr)PSend4364);
    Array PThreadedCode4362 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign4363, (Optr)&t_push_class_reference, (Optr)PInlineCache_classReference, (Optr)&t_send0, (Optr)PSend4364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4361 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4362, 2, PAssign4363, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4361, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray4366 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4369 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4371 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4372 = new_Send((Optr)VAR_aSuper_0_0, SMB_species, 0);
    // =. 
    Send PSend4373 = new_Send((Optr)PSend4371, SMB__equals_, 1, (Optr)PSend4372);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4377 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4376 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4377, (Optr)&t_block_return);
    Block PBlock4375 = new_Block_with(empty_Array, empty_Array, PThreadedCode4376, 1, PSend4377);
    // ifFalse:. 
    Send PSend4374 = new_Send((Optr)PSend4373, SMB_ifFalse_, 1, (Optr)PBlock4375);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4378 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4379 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // =. 
    Send PSend4380 = new_Send((Optr)PSend4378, SMB__equals_, 1, (Optr)PSend4379);
    // escape:. 
    Send PSend4384 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4383 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4384, (Optr)&t_block_return);
    Block PBlock4382 = new_Block_with(empty_Array, empty_Array, PThreadedCode4383, 1, PSend4384);
    // ifFalse:. 
    Send PSend4381 = new_Send((Optr)PSend4380, SMB_ifFalse_, 1, (Optr)PBlock4382);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend4385 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    // =. 
    Send PSend4386 = new_Send((Optr)slot_Kernel_AST_AbstractSend_message, SMB__equals_, 1, (Optr)PSend4385);
    // escape:. 
    Send PSend4390 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4389 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4390, (Optr)&t_block_return);
    Block PBlock4388 = new_Block_with(empty_Array, empty_Array, PThreadedCode4389, 1, PSend4390);
    // ifFalse:. 
    Send PSend4387 = new_Send((Optr)PSend4386, SMB_ifFalse_, 1, (Optr)PBlock4388);
    Variable VAR_expression_2_0 = new_Variable_named(L"expression", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4392 = new_Array_with(2, (Optr)VAR_expression_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4394 = new_Send((Optr)VAR_aSuper_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4395 = new_Send((Optr)VAR_expression_2_0, SMB__equals_, 1, (Optr)PSend4394);
    // escape:. 
    Send PSend4399 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4398 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4399, (Optr)&t_block_return);
    Block PBlock4397 = new_Block_with(empty_Array, empty_Array, PThreadedCode4398, 1, PSend4399);
    // ifFalse:. 
    Send PSend4396 = new_Send((Optr)PSend4395, SMB_ifFalse_, 1, (Optr)PBlock4397);
    Array PThreadedCode4393 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_expression_2_0, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4394, (Optr)&t_send1, (Optr)PSend4395, (Optr)&t_send_ifFalse_, (Optr)PSend4396, (Optr)PBlock4397, (Optr)&t_method_return);
    Block PBlock4391 = new_Block_with(PArray4392, empty_Array, PThreadedCode4393, 1, PSend4396);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4400 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4391);
    Array PThreadedCode4370 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4371, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4372, (Optr)&t_send1, (Optr)PSend4373, (Optr)&t_send_ifFalse_, (Optr)PSend4374, (Optr)PBlock4375, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4378, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4379, (Optr)&t_send1, (Optr)PSend4380, (Optr)&t_send_ifFalse_, (Optr)PSend4381, (Optr)PBlock4382, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend4385, (Optr)&t_send1, (Optr)PSend4386, (Optr)&t_send_ifFalse_, (Optr)PSend4387, (Optr)PBlock4388, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4391, (Optr)&t_send1, (Optr)PSend4400, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4368 = new_Block_with(PArray4369, empty_Array, PThreadedCode4370, 5, PSend4374, PSend4381, PSend4387, PSend4400, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4401 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4368);
    Array PThreadedCode4367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4368, (Optr)&t_send1, (Optr)PSend4401, (Optr)&t_method_return);
    Method PMethod4365 = new_Method_with(PArray4366, empty_Array, empty_Array, PThreadedCode4367, 1, PSend4401);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4365, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4403 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4405 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4407 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4409 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4410 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4409);
    Array PThreadedCode4408 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4409, (Optr)&t_send1, (Optr)PSend4410, (Optr)&t_method_return);
    Block PBlock4406 = new_Block_with(PArray4407, empty_Array, PThreadedCode4408, 1, PSend4410);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4411 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4405, (Optr)PBlock4406);
    Array PThreadedCode4404 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4405, (Optr)&t_push_closure, (Optr)PBlock4406, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4411, (Optr)&t_method_return);
    Method PMethod4402 = new_Method_with(PArray4403, empty_Array, empty_Array, PThreadedCode4404, 1, PSend4411);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4402, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4413 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4414 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4416 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4418 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4421 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4420 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4421);
    Array PThreadedCode4419 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4420, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4421, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4417 = new_Block_with(PArray4418, empty_Array, PThreadedCode4419, 1, PAssign4420);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4422 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4417);
    Array PThreadedCode4415 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4416, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4417, (Optr)&t_send1, (Optr)PSend4422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4412 = new_Method_with(PArray4413, PArray4414, empty_Array, PThreadedCode4415, 3, PAssign4416, PSend4422, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4412, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_message() {
    Symbol SMB_message = new_Symbol(L"message");
    Array PThreadedCode4424 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_AbstractSend_message, (Optr)&t_method_return);
    Method PMethod4423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4424, 1, slot_Kernel_AST_AbstractSend_message);
    
    MethodClosure MC_SMB_message = new_MethodClosure((Method)PMethod4423, Kernel_AST_AbstractSend_Class);
    store_method(Kernel_AST_AbstractSend_Class, SMB_message, MC_SMB_message);
}


static void init_SMB_arguments() {
    Symbol SMB_arguments = new_Symbol(L"arguments");
    Array PThreadedCode4426 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod4425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4426, 1, self);
    
    MethodClosure MC_SMB_arguments = new_MethodClosure((Method)PMethod4425, Kernel_AST_AbstractSend_Class);
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