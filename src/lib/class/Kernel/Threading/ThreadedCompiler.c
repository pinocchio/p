#include <lib/class/Kernel/Threading/ThreadedCompiler.h>


Optr slot_Kernel_Threading_ThreadedCompiler_Class_class_functionPointers;
Optr layout_Kernel_Threading_ThreadedCompiler_Class_class;
Optr slot_Kernel_Threading_ThreadedCompiler_code;
Optr slot_Kernel_Threading_ThreadedCompiler_internalConstantCode;
Optr slot_Kernel_Threading_ThreadedCompiler_scopes;
Optr slot_Kernel_Threading_ThreadedCompiler_optimizers;
Optr layout_Kernel_Threading_ThreadedCompiler;


static void init_SMB_visitMethod_() {
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5196 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    // visitStatements:. 
    Send PSend5198 = new_Send((Optr)self, SMB_visitStatements_, 1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    // insertReturn. 
    Send PSend5199 = new_Send((Optr)self, SMB_insertReturn, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend5200 = new_Send((Optr)PThreadedCode_classReference, SMB_newFrom_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    // compileNatively:. 
    Send PSend5201 = new_Send((Optr)self, SMB_compileNatively_, 1, (Optr)PSend5200);
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    // threaded:. 
    Send PSend5202 = new_Send((Optr)VAR_aMethod_0_0, SMB_threaded_, 1, (Optr)PSend5201);
    Array PThreadedCode5197 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5198, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5199, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PThreadedCode_classReference, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5200, (Optr)&t_send1, (Optr)PSend5201, (Optr)&t_send1, (Optr)PSend5202, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5195 = new_Method_with(PArray5196, empty_Array, empty_Array, PThreadedCode5197, 4, PSend5198, PSend5199, PSend5202, self);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod5195, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_visitReflectionMethod_() {
    Symbol SMB_visitReflectionMethod_ = new_Symbol(L"visitReflectionMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5204 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend5206 = new_Send((Optr)self, SMB_visitMethod_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode5205 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5206, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5203 = new_Method_with(PArray5204, empty_Array, empty_Array, PThreadedCode5205, 2, PSend5206, self);
    
    MethodClosure MC_SMB_visitReflectionMethod_ = new_MethodClosure((Method)PMethod5203, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitReflectionMethod_, MC_SMB_visitReflectionMethod_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray5208 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Variable VAR_send_0_1 = new_Variable_named(L"send", 0);
    Array PArray5209 = new_Array_with(1, (Optr)VAR_send_0_1);
    Symbol SMB_receiver_message_size_ = new_Symbol(L"receiver:message:size:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5213 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)VAR_aVariable_0_0);
    Symbol  SMB_readFrom_ = new_Symbol(L"readFrom:");
    Constant SMB_readFrom__Const = new_Constant((Optr)SMB_readFrom_);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiver:message:size:. 
    Send PSend5212 = new_Send((Optr)PSend_classReference, SMB_receiver_message_size_, 3, (Optr)PSend5213, (Optr)SMB_readFrom__Const, (Optr)int_1_Const);
    Assign PAssign5211 = new_Assign((Optr)VAR_send_0_1, (Optr)PSend5212);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend5214 = new_Send((Optr)PThisContext_classReference, SMB_instance, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5215 = new_Send((Optr)VAR_send_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend5214);
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    // visitSend:. 
    Send PSend5216 = new_Send((Optr)self, SMB_visitSend_, 1, (Optr)VAR_send_0_1);
    Array PThreadedCode5210 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign5211, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send1, (Optr)PSend5213, (Optr)&t_push1, (Optr)SMB_readFrom_, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend5212, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_send_0_1, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)PThisContext_classReference, (Optr)&t_send0, (Optr)PSend5214, (Optr)&t_send2, (Optr)PSend5215, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_1, (Optr)&t_send1, (Optr)PSend5216, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5207 = new_Method_with(PArray5208, PArray5209, empty_Array, PThreadedCode5210, 4, PAssign5211, PSend5215, PSend5216, self);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod5207, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_insertBlockReturn_() {
    Symbol SMB_insertBlockReturn_ = new_Symbol(L"insertBlockReturn:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5218 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_last_0_1 = new_Variable_named(L"last", 0);
    Array PArray5219 = new_Array_with(1, (Optr)VAR_last_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5222 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5224 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend5225 = new_Send((Optr)PSend5224, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray5230 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // append:. 
    Send PSend5232 = new_Send((Optr)VAR__receiver__2_0, SMB_append_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_pop = new_Symbol(L"pop");
    Constant SMB_pop_Const = new_Constant((Optr)SMB_pop);
    // append:. 
    Send PSend5233 = new_Send((Optr)VAR__receiver__2_0, SMB_append_, 1, (Optr)SMB_pop_Const);
    Array PThreadedCode5231 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5232, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_pop, (Optr)&t_send1, (Optr)PSend5233, (Optr)&t_method_return);
    Block PBlock5229 = new_Block_with(PArray5230, empty_Array, PThreadedCode5231, 2, PSend5232, PSend5233);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5234 = new_Send((Optr)PBlock5229, SMB_value_, 1, (Optr)self);
    Array PThreadedCode5228 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock5229, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5234, (Optr)&t_block_return);
    Block PBlock5227 = new_Block_with(empty_Array, empty_Array, PThreadedCode5228, 1, PSend5234);
    // ifTrue:. 
    Send PSend5226 = new_Send((Optr)PSend5225, SMB_ifTrue_, 1, (Optr)PBlock5227);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5235 = new_Send((Optr)VAR_aBlock_0_0, SMB_isScoped, 0);
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    // insertReturn. 
    Send PSend5239 = new_Send((Optr)self, SMB_insertReturn, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5240 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5239);
    Array PThreadedCode5238 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5239, (Optr)&t_send1, (Optr)PSend5240, (Optr)&t_block_return);
    Block PBlock5237 = new_Block_with(empty_Array, empty_Array, PThreadedCode5238, 1, PSend5240);
    // ifTrue:. 
    Send PSend5236 = new_Send((Optr)PSend5235, SMB_ifTrue_, 1, (Optr)PBlock5237);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5241 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    // removeLast. 
    Send PSend5243 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    Assign PAssign5242 = new_Assign((Optr)VAR_last_0_1, (Optr)PSend5243);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5244 = new_Send((Optr)VAR_last_0_1, SMB_isKindOf_, 1, (Optr)PFunctionPointer_classReference);
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // =. 
    Send PSend5248 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__true_Const);
    Symbol  SMB_block__return__true = new_Symbol(L"block_return_true");
    Constant SMB_block__return__true_Const = new_Constant((Optr)SMB_block__return__true);
    // append:. 
    Send PSend5252 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__true_Const);
    // escape:. 
    Send PSend5253 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5252);
    Array PThreadedCode5251 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__true, (Optr)&t_send1, (Optr)PSend5252, (Optr)&t_send1, (Optr)PSend5253, (Optr)&t_block_return);
    Block PBlock5250 = new_Block_with(empty_Array, empty_Array, PThreadedCode5251, 1, PSend5253);
    // ifTrue:. 
    Send PSend5249 = new_Send((Optr)PSend5248, SMB_ifTrue_, 1, (Optr)PBlock5250);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // =. 
    Send PSend5254 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__false_Const);
    Symbol  SMB_block__return__false = new_Symbol(L"block_return_false");
    Constant SMB_block__return__false_Const = new_Constant((Optr)SMB_block__return__false);
    // append:. 
    Send PSend5258 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__false_Const);
    // escape:. 
    Send PSend5259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5258);
    Array PThreadedCode5257 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__false, (Optr)&t_send1, (Optr)PSend5258, (Optr)&t_send1, (Optr)PSend5259, (Optr)&t_block_return);
    Block PBlock5256 = new_Block_with(empty_Array, empty_Array, PThreadedCode5257, 1, PSend5259);
    // ifTrue:. 
    Send PSend5255 = new_Send((Optr)PSend5254, SMB_ifTrue_, 1, (Optr)PBlock5256);
    // =. 
    Send PSend5260 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_block__return__nil = new_Symbol(L"block_return_nil");
    Constant SMB_block__return__nil_Const = new_Constant((Optr)SMB_block__return__nil);
    // append:. 
    Send PSend5264 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__nil_Const);
    // escape:. 
    Send PSend5265 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5264);
    Array PThreadedCode5263 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__nil, (Optr)&t_send1, (Optr)PSend5264, (Optr)&t_send1, (Optr)PSend5265, (Optr)&t_block_return);
    Block PBlock5262 = new_Block_with(empty_Array, empty_Array, PThreadedCode5263, 1, PSend5265);
    // ifTrue:. 
    Send PSend5261 = new_Send((Optr)PSend5260, SMB_ifTrue_, 1, (Optr)PBlock5262);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // =. 
    Send PSend5266 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__0_Const);
    Symbol  SMB_block__return__0 = new_Symbol(L"block_return_0");
    Constant SMB_block__return__0_Const = new_Constant((Optr)SMB_block__return__0);
    // append:. 
    Send PSend5270 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__0_Const);
    // escape:. 
    Send PSend5271 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5270);
    Array PThreadedCode5269 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__0, (Optr)&t_send1, (Optr)PSend5270, (Optr)&t_send1, (Optr)PSend5271, (Optr)&t_block_return);
    Block PBlock5268 = new_Block_with(empty_Array, empty_Array, PThreadedCode5269, 1, PSend5271);
    // ifTrue:. 
    Send PSend5267 = new_Send((Optr)PSend5266, SMB_ifTrue_, 1, (Optr)PBlock5268);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // =. 
    Send PSend5272 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__1_Const);
    Symbol  SMB_block__return__1 = new_Symbol(L"block_return_1");
    Constant SMB_block__return__1_Const = new_Constant((Optr)SMB_block__return__1);
    // append:. 
    Send PSend5276 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__1_Const);
    // escape:. 
    Send PSend5277 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5276);
    Array PThreadedCode5275 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__1, (Optr)&t_send1, (Optr)PSend5276, (Optr)&t_send1, (Optr)PSend5277, (Optr)&t_block_return);
    Block PBlock5274 = new_Block_with(empty_Array, empty_Array, PThreadedCode5275, 1, PSend5277);
    // ifTrue:. 
    Send PSend5273 = new_Send((Optr)PSend5272, SMB_ifTrue_, 1, (Optr)PBlock5274);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // =. 
    Send PSend5278 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__2_Const);
    Symbol  SMB_block__return__2 = new_Symbol(L"block_return_2");
    Constant SMB_block__return__2_Const = new_Constant((Optr)SMB_block__return__2);
    // append:. 
    Send PSend5282 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__2_Const);
    // escape:. 
    Send PSend5283 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5282);
    Array PThreadedCode5281 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__2, (Optr)&t_send1, (Optr)PSend5282, (Optr)&t_send1, (Optr)PSend5283, (Optr)&t_block_return);
    Block PBlock5280 = new_Block_with(empty_Array, empty_Array, PThreadedCode5281, 1, PSend5283);
    // ifTrue:. 
    Send PSend5279 = new_Send((Optr)PSend5278, SMB_ifTrue_, 1, (Optr)PBlock5280);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // =. 
    Send PSend5284 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__self_Const);
    Symbol  SMB_block__return__self = new_Symbol(L"block_return_self");
    Constant SMB_block__return__self_Const = new_Constant((Optr)SMB_block__return__self);
    // append:. 
    Send PSend5288 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__self_Const);
    // escape:. 
    Send PSend5289 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5288);
    Array PThreadedCode5287 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__self, (Optr)&t_send1, (Optr)PSend5288, (Optr)&t_send1, (Optr)PSend5289, (Optr)&t_block_return);
    Block PBlock5286 = new_Block_with(empty_Array, empty_Array, PThreadedCode5287, 1, PSend5289);
    // ifTrue:. 
    Send PSend5285 = new_Send((Optr)PSend5284, SMB_ifTrue_, 1, (Optr)PBlock5286);
    Array PThreadedCode5247 = instantiate_Array_with(ThreadedCode_Class, 0, 70, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send1, (Optr)PSend5248, (Optr)&t_send_ifTrue_, (Optr)PSend5249, (Optr)PBlock5250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send1, (Optr)PSend5254, (Optr)&t_send_ifTrue_, (Optr)PSend5255, (Optr)PBlock5256, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5260, (Optr)&t_send_ifTrue_, (Optr)PSend5261, (Optr)PBlock5262, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send1, (Optr)PSend5266, (Optr)&t_send_ifTrue_, (Optr)PSend5267, (Optr)PBlock5268, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send1, (Optr)PSend5272, (Optr)&t_send_ifTrue_, (Optr)PSend5273, (Optr)PBlock5274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send1, (Optr)PSend5278, (Optr)&t_send_ifTrue_, (Optr)PSend5279, (Optr)PBlock5280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5284, (Optr)&t_send_ifTrue_, (Optr)PSend5285, (Optr)PBlock5286, (Optr)&t_block_return);
    Block PBlock5246 = new_Block_with(empty_Array, empty_Array, PThreadedCode5247, 7, PSend5249, PSend5255, PSend5261, PSend5267, PSend5273, PSend5279, PSend5285);
    // ifTrue:. 
    Send PSend5245 = new_Send((Optr)PSend5244, SMB_ifTrue_, 1, (Optr)PBlock5246);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5290 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_last_0_1);
    Symbol  SMB_block__return = new_Symbol(L"block_return");
    Constant SMB_block__return_Const = new_Constant((Optr)SMB_block__return);
    // append:. 
    Send PSend5291 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return_Const);
    Array PThreadedCode5223 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5224, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5225, (Optr)&t_send_ifTrue_, (Optr)PSend5226, (Optr)PBlock5227, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend5235, (Optr)&t_send_ifTrue_, (Optr)PSend5236, (Optr)PBlock5237, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5241, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5242, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5243, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_send1, (Optr)PSend5244, (Optr)&t_send_ifTrue_, (Optr)PSend5245, (Optr)PBlock5246, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_send1, (Optr)PSend5290, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return, (Optr)&t_send1, (Optr)PSend5291, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5221 = new_Block_with(PArray5222, empty_Array, PThreadedCode5223, 8, PSend5226, PSend5236, PSend5241, PAssign5242, PSend5245, PSend5290, PSend5291, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5292 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5221);
    Array PThreadedCode5220 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5221, (Optr)&t_send1, (Optr)PSend5292, (Optr)&t_method_return);
    Method PMethod5217 = new_Method_with(PArray5218, PArray5219, empty_Array, PThreadedCode5220, 1, PSend5292);
    
    MethodClosure MC_SMB_insertBlockReturn_ = new_MethodClosure((Method)PMethod5217, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_insertBlockReturn_, MC_SMB_insertBlockReturn_);
}


