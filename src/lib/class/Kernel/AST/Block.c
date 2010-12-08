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
    Array PArray4161 = new_Array_with(2, (Optr)VAR_newParams_0_0, (Optr)VAR_newLocals_0_1);
    Variable VAR_start_0_2 = new_Variable_named(L"start", 0);
    Array PArray4162 = new_Array_with(1, (Optr)VAR_start_0_2);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4165 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend4167 = new_Send((Optr)VAR_index_1_1, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_localId_ = new_Symbol(L"localId:");
    // localId:. 
    Send PSend4168 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4167);
    Array PThreadedCode4166 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4167, (Optr)&t_send1, (Optr)PSend4168, (Optr)&t_method_return);
    Block PBlock4164 = new_Block_with(PArray4165, empty_Array, PThreadedCode4166, 1, PSend4168);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4169 = new_Send((Optr)VAR_newParams_0_0, SMB_withIndexDo_, 1, (Optr)PBlock4164);
    Assign PAssign4170 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4172 = new_Send((Optr)VAR_newParams_0_0, SMB_size, 0);
    Assign PAssign4171 = new_Assign((Optr)VAR_start_0_2, (Optr)PSend4172);
    Array PArray4174 = new_Array_with(2, (Optr)VAR_each_1_0, (Optr)VAR_index_1_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend4176 = new_Send((Optr)VAR_start_0_2, SMB__plus_, 1, (Optr)VAR_index_1_1);
    // -. 
    Send PSend4177 = new_Send((Optr)PSend4176, SMB__minus_, 1, (Optr)int_1_Const);
    // localId:. 
    Send PSend4178 = new_Send((Optr)VAR_each_1_0, SMB_localId_, 1, (Optr)PSend4177);
    Array PThreadedCode4175 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_send1, (Optr)PSend4176, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4177, (Optr)&t_send1, (Optr)PSend4178, (Optr)&t_method_return);
    Block PBlock4173 = new_Block_with(PArray4174, empty_Array, PThreadedCode4175, 1, PSend4178);
    // withIndexDo:. 
    Send PSend4179 = new_Send((Optr)VAR_newLocals_0_1, SMB_withIndexDo_, 1, (Optr)PBlock4173);
    Assign PAssign4180 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_1);
    Array PThreadedCode4163 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_push_closure, (Optr)PBlock4164, (Optr)&t_send1, (Optr)PSend4169, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4170, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4171, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_send0, (Optr)PSend4172, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_push_closure, (Optr)PBlock4173, (Optr)&t_send1, (Optr)PSend4179, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4180, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4160 = new_Method_with(PArray4161, PArray4162, empty_Array, PThreadedCode4163, 6, PSend4169, PAssign4170, PAssign4171, PSend4179, PAssign4180, self);
    
    MethodClosure MC_SMB_params_locals_ = new_MethodClosure((Method)PMethod4160, Block_Class);
    store_method(Block_Class, SMB_params_locals_, MC_SMB_params_locals_);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4183 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4184 = new_Send((Optr)self, SMB_at_, 1, (Optr)PSend4183);
    Array PThreadedCode4182 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4183, (Optr)&t_send1, (Optr)PSend4184, (Optr)&t_method_return);
    Method PMethod4181 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4182, 1, PSend4184);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod4181, Block_Class);
    store_method(Block_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_locals_() {
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    Variable VAR_newLocals_0_0 = new_Variable_named(L"newLocals", 0);
    Array PArray4186 = new_Array_with(1, (Optr)VAR_newLocals_0_0);
    Assign PAssign4188 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)VAR_newLocals_0_0);
    Array PThreadedCode4187 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4188, (Optr)&t_push_variable, (Optr)VAR_newLocals_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4185 = new_Method_with(PArray4186, empty_Array, empty_Array, PThreadedCode4187, 2, PAssign4188, self);
    
    MethodClosure MC_SMB_locals_ = new_MethodClosure((Method)PMethod4185, Block_Class);
    store_method(Block_Class, SMB_locals_, MC_SMB_locals_);
}


