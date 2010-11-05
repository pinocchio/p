#include <lib/class/Kernel/AST/Block.h>


Optr layout_Kernel_AST_Block_Class_class;
Optr slot_Kernel_AST_Block_params;
Optr slot_Kernel_AST_Block_locals;
Optr slot_Kernel_AST_Block_threaded;
Optr layout_Kernel_AST_Block;


static void init_SMB_params_locals_() {
    Symbol SMB_params_locals_ = new_Symbol(L"params:locals:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Variable VAR_newLocals_0_1 = new_Variable_named(L"newLocals", 0);
    Array PArray4158 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4159 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4162 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4164 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4165 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4164);
    Array PThreadedCode4163 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4164, (Optr)&t_send1, (Optr)PSend4165, (Optr)&t_method_return);
    Block PBlock4161 = new_Block_with(PArray4162, empty_Array, PThreadedCode4163, 1, PSend4165);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4166 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4161);
    Assign PAssign4167 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4169 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4168 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4169);
    Array PArray4171 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4173 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4174 = new_Send((Optr)PSend4173, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4175 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4174);
    Array PThreadedCode4172 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4173, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4174, (Optr)&t_send1, (Optr)PSend4175, (Optr)&t_method_return);
    Block PBlock4170 = new_Block_with(PArray4171, empty_Array, PThreadedCode4172, 1, PSend4175);
    // withIndexDo:. 
    Send PSend4176 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4170);
    Assign PAssign4177 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4160 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4161, (Optr)&t_send1, (Optr)PSend4166, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4167, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4168, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4169, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4170, (Optr)&t_send1, (Optr)PSend4176, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4177, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4157 = new_Method_with(PArray4158, PArray4159, empty_Array, PThreadedCode4160, 6, PSend4166, PAssign4167, PAssign4168, PSend4176, PAssign4177, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4157, Block_Class);
    store_method(Block_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4180 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4181 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4180);
    Array PThreadedCode4179 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4180, (Optr)&t_send1, (Optr)PSend4181, (Optr)&t_method_return);
    Method PMethod4178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4179, 1, PSend4181);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4178, Block_Class);
    store_method(Block_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newLocals_0_0 = new_Variable_named(L"newLocals", 0);
    Array PArray4183 = new_Array_with(1, (Optr)VAR_newLocals_0_0);
    Assign PAssign4185 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_0);
    Array PThreadedCode4184 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4185, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4182 = new_Method_with(PArray4183, empty_Array, empty_Array, PThreadedCode4184, 2, PAssign4185, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4182, Block_Class);
    store_method(Block_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4187 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_method_return);
    Method PMethod4186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4187, 1, slot_Kernel_AST_Block_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4186, Block_Class);
    store_method(Block_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_body = new_Symbol(L"body");
    // body. 
    Send PSend4190 = new_Send((Optr)self, SMB_body, 0);
    // isEmpty. 
    Send PSend4191 = new_Send((Optr)PSend4190, SMB_isEmpty, 0);
    Array PThreadedCode4189 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4190, (Optr)&t_send0, (Optr)PSend4191, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4188 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4189, 2, PSend4191, self);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod4188, Block_Class);
    store_method(Block_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4194 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4193 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4194, (Optr)&t_method_return);
    Method PMethod4192 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4193, 1, PSend4194);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4192, Block_Class);
    store_method(Block_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Array PArray4196 = new_Array_with(1, (Optr)VAR_newParams_0_0);
    Assign PAssign4198 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Array PThreadedCode4197 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4198, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4195 = new_Method_with(PArray4196, empty_Array, empty_Array, PThreadedCode4197, 2, PAssign4198, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4195, Block_Class);
    store_method(Block_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4200 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4202 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4204 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4206 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4207 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4206, (Optr)VAR_index_1_0);
    Array PThreadedCode4205 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4206, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4207, (Optr)&t_method_return);
    Block PBlock4203 = new_Block_with(PArray4204, empty_Array, PThreadedCode4205, 1, PSend4207);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4208 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4202, (Optr)PBlock4203);
    Array PThreadedCode4201 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4202, (Optr)&t_push_closure, (Optr)PBlock4203, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4208, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4199 = new_Method_with(PArray4200, empty_Array, empty_Array, PThreadedCode4201, 2, PSend4208, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4199, Block_Class);
    store_method(Block_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_isScoped() {
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4211 = new_Send((Optr)self, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4212 = new_Send((Optr)PSend4211, SMB_size, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend4213 = new_Send((Optr)PSend4212, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4216 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4217 = new_Send((Optr)PSend4216, SMB_size, 0);
    // ~=. 
    Send PSend4218 = new_Send((Optr)PSend4217, SMB__notEquals_, 1, (Optr)int_0_Const);
    Array PThreadedCode4215 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4216, (Optr)&t_send0, (Optr)PSend4217, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4218, (Optr)&t_block_return);
    Block PBlock4214 = new_Block_with(empty_Array, empty_Array, PThreadedCode4215, 1, PSend4218);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend4219 = new_Send((Optr)PSend4213, SMB_or_, 1, (Optr)PBlock4214);
    Array PThreadedCode4210 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4211, (Optr)&t_send0, (Optr)PSend4212, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4213, (Optr)&t_push_closure, (Optr)PBlock4214, (Optr)&t_send1, (Optr)PSend4219, (Optr)&t_method_return);
    Method PMethod4209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4210, 1, PSend4219);
    
    MethodClosure MC_SMB_isScoped = new_MethodClosure((Method)PMethod4209, Block_Class);
    store_method(Block_Class, SMB_isScoped, MC_SMB_isScoped);
}


static void init_SMB_asMethod() {
    Symbol SMB_asMethod = new_Symbol(L"asMethod");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray4221 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4225 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend4224 = new_Send((Optr)PMethod_classReference, SMB_new_, 1, (Optr)PSend4225);
    Assign PAssign4223 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend4224);
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    // locals:. 
    Send PSend4226 = new_Send((Optr)VAR_result_0_0, SMB_locals_, 1, (Optr)slot_Kernel_AST_Block_locals);
    Symbol SMB_params_ = new_Symbol(L"params:");
    // params:. 
    Send PSend4227 = new_Send((Optr)VAR_result_0_0, SMB_params_, 1, (Optr)slot_Kernel_AST_Block_params);
    Variable VAR_exp_1_0 = new_Variable_named(L"exp", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4229 = new_Array_with(2, (Optr)VAR_exp_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4231 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_exp_1_0);
    Array PThreadedCode4230 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_exp_1_0, (Optr)&t_send2, (Optr)PSend4231, (Optr)&t_method_return);
    Block PBlock4228 = new_Block_with(PArray4229, empty_Array, PThreadedCode4230, 1, PSend4231);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4232 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4228);
    Array PThreadedCode4222 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign4223, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4225, (Optr)&t_send1, (Optr)PSend4224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_send1, (Optr)PSend4226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send1, (Optr)PSend4227, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4228, (Optr)&t_send1, (Optr)PSend4232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod4220 = new_Method_with(empty_Array, PArray4221, empty_Array, PThreadedCode4222, 5, PAssign4223, PSend4226, PSend4227, PSend4232, VAR_result_0_0);
    
    MethodClosure MC_SMB_asMethod = new_MethodClosure((Method)PMethod4220, Block_Class);
    store_method(Block_Class, SMB_asMethod, MC_SMB_asMethod);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper4235 = new_Super(SMB_initialize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend4237 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign4236 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)PSend4237);
    Array PThreadedCode4234 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper4235, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4236, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4237, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4233 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4234, 3, PSuper4235, PAssign4236, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4233, Block_Class);
    store_method(Block_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4239 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4241 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4240 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4241, (Optr)&t_method_return);
    Method PMethod4238 = new_Method_with(PArray4239, empty_Array, empty_Array, PThreadedCode4240, 1, PSend4241);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4238, Block_Class);
    store_method(Block_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4243 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4246 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4248 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4249 = new_Send((Optr)VAR_aBlock_0_0, SMB_species, 0);
    // =. 
    Send PSend4250 = new_Send((Optr)PSend4248, SMB__equals_, 1, (Optr)PSend4249);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4254 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4253 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4254, (Optr)&t_block_return);
    Block PBlock4252 = new_Block_with(empty_Array, empty_Array, PThreadedCode4253, 1, PSend4254);
    // ifFalse:. 
    Send PSend4251 = new_Send((Optr)PSend4250, SMB_ifFalse_, 1, (Optr)PBlock4252);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4255 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4256 = new_Send((Optr)VAR_aBlock_0_0, SMB_size, 0);
    // =. 
    Send PSend4257 = new_Send((Optr)PSend4255, SMB__equals_, 1, (Optr)PSend4256);
    // escape:. 
    Send PSend4261 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4260 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4261, (Optr)&t_block_return);
    Block PBlock4259 = new_Block_with(empty_Array, empty_Array, PThreadedCode4260, 1, PSend4261);
    // ifFalse:. 
    Send PSend4258 = new_Send((Optr)PSend4257, SMB_ifFalse_, 1, (Optr)PBlock4259);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4262 = new_Send((Optr)self, SMB_params, 0);
    // size. 
    Send PSend4263 = new_Send((Optr)PSend4262, SMB_size, 0);
    // params. 
    Send PSend4264 = new_Send((Optr)VAR_aBlock_0_0, SMB_params, 0);
    // size. 
    Send PSend4265 = new_Send((Optr)PSend4264, SMB_size, 0);
    // =. 
    Send PSend4266 = new_Send((Optr)PSend4263, SMB__equals_, 1, (Optr)PSend4265);
    // escape:. 
    Send PSend4270 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4270, (Optr)&t_block_return);
    Block PBlock4268 = new_Block_with(empty_Array, empty_Array, PThreadedCode4269, 1, PSend4270);
    // ifFalse:. 
    Send PSend4267 = new_Send((Optr)PSend4266, SMB_ifFalse_, 1, (Optr)PBlock4268);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4271 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4272 = new_Send((Optr)PSend4271, SMB_size, 0);
    // locals. 
    Send PSend4273 = new_Send((Optr)VAR_aBlock_0_0, SMB_locals, 0);
    // size. 
    Send PSend4274 = new_Send((Optr)PSend4273, SMB_size, 0);
    // =. 
    Send PSend4275 = new_Send((Optr)PSend4272, SMB__equals_, 1, (Optr)PSend4274);
    // escape:. 
    Send PSend4279 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4278 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4279, (Optr)&t_block_return);
    Block PBlock4277 = new_Block_with(empty_Array, empty_Array, PThreadedCode4278, 1, PSend4279);
    // ifFalse:. 
    Send PSend4276 = new_Send((Optr)PSend4275, SMB_ifFalse_, 1, (Optr)PBlock4277);
    Variable VAR_statement_2_0 = new_Variable_named(L"statement", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4281 = new_Array_with(2, (Optr)VAR_statement_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4283 = new_Send((Optr)VAR_aBlock_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4284 = new_Send((Optr)VAR_statement_2_0, SMB__equals_, 1, (Optr)PSend4283);
    // escape:. 
    Send PSend4288 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4287 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4288, (Optr)&t_block_return);
    Block PBlock4286 = new_Block_with(empty_Array, empty_Array, PThreadedCode4287, 1, PSend4288);
    // ifFalse:. 
    Send PSend4285 = new_Send((Optr)PSend4284, SMB_ifFalse_, 1, (Optr)PBlock4286);
    Array PThreadedCode4282 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_statement_2_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4283, (Optr)&t_send1, (Optr)PSend4284, (Optr)&t_send_ifFalse_, (Optr)PSend4285, (Optr)PBlock4286, (Optr)&t_method_return);
    Block PBlock4280 = new_Block_with(PArray4281, empty_Array, PThreadedCode4282, 1, PSend4285);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4289 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4280);
    Array PThreadedCode4247 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4248, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4249, (Optr)&t_send1, (Optr)PSend4250, (Optr)&t_send_ifFalse_, (Optr)PSend4251, (Optr)PBlock4252, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4255, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4256, (Optr)&t_send1, (Optr)PSend4257, (Optr)&t_send_ifFalse_, (Optr)PSend4258, (Optr)PBlock4259, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4262, (Optr)&t_send0, (Optr)PSend4263, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4264, (Optr)&t_send0, (Optr)PSend4265, (Optr)&t_send1, (Optr)PSend4266, (Optr)&t_send_ifFalse_, (Optr)PSend4267, (Optr)PBlock4268, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4271, (Optr)&t_send0, (Optr)PSend4272, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4273, (Optr)&t_send0, (Optr)PSend4274, (Optr)&t_send1, (Optr)PSend4275, (Optr)&t_send_ifFalse_, (Optr)PSend4276, (Optr)PBlock4277, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4280, (Optr)&t_send1, (Optr)PSend4289, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4245 = new_Block_with(PArray4246, empty_Array, PThreadedCode4247, 6, PSend4251, PSend4258, PSend4267, PSend4276, PSend4289, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4290 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4245);
    Array PThreadedCode4244 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4245, (Optr)&t_send1, (Optr)PSend4290, (Optr)&t_method_return);
    Method PMethod4242 = new_Method_with(PArray4243, empty_Array, empty_Array, PThreadedCode4244, 1, PSend4290);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4242, Block_Class);
    store_method(Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4292 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4294 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4296 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4298 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4299 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4298);
    Array PThreadedCode4297 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4298, (Optr)&t_send1, (Optr)PSend4299, (Optr)&t_method_return);
    Block PBlock4295 = new_Block_with(PArray4296, empty_Array, PThreadedCode4297, 1, PSend4299);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4300 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4294, (Optr)PBlock4295);
    Array PThreadedCode4293 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4294, (Optr)&t_push_closure, (Optr)PBlock4295, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4300, (Optr)&t_method_return);
    Method PMethod4291 = new_Method_with(PArray4292, empty_Array, empty_Array, PThreadedCode4293, 1, PSend4300);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4291, Block_Class);
    store_method(Block_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4302 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend4304 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode4303 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4304, (Optr)&t_method_return);
    Method PMethod4301 = new_Method_with(PArray4302, empty_Array, empty_Array, PThreadedCode4303, 1, PSend4304);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4301, Block_Class);
    store_method(Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4306 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4307 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4309 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4311 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4314 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4313 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4314);
    Array PThreadedCode4312 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4313, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4314, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4310 = new_Block_with(PArray4311, empty_Array, PThreadedCode4312, 1, PAssign4313);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4315 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4310);
    Array PThreadedCode4308 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4309, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4310, (Optr)&t_send1, (Optr)PSend4315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4305 = new_Method_with(PArray4306, PArray4307, empty_Array, PThreadedCode4308, 3, PAssign4309, PSend4315, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4305, Block_Class);
    store_method(Block_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4318 = new_Send((Optr)slot_Kernel_AST_Block_params, SMB_size, 0);
    Array PThreadedCode4317 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send0, (Optr)PSend4318, (Optr)&t_method_return);
    Method PMethod4316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4317, 1, PSend4318);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4316, Block_Class);
    store_method(Block_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4320 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4322 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4323 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4322, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4321 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4322, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4323, (Optr)&t_method_return);
    Method PMethod4319 = new_Method_with(PArray4320, empty_Array, empty_Array, PThreadedCode4321, 1, PSend4323);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4319, Block_Class);
    store_method(Block_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4325 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_method_return);
    Method PMethod4324 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4325, 1, slot_Kernel_AST_Block_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4324, Block_Class);
    store_method(Block_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray4327 = new_Array_with(1, (Optr)VAR_code_0_0);
    Assign PAssign4329 = new_Assign((Optr)slot_Kernel_AST_Block_threaded, (Optr)VAR_code_0_0);
    Array PThreadedCode4328 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4329, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4326 = new_Method_with(PArray4327, empty_Array, empty_Array, PThreadedCode4328, 2, PAssign4329, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4326, Block_Class);
    store_method(Block_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_threaded() {
    Symbol SMB_threaded = new_Symbol(L"threaded");
    Array PThreadedCode4331 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_threaded, (Optr)&t_method_return);
    Method PMethod4330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4331, 1, slot_Kernel_AST_Block_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4330, Block_Class);
    store_method(Block_Class, SMB_threaded, MC_SMB_threaded);
}