static void init_SMB_compileSendIfTrueIfFalse_() {
    Symbol SMB_compileSendIfTrueIfFalse_ = new_Symbol(L"compileSendIfTrueIfFalse:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5294 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifTrue__ifFalse__ = new_Symbol(L"send_ifTrue_ifFalse_");
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Constant SMB_send__ifTrue__ifFalse___Const = new_Constant((Optr)SMB_send__ifTrue__ifFalse__);
    // compileSendIfElse:named:. 
    Send PSend5296 = new_Send((Optr)self, SMB_compileSendIfElse_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifTrue__ifFalse___Const);
    Array PThreadedCode5295 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifTrue__ifFalse__, (Optr)&t_send2, (Optr)PSend5296, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5293 = new_Method_with(PArray5294, empty_Array, empty_Array, PThreadedCode5295, 2, PSend5296, self);
    
    MethodClosure MC_SMB_compileSendIfTrueIfFalse_ = new_MethodClosure((Method)PMethod5293, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfTrueIfFalse_, MC_SMB_compileSendIfTrueIfFalse_);
}


static void init_SMB_optimizers() {
    Symbol SMB_optimizers = new_Symbol(L"optimizers");
    Array PThreadedCode5298 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_optimizers, (Optr)&t_method_return);
    Method PMethod5297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5298, 1, slot_Kernel_Threading_ThreadedCompiler_optimizers);
    
    MethodClosure MC_SMB_optimizers = new_MethodClosure((Method)PMethod5297, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_optimizers, MC_SMB_optimizers);
}