static void init_SMB_locals() {
    Symbol SMB_locals = new_Symbol(L"locals");
    Array PThreadedCode4190 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_method_return);
    Method PMethod4189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4190, 1, slot_Kernel_AST_Block_locals);
    
    MethodClosure MC_SMB_locals = new_MethodClosure((Method)PMethod4189, Block_Class);
    store_method(Block_Class, SMB_locals, MC_SMB_locals);
}


static void init_SMB_isEmpty() {
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    Symbol SMB_body = new_Symbol(L"body");
    // body. 
    Send PSend4193 = new_Send((Optr)self, SMB_body, 0);
    // isEmpty. 
    Send PSend4194 = new_Send((Optr)PSend4193, SMB_isEmpty, 0);
    Array PThreadedCode4192 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4193, (Optr)&t_send0, (Optr)PSend4194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4192, 2, PSend4194, self);
    
    MethodClosure MC_SMB_isEmpty = new_MethodClosure((Method)PMethod4191, Block_Class);
    store_method(Block_Class, SMB_isEmpty, MC_SMB_isEmpty);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend4197 = new_Send((Optr)self, SMB_at_, 1, (Optr)int_1_Const);
    Array PThreadedCode4196 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend4197, (Optr)&t_method_return);
    Method PMethod4195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4196, 1, PSend4197);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod4195, Block_Class);
    store_method(Block_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_params_() {
    Symbol SMB_params_ = new_Symbol(L"params:");
    Variable VAR_newParams_0_0 = new_Variable_named(L"newParams", 0);
    Array PArray4199 = new_Array_with(1, (Optr)VAR_newParams_0_0);
    Assign PAssign4201 = new_Assign((Optr)slot_Kernel_AST_Block_params, (Optr)VAR_newParams_0_0);
    Array PThreadedCode4200 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4201, (Optr)&t_push_variable, (Optr)VAR_newParams_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4198 = new_Method_with(PArray4199, empty_Array, empty_Array, PThreadedCode4200, 2, PAssign4201, self);
    
    MethodClosure MC_SMB_params_ = new_MethodClosure((Method)PMethod4198, Block_Class);
    store_method(Block_Class, SMB_params_, MC_SMB_params_);
}


static void init_SMB_withIndexDo_() {
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    Variable VAR_elementAndIndexBlock_0_0 = new_Variable_named(L"elementAndIndexBlock", 0);
    Array PArray4203 = new_Array_with(1, (Optr)VAR_elementAndIndexBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4205 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4207 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4209 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4210 = new_Send((Optr)VAR_elementAndIndexBlock_0_0, SMB_value_value_, 2, (Optr)PSend4209, (Optr)VAR_index_1_0);
    Array PThreadedCode4208 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_elementAndIndexBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4209, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send2, (Optr)PSend4210, (Optr)&t_method_return);
    Block PBlock4206 = new_Block_with(PArray4207, empty_Array, PThreadedCode4208, 1, PSend4210);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4211 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4205, (Optr)PBlock4206);
    Array PThreadedCode4204 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4205, (Optr)&t_push_closure, (Optr)PBlock4206, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4211, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4202 = new_Method_with(PArray4203, empty_Array, empty_Array, PThreadedCode4204, 2, PSend4211, self);
    
    MethodClosure MC_SMB_withIndexDo_ = new_MethodClosure((Method)PMethod4202, Block_Class);
    store_method(Block_Class, SMB_withIndexDo_, MC_SMB_withIndexDo_);
}