void init_Kernel_AST_PBlock_layout() {
    layout_Kernel_AST_Block_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Block_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Block_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Block_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Block_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Block_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Block = new_Symbol(L"Block");
    slot_Kernel_AST_Block_params = (Optr)new_Slot(0, L"params");
    slot_Kernel_AST_Block_locals = (Optr)new_Slot(1, L"locals");
    slot_Kernel_AST_Block_threaded = (Optr)new_Slot(2, L"threaded");
    layout_Kernel_AST_Block = (Optr)create_layout_with_vars(ArrayLayout_Class, 3);
    ((Array)layout_Kernel_AST_Block)->values[0] = slot_Kernel_AST_Block_params;
    ((Array)layout_Kernel_AST_Block)->values[1] = slot_Kernel_AST_Block_locals;
    ((Array)layout_Kernel_AST_Block)->values[2] = slot_Kernel_AST_Block_threaded;
    Block_Class = (Class)new_Class(Kernel_AST_Node_Class, layout_Kernel_AST_Block_Class_class);
    Block_Class->layout = layout_Kernel_AST_Block;
    Block_Class->name = SMB_Block;
    
}

void init_Kernel_AST_PBlock_methods() {
    init_SMB_params_locals_();
    init_SMB_last();
    init_SMB_locals_();
    init_SMB_locals();
    init_SMB_isEmpty();
    init_SMB_first();
    init_SMB_params_();
    init_SMB_withIndexDo_();
    init_SMB_isScoped();
    init_SMB_asMethod();
    init_SMB_initialize();
    init_SMB_first_();
    init_SMB__equals_();
    init_SMB_do_();
    init_SMB_accept_();
    init_SMB_inject_into_();
    init_SMB_numArgs();
    init_SMB_last_();
    init_SMB_params();
    init_SMB_threaded_();
    init_SMB_threaded();
    
}