static void init_SMB_compileSendIfElse_named_() {
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Variable VAR_threadedName_0_1 = new_Variable_named(L"threadedName", 0);
    Array PArray5300 = new_Array_with(2, (Optr)VAR_aSend_0_0, (Optr)VAR_threadedName_0_1);
    Variable VAR_block1_0_2 = new_Variable_named(L"block1", 0);
    Variable VAR_block2_0_3 = new_Variable_named(L"block2", 0);
    Array PArray5301 = new_Array_with(2, (Optr)VAR_block1_0_2, (Optr)VAR_block2_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5304 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5307 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5306 = new_Assign((Optr)VAR_block1_0_2, (Optr)PSend5307);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend5309 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign5308 = new_Assign((Optr)VAR_block2_0_3, (Optr)PSend5309);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5310 = new_Send((Optr)VAR_block1_0_2, SMB_isScoped, 0);
    // isScoped. 
    Send PSend5313 = new_Send((Optr)VAR_block2_0_3, SMB_isScoped, 0);
    Array PThreadedCode5312 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send0, (Optr)PSend5313, (Optr)&t_block_return);
    Block PBlock5311 = new_Block_with(empty_Array, empty_Array, PThreadedCode5312, 1, PSend5313);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend5314 = new_Send((Optr)PSend5310, SMB_or_, 1, (Optr)PBlock5311);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5318 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5319 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5318);
    Array PThreadedCode5317 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5318, (Optr)&t_send1, (Optr)PSend5319, (Optr)&t_block_return);
    Block PBlock5316 = new_Block_with(empty_Array, empty_Array, PThreadedCode5317, 1, PSend5319);
    // ifTrue:. 
    Send PSend5315 = new_Send((Optr)PSend5314, SMB_ifTrue_, 1, (Optr)PBlock5316);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5320 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5321 = new_Send((Optr)PSend5320, SMB_accept_, 1, (Optr)self);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5322 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)VAR_threadedName_0_1, (Optr)VAR_aSend_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5323 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_block1_0_2);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5324 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend5325 = new_Send((Optr)PSend5324, SMB_addLast_, 1, (Optr)VAR_block1_0_2);
    // compileBlock:. 
    Send PSend5326 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_block2_0_3);
    // code. 
    Send PSend5327 = new_Send((Optr)self, SMB_code, 0);
    // addLast:. 
    Send PSend5328 = new_Send((Optr)PSend5327, SMB_addLast_, 1, (Optr)VAR_block2_0_3);
    Array PThreadedCode5305 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push1, (Optr)PAssign5306, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5307, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5308, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend5309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send0, (Optr)PSend5310, (Optr)&t_push_closure, (Optr)PBlock5311, (Optr)&t_send1, (Optr)PSend5314, (Optr)&t_send_ifTrue_, (Optr)PSend5315, (Optr)PBlock5316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5320, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5321, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_threadedName_0_1, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5322, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send1, (Optr)PSend5323, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5324, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send1, (Optr)PSend5325, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send1, (Optr)PSend5326, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5327, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send1, (Optr)PSend5328, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5303 = new_Block_with(PArray5304, empty_Array, PThreadedCode5305, 10, PAssign5306, PAssign5308, PSend5315, PSend5321, PSend5322, PSend5323, PSend5325, PSend5326, PSend5328, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5329 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5303);
    Array PThreadedCode5302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5303, (Optr)&t_send1, (Optr)PSend5329, (Optr)&t_method_return);
    Method PMethod5299 = new_Method_with(PArray5300, PArray5301, empty_Array, PThreadedCode5302, 1, PSend5329);
    
    MethodClosure MC_SMB_compileSendIfElse_named_ = new_MethodClosure((Method)PMethod5299, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfElse_named_, MC_SMB_compileSendIfElse_named_);
}