static void init_SMB_isScoped() {
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4214 = new_Send((Optr)self, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4215 = new_Send((Optr)PSend4214, SMB_size, 0);
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ~=. 
    Send PSend4216 = new_Send((Optr)PSend4215, SMB__notEquals_, 1, (Optr)int_0_Const);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4219 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4220 = new_Send((Optr)PSend4219, SMB_size, 0);
    // ~=. 
    Send PSend4221 = new_Send((Optr)PSend4220, SMB__notEquals_, 1, (Optr)int_0_Const);
    Array PThreadedCode4218 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4219, (Optr)&t_send0, (Optr)PSend4220, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4221, (Optr)&t_block_return);
    Block PBlock4217 = new_Block_with(empty_Array, empty_Array, PThreadedCode4218, 1, PSend4221);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend4222 = new_Send((Optr)PSend4216, SMB_or_, 1, (Optr)PBlock4217);
    Array PThreadedCode4213 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4214, (Optr)&t_send0, (Optr)PSend4215, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4216, (Optr)&t_push_closure, (Optr)PBlock4217, (Optr)&t_send1, (Optr)PSend4222, (Optr)&t_method_return);
    Method PMethod4212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4213, 1, PSend4222);
    
    MethodClosure MC_SMB_isScoped = new_MethodClosure((Method)PMethod4212, Block_Class);
    store_method(Block_Class, SMB_isScoped, MC_SMB_isScoped);
}


