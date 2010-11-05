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
    Array PArray4159 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4160 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4163 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4165 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4166 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4165);
    Array PThreadedCode4164 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4165, (Optr)&t_send1, (Optr)PSend4166, (Optr)&t_method_return);
    Block PBlock4162 = new_Block_with(PArray4163, empty_Array, PThreadedCode4164, 1, PSend4166);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4167 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4162);
    Assign PAssign4168 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4170 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4169 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4170);
    Array PArray4172 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4174 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4175 = new_Send((Optr)PSend4174, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4176 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4175);
    Array PThreadedCode4173 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4174, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4175, (Optr)&t_send1, (Optr)PSend4176, (Optr)&t_method_return);
    Block PBlock4171 = new_Block_with(PArray4172, empty_Array, PThreadedCode4173, 1, PSend4176);
    // withIndexDo:. 
    Send PSend4177 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4171);
    Assign PAssign4178 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4161 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4162, (Optr)&t_send1, (Optr)PSend4167, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4168, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4169, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4171, (Optr)&t_send1, (Optr)PSend4177, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4178, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4158 = new_Method_with(PArray4159, PArray4160, empty_Array, PThreadedCode4161, 6, PSend4167, PAssign4168, PAssign4169, PSend4177, PAssign4178, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4158, Block_Class);
    store_method(Block_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4181 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4182 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4181);
    Array PThreadedCode4180 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4181, (Optr)&t_send1, (Optr)PSend4182, (Optr)&t_method_return);
    Method PMethod4179 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4180, 1, PSend4182);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4179, Block_Class);
    store_method(Block_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newLocals_0_0 = new_Variable_named(L"newLocals", 0);
    Array PArray4184 = new_Array_with(1, (Optr)VAR_newLocals_0_0);
    Assign PAssign4186 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_0);
    Array PThreadedCode4185 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4186, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4183 = new_Method_with(PArray4184, empty_Array, empty_Array, PThreadedCode4185, 2, PAssign4186, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4183, Block_Class);
    store_method(Block_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4188 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_method_return);
    Method PMethod4187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4188, 1, slot_Kernel_AST_Block_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4187, Block_Class);
    store_method(Block_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_body = new_Symbol(L"body");
    // body. 
    Send PSend4191 = new_Send((Optr)self, SMB_body, 0);
    // isEmpty. 
    Send PSend4192 = new_Send((Optr)PSend4191, SMB_isEmpty, 0);
    Array PThreadedCode4190 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4191, (Optr)&t_send0, (Optr)PSend4192, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4190, 2, PSend4192, self);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod4189, Block_Class);
    store_method(Block_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4195 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4194 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4195, (Optr)&t_method_return);
    Method PMethod4193 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4194, 1, PSend4195);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4193, Block_Class);
    store_method(Block_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Array PArray4197 = new_Array_with(1, (Optr)VAR_newParams_0_0);
    Assign PAssign4199 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Array PThreadedCode4198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4199, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4196 = new_Method_with(PArray4197, empty_Array, empty_Array, PThreadedCode4198, 2, PAssign4199, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4196, Block_Class);
    store_method(Block_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4201 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4203 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4205 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4207 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4208 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4207, (Optr)VAR_index_1_0);
    Array PThreadedCode4206 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4207, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4208, (Optr)&t_method_return);
    Block PBlock4204 = new_Block_with(PArray4205, empty_Array, PThreadedCode4206, 1, PSend4208);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4209 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4203, (Optr)PBlock4204);
    Array PThreadedCode4202 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4203, (Optr)&t_push_closure, (Optr)PBlock4204, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4209, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4200 = new_Method_with(PArray4201, empty_Array, empty_Array, PThreadedCode4202, 2, PSend4209, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4200, Block_Class);
    store_method(Block_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_isScoped() {
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4212 = new_Send((Optr)self, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4213 = new_Send((Optr)PSend4212, SMB_size, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend4214 = new_Send((Optr)PSend4213, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4217 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4218 = new_Send((Optr)PSend4217, SMB_size, 0);
    // ~=. 
    Send PSend4219 = new_Send((Optr)PSend4218, SMB__notEquals_, 1, (Optr)int_0_Const);
    Array PThreadedCode4216 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4217, (Optr)&t_send0, (Optr)PSend4218, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4219, (Optr)&t_block_return);
    Block PBlock4215 = new_Block_with(empty_Array, empty_Array, PThreadedCode4216, 1, PSend4219);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend4220 = new_Send((Optr)PSend4214, SMB_or_, 1, (Optr)PBlock4215);
    Array PThreadedCode4211 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4212, (Optr)&t_send0, (Optr)PSend4213, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4214, (Optr)&t_push_closure, (Optr)PBlock4215, (Optr)&t_send1, (Optr)PSend4220, (Optr)&t_method_return);
    Method PMethod4210 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4211, 1, PSend4220);
    
    MethodClosure MC_SMB_isScoped = new_MethodClosure((Method)PMethod4210, Block_Class);
    store_method(Block_Class, SMB_isScoped, MC_SMB_isScoped);
}


static void init_SMB_asMethod() {
    Symbol SMB_asMethod = new_Symbol(L"asMethod");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray4222 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4226 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend4225 = new_Send((Optr)PMethod_classReference, SMB_new_, 1, (Optr)PSend4226);
    Assign PAssign4224 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend4225);
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    // locals:. 
    Send PSend4227 = new_Send((Optr)VAR_result_0_0, SMB_locals_, 1, (Optr)slot_Kernel_AST_Block_locals);
    Symbol SMB_params_ = new_Symbol(L"params:");
    // params:. 
    Send PSend4228 = new_Send((Optr)VAR_result_0_0, SMB_params_, 1, (Optr)slot_Kernel_AST_Block_params);
    Variable VAR_exp_1_0 = new_Variable_named(L"exp", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4230 = new_Array_with(2, (Optr)VAR_exp_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4232 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_exp_1_0);
    Array PThreadedCode4231 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_exp_1_0, (Optr)&t_send2, (Optr)PSend4232, (Optr)&t_method_return);
    Block PBlock4229 = new_Block_with(PArray4230, empty_Array, PThreadedCode4231, 1, PSend4232);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4233 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4229);
    Array PThreadedCode4223 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign4224, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4226, (Optr)&t_send1, (Optr)PSend4225, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_send1, (Optr)PSend4227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send1, (Optr)PSend4228, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4229, (Optr)&t_send1, (Optr)PSend4233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod4221 = new_Method_with(empty_Array, PArray4222, empty_Array, PThreadedCode4223, 5, PAssign4224, PSend4227, PSend4228, PSend4233, VAR_result_0_0);
    
    MethodClosure MC_SMB_asMethod = new_MethodClosure((Method)PMethod4221, Block_Class);
    store_method(Block_Class, SMB_asMethod, MC_SMB_asMethod);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper4236 = new_Super(SMB_initialize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend4238 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign4237 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)PSend4238);
    Array PThreadedCode4235 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper4236, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4237, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4235, 3, PSuper4236, PAssign4237, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4234, Block_Class);
    store_method(Block_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4240 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4242 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4241 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4242, (Optr)&t_method_return);
    Method PMethod4239 = new_Method_with(PArray4240, empty_Array, empty_Array, PThreadedCode4241, 1, PSend4242);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4239, Block_Class);
    store_method(Block_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4244 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4247 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4249 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4250 = new_Send((Optr)VAR_aBlock_0_0, SMB_species, 0);
    // =. 
    Send PSend4251 = new_Send((Optr)PSend4249, SMB__equals_, 1, (Optr)PSend4250);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4255 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4254 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4255, (Optr)&t_block_return);
    Block PBlock4253 = new_Block_with(empty_Array, empty_Array, PThreadedCode4254, 1, PSend4255);
    // ifFalse:. 
    Send PSend4252 = new_Send((Optr)PSend4251, SMB_ifFalse_, 1, (Optr)PBlock4253);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4256 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4257 = new_Send((Optr)VAR_aBlock_0_0, SMB_size, 0);
    // =. 
    Send PSend4258 = new_Send((Optr)PSend4256, SMB__equals_, 1, (Optr)PSend4257);
    // escape:. 
    Send PSend4262 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4261 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4262, (Optr)&t_block_return);
    Block PBlock4260 = new_Block_with(empty_Array, empty_Array, PThreadedCode4261, 1, PSend4262);
    // ifFalse:. 
    Send PSend4259 = new_Send((Optr)PSend4258, SMB_ifFalse_, 1, (Optr)PBlock4260);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4263 = new_Send((Optr)self, SMB_params, 0);
    // size. 
    Send PSend4264 = new_Send((Optr)PSend4263, SMB_size, 0);
    // params. 
    Send PSend4265 = new_Send((Optr)VAR_aBlock_0_0, SMB_params, 0);
    // size. 
    Send PSend4266 = new_Send((Optr)PSend4265, SMB_size, 0);
    // =. 
    Send PSend4267 = new_Send((Optr)PSend4264, SMB__equals_, 1, (Optr)PSend4266);
    // escape:. 
    Send PSend4271 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4270 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4271, (Optr)&t_block_return);
    Block PBlock4269 = new_Block_with(empty_Array, empty_Array, PThreadedCode4270, 1, PSend4271);
    // ifFalse:. 
    Send PSend4268 = new_Send((Optr)PSend4267, SMB_ifFalse_, 1, (Optr)PBlock4269);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4272 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4273 = new_Send((Optr)PSend4272, SMB_size, 0);
    // locals. 
    Send PSend4274 = new_Send((Optr)VAR_aBlock_0_0, SMB_locals, 0);
    // size. 
    Send PSend4275 = new_Send((Optr)PSend4274, SMB_size, 0);
    // =. 
    Send PSend4276 = new_Send((Optr)PSend4273, SMB__equals_, 1, (Optr)PSend4275);
    // escape:. 
    Send PSend4280 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4279 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4280, (Optr)&t_block_return);
    Block PBlock4278 = new_Block_with(empty_Array, empty_Array, PThreadedCode4279, 1, PSend4280);
    // ifFalse:. 
    Send PSend4277 = new_Send((Optr)PSend4276, SMB_ifFalse_, 1, (Optr)PBlock4278);
    Variable VAR_statement_2_0 = new_Variable_named(L"statement", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4282 = new_Array_with(2, (Optr)VAR_statement_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4284 = new_Send((Optr)VAR_aBlock_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4285 = new_Send((Optr)VAR_statement_2_0, SMB__equals_, 1, (Optr)PSend4284);
    // escape:. 
    Send PSend4289 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4288 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4289, (Optr)&t_block_return);
    Block PBlock4287 = new_Block_with(empty_Array, empty_Array, PThreadedCode4288, 1, PSend4289);
    // ifFalse:. 
    Send PSend4286 = new_Send((Optr)PSend4285, SMB_ifFalse_, 1, (Optr)PBlock4287);
    Array PThreadedCode4283 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_statement_2_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4284, (Optr)&t_send1, (Optr)PSend4285, (Optr)&t_send_ifFalse_, (Optr)PSend4286, (Optr)PBlock4287, (Optr)&t_method_return);
    Block PBlock4281 = new_Block_with(PArray4282, empty_Array, PThreadedCode4283, 1, PSend4286);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4290 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4281);
    Array PThreadedCode4248 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4249, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4250, (Optr)&t_send1, (Optr)PSend4251, (Optr)&t_send_ifFalse_, (Optr)PSend4252, (Optr)PBlock4253, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4256, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4257, (Optr)&t_send1, (Optr)PSend4258, (Optr)&t_send_ifFalse_, (Optr)PSend4259, (Optr)PBlock4260, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4263, (Optr)&t_send0, (Optr)PSend4264, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4265, (Optr)&t_send0, (Optr)PSend4266, (Optr)&t_send1, (Optr)PSend4267, (Optr)&t_send_ifFalse_, (Optr)PSend4268, (Optr)PBlock4269, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4272, (Optr)&t_send0, (Optr)PSend4273, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4274, (Optr)&t_send0, (Optr)PSend4275, (Optr)&t_send1, (Optr)PSend4276, (Optr)&t_send_ifFalse_, (Optr)PSend4277, (Optr)PBlock4278, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4281, (Optr)&t_send1, (Optr)PSend4290, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4246 = new_Block_with(PArray4247, empty_Array, PThreadedCode4248, 6, PSend4252, PSend4259, PSend4268, PSend4277, PSend4290, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4291 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4246);
    Array PThreadedCode4245 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4246, (Optr)&t_send1, (Optr)PSend4291, (Optr)&t_method_return);
    Method PMethod4243 = new_Method_with(PArray4244, empty_Array, empty_Array, PThreadedCode4245, 1, PSend4291);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4243, Block_Class);
    store_method(Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4293 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4295 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4297 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4299 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4300 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4299);
    Array PThreadedCode4298 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4299, (Optr)&t_send1, (Optr)PSend4300, (Optr)&t_method_return);
    Block PBlock4296 = new_Block_with(PArray4297, empty_Array, PThreadedCode4298, 1, PSend4300);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4301 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4295, (Optr)PBlock4296);
    Array PThreadedCode4294 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4295, (Optr)&t_push_closure, (Optr)PBlock4296, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4301, (Optr)&t_method_return);
    Method PMethod4292 = new_Method_with(PArray4293, empty_Array, empty_Array, PThreadedCode4294, 1, PSend4301);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4292, Block_Class);
    store_method(Block_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4303 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend4305 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode4304 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4305, (Optr)&t_method_return);
    Method PMethod4302 = new_Method_with(PArray4303, empty_Array, empty_Array, PThreadedCode4304, 1, PSend4305);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4302, Block_Class);
    store_method(Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4307 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4308 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4310 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4312 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4315 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4314 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4315);
    Array PThreadedCode4313 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4314, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4315, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4311 = new_Block_with(PArray4312, empty_Array, PThreadedCode4313, 1, PAssign4314);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4316 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4311);
    Array PThreadedCode4309 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4310, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4311, (Optr)&t_send1, (Optr)PSend4316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4306 = new_Method_with(PArray4307, PArray4308, empty_Array, PThreadedCode4309, 3, PAssign4310, PSend4316, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4306, Block_Class);
    store_method(Block_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4319 = new_Send((Optr)slot_Kernel_AST_Block_params, SMB_size, 0);
    Array PThreadedCode4318 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send0, (Optr)PSend4319, (Optr)&t_method_return);
    Method PMethod4317 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4318, 1, PSend4319);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4317, Block_Class);
    store_method(Block_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4321 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4323 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4324 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4323, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4322 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4323, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4324, (Optr)&t_method_return);
    Method PMethod4320 = new_Method_with(PArray4321, empty_Array, empty_Array, PThreadedCode4322, 1, PSend4324);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4320, Block_Class);
    store_method(Block_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4326 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_method_return);
    Method PMethod4325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4326, 1, slot_Kernel_AST_Block_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4325, Block_Class);
    store_method(Block_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray4328 = new_Array_with(1, (Optr)VAR_code_0_0);
    Assign PAssign4330 = new_Assign((Optr)slot_Kernel_AST_Block_threaded, (Optr)VAR_code_0_0);
    Array PThreadedCode4329 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4330, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4327 = new_Method_with(PArray4328, empty_Array, empty_Array, PThreadedCode4329, 2, PAssign4330, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4327, Block_Class);
    store_method(Block_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_threaded() {
    Symbol SMB_threaded = new_Symbol(L"threaded");
    Array PThreadedCode4332 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_threaded, (Optr)&t_method_return);
    Method PMethod4331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4332, 1, slot_Kernel_AST_Block_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4331, Block_Class);
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