static void init_SMB_compileSendIfFalse_() {
    Symbol SMB_compileSendIfFalse_ = new_Symbol(L"compileSendIfFalse:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5331 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifFalse__ = new_Symbol(L"send_ifFalse_");
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Constant SMB_send__ifFalse___Const = new_Constant((Optr)SMB_send__ifFalse__);
    // compileSendIf:named:. 
    Send PSend5333 = new_Send((Optr)self, SMB_compileSendIf_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifFalse___Const);
    Array PThreadedCode5332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifFalse__, (Optr)&t_send2, (Optr)PSend5333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5330 = new_Method_with(PArray5331, empty_Array, empty_Array, PThreadedCode5332, 2, PSend5333, self);
    
    MethodClosure MC_SMB_compileSendIfFalse_ = new_MethodClosure((Method)PMethod5330, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfFalse_, MC_SMB_compileSendIfFalse_);
}


static void init_SMB_internalConstantCode() {
    Symbol SMB_internalConstantCode = new_Symbol(L"internalConstantCode");
    Array PThreadedCode5335 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_method_return);
    Method PMethod5334 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5335, 1, slot_Kernel_Threading_ThreadedCompiler_internalConstantCode);
    
    MethodClosure MC_SMB_internalConstantCode = new_MethodClosure((Method)PMethod5334, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_internalConstantCode, MC_SMB_internalConstantCode);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray5337 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol  SMB_push__slot = new_Symbol(L"push_slot");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__slot_Const = new_Constant((Optr)SMB_push__slot);
    // append:with:. 
    Send PSend5339 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__slot_Const, (Optr)VAR_aSlot_0_0);
    Array PThreadedCode5338 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__slot, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_send2, (Optr)PSend5339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5336 = new_Method_with(PArray5337, empty_Array, empty_Array, PThreadedCode5338, 2, PSend5339, self);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod5336, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray5341 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Symbol  SMB_push1 = new_Symbol(L"push1");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push1_Const = new_Constant((Optr)SMB_push1);
    // append:with:. 
    Send PSend5343 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push1_Const, (Optr)VAR_anAssign_0_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend5344 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5345 = new_Send((Optr)PSend5344, SMB_accept_, 1, (Optr)self);
    Symbol  SMB_assign = new_Symbol(L"assign");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_assign_Const = new_Constant((Optr)SMB_assign);
    // append:. 
    Send PSend5346 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_assign_Const);
    Array PThreadedCode5342 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push1, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send2, (Optr)PSend5343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend5344, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5345, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_assign, (Optr)&t_send1, (Optr)PSend5346, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5340 = new_Method_with(PArray5341, empty_Array, empty_Array, PThreadedCode5342, 4, PSend5343, PSend5345, PSend5346, self);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod5340, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5350 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign5349 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)PSend5350);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // at:put:. 
    Send PSend5351 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)false_Const, (Optr)SMB_push__false_Const);
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // at:put:. 
    Send PSend5352 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)true_Const, (Optr)SMB_push__true_Const);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // at:put:. 
    Send PSend5353 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)nil_Const, (Optr)SMB_push__nil_Const);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // at:put:. 
    Send PSend5354 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_0_Const, (Optr)SMB_push__0_Const);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // at:put:. 
    Send PSend5355 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_push__1_Const);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // at:put:. 
    Send PSend5356 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_push__2_Const);
    Array PThreadedCode5348 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign5349, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend5350, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_false, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send2, (Optr)PSend5351, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_true, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send2, (Optr)PSend5352, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_nil, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send2, (Optr)PSend5353, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_0, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send2, (Optr)PSend5354, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send2, (Optr)PSend5355, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send2, (Optr)PSend5356, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5348, 8, PAssign5349, PSend5351, PSend5352, PSend5353, PSend5354, PSend5355, PSend5356, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod5347, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray5358 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // append:. 
    Send PSend5360 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__self_Const);
    Array PThreadedCode5359 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5360, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5357 = new_Method_with(PArray5358, empty_Array, empty_Array, PThreadedCode5359, 2, PSend5360, self);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod5357, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_insertReturn() {
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    Variable VAR_last_0_0 = new_Variable_named(L"last", 0);
    Array PArray5362 = new_Array_with(1, (Optr)VAR_last_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5365 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5367 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    // removeLast. 
    Send PSend5369 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    Assign PAssign5368 = new_Assign((Optr)VAR_last_0_0, (Optr)PSend5369);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5370 = new_Send((Optr)VAR_last_0_0, SMB_isKindOf_, 1, (Optr)PFunctionPointer_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // =. 
    Send PSend5374 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__true_Const);
    Symbol  SMB_method__return__true = new_Symbol(L"method_return_true");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_method__return__true_Const = new_Constant((Optr)SMB_method__return__true);
    // append:. 
    Send PSend5378 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__true_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5379 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5378);
    Array PThreadedCode5377 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__true, (Optr)&t_send1, (Optr)PSend5378, (Optr)&t_send1, (Optr)PSend5379, (Optr)&t_block_return);
    Block PBlock5376 = new_Block_with(empty_Array, empty_Array, PThreadedCode5377, 1, PSend5379);
    // ifTrue:. 
    Send PSend5375 = new_Send((Optr)PSend5374, SMB_ifTrue_, 1, (Optr)PBlock5376);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // =. 
    Send PSend5380 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__false_Const);
    Symbol  SMB_method__return__false = new_Symbol(L"method_return_false");
    Constant SMB_method__return__false_Const = new_Constant((Optr)SMB_method__return__false);
    // append:. 
    Send PSend5384 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__false_Const);
    // escape:. 
    Send PSend5385 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5384);
    Array PThreadedCode5383 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__false, (Optr)&t_send1, (Optr)PSend5384, (Optr)&t_send1, (Optr)PSend5385, (Optr)&t_block_return);
    Block PBlock5382 = new_Block_with(empty_Array, empty_Array, PThreadedCode5383, 1, PSend5385);
    // ifTrue:. 
    Send PSend5381 = new_Send((Optr)PSend5380, SMB_ifTrue_, 1, (Optr)PBlock5382);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // =. 
    Send PSend5386 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_method__return__nil = new_Symbol(L"method_return_nil");
    Constant SMB_method__return__nil_Const = new_Constant((Optr)SMB_method__return__nil);
    // append:. 
    Send PSend5390 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__nil_Const);
    // escape:. 
    Send PSend5391 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5390);
    Array PThreadedCode5389 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__nil, (Optr)&t_send1, (Optr)PSend5390, (Optr)&t_send1, (Optr)PSend5391, (Optr)&t_block_return);
    Block PBlock5388 = new_Block_with(empty_Array, empty_Array, PThreadedCode5389, 1, PSend5391);
    // ifTrue:. 
    Send PSend5387 = new_Send((Optr)PSend5386, SMB_ifTrue_, 1, (Optr)PBlock5388);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // =. 
    Send PSend5392 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__0_Const);
    Symbol  SMB_method__return__0 = new_Symbol(L"method_return_0");
    Constant SMB_method__return__0_Const = new_Constant((Optr)SMB_method__return__0);
    // append:. 
    Send PSend5396 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__0_Const);
    // escape:. 
    Send PSend5397 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5396);
    Array PThreadedCode5395 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__0, (Optr)&t_send1, (Optr)PSend5396, (Optr)&t_send1, (Optr)PSend5397, (Optr)&t_block_return);
    Block PBlock5394 = new_Block_with(empty_Array, empty_Array, PThreadedCode5395, 1, PSend5397);
    // ifTrue:. 
    Send PSend5393 = new_Send((Optr)PSend5392, SMB_ifTrue_, 1, (Optr)PBlock5394);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // =. 
    Send PSend5398 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__1_Const);
    Symbol  SMB_method__return__1 = new_Symbol(L"method_return_1");
    Constant SMB_method__return__1_Const = new_Constant((Optr)SMB_method__return__1);
    // append:. 
    Send PSend5402 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__1_Const);
    // escape:. 
    Send PSend5403 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5402);
    Array PThreadedCode5401 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__1, (Optr)&t_send1, (Optr)PSend5402, (Optr)&t_send1, (Optr)PSend5403, (Optr)&t_block_return);
    Block PBlock5400 = new_Block_with(empty_Array, empty_Array, PThreadedCode5401, 1, PSend5403);
    // ifTrue:. 
    Send PSend5399 = new_Send((Optr)PSend5398, SMB_ifTrue_, 1, (Optr)PBlock5400);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // =. 
    Send PSend5404 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__2_Const);
    Symbol  SMB_method__return__2 = new_Symbol(L"method_return_2");
    Constant SMB_method__return__2_Const = new_Constant((Optr)SMB_method__return__2);
    // append:. 
    Send PSend5408 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__2_Const);
    // escape:. 
    Send PSend5409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5408);
    Array PThreadedCode5407 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__2, (Optr)&t_send1, (Optr)PSend5408, (Optr)&t_send1, (Optr)PSend5409, (Optr)&t_block_return);
    Block PBlock5406 = new_Block_with(empty_Array, empty_Array, PThreadedCode5407, 1, PSend5409);
    // ifTrue:. 
    Send PSend5405 = new_Send((Optr)PSend5404, SMB_ifTrue_, 1, (Optr)PBlock5406);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // =. 
    Send PSend5410 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__self_Const);
    Symbol  SMB_method__return__self = new_Symbol(L"method_return_self");
    Constant SMB_method__return__self_Const = new_Constant((Optr)SMB_method__return__self);
    // append:. 
    Send PSend5414 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__self_Const);
    // escape:. 
    Send PSend5415 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5414);
    Array PThreadedCode5413 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__self, (Optr)&t_send1, (Optr)PSend5414, (Optr)&t_send1, (Optr)PSend5415, (Optr)&t_block_return);
    Block PBlock5412 = new_Block_with(empty_Array, empty_Array, PThreadedCode5413, 1, PSend5415);
    // ifTrue:. 
    Send PSend5411 = new_Send((Optr)PSend5410, SMB_ifTrue_, 1, (Optr)PBlock5412);
    Array PThreadedCode5373 = instantiate_Array_with(ThreadedCode_Class, 0, 70, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send1, (Optr)PSend5374, (Optr)&t_send_ifTrue_, (Optr)PSend5375, (Optr)PBlock5376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send1, (Optr)PSend5380, (Optr)&t_send_ifTrue_, (Optr)PSend5381, (Optr)PBlock5382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5386, (Optr)&t_send_ifTrue_, (Optr)PSend5387, (Optr)PBlock5388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send1, (Optr)PSend5392, (Optr)&t_send_ifTrue_, (Optr)PSend5393, (Optr)PBlock5394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send1, (Optr)PSend5398, (Optr)&t_send_ifTrue_, (Optr)PSend5399, (Optr)PBlock5400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send1, (Optr)PSend5404, (Optr)&t_send_ifTrue_, (Optr)PSend5405, (Optr)PBlock5406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5410, (Optr)&t_send_ifTrue_, (Optr)PSend5411, (Optr)PBlock5412, (Optr)&t_block_return);
    Block PBlock5372 = new_Block_with(empty_Array, empty_Array, PThreadedCode5373, 7, PSend5375, PSend5381, PSend5387, PSend5393, PSend5399, PSend5405, PSend5411);
    // ifTrue:. 
    Send PSend5371 = new_Send((Optr)PSend5370, SMB_ifTrue_, 1, (Optr)PBlock5372);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5416 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_last_0_0);
    Symbol  SMB_method__return = new_Symbol(L"method_return");
    Constant SMB_method__return_Const = new_Constant((Optr)SMB_method__return);
    // append:. 
    Send PSend5417 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return_Const);
    Array PThreadedCode5366 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5367, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5368, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_send1, (Optr)PSend5370, (Optr)&t_send_ifTrue_, (Optr)PSend5371, (Optr)PBlock5372, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_send1, (Optr)PSend5416, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return, (Optr)&t_send1, (Optr)PSend5417, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5364 = new_Block_with(PArray5365, empty_Array, PThreadedCode5366, 6, PSend5367, PAssign5368, PSend5371, PSend5416, PSend5417, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5418 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5364);
    Array PThreadedCode5363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5364, (Optr)&t_send1, (Optr)PSend5418, (Optr)&t_method_return);
    Method PMethod5361 = new_Method_with(empty_Array, PArray5362, empty_Array, PThreadedCode5363, 1, PSend5418);
    
    MethodClosure MC_SMB_insertReturn = new_MethodClosure((Method)PMethod5361, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_insertReturn, MC_SMB_insertReturn);
}