static void init_SMB_asMethod() {
    Symbol SMB_asMethod = new_Symbol(L"asMethod");
    Variable VAR_result_0_0 = new_Variable_named(L"result", 0);
    Array PArray4224 = new_Array_with(1, (Optr)VAR_result_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4228 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend4227 = new_Send((Optr)PMethod_classReference, SMB_new_, 1, (Optr)PSend4228);
    Assign PAssign4226 = new_Assign((Optr)VAR_result_0_0, (Optr)PSend4227);
    Symbol SMB_locals_ = new_Symbol(L"locals:");
    // locals:. 
    Send PSend4229 = new_Send((Optr)VAR_result_0_0, SMB_locals_, 1, (Optr)slot_Kernel_AST_Block_locals);
    Symbol SMB_params_ = new_Symbol(L"params:");
    // params:. 
    Send PSend4230 = new_Send((Optr)VAR_result_0_0, SMB_params_, 1, (Optr)slot_Kernel_AST_Block_params);
    Variable VAR_exp_1_0 = new_Variable_named(L"exp", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray4232 = new_Array_with(2, (Optr)VAR_exp_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4234 = new_Send((Optr)VAR_result_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_exp_1_0);
    Array PThreadedCode4233 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_exp_1_0, (Optr)&t_send2, (Optr)PSend4234, (Optr)&t_method_return);
    Block PBlock4231 = new_Block_with(PArray4232, empty_Array, PThreadedCode4233, 1, PSend4234);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4235 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4231);
    Array PThreadedCode4225 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign4226, (Optr)&t_push_class_reference, (Optr)PMethod_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4228, (Optr)&t_send1, (Optr)PSend4227, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_locals, (Optr)&t_send1, (Optr)PSend4229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send1, (Optr)PSend4230, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4231, (Optr)&t_send1, (Optr)PSend4235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_0, (Optr)&t_method_return);
    Method PMethod4223 = new_Method_with(empty_Array, PArray4224, empty_Array, PThreadedCode4225, 5, PAssign4226, PSend4229, PSend4230, PSend4235, VAR_result_0_0);
    
    MethodClosure MC_SMB_asMethod = new_MethodClosure((Method)PMethod4223, Block_Class);
    store_method(Block_Class, SMB_asMethod, MC_SMB_asMethod);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper4238 = new_Super(SMB_initialize, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // new:. 
    Send PSend4240 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)int_0_Const);
    Assign PAssign4239 = new_Assign((Optr)slot_Kernel_AST_Block_locals, (Optr)PSend4240);
    Array PThreadedCode4237 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper4238, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign4239, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend4240, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4237, 3, PSuper4238, PAssign4239, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod4236, Block_Class);
    store_method(Block_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_first_() {
    Symbol SMB_first_ = new_Symbol(L"first:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4242 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend4244 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4243 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4244, (Optr)&t_method_return);
    Method PMethod4241 = new_Method_with(PArray4242, empty_Array, empty_Array, PThreadedCode4243, 1, PSend4244);
    
    MethodClosure MC_SMB_first_ = new_MethodClosure((Method)PMethod4241, Block_Class);
    store_method(Block_Class, SMB_first_, MC_SMB_first_);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4246 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray4249 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend4251 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend4252 = new_Send((Optr)VAR_aBlock_0_0, SMB_species, 0);
    // =. 
    Send PSend4253 = new_Send((Optr)PSend4251, SMB__equals_, 1, (Optr)PSend4252);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend4257 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4256 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4257, (Optr)&t_block_return);
    Block PBlock4255 = new_Block_with(empty_Array, empty_Array, PThreadedCode4256, 1, PSend4257);
    // ifFalse:. 
    Send PSend4254 = new_Send((Optr)PSend4253, SMB_ifFalse_, 1, (Optr)PBlock4255);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4258 = new_Send((Optr)self, SMB_size, 0);
    // size. 
    Send PSend4259 = new_Send((Optr)VAR_aBlock_0_0, SMB_size, 0);
    // =. 
    Send PSend4260 = new_Send((Optr)PSend4258, SMB__equals_, 1, (Optr)PSend4259);
    // escape:. 
    Send PSend4264 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4263 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4264, (Optr)&t_block_return);
    Block PBlock4262 = new_Block_with(empty_Array, empty_Array, PThreadedCode4263, 1, PSend4264);
    // ifFalse:. 
    Send PSend4261 = new_Send((Optr)PSend4260, SMB_ifFalse_, 1, (Optr)PBlock4262);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend4265 = new_Send((Optr)self, SMB_params, 0);
    // size. 
    Send PSend4266 = new_Send((Optr)PSend4265, SMB_size, 0);
    // params. 
    Send PSend4267 = new_Send((Optr)VAR_aBlock_0_0, SMB_params, 0);
    // size. 
    Send PSend4268 = new_Send((Optr)PSend4267, SMB_size, 0);
    // =. 
    Send PSend4269 = new_Send((Optr)PSend4266, SMB__equals_, 1, (Optr)PSend4268);
    // escape:. 
    Send PSend4273 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4272 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4273, (Optr)&t_block_return);
    Block PBlock4271 = new_Block_with(empty_Array, empty_Array, PThreadedCode4272, 1, PSend4273);
    // ifFalse:. 
    Send PSend4270 = new_Send((Optr)PSend4269, SMB_ifFalse_, 1, (Optr)PBlock4271);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend4274 = new_Send((Optr)self, SMB_locals, 0);
    // size. 
    Send PSend4275 = new_Send((Optr)PSend4274, SMB_size, 0);
    // locals. 
    Send PSend4276 = new_Send((Optr)VAR_aBlock_0_0, SMB_locals, 0);
    // size. 
    Send PSend4277 = new_Send((Optr)PSend4276, SMB_size, 0);
    // =. 
    Send PSend4278 = new_Send((Optr)PSend4275, SMB__equals_, 1, (Optr)PSend4277);
    // escape:. 
    Send PSend4282 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4281 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4282, (Optr)&t_block_return);
    Block PBlock4280 = new_Block_with(empty_Array, empty_Array, PThreadedCode4281, 1, PSend4282);
    // ifFalse:. 
    Send PSend4279 = new_Send((Optr)PSend4278, SMB_ifFalse_, 1, (Optr)PBlock4280);
    Variable VAR_statement_2_0 = new_Variable_named(L"statement", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray4284 = new_Array_with(2, (Optr)VAR_statement_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4286 = new_Send((Optr)VAR_aBlock_0_0, SMB_at_, 1, (Optr)VAR_index_2_1);
    // =. 
    Send PSend4287 = new_Send((Optr)VAR_statement_2_0, SMB__equals_, 1, (Optr)PSend4286);
    // escape:. 
    Send PSend4291 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode4290 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend4291, (Optr)&t_block_return);
    Block PBlock4289 = new_Block_with(empty_Array, empty_Array, PThreadedCode4290, 1, PSend4291);
    // ifFalse:. 
    Send PSend4288 = new_Send((Optr)PSend4287, SMB_ifFalse_, 1, (Optr)PBlock4289);
    Array PThreadedCode4285 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_statement_2_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_send1, (Optr)PSend4286, (Optr)&t_send1, (Optr)PSend4287, (Optr)&t_send_ifFalse_, (Optr)PSend4288, (Optr)PBlock4289, (Optr)&t_method_return);
    Block PBlock4283 = new_Block_with(PArray4284, empty_Array, PThreadedCode4285, 1, PSend4288);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend4292 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock4283);
    Array PThreadedCode4250 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4251, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4252, (Optr)&t_send1, (Optr)PSend4253, (Optr)&t_send_ifFalse_, (Optr)PSend4254, (Optr)PBlock4255, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4258, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4259, (Optr)&t_send1, (Optr)PSend4260, (Optr)&t_send_ifFalse_, (Optr)PSend4261, (Optr)PBlock4262, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4265, (Optr)&t_send0, (Optr)PSend4266, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4267, (Optr)&t_send0, (Optr)PSend4268, (Optr)&t_send1, (Optr)PSend4269, (Optr)&t_send_ifFalse_, (Optr)PSend4270, (Optr)PBlock4271, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4274, (Optr)&t_send0, (Optr)PSend4275, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend4276, (Optr)&t_send0, (Optr)PSend4277, (Optr)&t_send1, (Optr)PSend4278, (Optr)&t_send_ifFalse_, (Optr)PSend4279, (Optr)PBlock4280, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4283, (Optr)&t_send1, (Optr)PSend4292, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock4248 = new_Block_with(PArray4249, empty_Array, PThreadedCode4250, 6, PSend4254, PSend4261, PSend4270, PSend4279, PSend4292, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend4293 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock4248);
    Array PThreadedCode4247 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock4248, (Optr)&t_send1, (Optr)PSend4293, (Optr)&t_method_return);
    Method PMethod4245 = new_Method_with(PArray4246, empty_Array, empty_Array, PThreadedCode4247, 1, PSend4293);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod4245, Block_Class);
    store_method(Block_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray4295 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4297 = new_Send((Optr)self, SMB_size, 0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray4299 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend4301 = new_Send((Optr)self, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend4302 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend4301);
    Array PThreadedCode4300 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend4301, (Optr)&t_send1, (Optr)PSend4302, (Optr)&t_method_return);
    Block PBlock4298 = new_Block_with(PArray4299, empty_Array, PThreadedCode4300, 1, PSend4302);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend4303 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend4297, (Optr)PBlock4298);
    Array PThreadedCode4296 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4297, (Optr)&t_push_closure, (Optr)PBlock4298, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend4303, (Optr)&t_method_return);
    Method PMethod4294 = new_Method_with(PArray4295, empty_Array, empty_Array, PThreadedCode4296, 1, PSend4303);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod4294, Block_Class);
    store_method(Block_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4305 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    // visitBlock:. 
    Send PSend4307 = new_Send((Optr)VAR_visitor_0_0, SMB_visitBlock_, 1, (Optr)self);
    Array PThreadedCode4306 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4307, (Optr)&t_method_return);
    Method PMethod4304 = new_Method_with(PArray4305, empty_Array, empty_Array, PThreadedCode4306, 1, PSend4307);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4304, Block_Class);
    store_method(Block_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_inject_into_() {
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_thisValue_0_0 = new_Variable_named(L"thisValue", 0);
    Variable VAR_binaryBlock_0_1 = new_Variable_named(L"binaryBlock", 0);
    Array PArray4309 = new_Array_with(2, (Optr)VAR_thisValue_0_0, (Optr)VAR_binaryBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray4310 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign4312 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)VAR_thisValue_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray4314 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    // value:value:. 
    Send PSend4317 = new_Send((Optr)VAR_binaryBlock_0_1, SMB_value_value_, 2, (Optr)VAR_nextValue_0_2, (Optr)VAR_each_1_0);
    Assign PAssign4316 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend4317);
    Array PThreadedCode4315 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign4316, (Optr)&t_push_variable, (Optr)VAR_binaryBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send2, (Optr)PSend4317, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock4313 = new_Block_with(PArray4314, empty_Array, PThreadedCode4315, 1, PAssign4316);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend4318 = new_Send((Optr)self, SMB_do_, 1, (Optr)PBlock4313);
    Array PThreadedCode4311 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign4312, (Optr)&t_push_variable, (Optr)VAR_thisValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock4313, (Optr)&t_send1, (Optr)PSend4318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_method_return);
    Method PMethod4308 = new_Method_with(PArray4309, PArray4310, empty_Array, PThreadedCode4311, 3, PAssign4312, PSend4318, VAR_nextValue_0_2);
    
    MethodClosure MC_SMB_inject_into_ = new_MethodClosure((Method)PMethod4308, Block_Class);
    store_method(Block_Class, SMB_inject_into_, MC_SMB_inject_into_);
}