static void init_SMB_visitNativeMethod_() {
    Symbol SMB_visitNativeMethod_ = new_Symbol(L"visitNativeMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5420 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend5422 = new_Send((Optr)self, SMB_visitMethod_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode5421 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5422, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5419 = new_Method_with(PArray5420, empty_Array, empty_Array, PThreadedCode5421, 2, PSend5422, self);
    
    MethodClosure MC_SMB_visitNativeMethod_ = new_MethodClosure((Method)PMethod5419, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitNativeMethod_, MC_SMB_visitNativeMethod_);
}


static void init_SMB_compileSendToByDo_() {
    Symbol SMB_compileSendToByDo_ = new_Symbol(L"compileSendToByDo:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5424 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5426 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5427 = new_Send((Optr)PSend5426, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5428 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__to__by__do__ = new_Symbol(L"send_to_by_do_");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_send__to__by__do___Const = new_Constant((Optr)SMB_send__to__by__do__);
    // append:. 
    Send PSend5429 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_send__to__by__do___Const);
    Symbol  SMB_continue__to__do__ = new_Symbol(L"continue_to_do_");
    Constant SMB_continue__to__do___Const = new_Constant((Optr)SMB_continue__to__do__);
    // append:. 
    Send PSend5430 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_continue__to__do___Const);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5431 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5432 = new_Send((Optr)PSend5431, SMB_add_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5425 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5426, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5427, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5428, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send__to__by__do__, (Optr)&t_send1, (Optr)PSend5429, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_continue__to__do__, (Optr)&t_send1, (Optr)PSend5430, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5431, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5432, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5423 = new_Method_with(PArray5424, empty_Array, empty_Array, PThreadedCode5425, 6, PSend5427, PSend5428, PSend5429, PSend5430, PSend5432, self);
    
    MethodClosure MC_SMB_compileSendToByDo_ = new_MethodClosure((Method)PMethod5423, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendToByDo_, MC_SMB_compileSendToByDo_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5434 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend5436 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5437 = new_Send((Optr)VAR_aMethod_0_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode5435 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5437, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_method_return);
    Method PMethod5433 = new_Method_with(PArray5434, empty_Array, empty_Array, PThreadedCode5435, 3, PSend5436, PSend5437, slot_Kernel_Threading_ThreadedCompiler_code);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod5433, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileSendToDo_() {
    Symbol SMB_compileSendToDo_ = new_Symbol(L"compileSendToDo:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5439 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5441 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5442 = new_Send((Optr)PSend5441, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5443 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__to__do__ = new_Symbol(L"send_to_do_");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_send__to__do___Const = new_Constant((Optr)SMB_send__to__do__);
    // append:. 
    Send PSend5444 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_send__to__do___Const);
    Symbol  SMB_continue__to__do__ = new_Symbol(L"continue_to_do_");
    Constant SMB_continue__to__do___Const = new_Constant((Optr)SMB_continue__to__do__);
    // append:. 
    Send PSend5445 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_continue__to__do___Const);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5446 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5447 = new_Send((Optr)PSend5446, SMB_add_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5440 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5441, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5442, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5443, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send__to__do__, (Optr)&t_send1, (Optr)PSend5444, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_continue__to__do__, (Optr)&t_send1, (Optr)PSend5445, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5446, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5447, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5438 = new_Method_with(PArray5439, empty_Array, empty_Array, PThreadedCode5440, 6, PSend5442, PSend5443, PSend5444, PSend5445, PSend5447, self);
    
    MethodClosure MC_SMB_compileSendToDo_ = new_MethodClosure((Method)PMethod5438, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendToDo_, MC_SMB_compileSendToDo_);
}


static void init_SMB_compileSendIfFalseIfTrue_() {
    Symbol SMB_compileSendIfFalseIfTrue_ = new_Symbol(L"compileSendIfFalseIfTrue:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5449 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifFalse__ifTrue__ = new_Symbol(L"send_ifFalse_ifTrue_");
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Constant SMB_send__ifFalse__ifTrue___Const = new_Constant((Optr)SMB_send__ifFalse__ifTrue__);
    // compileSendIfElse:named:. 
    Send PSend5451 = new_Send((Optr)self, SMB_compileSendIfElse_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifFalse__ifTrue___Const);
    Array PThreadedCode5450 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifFalse__ifTrue__, (Optr)&t_send2, (Optr)PSend5451, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5448 = new_Method_with(PArray5449, empty_Array, empty_Array, PThreadedCode5450, 2, PSend5451, self);
    
    MethodClosure MC_SMB_compileSendIfFalseIfTrue_ = new_MethodClosure((Method)PMethod5448, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfFalseIfTrue_, MC_SMB_compileSendIfFalseIfTrue_);
}


static void init_SMB_append_with_() {
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aValue_0_1 = new_Variable_named(L"aValue", 0);
    Array PArray5453 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aValue_0_1);
    Symbol SMB_append_ = new_Symbol(L"append:");
    // append:. 
    Send PSend5455 = new_Send((Optr)self, SMB_append_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5456 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_aValue_0_1);
    Array PThreadedCode5454 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend5455, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_aValue_0_1, (Optr)&t_send1, (Optr)PSend5456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5452 = new_Method_with(PArray5453, empty_Array, empty_Array, PThreadedCode5454, 3, PSend5455, PSend5456, self);
    
    MethodClosure MC_SMB_append_with_ = new_MethodClosure((Method)PMethod5452, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_append_with_, MC_SMB_append_with_);
}


static void init_SMB_optimizers_() {
    Symbol SMB_optimizers_ = new_Symbol(L"optimizers:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5458 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign5460 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_optimizers, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5459 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign5460, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5457 = new_Method_with(PArray5458, empty_Array, empty_Array, PThreadedCode5459, 2, PAssign5460, self);
    
    MethodClosure MC_SMB_optimizers_ = new_MethodClosure((Method)PMethod5457, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_optimizers_, MC_SMB_optimizers_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray5462 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // append:. 
    Send PSend5464 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__self_Const);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5465 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSuper_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5466 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <. 
    Send PSend5467 = new_Send((Optr)PSend5466, SMB__lt_, 1, (Optr)int_6_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol  SMB_super = new_Symbol(L"super");
    // size. 
    Send PSend5471 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend5472 = new_Send((Optr)PSend5471, SMB_asString, 0);
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend5473 = new_Send((Optr)SMB_super_Const, SMB__append_, 1, (Optr)PSend5472);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend5474 = new_Send((Optr)PSend5473, SMB_asSymbol, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5475 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)PSend5474, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode5470 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend5471, (Optr)&t_send0, (Optr)PSend5472, (Optr)&t_send1, (Optr)PSend5473, (Optr)&t_send0, (Optr)PSend5474, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send2, (Optr)PSend5475, (Optr)&t_block_return);
    Block PBlock5469 = new_Block_with(empty_Array, empty_Array, PThreadedCode5470, 1, PSend5475);
    Symbol  SMB_supern = new_Symbol(L"supern");
    Constant SMB_supern_Const = new_Constant((Optr)SMB_supern);
    // append:with:. 
    Send PSend5478 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_supern_Const, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode5477 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_supern, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send2, (Optr)PSend5478, (Optr)&t_block_return);
    Block PBlock5476 = new_Block_with(empty_Array, empty_Array, PThreadedCode5477, 1, PSend5478);
    // ifTrue:ifFalse:. 
    Send PSend5468 = new_Send((Optr)PSend5467, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5469, (Optr)PBlock5476);
    Array PThreadedCode5463 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5464, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send1, (Optr)PSend5465, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend5466, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend5467, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5468, (Optr)PBlock5469, (Optr)PBlock5476, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5461 = new_Method_with(PArray5462, empty_Array, empty_Array, PThreadedCode5463, 4, PSend5464, PSend5465, PSend5468, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod5461, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5480 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5483 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend5485 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_ifTrue__Const = new_Constant((Optr)SMB_ifTrue_);
    // =. 
    Send PSend5486 = new_Send((Optr)PSend5485, SMB__equals_, 1, (Optr)SMB_ifTrue__Const);
    Symbol SMB_compileSendIfTrue_ = new_Symbol(L"compileSendIfTrue:");
    // compileSendIfTrue:. 
    Send PSend5490 = new_Send((Optr)self, SMB_compileSendIfTrue_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5491 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5490);
    Array PThreadedCode5489 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5490, (Optr)&t_send1, (Optr)PSend5491, (Optr)&t_block_return);
    Block PBlock5488 = new_Block_with(empty_Array, empty_Array, PThreadedCode5489, 1, PSend5491);
    // ifTrue:. 
    Send PSend5487 = new_Send((Optr)PSend5486, SMB_ifTrue_, 1, (Optr)PBlock5488);
    // message. 
    Send PSend5492 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Constant SMB_ifFalse__Const = new_Constant((Optr)SMB_ifFalse_);
    // =. 
    Send PSend5493 = new_Send((Optr)PSend5492, SMB__equals_, 1, (Optr)SMB_ifFalse__Const);
    Symbol SMB_compileSendIfFalse_ = new_Symbol(L"compileSendIfFalse:");
    // compileSendIfFalse:. 
    Send PSend5497 = new_Send((Optr)self, SMB_compileSendIfFalse_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5498 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5497);
    Array PThreadedCode5496 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5497, (Optr)&t_send1, (Optr)PSend5498, (Optr)&t_block_return);
    Block PBlock5495 = new_Block_with(empty_Array, empty_Array, PThreadedCode5496, 1, PSend5498);
    // ifTrue:. 
    Send PSend5494 = new_Send((Optr)PSend5493, SMB_ifTrue_, 1, (Optr)PBlock5495);
    // message. 
    Send PSend5499 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Constant SMB_ifTrue_ifFalse__Const = new_Constant((Optr)SMB_ifTrue_ifFalse_);
    // =. 
    Send PSend5500 = new_Send((Optr)PSend5499, SMB__equals_, 1, (Optr)SMB_ifTrue_ifFalse__Const);
    Symbol SMB_compileSendIfTrueIfFalse_ = new_Symbol(L"compileSendIfTrueIfFalse:");
    // compileSendIfTrueIfFalse:. 
    Send PSend5504 = new_Send((Optr)self, SMB_compileSendIfTrueIfFalse_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5505 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5504);
    Array PThreadedCode5503 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5504, (Optr)&t_send1, (Optr)PSend5505, (Optr)&t_block_return);
    Block PBlock5502 = new_Block_with(empty_Array, empty_Array, PThreadedCode5503, 1, PSend5505);
    // ifTrue:. 
    Send PSend5501 = new_Send((Optr)PSend5500, SMB_ifTrue_, 1, (Optr)PBlock5502);
    // message. 
    Send PSend5506 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Constant SMB_ifFalse_ifTrue__Const = new_Constant((Optr)SMB_ifFalse_ifTrue_);
    // =. 
    Send PSend5507 = new_Send((Optr)PSend5506, SMB__equals_, 1, (Optr)SMB_ifFalse_ifTrue__Const);
    Symbol SMB_compileSendIfFalseIfTrue_ = new_Symbol(L"compileSendIfFalseIfTrue:");
    // compileSendIfFalseIfTrue:. 
    Send PSend5511 = new_Send((Optr)self, SMB_compileSendIfFalseIfTrue_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5512 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5511);
    Array PThreadedCode5510 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5511, (Optr)&t_send1, (Optr)PSend5512, (Optr)&t_block_return);
    Block PBlock5509 = new_Block_with(empty_Array, empty_Array, PThreadedCode5510, 1, PSend5512);
    // ifTrue:. 
    Send PSend5508 = new_Send((Optr)PSend5507, SMB_ifTrue_, 1, (Optr)PBlock5509);
    // message. 
    Send PSend5513 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_to_do_ = new_Symbol(L"to:do:");
    Constant SMB_to_do__Const = new_Constant((Optr)SMB_to_do_);
    // =. 
    Send PSend5514 = new_Send((Optr)PSend5513, SMB__equals_, 1, (Optr)SMB_to_do__Const);
    Symbol SMB_compileSendToDo_ = new_Symbol(L"compileSendToDo:");
    // compileSendToDo:. 
    Send PSend5518 = new_Send((Optr)self, SMB_compileSendToDo_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5519 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5518);
    Array PThreadedCode5517 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5518, (Optr)&t_send1, (Optr)PSend5519, (Optr)&t_block_return);
    Block PBlock5516 = new_Block_with(empty_Array, empty_Array, PThreadedCode5517, 1, PSend5519);
    // ifTrue:. 
    Send PSend5515 = new_Send((Optr)PSend5514, SMB_ifTrue_, 1, (Optr)PBlock5516);
    // message. 
    Send PSend5520 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant SMB_to_by_do__Const = new_Constant((Optr)SMB_to_by_do_);
    // =. 
    Send PSend5521 = new_Send((Optr)PSend5520, SMB__equals_, 1, (Optr)SMB_to_by_do__Const);
    Symbol SMB_compileSendToByDo_ = new_Symbol(L"compileSendToByDo:");
    // compileSendToByDo:. 
    Send PSend5525 = new_Send((Optr)self, SMB_compileSendToByDo_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5526 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5525);
    Array PThreadedCode5524 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5525, (Optr)&t_send1, (Optr)PSend5526, (Optr)&t_block_return);
    Block PBlock5523 = new_Block_with(empty_Array, empty_Array, PThreadedCode5524, 1, PSend5526);
    // ifTrue:. 
    Send PSend5522 = new_Send((Optr)PSend5521, SMB_ifTrue_, 1, (Optr)PBlock5523);
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5527 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5484 = instantiate_Array_with(ThreadedCode_Class, 0, 79, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5485, (Optr)&t_push1, (Optr)SMB_ifTrue_, (Optr)&t_send1, (Optr)PSend5486, (Optr)&t_send_ifTrue_, (Optr)PSend5487, (Optr)PBlock5488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5492, (Optr)&t_push1, (Optr)SMB_ifFalse_, (Optr)&t_send1, (Optr)PSend5493, (Optr)&t_send_ifTrue_, (Optr)PSend5494, (Optr)PBlock5495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5499, (Optr)&t_push1, (Optr)SMB_ifTrue_ifFalse_, (Optr)&t_send1, (Optr)PSend5500, (Optr)&t_send_ifTrue_, (Optr)PSend5501, (Optr)PBlock5502, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5506, (Optr)&t_push1, (Optr)SMB_ifFalse_ifTrue_, (Optr)&t_send1, (Optr)PSend5507, (Optr)&t_send_ifTrue_, (Optr)PSend5508, (Optr)PBlock5509, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5513, (Optr)&t_push1, (Optr)SMB_to_do_, (Optr)&t_send1, (Optr)PSend5514, (Optr)&t_send_ifTrue_, (Optr)PSend5515, (Optr)PBlock5516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5520, (Optr)&t_push1, (Optr)SMB_to_by_do_, (Optr)&t_send1, (Optr)PSend5521, (Optr)&t_send_ifTrue_, (Optr)PSend5522, (Optr)PBlock5523, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5527, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5482 = new_Block_with(PArray5483, empty_Array, PThreadedCode5484, 8, PSend5487, PSend5494, PSend5501, PSend5508, PSend5515, PSend5522, PSend5527, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5528 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5482);
    Array PThreadedCode5481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5482, (Optr)&t_send1, (Optr)PSend5528, (Optr)&t_method_return);
    Method PMethod5479 = new_Method_with(PArray5480, empty_Array, empty_Array, PThreadedCode5481, 1, PSend5528);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod5479, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode5530 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_method_return);
    Method PMethod5529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5530, 1, slot_Kernel_Threading_ThreadedCompiler_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod5529, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray5532 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol  SMB_push__variable = new_Symbol(L"push_variable");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__variable_Const = new_Constant((Optr)SMB_push__variable);
    // append:with:. 
    Send PSend5534 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__variable_Const, (Optr)VAR_aVariable_0_0);
    Array PThreadedCode5533 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__variable, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send2, (Optr)PSend5534, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5531 = new_Method_with(PArray5532, empty_Array, empty_Array, PThreadedCode5533, 2, PSend5534, self);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod5531, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_compileSendIfTrue_() {
    Symbol SMB_compileSendIfTrue_ = new_Symbol(L"compileSendIfTrue:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5536 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifTrue__ = new_Symbol(L"send_ifTrue_");
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Constant SMB_send__ifTrue___Const = new_Constant((Optr)SMB_send__ifTrue__);
    // compileSendIf:named:. 
    Send PSend5538 = new_Send((Optr)self, SMB_compileSendIf_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifTrue___Const);
    Array PThreadedCode5537 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifTrue__, (Optr)&t_send2, (Optr)PSend5538, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5535 = new_Method_with(PArray5536, empty_Array, empty_Array, PThreadedCode5537, 2, PSend5538, self);
    
    MethodClosure MC_SMB_compileSendIfTrue_ = new_MethodClosure((Method)PMethod5535, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfTrue_, MC_SMB_compileSendIfTrue_);
}


static void init_SMB_compileSendIf_named_() {
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Variable VAR_threadedName_0_1 = new_Variable_named(L"threadedName", 0);
    Array PArray5540 = new_Array_with(2, (Optr)VAR_aSend_0_0, (Optr)VAR_threadedName_0_1);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray5541 = new_Array_with(1, (Optr)VAR_aBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5544 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5547 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5546 = new_Assign((Optr)VAR_aBlock_0_2, (Optr)PSend5547);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5548 = new_Send((Optr)VAR_aBlock_0_2, SMB_isScoped, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5552 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5553 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5552);
    Array PThreadedCode5551 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5552, (Optr)&t_send1, (Optr)PSend5553, (Optr)&t_block_return);
    Block PBlock5550 = new_Block_with(empty_Array, empty_Array, PThreadedCode5551, 1, PSend5553);
    // ifTrue:. 
    Send PSend5549 = new_Send((Optr)PSend5548, SMB_ifTrue_, 1, (Optr)PBlock5550);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5554 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5555 = new_Send((Optr)PSend5554, SMB_accept_, 1, (Optr)self);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5556 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)VAR_threadedName_0_1, (Optr)VAR_aSend_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5557 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_aBlock_0_2);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5558 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend5559 = new_Send((Optr)PSend5558, SMB_addLast_, 1, (Optr)VAR_aBlock_0_2);
    Array PThreadedCode5545 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign5546, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5547, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send0, (Optr)PSend5548, (Optr)&t_send_ifTrue_, (Optr)PSend5549, (Optr)PBlock5550, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5554, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5555, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_threadedName_0_1, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5556, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send1, (Optr)PSend5557, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5558, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send1, (Optr)PSend5559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5543 = new_Block_with(PArray5544, empty_Array, PThreadedCode5545, 7, PAssign5546, PSend5549, PSend5555, PSend5556, PSend5557, PSend5559, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5560 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5543);
    Array PThreadedCode5542 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5543, (Optr)&t_send1, (Optr)PSend5560, (Optr)&t_method_return);
    Method PMethod5539 = new_Method_with(PArray5540, PArray5541, empty_Array, PThreadedCode5542, 1, PSend5560);
    
    MethodClosure MC_SMB_compileSendIf_named_ = new_MethodClosure((Method)PMethod5539, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIf_named_, MC_SMB_compileSendIf_named_);
}


static void init_SMB_visitCollection_() {
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray5562 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5565 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5567 = new_Send((Optr)VAR_each_1_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode5566 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5567, (Optr)&t_method_return);
    Block PBlock5564 = new_Block_with(PArray5565, empty_Array, PThreadedCode5566, 1, PSend5567);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5568 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock5564);
    Array PThreadedCode5563 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock5564, (Optr)&t_send1, (Optr)PSend5568, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5561 = new_Method_with(PArray5562, empty_Array, empty_Array, PThreadedCode5563, 2, PSend5568, self);
    
    MethodClosure MC_SMB_visitCollection_ = new_MethodClosure((Method)PMethod5561, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitCollection_, MC_SMB_visitCollection_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5572 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5571 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5572);
    // new. 
    Send PSend5574 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5573 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)PSend5574);
    Array PThreadedCode5570 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign5571, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5572, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5573, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5574, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5570, 3, PAssign5571, PAssign5573, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod5569, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5576 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol  SMB_push__closure = new_Symbol(L"push_closure");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__closure_Const = new_Constant((Optr)SMB_push__closure);
    // append:with:. 
    Send PSend5578 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__closure_Const, (Optr)VAR_aBlock_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5579 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode5577 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__closure, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend5578, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5579, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5575 = new_Method_with(PArray5576, empty_Array, empty_Array, PThreadedCode5577, 3, PSend5578, PSend5579, self);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod5575, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray5581 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol  SMB_push__class__reference = new_Symbol(L"push_class_reference");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__class__reference_Const = new_Constant((Optr)SMB_push__class__reference);
    // append:with:. 
    Send PSend5583 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__class__reference_Const, (Optr)VAR_aClassReference_0_0);
    Array PThreadedCode5582 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__class__reference, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send2, (Optr)PSend5583, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5580 = new_Method_with(PArray5581, empty_Array, empty_Array, PThreadedCode5582, 2, PSend5583, self);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod5580, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_isUnscopedBlock_() {
    Symbol SMB_isUnscopedBlock_ = new_Symbol(L"isUnscopedBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray5585 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5587 = new_Send((Optr)VAR_block_0_0, SMB_isKindOf_, 1, (Optr)PBlock_classReference);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend5590 = new_Send((Optr)VAR_block_0_0, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5591 = new_Send((Optr)PSend5590, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend5592 = new_Send((Optr)PSend5591, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode5589 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend5590, (Optr)&t_send0, (Optr)PSend5591, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5592, (Optr)&t_block_return);
    Block PBlock5588 = new_Block_with(empty_Array, empty_Array, PThreadedCode5589, 1, PSend5592);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend5593 = new_Send((Optr)PSend5587, SMB_and_, 1, (Optr)PBlock5588);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend5596 = new_Send((Optr)VAR_block_0_0, SMB_locals, 0);
    // size. 
    Send PSend5597 = new_Send((Optr)PSend5596, SMB_size, 0);
    // =. 
    Send PSend5598 = new_Send((Optr)PSend5597, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode5595 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend5596, (Optr)&t_send0, (Optr)PSend5597, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5598, (Optr)&t_block_return);
    Block PBlock5594 = new_Block_with(empty_Array, empty_Array, PThreadedCode5595, 1, PSend5598);
    // and:. 
    Send PSend5599 = new_Send((Optr)PSend5593, SMB_and_, 1, (Optr)PBlock5594);
    Array PThreadedCode5586 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_send1, (Optr)PSend5587, (Optr)&t_push_closure, (Optr)PBlock5588, (Optr)&t_send1, (Optr)PSend5593, (Optr)&t_push_closure, (Optr)PBlock5594, (Optr)&t_send1, (Optr)PSend5599, (Optr)&t_method_return);
    Method PMethod5584 = new_Method_with(PArray5585, empty_Array, empty_Array, PThreadedCode5586, 1, PSend5599);
    
    MethodClosure MC_SMB_isUnscopedBlock_ = new_MethodClosure((Method)PMethod5584, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_isUnscopedBlock_, MC_SMB_isUnscopedBlock_);
}