static void init_SMB_numArgs() {
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4321 = new_Send((Optr)slot_Kernel_AST_Block_params, SMB_size, 0);
    Array PThreadedCode4320 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_send0, (Optr)PSend4321, (Optr)&t_method_return);
    Method PMethod4319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4320, 1, PSend4321);
    
    MethodClosure MC_SMB_numArgs = new_MethodClosure((Method)PMethod4319, Block_Class);
    store_method(Block_Class, SMB_numArgs, MC_SMB_numArgs);
}


static void init_SMB_last_() {
    Symbol SMB_last_ = new_Symbol(L"last:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4323 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend4325 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend4326 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)PSend4325, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4324 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4325, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send2, (Optr)PSend4326, (Optr)&t_method_return);
    Method PMethod4322 = new_Method_with(PArray4323, empty_Array, empty_Array, PThreadedCode4324, 1, PSend4326);
    
    MethodClosure MC_SMB_last_ = new_MethodClosure((Method)PMethod4322, Block_Class);
    store_method(Block_Class, SMB_last_, MC_SMB_last_);
}


static void init_SMB_params() {
    Symbol SMB_params = new_Symbol(L"params");
    Array PThreadedCode4328 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_params, (Optr)&t_method_return);
    Method PMethod4327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4328, 1, slot_Kernel_AST_Block_params);
    
    MethodClosure MC_SMB_params = new_MethodClosure((Method)PMethod4327, Block_Class);
    store_method(Block_Class, SMB_params, MC_SMB_params);
}


static void init_SMB_threaded_() {
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray4330 = new_Array_with(1, (Optr)VAR_code_0_0);
    Assign PAssign4332 = new_Assign((Optr)slot_Kernel_AST_Block_threaded, (Optr)VAR_code_0_0);
    Array PThreadedCode4331 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4332, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4329 = new_Method_with(PArray4330, empty_Array, empty_Array, PThreadedCode4331, 2, PAssign4332, self);
    
    MethodClosure MC_SMB_threaded_ = new_MethodClosure((Method)PMethod4329, Block_Class);
    store_method(Block_Class, SMB_threaded_, MC_SMB_threaded_);
}


static void init_SMB_threaded() {
    Symbol SMB_threaded = new_Symbol(L"threaded");
    Array PThreadedCode4334 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Block_threaded, (Optr)&t_method_return);
    Method PMethod4333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4334, 1, slot_Kernel_AST_Block_threaded);
    
    MethodClosure MC_SMB_threaded = new_MethodClosure((Method)PMethod4333, Block_Class);
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