static void init_SMB_compileNatively_() {
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray5601 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Threaded = new_Symbol(L"Interpretation.Threaded");
    Annotation PAnnotation5603 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_compileNatively_, (Optr)SMB_Interpretation_minus_Threaded);
    Array PArray5602 = new_Array_with(1, (Optr)PAnnotation5603);
    Array PThreadedCode5604 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_method_return);
    NativeMethod PNativeMethod5600 = new_NativeMethod_with(PArray5601, empty_Array, PArray5602, PThreadedCode5604, 1, VAR_anArray_0_0);
    
    MethodClosure MC_SMB_compileNatively_ = new_MethodClosure((Method)PNativeMethod5600, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileNatively_, MC_SMB_compileNatively_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5608 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, SMB_removeLast, 0);
    Assign PAssign5607 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5608);
    Array PThreadedCode5606 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5607, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_send0, (Optr)PSend5608, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5606, 2, PAssign5607, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod5605, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5611 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, SMB_add_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5613 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5612 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5613);
    Array PThreadedCode5610 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5611, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5612, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5613, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5610, 3, PSend5611, PAssign5612, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod5609, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConst_0_0 = new_Variable_named(L"aConst", 0);
    Array PArray5615 = new_Array_with(1, (Optr)VAR_aConst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5618 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend5620 = new_Send((Optr)VAR_aConst_0_0, SMB_constant, 0);
    Variable VAR_instruction_2_0 = new_Variable_named(L"instruction", 2);
    Array PArray5622 = new_Array_with(1, (Optr)VAR_instruction_2_0);
    Symbol SMB_append_ = new_Symbol(L"append:");
    // append:. 
    Send PSend5624 = new_Send((Optr)self, SMB_append_, 1, (Optr)VAR_instruction_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5624);
    Array PThreadedCode5623 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_instruction_2_0, (Optr)&t_send1, (Optr)PSend5624, (Optr)&t_send1, (Optr)PSend5625, (Optr)&t_method_return);
    Block PBlock5621 = new_Block_with(PArray5622, empty_Array, PThreadedCode5623, 1, PSend5625);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend5626 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_ifPresent_, 2, (Optr)PSend5620, (Optr)PBlock5621);
    Symbol  SMB_push1 = new_Symbol(L"push1");
    // constant. 
    Send PSend5627 = new_Send((Optr)VAR_aConst_0_0, SMB_constant, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push1_Const = new_Constant((Optr)SMB_push1);
    // append:with:. 
    Send PSend5628 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push1_Const, (Optr)PSend5627);
    Array PThreadedCode5619 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_variable, (Optr)VAR_aConst_0_0, (Optr)&t_send0, (Optr)PSend5620, (Optr)&t_push_closure, (Optr)PBlock5621, (Optr)&t_send2, (Optr)PSend5626, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push1, (Optr)&t_push_variable, (Optr)VAR_aConst_0_0, (Optr)&t_send0, (Optr)PSend5627, (Optr)&t_send2, (Optr)PSend5628, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5617 = new_Block_with(PArray5618, empty_Array, PThreadedCode5619, 3, PSend5626, PSend5628, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5629 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5617);
    Array PThreadedCode5616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5617, (Optr)&t_send1, (Optr)PSend5629, (Optr)&t_method_return);
    Method PMethod5614 = new_Method_with(PArray5615, empty_Array, empty_Array, PThreadedCode5616, 1, PSend5629);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod5614, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_compileSend_() {
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5631 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5633 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5634 = new_Send((Optr)PSend5633, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5635 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5636 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <. 
    Send PSend5637 = new_Send((Optr)PSend5636, SMB__lt_, 1, (Optr)int_6_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol  SMB_send = new_Symbol(L"send");
    // size. 
    Send PSend5641 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend5642 = new_Send((Optr)PSend5641, SMB_asString, 0);
    Constant SMB_send_Const = new_Constant((Optr)SMB_send);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend5643 = new_Send((Optr)SMB_send_Const, SMB__append_, 1, (Optr)PSend5642);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend5644 = new_Send((Optr)PSend5643, SMB_asSymbol, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5645 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)PSend5644, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5640 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5641, (Optr)&t_send0, (Optr)PSend5642, (Optr)&t_send1, (Optr)PSend5643, (Optr)&t_send0, (Optr)PSend5644, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5645, (Optr)&t_block_return);
    Block PBlock5639 = new_Block_with(empty_Array, empty_Array, PThreadedCode5640, 1, PSend5645);
    Symbol  SMB_sendn = new_Symbol(L"sendn");
    Constant SMB_sendn_Const = new_Constant((Optr)SMB_sendn);
    // append:with:. 
    Send PSend5648 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_sendn_Const, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5647 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_sendn, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5648, (Optr)&t_block_return);
    Block PBlock5646 = new_Block_with(empty_Array, empty_Array, PThreadedCode5647, 1, PSend5648);
    // ifTrue:ifFalse:. 
    Send PSend5638 = new_Send((Optr)PSend5637, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5639, (Optr)PBlock5646);
    Array PThreadedCode5632 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5633, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5634, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5635, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5636, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend5637, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5638, (Optr)PBlock5639, (Optr)PBlock5646, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5630 = new_Method_with(PArray5631, empty_Array, empty_Array, PThreadedCode5632, 4, PSend5634, PSend5635, PSend5638, self);
    
    MethodClosure MC_SMB_compileSend_ = new_MethodClosure((Method)PMethod5630, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSend_, MC_SMB_compileSend_);
}


static void init_SMB_compileBlock_() {
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5650 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend5652 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    // visitStatements:. 
    Send PSend5653 = new_Send((Optr)self, SMB_visitStatements_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_insertBlockReturn_ = new_Symbol(L"insertBlockReturn:");
    // insertBlockReturn:. 
    Send PSend5654 = new_Send((Optr)self, SMB_insertBlockReturn_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend5655 = new_Send((Optr)PThreadedCode_classReference, SMB_newFrom_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    // compileNatively:. 
    Send PSend5656 = new_Send((Optr)self, SMB_compileNatively_, 1, (Optr)PSend5655);
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    // threaded:. 
    Send PSend5657 = new_Send((Optr)VAR_aBlock_0_0, SMB_threaded_, 1, (Optr)PSend5656);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend5658 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode5651 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5652, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5653, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PThreadedCode_classReference, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5655, (Optr)&t_send1, (Optr)PSend5656, (Optr)&t_send1, (Optr)PSend5657, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5649 = new_Method_with(PArray5650, empty_Array, empty_Array, PThreadedCode5651, 6, PSend5652, PSend5653, PSend5654, PSend5657, PSend5658, self);
    
    MethodClosure MC_SMB_compileBlock_ = new_MethodClosure((Method)PMethod5649, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileBlock_, MC_SMB_compileBlock_);
}


static void init_SMB_scopes() {
    Symbol SMB_scopes = new_Symbol(L"scopes");
    Array PThreadedCode5660 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_method_return);
    Method PMethod5659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5660, 1, slot_Kernel_Threading_ThreadedCompiler_scopes);
    
    MethodClosure MC_SMB_scopes = new_MethodClosure((Method)PMethod5659, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_scopes, MC_SMB_scopes);
}


static void init_SMB_visitStatements_() {
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray5662 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5665 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5667 = new_Send((Optr)VAR_each_1_0, SMB_accept_, 1, (Optr)self);
    Symbol  SMB_zap = new_Symbol(L"zap");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_zap_Const = new_Constant((Optr)SMB_zap);
    // append:. 
    Send PSend5668 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_zap_Const);
    Array PThreadedCode5666 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5667, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_zap, (Optr)&t_send1, (Optr)PSend5668, (Optr)&t_method_return);
    Block PBlock5664 = new_Block_with(PArray5665, empty_Array, PThreadedCode5666, 2, PSend5667, PSend5668);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5669 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock5664);
    Array PThreadedCode5663 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock5664, (Optr)&t_send1, (Optr)PSend5669, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5661 = new_Method_with(PArray5662, empty_Array, empty_Array, PThreadedCode5663, 2, PSend5669, self);
    
    MethodClosure MC_SMB_visitStatements_ = new_MethodClosure((Method)PMethod5661, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitStatements_, MC_SMB_visitStatements_);
}


static void init_SMB_visitThisContext_() {
    Symbol SMB_visitThisContext_ = new_Symbol(L"visitThisContext:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray5671 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol  SMB_push__context = new_Symbol(L"push_context");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__context_Const = new_Constant((Optr)SMB_push__context);
    // append:. 
    Send PSend5673 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__context_Const);
    Array PThreadedCode5672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__context, (Optr)&t_send1, (Optr)PSend5673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5670 = new_Method_with(PArray5671, empty_Array, empty_Array, PThreadedCode5672, 2, PSend5673, self);
    
    MethodClosure MC_SMB_visitThisContext_ = new_MethodClosure((Method)PMethod5670, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitThisContext_, MC_SMB_visitThisContext_);
}


static void init_SMB_append_() {
    Symbol SMB_append_ = new_Symbol(L"append:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray5675 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend5677 = new_Send((Optr)PFunctionPointer_classReference, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5678 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)PSend5677);
    Array PThreadedCode5676 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend5677, (Optr)&t_send1, (Optr)PSend5678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5674 = new_Method_with(PArray5675, empty_Array, empty_Array, PThreadedCode5676, 2, PSend5678, self);
    
    MethodClosure MC_SMB_append_ = new_MethodClosure((Method)PMethod5674, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_append_, MC_SMB_append_);
}

void init_Kernel_Threading_PThreadedCompiler_layout() {
    slot_Kernel_Threading_ThreadedCompiler_Class_class_functionPointers = (Optr)new_Slot(5, L"functionPointers");
    layout_Kernel_Threading_ThreadedCompiler_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_Threading_ThreadedCompiler_Class_class)->values[5] = slot_Kernel_Threading_ThreadedCompiler_Class_class_functionPointers; // functionPointers 
    
    Symbol  SMB_ThreadedCompiler = new_Symbol(L"ThreadedCompiler");
    slot_Kernel_Threading_ThreadedCompiler_code = (Optr)new_Slot(0, L"code");
    slot_Kernel_Threading_ThreadedCompiler_internalConstantCode = (Optr)new_Slot(1, L"internalConstantCode");
    slot_Kernel_Threading_ThreadedCompiler_scopes = (Optr)new_Slot(2, L"scopes");
    slot_Kernel_Threading_ThreadedCompiler_optimizers = (Optr)new_Slot(3, L"optimizers");
    layout_Kernel_Threading_ThreadedCompiler = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Kernel_Threading_ThreadedCompiler)->values[0] = slot_Kernel_Threading_ThreadedCompiler_code; // code 
    ((Array)layout_Kernel_Threading_ThreadedCompiler)->values[1] = slot_Kernel_Threading_ThreadedCompiler_internalConstantCode; // internalConstantCode 
    ((Array)layout_Kernel_Threading_ThreadedCompiler)->values[2] = slot_Kernel_Threading_ThreadedCompiler_scopes; // scopes 
    ((Array)layout_Kernel_Threading_ThreadedCompiler)->values[3] = slot_Kernel_Threading_ThreadedCompiler_optimizers; // optimizers 
    Kernel_Threading_ThreadedCompiler_Class = (Class)new_Class(Object_Class, layout_Kernel_Threading_ThreadedCompiler_Class_class);
    Kernel_Threading_ThreadedCompiler_Class->layout = layout_Kernel_Threading_ThreadedCompiler;
    Kernel_Threading_ThreadedCompiler_Class->name = SMB_ThreadedCompiler;
    
}

void init_Kernel_Threading_PThreadedCompiler_methods() {
    init_SMB_visitMethod_();
    init_SMB_visitReflectionMethod_();
    init_SMB_visitDirectVariable_();
    init_SMB_insertBlockReturn_();
    init_SMB_compileSendIfTrueIfFalse_();
    init_SMB_optimizers();
    init_SMB_compileSendIfElse_named_();
    init_SMB_compileSendIfFalse_();
    init_SMB_internalConstantCode();
    init_SMB_visitSlot_();
    init_SMB_visitAssign_();
    init_SMB_initialize();
    init_SMB_visitSelf_();
    init_SMB_insertReturn();
    init_SMB_visitNativeMethod_();
    init_SMB_compileSendToByDo_();
    init_SMB_compile_();
    init_SMB_compileSendToDo_();
    init_SMB_compileSendIfFalseIfTrue_();
    init_SMB_append_with_();
    init_SMB_optimizers_();
    init_SMB_visitSuper_();
    init_SMB_visitSend_();
    init_SMB_code();
    init_SMB_visitVariable_();
    init_SMB_compileSendIfTrue_();
    init_SMB_compileSendIf_named_();
    init_SMB_visitCollection_();
    init_SMB_reset();
    init_SMB_visitBlock_();
    init_SMB_visitClassReference_();
    init_SMB_isUnscopedBlock_();
    init_SMB_compileNatively_();
    init_SMB_popScope();
    init_SMB_pushScope();
    init_SMB_visitConstant_();
    init_SMB_compileSend_();
    init_SMB_compileBlock_();
    init_SMB_scopes();
    init_SMB_visitStatements_();
    init_SMB_visitThisContext_();
    init_SMB_append_();
    
}