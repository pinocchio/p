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
    Array PArray5193 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    // visitStatements:. 
    Send PSend5195 = new_Send((Optr)self, SMB_visitStatements_, 1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    // insertReturn. 
    Send PSend5196 = new_Send((Optr)self, SMB_insertReturn, 0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend5197 = new_Send((Optr)PThreadedCode_classReference, SMB_newFrom_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    // compileNatively:. 
    Send PSend5198 = new_Send((Optr)self, SMB_compileNatively_, 1, (Optr)PSend5197);
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    // threaded:. 
    Send PSend5199 = new_Send((Optr)VAR_aMethod_0_0, SMB_threaded_, 1, (Optr)PSend5198);
    Array PThreadedCode5194 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5195, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5196, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PThreadedCode_classReference, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5197, (Optr)&t_send1, (Optr)PSend5198, (Optr)&t_send1, (Optr)PSend5199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5192 = new_Method_with(PArray5193, empty_Array, empty_Array, PThreadedCode5194, 4, PSend5195, PSend5196, PSend5199, self);
    
    MethodClosure MC_SMB_visitMethod_ = new_MethodClosure((Method)PMethod5192, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitMethod_, MC_SMB_visitMethod_);
}


static void init_SMB_visitReflectionMethod_() {
    Symbol SMB_visitReflectionMethod_ = new_Symbol(L"visitReflectionMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5201 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend5203 = new_Send((Optr)self, SMB_visitMethod_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode5202 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5203, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5200 = new_Method_with(PArray5201, empty_Array, empty_Array, PThreadedCode5202, 2, PSend5203, self);
    
    MethodClosure MC_SMB_visitReflectionMethod_ = new_MethodClosure((Method)PMethod5200, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitReflectionMethod_, MC_SMB_visitReflectionMethod_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray5205 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Variable VAR_send_0_1 = new_Variable_named(L"send", 0);
    Array PArray5206 = new_Array_with(1, (Optr)VAR_send_0_1);
    Symbol SMB_receiver_message_size_ = new_Symbol(L"receiver:message:size:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend5210 = new_Send((Optr)PConstant_classReference, SMB_new_, 1, (Optr)VAR_aVariable_0_0);
    Symbol  SMB_readFrom_ = new_Symbol(L"readFrom:");
    Constant SMB_readFrom__Const = new_Constant((Optr)SMB_readFrom_);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // receiver:message:size:. 
    Send PSend5209 = new_Send((Optr)PSend_classReference, SMB_receiver_message_size_, 3, (Optr)PSend5210, (Optr)SMB_readFrom__Const, (Optr)int_1_Const);
    Assign PAssign5208 = new_Assign((Optr)VAR_send_0_1, (Optr)PSend5209);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend5211 = new_Send((Optr)PThisContext_classReference, SMB_instance, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend5212 = new_Send((Optr)VAR_send_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend5211);
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    // visitSend:. 
    Send PSend5213 = new_Send((Optr)self, SMB_visitSend_, 1, (Optr)VAR_send_0_1);
    Array PThreadedCode5207 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign5208, (Optr)&t_push_class_reference, (Optr)PSend_classReference, (Optr)&t_push_class_reference, (Optr)PConstant_classReference, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send1, (Optr)PSend5210, (Optr)&t_push1, (Optr)SMB_readFrom_, (Optr)&t_push_1, (Optr)&t_send3, (Optr)PSend5209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_send_0_1, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)PThisContext_classReference, (Optr)&t_send0, (Optr)PSend5211, (Optr)&t_send2, (Optr)PSend5212, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_send_0_1, (Optr)&t_send1, (Optr)PSend5213, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5204 = new_Method_with(PArray5205, PArray5206, empty_Array, PThreadedCode5207, 4, PAssign5208, PSend5212, PSend5213, self);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod5204, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_insertBlockReturn_() {
    Symbol SMB_insertBlockReturn_ = new_Symbol(L"insertBlockReturn:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5215 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_last_0_1 = new_Variable_named(L"last", 0);
    Array PArray5216 = new_Array_with(1, (Optr)VAR_last_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5219 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5221 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend5222 = new_Send((Optr)PSend5221, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray5227 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // append:. 
    Send PSend5229 = new_Send((Optr)VAR__receiver__2_0, SMB_append_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_pop = new_Symbol(L"pop");
    Constant SMB_pop_Const = new_Constant((Optr)SMB_pop);
    // append:. 
    Send PSend5230 = new_Send((Optr)VAR__receiver__2_0, SMB_append_, 1, (Optr)SMB_pop_Const);
    Array PThreadedCode5228 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5229, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_pop, (Optr)&t_send1, (Optr)PSend5230, (Optr)&t_method_return);
    Block PBlock5226 = new_Block_with(PArray5227, empty_Array, PThreadedCode5228, 2, PSend5229, PSend5230);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend5231 = new_Send((Optr)PBlock5226, SMB_value_, 1, (Optr)self);
    Array PThreadedCode5225 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_closure, (Optr)PBlock5226, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5231, (Optr)&t_block_return);
    Block PBlock5224 = new_Block_with(empty_Array, empty_Array, PThreadedCode5225, 1, PSend5231);
    // ifTrue:. 
    Send PSend5223 = new_Send((Optr)PSend5222, SMB_ifTrue_, 1, (Optr)PBlock5224);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5232 = new_Send((Optr)VAR_aBlock_0_0, SMB_isScoped, 0);
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    // insertReturn. 
    Send PSend5236 = new_Send((Optr)self, SMB_insertReturn, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5237 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5236);
    Array PThreadedCode5235 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5236, (Optr)&t_send1, (Optr)PSend5237, (Optr)&t_block_return);
    Block PBlock5234 = new_Block_with(empty_Array, empty_Array, PThreadedCode5235, 1, PSend5237);
    // ifTrue:. 
    Send PSend5233 = new_Send((Optr)PSend5232, SMB_ifTrue_, 1, (Optr)PBlock5234);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5238 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    // removeLast. 
    Send PSend5240 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    Assign PAssign5239 = new_Assign((Optr)VAR_last_0_1, (Optr)PSend5240);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5241 = new_Send((Optr)VAR_last_0_1, SMB_isKindOf_, 1, (Optr)PFunctionPointer_classReference);
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // =. 
    Send PSend5245 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__true_Const);
    Symbol  SMB_block__return__true = new_Symbol(L"block_return_true");
    Constant SMB_block__return__true_Const = new_Constant((Optr)SMB_block__return__true);
    // append:. 
    Send PSend5249 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__true_Const);
    // escape:. 
    Send PSend5250 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5249);
    Array PThreadedCode5248 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__true, (Optr)&t_send1, (Optr)PSend5249, (Optr)&t_send1, (Optr)PSend5250, (Optr)&t_block_return);
    Block PBlock5247 = new_Block_with(empty_Array, empty_Array, PThreadedCode5248, 1, PSend5250);
    // ifTrue:. 
    Send PSend5246 = new_Send((Optr)PSend5245, SMB_ifTrue_, 1, (Optr)PBlock5247);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // =. 
    Send PSend5251 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__false_Const);
    Symbol  SMB_block__return__false = new_Symbol(L"block_return_false");
    Constant SMB_block__return__false_Const = new_Constant((Optr)SMB_block__return__false);
    // append:. 
    Send PSend5255 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__false_Const);
    // escape:. 
    Send PSend5256 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5255);
    Array PThreadedCode5254 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__false, (Optr)&t_send1, (Optr)PSend5255, (Optr)&t_send1, (Optr)PSend5256, (Optr)&t_block_return);
    Block PBlock5253 = new_Block_with(empty_Array, empty_Array, PThreadedCode5254, 1, PSend5256);
    // ifTrue:. 
    Send PSend5252 = new_Send((Optr)PSend5251, SMB_ifTrue_, 1, (Optr)PBlock5253);
    // =. 
    Send PSend5257 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_block__return__nil = new_Symbol(L"block_return_nil");
    Constant SMB_block__return__nil_Const = new_Constant((Optr)SMB_block__return__nil);
    // append:. 
    Send PSend5261 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__nil_Const);
    // escape:. 
    Send PSend5262 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5261);
    Array PThreadedCode5260 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__nil, (Optr)&t_send1, (Optr)PSend5261, (Optr)&t_send1, (Optr)PSend5262, (Optr)&t_block_return);
    Block PBlock5259 = new_Block_with(empty_Array, empty_Array, PThreadedCode5260, 1, PSend5262);
    // ifTrue:. 
    Send PSend5258 = new_Send((Optr)PSend5257, SMB_ifTrue_, 1, (Optr)PBlock5259);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // =. 
    Send PSend5263 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__0_Const);
    Symbol  SMB_block__return__0 = new_Symbol(L"block_return_0");
    Constant SMB_block__return__0_Const = new_Constant((Optr)SMB_block__return__0);
    // append:. 
    Send PSend5267 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__0_Const);
    // escape:. 
    Send PSend5268 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5267);
    Array PThreadedCode5266 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__0, (Optr)&t_send1, (Optr)PSend5267, (Optr)&t_send1, (Optr)PSend5268, (Optr)&t_block_return);
    Block PBlock5265 = new_Block_with(empty_Array, empty_Array, PThreadedCode5266, 1, PSend5268);
    // ifTrue:. 
    Send PSend5264 = new_Send((Optr)PSend5263, SMB_ifTrue_, 1, (Optr)PBlock5265);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // =. 
    Send PSend5269 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__1_Const);
    Symbol  SMB_block__return__1 = new_Symbol(L"block_return_1");
    Constant SMB_block__return__1_Const = new_Constant((Optr)SMB_block__return__1);
    // append:. 
    Send PSend5273 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__1_Const);
    // escape:. 
    Send PSend5274 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5273);
    Array PThreadedCode5272 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__1, (Optr)&t_send1, (Optr)PSend5273, (Optr)&t_send1, (Optr)PSend5274, (Optr)&t_block_return);
    Block PBlock5271 = new_Block_with(empty_Array, empty_Array, PThreadedCode5272, 1, PSend5274);
    // ifTrue:. 
    Send PSend5270 = new_Send((Optr)PSend5269, SMB_ifTrue_, 1, (Optr)PBlock5271);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // =. 
    Send PSend5275 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__2_Const);
    Symbol  SMB_block__return__2 = new_Symbol(L"block_return_2");
    Constant SMB_block__return__2_Const = new_Constant((Optr)SMB_block__return__2);
    // append:. 
    Send PSend5279 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__2_Const);
    // escape:. 
    Send PSend5280 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5279);
    Array PThreadedCode5278 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__2, (Optr)&t_send1, (Optr)PSend5279, (Optr)&t_send1, (Optr)PSend5280, (Optr)&t_block_return);
    Block PBlock5277 = new_Block_with(empty_Array, empty_Array, PThreadedCode5278, 1, PSend5280);
    // ifTrue:. 
    Send PSend5276 = new_Send((Optr)PSend5275, SMB_ifTrue_, 1, (Optr)PBlock5277);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // =. 
    Send PSend5281 = new_Send((Optr)VAR_last_0_1, SMB__equals_, 1, (Optr)SMB_push__self_Const);
    Symbol  SMB_block__return__self = new_Symbol(L"block_return_self");
    Constant SMB_block__return__self_Const = new_Constant((Optr)SMB_block__return__self);
    // append:. 
    Send PSend5285 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return__self_Const);
    // escape:. 
    Send PSend5286 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5285);
    Array PThreadedCode5284 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return__self, (Optr)&t_send1, (Optr)PSend5285, (Optr)&t_send1, (Optr)PSend5286, (Optr)&t_block_return);
    Block PBlock5283 = new_Block_with(empty_Array, empty_Array, PThreadedCode5284, 1, PSend5286);
    // ifTrue:. 
    Send PSend5282 = new_Send((Optr)PSend5281, SMB_ifTrue_, 1, (Optr)PBlock5283);
    Array PThreadedCode5244 = instantiate_Array_with(ThreadedCode_Class, 0, 70, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send1, (Optr)PSend5245, (Optr)&t_send_ifTrue_, (Optr)PSend5246, (Optr)PBlock5247, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send1, (Optr)PSend5251, (Optr)&t_send_ifTrue_, (Optr)PSend5252, (Optr)PBlock5253, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5257, (Optr)&t_send_ifTrue_, (Optr)PSend5258, (Optr)PBlock5259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send1, (Optr)PSend5263, (Optr)&t_send_ifTrue_, (Optr)PSend5264, (Optr)PBlock5265, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send1, (Optr)PSend5269, (Optr)&t_send_ifTrue_, (Optr)PSend5270, (Optr)PBlock5271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send1, (Optr)PSend5275, (Optr)&t_send_ifTrue_, (Optr)PSend5276, (Optr)PBlock5277, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5281, (Optr)&t_send_ifTrue_, (Optr)PSend5282, (Optr)PBlock5283, (Optr)&t_block_return);
    Block PBlock5243 = new_Block_with(empty_Array, empty_Array, PThreadedCode5244, 7, PSend5246, PSend5252, PSend5258, PSend5264, PSend5270, PSend5276, PSend5282);
    // ifTrue:. 
    Send PSend5242 = new_Send((Optr)PSend5241, SMB_ifTrue_, 1, (Optr)PBlock5243);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5287 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_last_0_1);
    Symbol  SMB_block__return = new_Symbol(L"block_return");
    Constant SMB_block__return_Const = new_Constant((Optr)SMB_block__return);
    // append:. 
    Send PSend5288 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_block__return_Const);
    Array PThreadedCode5220 = instantiate_Array_with(ThreadedCode_Class, 0, 56, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5221, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5222, (Optr)&t_send_ifTrue_, (Optr)PSend5223, (Optr)PBlock5224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend5232, (Optr)&t_send_ifTrue_, (Optr)PSend5233, (Optr)PBlock5234, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5238, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5239, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5240, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_send1, (Optr)PSend5241, (Optr)&t_send_ifTrue_, (Optr)PSend5242, (Optr)PBlock5243, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_last_0_1, (Optr)&t_send1, (Optr)PSend5287, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_block__return, (Optr)&t_send1, (Optr)PSend5288, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5218 = new_Block_with(PArray5219, empty_Array, PThreadedCode5220, 8, PSend5223, PSend5233, PSend5238, PAssign5239, PSend5242, PSend5287, PSend5288, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5289 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5218);
    Array PThreadedCode5217 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5218, (Optr)&t_send1, (Optr)PSend5289, (Optr)&t_method_return);
    Method PMethod5214 = new_Method_with(PArray5215, PArray5216, empty_Array, PThreadedCode5217, 1, PSend5289);
    
    MethodClosure MC_SMB_insertBlockReturn_ = new_MethodClosure((Method)PMethod5214, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_insertBlockReturn_, MC_SMB_insertBlockReturn_);
}


static void init_SMB_compileSendIfTrueIfFalse_() {
    Symbol SMB_compileSendIfTrueIfFalse_ = new_Symbol(L"compileSendIfTrueIfFalse:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5291 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifTrue__ifFalse__ = new_Symbol(L"send_ifTrue_ifFalse_");
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Constant SMB_send__ifTrue__ifFalse___Const = new_Constant((Optr)SMB_send__ifTrue__ifFalse__);
    // compileSendIfElse:named:. 
    Send PSend5293 = new_Send((Optr)self, SMB_compileSendIfElse_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifTrue__ifFalse___Const);
    Array PThreadedCode5292 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifTrue__ifFalse__, (Optr)&t_send2, (Optr)PSend5293, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5290 = new_Method_with(PArray5291, empty_Array, empty_Array, PThreadedCode5292, 2, PSend5293, self);
    
    MethodClosure MC_SMB_compileSendIfTrueIfFalse_ = new_MethodClosure((Method)PMethod5290, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfTrueIfFalse_, MC_SMB_compileSendIfTrueIfFalse_);
}


static void init_SMB_optimizers() {
    Symbol SMB_optimizers = new_Symbol(L"optimizers");
    Array PThreadedCode5295 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_optimizers, (Optr)&t_method_return);
    Method PMethod5294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5295, 1, slot_Kernel_Threading_ThreadedCompiler_optimizers);
    
    MethodClosure MC_SMB_optimizers = new_MethodClosure((Method)PMethod5294, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_optimizers, MC_SMB_optimizers);
}


static void init_SMB_compileSendIfElse_named_() {
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Variable VAR_threadedName_0_1 = new_Variable_named(L"threadedName", 0);
    Array PArray5297 = new_Array_with(2, (Optr)VAR_aSend_0_0, (Optr)VAR_threadedName_0_1);
    Variable VAR_block1_0_2 = new_Variable_named(L"block1", 0);
    Variable VAR_block2_0_3 = new_Variable_named(L"block2", 0);
    Array PArray5298 = new_Array_with(2, (Optr)VAR_block1_0_2, (Optr)VAR_block2_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5301 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5304 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5303 = new_Assign((Optr)VAR_block1_0_2, (Optr)PSend5304);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend5306 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign5305 = new_Assign((Optr)VAR_block2_0_3, (Optr)PSend5306);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5307 = new_Send((Optr)VAR_block1_0_2, SMB_isScoped, 0);
    // isScoped. 
    Send PSend5310 = new_Send((Optr)VAR_block2_0_3, SMB_isScoped, 0);
    Array PThreadedCode5309 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send0, (Optr)PSend5310, (Optr)&t_block_return);
    Block PBlock5308 = new_Block_with(empty_Array, empty_Array, PThreadedCode5309, 1, PSend5310);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend5311 = new_Send((Optr)PSend5307, SMB_or_, 1, (Optr)PBlock5308);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5315 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5316 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5315);
    Array PThreadedCode5314 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5315, (Optr)&t_send1, (Optr)PSend5316, (Optr)&t_block_return);
    Block PBlock5313 = new_Block_with(empty_Array, empty_Array, PThreadedCode5314, 1, PSend5316);
    // ifTrue:. 
    Send PSend5312 = new_Send((Optr)PSend5311, SMB_ifTrue_, 1, (Optr)PBlock5313);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5317 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5318 = new_Send((Optr)PSend5317, SMB_accept_, 1, (Optr)self);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5319 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)VAR_threadedName_0_1, (Optr)VAR_aSend_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5320 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_block1_0_2);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5321 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend5322 = new_Send((Optr)PSend5321, SMB_addLast_, 1, (Optr)VAR_block1_0_2);
    // compileBlock:. 
    Send PSend5323 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_block2_0_3);
    // code. 
    Send PSend5324 = new_Send((Optr)self, SMB_code, 0);
    // addLast:. 
    Send PSend5325 = new_Send((Optr)PSend5324, SMB_addLast_, 1, (Optr)VAR_block2_0_3);
    Array PThreadedCode5302 = instantiate_Array_with(ThreadedCode_Class, 0, 75, (Optr)&t_push1, (Optr)PAssign5303, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5305, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend5306, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send0, (Optr)PSend5307, (Optr)&t_push_closure, (Optr)PBlock5308, (Optr)&t_send1, (Optr)PSend5311, (Optr)&t_send_ifTrue_, (Optr)PSend5312, (Optr)PBlock5313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5317, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5318, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_threadedName_0_1, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5319, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send1, (Optr)PSend5320, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5321, (Optr)&t_push_variable, (Optr)VAR_block1_0_2, (Optr)&t_send1, (Optr)PSend5322, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send1, (Optr)PSend5323, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5324, (Optr)&t_push_variable, (Optr)VAR_block2_0_3, (Optr)&t_send1, (Optr)PSend5325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5300 = new_Block_with(PArray5301, empty_Array, PThreadedCode5302, 10, PAssign5303, PAssign5305, PSend5312, PSend5318, PSend5319, PSend5320, PSend5322, PSend5323, PSend5325, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5326 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5300);
    Array PThreadedCode5299 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5300, (Optr)&t_send1, (Optr)PSend5326, (Optr)&t_method_return);
    Method PMethod5296 = new_Method_with(PArray5297, PArray5298, empty_Array, PThreadedCode5299, 1, PSend5326);
    
    MethodClosure MC_SMB_compileSendIfElse_named_ = new_MethodClosure((Method)PMethod5296, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfElse_named_, MC_SMB_compileSendIfElse_named_);
}


static void init_SMB_compileSendIfFalse_() {
    Symbol SMB_compileSendIfFalse_ = new_Symbol(L"compileSendIfFalse:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5328 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifFalse__ = new_Symbol(L"send_ifFalse_");
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Constant SMB_send__ifFalse___Const = new_Constant((Optr)SMB_send__ifFalse__);
    // compileSendIf:named:. 
    Send PSend5330 = new_Send((Optr)self, SMB_compileSendIf_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifFalse___Const);
    Array PThreadedCode5329 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifFalse__, (Optr)&t_send2, (Optr)PSend5330, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5327 = new_Method_with(PArray5328, empty_Array, empty_Array, PThreadedCode5329, 2, PSend5330, self);
    
    MethodClosure MC_SMB_compileSendIfFalse_ = new_MethodClosure((Method)PMethod5327, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfFalse_, MC_SMB_compileSendIfFalse_);
}


static void init_SMB_internalConstantCode() {
    Symbol SMB_internalConstantCode = new_Symbol(L"internalConstantCode");
    Array PThreadedCode5332 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_method_return);
    Method PMethod5331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5332, 1, slot_Kernel_Threading_ThreadedCompiler_internalConstantCode);
    
    MethodClosure MC_SMB_internalConstantCode = new_MethodClosure((Method)PMethod5331, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_internalConstantCode, MC_SMB_internalConstantCode);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray5334 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol  SMB_push__slot = new_Symbol(L"push_slot");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__slot_Const = new_Constant((Optr)SMB_push__slot);
    // append:with:. 
    Send PSend5336 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__slot_Const, (Optr)VAR_aSlot_0_0);
    Array PThreadedCode5335 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__slot, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_send2, (Optr)PSend5336, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5333 = new_Method_with(PArray5334, empty_Array, empty_Array, PThreadedCode5335, 2, PSend5336, self);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod5333, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray5338 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Symbol  SMB_push1 = new_Symbol(L"push1");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push1_Const = new_Constant((Optr)SMB_push1);
    // append:with:. 
    Send PSend5340 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push1_Const, (Optr)VAR_anAssign_0_0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend5341 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5342 = new_Send((Optr)PSend5341, SMB_accept_, 1, (Optr)self);
    Symbol  SMB_assign = new_Symbol(L"assign");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_assign_Const = new_Constant((Optr)SMB_assign);
    // append:. 
    Send PSend5343 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_assign_Const);
    Array PThreadedCode5339 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push1, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send2, (Optr)PSend5340, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend5341, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5342, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_assign, (Optr)&t_send1, (Optr)PSend5343, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5337 = new_Method_with(PArray5338, empty_Array, empty_Array, PThreadedCode5339, 4, PSend5340, PSend5342, PSend5343, self);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod5337, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5347 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign5346 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)PSend5347);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // at:put:. 
    Send PSend5348 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)false_Const, (Optr)SMB_push__false_Const);
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // at:put:. 
    Send PSend5349 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)true_Const, (Optr)SMB_push__true_Const);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // at:put:. 
    Send PSend5350 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)nil_Const, (Optr)SMB_push__nil_Const);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // at:put:. 
    Send PSend5351 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_0_Const, (Optr)SMB_push__0_Const);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // at:put:. 
    Send PSend5352 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)SMB_push__1_Const);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // at:put:. 
    Send PSend5353 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)SMB_push__2_Const);
    Array PThreadedCode5345 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign5346, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend5347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_false, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send2, (Optr)PSend5348, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_true, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send2, (Optr)PSend5349, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_nil, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send2, (Optr)PSend5350, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_0, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send2, (Optr)PSend5351, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_1, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send2, (Optr)PSend5352, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_2, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send2, (Optr)PSend5353, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5345, 8, PAssign5346, PSend5348, PSend5349, PSend5350, PSend5351, PSend5352, PSend5353, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod5344, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray5355 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // append:. 
    Send PSend5357 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__self_Const);
    Array PThreadedCode5356 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5357, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5354 = new_Method_with(PArray5355, empty_Array, empty_Array, PThreadedCode5356, 2, PSend5357, self);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod5354, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_insertReturn() {
    Symbol SMB_insertReturn = new_Symbol(L"insertReturn");
    Variable VAR_last_0_0 = new_Variable_named(L"last", 0);
    Array PArray5359 = new_Array_with(1, (Optr)VAR_last_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5362 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5364 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    // removeLast. 
    Send PSend5366 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_removeLast, 0);
    Assign PAssign5365 = new_Assign((Optr)VAR_last_0_0, (Optr)PSend5366);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5367 = new_Send((Optr)VAR_last_0_0, SMB_isKindOf_, 1, (Optr)PFunctionPointer_classReference);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol  SMB_push__true = new_Symbol(L"push_true");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_push__true_Const = new_Constant((Optr)SMB_push__true);
    // =. 
    Send PSend5371 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__true_Const);
    Symbol  SMB_method__return__true = new_Symbol(L"method_return_true");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_method__return__true_Const = new_Constant((Optr)SMB_method__return__true);
    // append:. 
    Send PSend5375 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__true_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5376 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5375);
    Array PThreadedCode5374 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__true, (Optr)&t_send1, (Optr)PSend5375, (Optr)&t_send1, (Optr)PSend5376, (Optr)&t_block_return);
    Block PBlock5373 = new_Block_with(empty_Array, empty_Array, PThreadedCode5374, 1, PSend5376);
    // ifTrue:. 
    Send PSend5372 = new_Send((Optr)PSend5371, SMB_ifTrue_, 1, (Optr)PBlock5373);
    Symbol  SMB_push__false = new_Symbol(L"push_false");
    Constant SMB_push__false_Const = new_Constant((Optr)SMB_push__false);
    // =. 
    Send PSend5377 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__false_Const);
    Symbol  SMB_method__return__false = new_Symbol(L"method_return_false");
    Constant SMB_method__return__false_Const = new_Constant((Optr)SMB_method__return__false);
    // append:. 
    Send PSend5381 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__false_Const);
    // escape:. 
    Send PSend5382 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5381);
    Array PThreadedCode5380 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__false, (Optr)&t_send1, (Optr)PSend5381, (Optr)&t_send1, (Optr)PSend5382, (Optr)&t_block_return);
    Block PBlock5379 = new_Block_with(empty_Array, empty_Array, PThreadedCode5380, 1, PSend5382);
    // ifTrue:. 
    Send PSend5378 = new_Send((Optr)PSend5377, SMB_ifTrue_, 1, (Optr)PBlock5379);
    Symbol  SMB_push__nil = new_Symbol(L"push_nil");
    Constant SMB_push__nil_Const = new_Constant((Optr)SMB_push__nil);
    // =. 
    Send PSend5383 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__nil_Const);
    Symbol  SMB_method__return__nil = new_Symbol(L"method_return_nil");
    Constant SMB_method__return__nil_Const = new_Constant((Optr)SMB_method__return__nil);
    // append:. 
    Send PSend5387 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__nil_Const);
    // escape:. 
    Send PSend5388 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5387);
    Array PThreadedCode5386 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__nil, (Optr)&t_send1, (Optr)PSend5387, (Optr)&t_send1, (Optr)PSend5388, (Optr)&t_block_return);
    Block PBlock5385 = new_Block_with(empty_Array, empty_Array, PThreadedCode5386, 1, PSend5388);
    // ifTrue:. 
    Send PSend5384 = new_Send((Optr)PSend5383, SMB_ifTrue_, 1, (Optr)PBlock5385);
    Symbol  SMB_push__0 = new_Symbol(L"push_0");
    Constant SMB_push__0_Const = new_Constant((Optr)SMB_push__0);
    // =. 
    Send PSend5389 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__0_Const);
    Symbol  SMB_method__return__0 = new_Symbol(L"method_return_0");
    Constant SMB_method__return__0_Const = new_Constant((Optr)SMB_method__return__0);
    // append:. 
    Send PSend5393 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__0_Const);
    // escape:. 
    Send PSend5394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5393);
    Array PThreadedCode5392 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__0, (Optr)&t_send1, (Optr)PSend5393, (Optr)&t_send1, (Optr)PSend5394, (Optr)&t_block_return);
    Block PBlock5391 = new_Block_with(empty_Array, empty_Array, PThreadedCode5392, 1, PSend5394);
    // ifTrue:. 
    Send PSend5390 = new_Send((Optr)PSend5389, SMB_ifTrue_, 1, (Optr)PBlock5391);
    Symbol  SMB_push__1 = new_Symbol(L"push_1");
    Constant SMB_push__1_Const = new_Constant((Optr)SMB_push__1);
    // =. 
    Send PSend5395 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__1_Const);
    Symbol  SMB_method__return__1 = new_Symbol(L"method_return_1");
    Constant SMB_method__return__1_Const = new_Constant((Optr)SMB_method__return__1);
    // append:. 
    Send PSend5399 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__1_Const);
    // escape:. 
    Send PSend5400 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5399);
    Array PThreadedCode5398 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__1, (Optr)&t_send1, (Optr)PSend5399, (Optr)&t_send1, (Optr)PSend5400, (Optr)&t_block_return);
    Block PBlock5397 = new_Block_with(empty_Array, empty_Array, PThreadedCode5398, 1, PSend5400);
    // ifTrue:. 
    Send PSend5396 = new_Send((Optr)PSend5395, SMB_ifTrue_, 1, (Optr)PBlock5397);
    Symbol  SMB_push__2 = new_Symbol(L"push_2");
    Constant SMB_push__2_Const = new_Constant((Optr)SMB_push__2);
    // =. 
    Send PSend5401 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__2_Const);
    Symbol  SMB_method__return__2 = new_Symbol(L"method_return_2");
    Constant SMB_method__return__2_Const = new_Constant((Optr)SMB_method__return__2);
    // append:. 
    Send PSend5405 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__2_Const);
    // escape:. 
    Send PSend5406 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5405);
    Array PThreadedCode5404 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__2, (Optr)&t_send1, (Optr)PSend5405, (Optr)&t_send1, (Optr)PSend5406, (Optr)&t_block_return);
    Block PBlock5403 = new_Block_with(empty_Array, empty_Array, PThreadedCode5404, 1, PSend5406);
    // ifTrue:. 
    Send PSend5402 = new_Send((Optr)PSend5401, SMB_ifTrue_, 1, (Optr)PBlock5403);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // =. 
    Send PSend5407 = new_Send((Optr)VAR_last_0_0, SMB__equals_, 1, (Optr)SMB_push__self_Const);
    Symbol  SMB_method__return__self = new_Symbol(L"method_return_self");
    Constant SMB_method__return__self_Const = new_Constant((Optr)SMB_method__return__self);
    // append:. 
    Send PSend5411 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return__self_Const);
    // escape:. 
    Send PSend5412 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5411);
    Array PThreadedCode5410 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return__self, (Optr)&t_send1, (Optr)PSend5411, (Optr)&t_send1, (Optr)PSend5412, (Optr)&t_block_return);
    Block PBlock5409 = new_Block_with(empty_Array, empty_Array, PThreadedCode5410, 1, PSend5412);
    // ifTrue:. 
    Send PSend5408 = new_Send((Optr)PSend5407, SMB_ifTrue_, 1, (Optr)PBlock5409);
    Array PThreadedCode5370 = instantiate_Array_with(ThreadedCode_Class, 0, 70, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__true, (Optr)&t_send1, (Optr)PSend5371, (Optr)&t_send_ifTrue_, (Optr)PSend5372, (Optr)PBlock5373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__false, (Optr)&t_send1, (Optr)PSend5377, (Optr)&t_send_ifTrue_, (Optr)PSend5378, (Optr)PBlock5379, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__nil, (Optr)&t_send1, (Optr)PSend5383, (Optr)&t_send_ifTrue_, (Optr)PSend5384, (Optr)PBlock5385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__0, (Optr)&t_send1, (Optr)PSend5389, (Optr)&t_send_ifTrue_, (Optr)PSend5390, (Optr)PBlock5391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__1, (Optr)&t_send1, (Optr)PSend5395, (Optr)&t_send_ifTrue_, (Optr)PSend5396, (Optr)PBlock5397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__2, (Optr)&t_send1, (Optr)PSend5401, (Optr)&t_send_ifTrue_, (Optr)PSend5402, (Optr)PBlock5403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5407, (Optr)&t_send_ifTrue_, (Optr)PSend5408, (Optr)PBlock5409, (Optr)&t_block_return);
    Block PBlock5369 = new_Block_with(empty_Array, empty_Array, PThreadedCode5370, 7, PSend5372, PSend5378, PSend5384, PSend5390, PSend5396, PSend5402, PSend5408);
    // ifTrue:. 
    Send PSend5368 = new_Send((Optr)PSend5367, SMB_ifTrue_, 1, (Optr)PBlock5369);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5413 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_last_0_0);
    Symbol  SMB_method__return = new_Symbol(L"method_return");
    Constant SMB_method__return_Const = new_Constant((Optr)SMB_method__return);
    // append:. 
    Send PSend5414 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_method__return_Const);
    Array PThreadedCode5363 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5364, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5365, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send0, (Optr)PSend5366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_send1, (Optr)PSend5367, (Optr)&t_send_ifTrue_, (Optr)PSend5368, (Optr)PBlock5369, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_last_0_0, (Optr)&t_send1, (Optr)PSend5413, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_method__return, (Optr)&t_send1, (Optr)PSend5414, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5361 = new_Block_with(PArray5362, empty_Array, PThreadedCode5363, 6, PSend5364, PAssign5365, PSend5368, PSend5413, PSend5414, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5415 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5361);
    Array PThreadedCode5360 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5361, (Optr)&t_send1, (Optr)PSend5415, (Optr)&t_method_return);
    Method PMethod5358 = new_Method_with(empty_Array, PArray5359, empty_Array, PThreadedCode5360, 1, PSend5415);
    
    MethodClosure MC_SMB_insertReturn = new_MethodClosure((Method)PMethod5358, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_insertReturn, MC_SMB_insertReturn);
}


static void init_SMB_visitNativeMethod_() {
    Symbol SMB_visitNativeMethod_ = new_Symbol(L"visitNativeMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5417 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_visitMethod_ = new_Symbol(L"visitMethod:");
    // visitMethod:. 
    Send PSend5419 = new_Send((Optr)self, SMB_visitMethod_, 1, (Optr)VAR_aMethod_0_0);
    Array PThreadedCode5418 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_send1, (Optr)PSend5419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5416 = new_Method_with(PArray5417, empty_Array, empty_Array, PThreadedCode5418, 2, PSend5419, self);
    
    MethodClosure MC_SMB_visitNativeMethod_ = new_MethodClosure((Method)PMethod5416, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitNativeMethod_, MC_SMB_visitNativeMethod_);
}


static void init_SMB_compileSendToByDo_() {
    Symbol SMB_compileSendToByDo_ = new_Symbol(L"compileSendToByDo:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5421 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5423 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5424 = new_Send((Optr)PSend5423, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5425 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__to__by__do__ = new_Symbol(L"send_to_by_do_");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_send__to__by__do___Const = new_Constant((Optr)SMB_send__to__by__do__);
    // append:. 
    Send PSend5426 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_send__to__by__do___Const);
    Symbol  SMB_continue__to__do__ = new_Symbol(L"continue_to_do_");
    Constant SMB_continue__to__do___Const = new_Constant((Optr)SMB_continue__to__do__);
    // append:. 
    Send PSend5427 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_continue__to__do___Const);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5428 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5429 = new_Send((Optr)PSend5428, SMB_add_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5422 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5423, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5424, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5425, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send__to__by__do__, (Optr)&t_send1, (Optr)PSend5426, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_continue__to__do__, (Optr)&t_send1, (Optr)PSend5427, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5428, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5420 = new_Method_with(PArray5421, empty_Array, empty_Array, PThreadedCode5422, 6, PSend5424, PSend5425, PSend5426, PSend5427, PSend5429, self);
    
    MethodClosure MC_SMB_compileSendToByDo_ = new_MethodClosure((Method)PMethod5420, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendToByDo_, MC_SMB_compileSendToByDo_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray5431 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend5433 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5434 = new_Send((Optr)VAR_aMethod_0_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode5432 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5433, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5434, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_method_return);
    Method PMethod5430 = new_Method_with(PArray5431, empty_Array, empty_Array, PThreadedCode5432, 3, PSend5433, PSend5434, slot_Kernel_Threading_ThreadedCompiler_code);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod5430, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_compileSendToDo_() {
    Symbol SMB_compileSendToDo_ = new_Symbol(L"compileSendToDo:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5436 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5438 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5439 = new_Send((Optr)PSend5438, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5440 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__to__do__ = new_Symbol(L"send_to_do_");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_send__to__do___Const = new_Constant((Optr)SMB_send__to__do__);
    // append:. 
    Send PSend5441 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_send__to__do___Const);
    Symbol  SMB_continue__to__do__ = new_Symbol(L"continue_to_do_");
    Constant SMB_continue__to__do___Const = new_Constant((Optr)SMB_continue__to__do__);
    // append:. 
    Send PSend5442 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_continue__to__do___Const);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5443 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5444 = new_Send((Optr)PSend5443, SMB_add_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5437 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5438, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5439, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5440, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send__to__do__, (Optr)&t_send1, (Optr)PSend5441, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_continue__to__do__, (Optr)&t_send1, (Optr)PSend5442, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5443, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5435 = new_Method_with(PArray5436, empty_Array, empty_Array, PThreadedCode5437, 6, PSend5439, PSend5440, PSend5441, PSend5442, PSend5444, self);
    
    MethodClosure MC_SMB_compileSendToDo_ = new_MethodClosure((Method)PMethod5435, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendToDo_, MC_SMB_compileSendToDo_);
}


static void init_SMB_compileSendIfFalseIfTrue_() {
    Symbol SMB_compileSendIfFalseIfTrue_ = new_Symbol(L"compileSendIfFalseIfTrue:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5446 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifFalse__ifTrue__ = new_Symbol(L"send_ifFalse_ifTrue_");
    Symbol SMB_compileSendIfElse_named_ = new_Symbol(L"compileSendIfElse:named:");
    Constant SMB_send__ifFalse__ifTrue___Const = new_Constant((Optr)SMB_send__ifFalse__ifTrue__);
    // compileSendIfElse:named:. 
    Send PSend5448 = new_Send((Optr)self, SMB_compileSendIfElse_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifFalse__ifTrue___Const);
    Array PThreadedCode5447 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifFalse__ifTrue__, (Optr)&t_send2, (Optr)PSend5448, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5445 = new_Method_with(PArray5446, empty_Array, empty_Array, PThreadedCode5447, 2, PSend5448, self);
    
    MethodClosure MC_SMB_compileSendIfFalseIfTrue_ = new_MethodClosure((Method)PMethod5445, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfFalseIfTrue_, MC_SMB_compileSendIfFalseIfTrue_);
}


static void init_SMB_append_with_() {
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Variable VAR_aValue_0_1 = new_Variable_named(L"aValue", 0);
    Array PArray5450 = new_Array_with(2, (Optr)VAR_aSymbol_0_0, (Optr)VAR_aValue_0_1);
    Symbol SMB_append_ = new_Symbol(L"append:");
    // append:. 
    Send PSend5452 = new_Send((Optr)self, SMB_append_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5453 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)VAR_aValue_0_1);
    Array PThreadedCode5451 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend5452, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_variable, (Optr)VAR_aValue_0_1, (Optr)&t_send1, (Optr)PSend5453, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5449 = new_Method_with(PArray5450, empty_Array, empty_Array, PThreadedCode5451, 3, PSend5452, PSend5453, self);
    
    MethodClosure MC_SMB_append_with_ = new_MethodClosure((Method)PMethod5449, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_append_with_, MC_SMB_append_with_);
}


static void init_SMB_optimizers_() {
    Symbol SMB_optimizers_ = new_Symbol(L"optimizers:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5455 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign5457 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_optimizers, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5456 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign5457, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5454 = new_Method_with(PArray5455, empty_Array, empty_Array, PThreadedCode5456, 2, PAssign5457, self);
    
    MethodClosure MC_SMB_optimizers_ = new_MethodClosure((Method)PMethod5454, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_optimizers_, MC_SMB_optimizers_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray5459 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Symbol  SMB_push__self = new_Symbol(L"push_self");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__self_Const = new_Constant((Optr)SMB_push__self);
    // append:. 
    Send PSend5461 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__self_Const);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5462 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSuper_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5463 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <. 
    Send PSend5464 = new_Send((Optr)PSend5463, SMB__lt_, 1, (Optr)int_6_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol  SMB_super = new_Symbol(L"super");
    // size. 
    Send PSend5468 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend5469 = new_Send((Optr)PSend5468, SMB_asString, 0);
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend5470 = new_Send((Optr)SMB_super_Const, SMB__append_, 1, (Optr)PSend5469);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend5471 = new_Send((Optr)PSend5470, SMB_asSymbol, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5472 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)PSend5471, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode5467 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend5468, (Optr)&t_send0, (Optr)PSend5469, (Optr)&t_send1, (Optr)PSend5470, (Optr)&t_send0, (Optr)PSend5471, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send2, (Optr)PSend5472, (Optr)&t_block_return);
    Block PBlock5466 = new_Block_with(empty_Array, empty_Array, PThreadedCode5467, 1, PSend5472);
    Symbol  SMB_supern = new_Symbol(L"supern");
    Constant SMB_supern_Const = new_Constant((Optr)SMB_supern);
    // append:with:. 
    Send PSend5475 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_supern_Const, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode5474 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_supern, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send2, (Optr)PSend5475, (Optr)&t_block_return);
    Block PBlock5473 = new_Block_with(empty_Array, empty_Array, PThreadedCode5474, 1, PSend5475);
    // ifTrue:ifFalse:. 
    Send PSend5465 = new_Send((Optr)PSend5464, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5466, (Optr)PBlock5473);
    Array PThreadedCode5460 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__self, (Optr)&t_send1, (Optr)PSend5461, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send1, (Optr)PSend5462, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend5463, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend5464, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5465, (Optr)PBlock5466, (Optr)PBlock5473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5458 = new_Method_with(PArray5459, empty_Array, empty_Array, PThreadedCode5460, 4, PSend5461, PSend5462, PSend5465, self);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod5458, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5477 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray5478 = new_Array_with(1, (Optr)VAR_aBlock_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5481 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend5483 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_ifTrue__Const = new_Constant((Optr)SMB_ifTrue_);
    // =. 
    Send PSend5484 = new_Send((Optr)PSend5483, SMB__equals_, 1, (Optr)SMB_ifTrue__Const);
    Symbol SMB_compileSendIfTrue_ = new_Symbol(L"compileSendIfTrue:");
    // compileSendIfTrue:. 
    Send PSend5488 = new_Send((Optr)self, SMB_compileSendIfTrue_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5489 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5488);
    Array PThreadedCode5487 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5488, (Optr)&t_send1, (Optr)PSend5489, (Optr)&t_block_return);
    Block PBlock5486 = new_Block_with(empty_Array, empty_Array, PThreadedCode5487, 1, PSend5489);
    // ifTrue:. 
    Send PSend5485 = new_Send((Optr)PSend5484, SMB_ifTrue_, 1, (Optr)PBlock5486);
    // message. 
    Send PSend5490 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Constant SMB_ifFalse__Const = new_Constant((Optr)SMB_ifFalse_);
    // =. 
    Send PSend5491 = new_Send((Optr)PSend5490, SMB__equals_, 1, (Optr)SMB_ifFalse__Const);
    Symbol SMB_compileSendIfFalse_ = new_Symbol(L"compileSendIfFalse:");
    // compileSendIfFalse:. 
    Send PSend5495 = new_Send((Optr)self, SMB_compileSendIfFalse_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5496 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5495);
    Array PThreadedCode5494 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5495, (Optr)&t_send1, (Optr)PSend5496, (Optr)&t_block_return);
    Block PBlock5493 = new_Block_with(empty_Array, empty_Array, PThreadedCode5494, 1, PSend5496);
    // ifTrue:. 
    Send PSend5492 = new_Send((Optr)PSend5491, SMB_ifTrue_, 1, (Optr)PBlock5493);
    // message. 
    Send PSend5497 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Constant SMB_ifTrue_ifFalse__Const = new_Constant((Optr)SMB_ifTrue_ifFalse_);
    // =. 
    Send PSend5498 = new_Send((Optr)PSend5497, SMB__equals_, 1, (Optr)SMB_ifTrue_ifFalse__Const);
    Symbol SMB_compileSendIfTrueIfFalse_ = new_Symbol(L"compileSendIfTrueIfFalse:");
    // compileSendIfTrueIfFalse:. 
    Send PSend5502 = new_Send((Optr)self, SMB_compileSendIfTrueIfFalse_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5503 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5502);
    Array PThreadedCode5501 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5502, (Optr)&t_send1, (Optr)PSend5503, (Optr)&t_block_return);
    Block PBlock5500 = new_Block_with(empty_Array, empty_Array, PThreadedCode5501, 1, PSend5503);
    // ifTrue:. 
    Send PSend5499 = new_Send((Optr)PSend5498, SMB_ifTrue_, 1, (Optr)PBlock5500);
    // message. 
    Send PSend5504 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Constant SMB_ifFalse_ifTrue__Const = new_Constant((Optr)SMB_ifFalse_ifTrue_);
    // =. 
    Send PSend5505 = new_Send((Optr)PSend5504, SMB__equals_, 1, (Optr)SMB_ifFalse_ifTrue__Const);
    Symbol SMB_compileSendIfFalseIfTrue_ = new_Symbol(L"compileSendIfFalseIfTrue:");
    // compileSendIfFalseIfTrue:. 
    Send PSend5509 = new_Send((Optr)self, SMB_compileSendIfFalseIfTrue_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5510 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5509);
    Array PThreadedCode5508 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5509, (Optr)&t_send1, (Optr)PSend5510, (Optr)&t_block_return);
    Block PBlock5507 = new_Block_with(empty_Array, empty_Array, PThreadedCode5508, 1, PSend5510);
    // ifTrue:. 
    Send PSend5506 = new_Send((Optr)PSend5505, SMB_ifTrue_, 1, (Optr)PBlock5507);
    // message. 
    Send PSend5511 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_to_do_ = new_Symbol(L"to:do:");
    Constant SMB_to_do__Const = new_Constant((Optr)SMB_to_do_);
    // =. 
    Send PSend5512 = new_Send((Optr)PSend5511, SMB__equals_, 1, (Optr)SMB_to_do__Const);
    Symbol SMB_compileSendToDo_ = new_Symbol(L"compileSendToDo:");
    // compileSendToDo:. 
    Send PSend5516 = new_Send((Optr)self, SMB_compileSendToDo_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5517 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5516);
    Array PThreadedCode5515 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5516, (Optr)&t_send1, (Optr)PSend5517, (Optr)&t_block_return);
    Block PBlock5514 = new_Block_with(empty_Array, empty_Array, PThreadedCode5515, 1, PSend5517);
    // ifTrue:. 
    Send PSend5513 = new_Send((Optr)PSend5512, SMB_ifTrue_, 1, (Optr)PBlock5514);
    // message. 
    Send PSend5518 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol  SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant SMB_to_by_do__Const = new_Constant((Optr)SMB_to_by_do_);
    // =. 
    Send PSend5519 = new_Send((Optr)PSend5518, SMB__equals_, 1, (Optr)SMB_to_by_do__Const);
    Symbol SMB_compileSendToByDo_ = new_Symbol(L"compileSendToByDo:");
    // compileSendToByDo:. 
    Send PSend5523 = new_Send((Optr)self, SMB_compileSendToByDo_, 1, (Optr)VAR_aSend_0_0);
    // escape:. 
    Send PSend5524 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5523);
    Array PThreadedCode5522 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5523, (Optr)&t_send1, (Optr)PSend5524, (Optr)&t_block_return);
    Block PBlock5521 = new_Block_with(empty_Array, empty_Array, PThreadedCode5522, 1, PSend5524);
    // ifTrue:. 
    Send PSend5520 = new_Send((Optr)PSend5519, SMB_ifTrue_, 1, (Optr)PBlock5521);
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5525 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5482 = instantiate_Array_with(ThreadedCode_Class, 0, 79, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5483, (Optr)&t_push1, (Optr)SMB_ifTrue_, (Optr)&t_send1, (Optr)PSend5484, (Optr)&t_send_ifTrue_, (Optr)PSend5485, (Optr)PBlock5486, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5490, (Optr)&t_push1, (Optr)SMB_ifFalse_, (Optr)&t_send1, (Optr)PSend5491, (Optr)&t_send_ifTrue_, (Optr)PSend5492, (Optr)PBlock5493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5497, (Optr)&t_push1, (Optr)SMB_ifTrue_ifFalse_, (Optr)&t_send1, (Optr)PSend5498, (Optr)&t_send_ifTrue_, (Optr)PSend5499, (Optr)PBlock5500, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5504, (Optr)&t_push1, (Optr)SMB_ifFalse_ifTrue_, (Optr)&t_send1, (Optr)PSend5505, (Optr)&t_send_ifTrue_, (Optr)PSend5506, (Optr)PBlock5507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5511, (Optr)&t_push1, (Optr)SMB_to_do_, (Optr)&t_send1, (Optr)PSend5512, (Optr)&t_send_ifTrue_, (Optr)PSend5513, (Optr)PBlock5514, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5518, (Optr)&t_push1, (Optr)SMB_to_by_do_, (Optr)&t_send1, (Optr)PSend5519, (Optr)&t_send_ifTrue_, (Optr)PSend5520, (Optr)PBlock5521, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5525, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5480 = new_Block_with(PArray5481, empty_Array, PThreadedCode5482, 8, PSend5485, PSend5492, PSend5499, PSend5506, PSend5513, PSend5520, PSend5525, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5526 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5480);
    Array PThreadedCode5479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5480, (Optr)&t_send1, (Optr)PSend5526, (Optr)&t_method_return);
    Method PMethod5476 = new_Method_with(PArray5477, PArray5478, empty_Array, PThreadedCode5479, 1, PSend5526);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod5476, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode5528 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_method_return);
    Method PMethod5527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5528, 1, slot_Kernel_Threading_ThreadedCompiler_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod5527, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray5530 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol  SMB_push__variable = new_Symbol(L"push_variable");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__variable_Const = new_Constant((Optr)SMB_push__variable);
    // append:with:. 
    Send PSend5532 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__variable_Const, (Optr)VAR_aVariable_0_0);
    Array PThreadedCode5531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__variable, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_send2, (Optr)PSend5532, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5529 = new_Method_with(PArray5530, empty_Array, empty_Array, PThreadedCode5531, 2, PSend5532, self);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod5529, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_compileSendIfTrue_() {
    Symbol SMB_compileSendIfTrue_ = new_Symbol(L"compileSendIfTrue:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5534 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol  SMB_send__ifTrue__ = new_Symbol(L"send_ifTrue_");
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Constant SMB_send__ifTrue___Const = new_Constant((Optr)SMB_send__ifTrue__);
    // compileSendIf:named:. 
    Send PSend5536 = new_Send((Optr)self, SMB_compileSendIf_named_, 2, (Optr)VAR_aSend_0_0, (Optr)SMB_send__ifTrue___Const);
    Array PThreadedCode5535 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push1, (Optr)SMB_send__ifTrue__, (Optr)&t_send2, (Optr)PSend5536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5533 = new_Method_with(PArray5534, empty_Array, empty_Array, PThreadedCode5535, 2, PSend5536, self);
    
    MethodClosure MC_SMB_compileSendIfTrue_ = new_MethodClosure((Method)PMethod5533, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIfTrue_, MC_SMB_compileSendIfTrue_);
}


static void init_SMB_compileSendIf_named_() {
    Symbol SMB_compileSendIf_named_ = new_Symbol(L"compileSendIf:named:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Variable VAR_threadedName_0_1 = new_Variable_named(L"threadedName", 0);
    Array PArray5538 = new_Array_with(2, (Optr)VAR_aSend_0_0, (Optr)VAR_threadedName_0_1);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray5539 = new_Array_with(1, (Optr)VAR_aBlock_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5542 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend5545 = new_Send((Optr)VAR_aSend_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign5544 = new_Assign((Optr)VAR_aBlock_0_2, (Optr)PSend5545);
    Symbol SMB_isScoped = new_Symbol(L"isScoped");
    // isScoped. 
    Send PSend5546 = new_Send((Optr)VAR_aBlock_0_2, SMB_isScoped, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    // compileSend:. 
    Send PSend5550 = new_Send((Optr)self, SMB_compileSend_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5551 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5550);
    Array PThreadedCode5549 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5550, (Optr)&t_send1, (Optr)PSend5551, (Optr)&t_block_return);
    Block PBlock5548 = new_Block_with(empty_Array, empty_Array, PThreadedCode5549, 1, PSend5551);
    // ifTrue:. 
    Send PSend5547 = new_Send((Optr)PSend5546, SMB_ifTrue_, 1, (Optr)PBlock5548);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5552 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5553 = new_Send((Optr)PSend5552, SMB_accept_, 1, (Optr)self);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5554 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)VAR_threadedName_0_1, (Optr)VAR_aSend_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5555 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_aBlock_0_2);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend5556 = new_Send((Optr)self, SMB_code, 0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend5557 = new_Send((Optr)PSend5556, SMB_addLast_, 1, (Optr)VAR_aBlock_0_2);
    Array PThreadedCode5543 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign5544, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend5545, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send0, (Optr)PSend5546, (Optr)&t_send_ifTrue_, (Optr)PSend5547, (Optr)PBlock5548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5552, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5553, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_threadedName_0_1, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5554, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send1, (Optr)PSend5555, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5556, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_send1, (Optr)PSend5557, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5541 = new_Block_with(PArray5542, empty_Array, PThreadedCode5543, 7, PAssign5544, PSend5547, PSend5553, PSend5554, PSend5555, PSend5557, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5558 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5541);
    Array PThreadedCode5540 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5541, (Optr)&t_send1, (Optr)PSend5558, (Optr)&t_method_return);
    Method PMethod5537 = new_Method_with(PArray5538, PArray5539, empty_Array, PThreadedCode5540, 1, PSend5558);
    
    MethodClosure MC_SMB_compileSendIf_named_ = new_MethodClosure((Method)PMethod5537, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSendIf_named_, MC_SMB_compileSendIf_named_);
}


static void init_SMB_visitCollection_() {
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray5560 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5563 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5565 = new_Send((Optr)VAR_each_1_0, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode5564 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5565, (Optr)&t_method_return);
    Block PBlock5562 = new_Block_with(PArray5563, empty_Array, PThreadedCode5564, 1, PSend5565);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5566 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock5562);
    Array PThreadedCode5561 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock5562, (Optr)&t_send1, (Optr)PSend5566, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5559 = new_Method_with(PArray5560, empty_Array, empty_Array, PThreadedCode5561, 2, PSend5566, self);
    
    MethodClosure MC_SMB_visitCollection_ = new_MethodClosure((Method)PMethod5559, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitCollection_, MC_SMB_visitCollection_);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5570 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5569 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5570);
    // new. 
    Send PSend5572 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5571 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)PSend5572);
    Array PThreadedCode5568 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign5569, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5570, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5571, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5572, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5568, 3, PAssign5569, PAssign5571, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod5567, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5574 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol  SMB_push__closure = new_Symbol(L"push_closure");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__closure_Const = new_Constant((Optr)SMB_push__closure);
    // append:with:. 
    Send PSend5576 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__closure_Const, (Optr)VAR_aBlock_0_0);
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    // compileBlock:. 
    Send PSend5577 = new_Send((Optr)self, SMB_compileBlock_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode5575 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__closure, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send2, (Optr)PSend5576, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5577, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5573 = new_Method_with(PArray5574, empty_Array, empty_Array, PThreadedCode5575, 3, PSend5576, PSend5577, self);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod5573, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray5579 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol  SMB_push__class__reference = new_Symbol(L"push_class_reference");
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push__class__reference_Const = new_Constant((Optr)SMB_push__class__reference);
    // append:with:. 
    Send PSend5581 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push__class__reference_Const, (Optr)VAR_aClassReference_0_0);
    Array PThreadedCode5580 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__class__reference, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send2, (Optr)PSend5581, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5578 = new_Method_with(PArray5579, empty_Array, empty_Array, PThreadedCode5580, 2, PSend5581, self);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod5578, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_isUnscopedBlock_() {
    Symbol SMB_isUnscopedBlock_ = new_Symbol(L"isUnscopedBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray5583 = new_Array_with(1, (Optr)VAR_block_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend5585 = new_Send((Optr)VAR_block_0_0, SMB_isKindOf_, 1, (Optr)PBlock_classReference);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend5588 = new_Send((Optr)VAR_block_0_0, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5589 = new_Send((Optr)PSend5588, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend5590 = new_Send((Optr)PSend5589, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode5587 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend5588, (Optr)&t_send0, (Optr)PSend5589, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5590, (Optr)&t_block_return);
    Block PBlock5586 = new_Block_with(empty_Array, empty_Array, PThreadedCode5587, 1, PSend5590);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend5591 = new_Send((Optr)PSend5585, SMB_and_, 1, (Optr)PBlock5586);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend5594 = new_Send((Optr)VAR_block_0_0, SMB_locals, 0);
    // size. 
    Send PSend5595 = new_Send((Optr)PSend5594, SMB_size, 0);
    // =. 
    Send PSend5596 = new_Send((Optr)PSend5595, SMB__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode5593 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend5594, (Optr)&t_send0, (Optr)PSend5595, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend5596, (Optr)&t_block_return);
    Block PBlock5592 = new_Block_with(empty_Array, empty_Array, PThreadedCode5593, 1, PSend5596);
    // and:. 
    Send PSend5597 = new_Send((Optr)PSend5591, SMB_and_, 1, (Optr)PBlock5592);
    Array PThreadedCode5584 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_class_reference, (Optr)PBlock_classReference, (Optr)&t_send1, (Optr)PSend5585, (Optr)&t_push_closure, (Optr)PBlock5586, (Optr)&t_send1, (Optr)PSend5591, (Optr)&t_push_closure, (Optr)PBlock5592, (Optr)&t_send1, (Optr)PSend5597, (Optr)&t_method_return);
    Method PMethod5582 = new_Method_with(PArray5583, empty_Array, empty_Array, PThreadedCode5584, 1, PSend5597);
    
    MethodClosure MC_SMB_isUnscopedBlock_ = new_MethodClosure((Method)PMethod5582, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_isUnscopedBlock_, MC_SMB_isUnscopedBlock_);
}


static void init_SMB_compileNatively_() {
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray5599 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Threaded = new_Symbol(L"Interpretation.Threaded");
    Annotation PAnnotation5601 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_compileNatively_, (Optr)SMB_Interpretation_minus_Threaded);
    Array PArray5600 = new_Array_with(1, (Optr)PAnnotation5601);
    Array PThreadedCode5602 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_method_return);
    NativeMethod PNativeMethod5598 = new_NativeMethod_with(PArray5599, empty_Array, PArray5600, PThreadedCode5602, 1, VAR_anArray_0_0);
    
    MethodClosure MC_SMB_compileNatively_ = new_MethodClosure((Method)PNativeMethod5598, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileNatively_, MC_SMB_compileNatively_);
}


static void init_SMB_popScope() {
    Symbol SMB_popScope = new_Symbol(L"popScope");
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend5606 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, SMB_removeLast, 0);
    Assign PAssign5605 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5606);
    Array PThreadedCode5604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign5605, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_send0, (Optr)PSend5606, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5604, 2, PAssign5605, self);
    
    MethodClosure MC_SMB_popScope = new_MethodClosure((Method)PMethod5603, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_popScope, MC_SMB_popScope);
}


static void init_SMB_pushScope() {
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5609 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, SMB_add_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5611 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign5610 = new_Assign((Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)PSend5611);
    Array PThreadedCode5608 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5609, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5610, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend5611, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5608, 3, PSend5609, PAssign5610, self);
    
    MethodClosure MC_SMB_pushScope = new_MethodClosure((Method)PMethod5607, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_pushScope, MC_SMB_pushScope);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConst_0_0 = new_Variable_named(L"aConst", 0);
    Array PArray5613 = new_Array_with(1, (Optr)VAR_aConst_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5616 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend5618 = new_Send((Optr)VAR_aConst_0_0, SMB_constant, 0);
    Variable VAR_instruction_2_0 = new_Variable_named(L"instruction", 2);
    Array PArray5620 = new_Array_with(1, (Optr)VAR_instruction_2_0);
    Symbol SMB_append_ = new_Symbol(L"append:");
    // append:. 
    Send PSend5622 = new_Send((Optr)self, SMB_append_, 1, (Optr)VAR_instruction_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5623 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5622);
    Array PThreadedCode5621 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_instruction_2_0, (Optr)&t_send1, (Optr)PSend5622, (Optr)&t_send1, (Optr)PSend5623, (Optr)&t_method_return);
    Block PBlock5619 = new_Block_with(PArray5620, empty_Array, PThreadedCode5621, 1, PSend5623);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend5624 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, SMB_at_ifPresent_, 2, (Optr)PSend5618, (Optr)PBlock5619);
    Symbol  SMB_push1 = new_Symbol(L"push1");
    // constant. 
    Send PSend5625 = new_Send((Optr)VAR_aConst_0_0, SMB_constant, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    Constant SMB_push1_Const = new_Constant((Optr)SMB_push1);
    // append:with:. 
    Send PSend5626 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_push1_Const, (Optr)PSend5625);
    Array PThreadedCode5617 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_internalConstantCode, (Optr)&t_push_variable, (Optr)VAR_aConst_0_0, (Optr)&t_send0, (Optr)PSend5618, (Optr)&t_push_closure, (Optr)PBlock5619, (Optr)&t_send2, (Optr)PSend5624, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push1, (Optr)&t_push_variable, (Optr)VAR_aConst_0_0, (Optr)&t_send0, (Optr)PSend5625, (Optr)&t_send2, (Optr)PSend5626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5615 = new_Block_with(PArray5616, empty_Array, PThreadedCode5617, 3, PSend5624, PSend5626, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5627 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5615);
    Array PThreadedCode5614 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5615, (Optr)&t_send1, (Optr)PSend5627, (Optr)&t_method_return);
    Method PMethod5612 = new_Method_with(PArray5613, empty_Array, empty_Array, PThreadedCode5614, 1, PSend5627);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod5612, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_compileSend_() {
    Symbol SMB_compileSend_ = new_Symbol(L"compileSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray5629 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend5631 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5632 = new_Send((Optr)PSend5631, SMB_accept_, 1, (Optr)self);
    Symbol SMB_visitCollection_ = new_Symbol(L"visitCollection:");
    // visitCollection:. 
    Send PSend5633 = new_Send((Optr)self, SMB_visitCollection_, 1, (Optr)VAR_aSend_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend5634 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB__lt_ = new_Symbol(L"<");
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <. 
    Send PSend5635 = new_Send((Optr)PSend5634, SMB__lt_, 1, (Optr)int_6_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol  SMB_send = new_Symbol(L"send");
    // size. 
    Send PSend5639 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend5640 = new_Send((Optr)PSend5639, SMB_asString, 0);
    Constant SMB_send_Const = new_Constant((Optr)SMB_send);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend5641 = new_Send((Optr)SMB_send_Const, SMB__append_, 1, (Optr)PSend5640);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend5642 = new_Send((Optr)PSend5641, SMB_asSymbol, 0);
    Symbol SMB_append_with_ = new_Symbol(L"append:with:");
    // append:with:. 
    Send PSend5643 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)PSend5642, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5638 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_send, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5639, (Optr)&t_send0, (Optr)PSend5640, (Optr)&t_send1, (Optr)PSend5641, (Optr)&t_send0, (Optr)PSend5642, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5643, (Optr)&t_block_return);
    Block PBlock5637 = new_Block_with(empty_Array, empty_Array, PThreadedCode5638, 1, PSend5643);
    Symbol  SMB_sendn = new_Symbol(L"sendn");
    Constant SMB_sendn_Const = new_Constant((Optr)SMB_sendn);
    // append:with:. 
    Send PSend5646 = new_Send((Optr)self, SMB_append_with_, 2, (Optr)SMB_sendn_Const, (Optr)VAR_aSend_0_0);
    Array PThreadedCode5645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_sendn, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send2, (Optr)PSend5646, (Optr)&t_block_return);
    Block PBlock5644 = new_Block_with(empty_Array, empty_Array, PThreadedCode5645, 1, PSend5646);
    // ifTrue:ifFalse:. 
    Send PSend5636 = new_Send((Optr)PSend5635, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5637, (Optr)PBlock5644);
    Array PThreadedCode5630 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5631, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5632, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send1, (Optr)PSend5633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend5634, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend5635, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5636, (Optr)PBlock5637, (Optr)PBlock5644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5628 = new_Method_with(PArray5629, empty_Array, empty_Array, PThreadedCode5630, 4, PSend5632, PSend5633, PSend5636, self);
    
    MethodClosure MC_SMB_compileSend_ = new_MethodClosure((Method)PMethod5628, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileSend_, MC_SMB_compileSend_);
}


static void init_SMB_compileBlock_() {
    Symbol SMB_compileBlock_ = new_Symbol(L"compileBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5648 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_pushScope = new_Symbol(L"pushScope");
    // pushScope. 
    Send PSend5650 = new_Send((Optr)self, SMB_pushScope, 0);
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    // visitStatements:. 
    Send PSend5651 = new_Send((Optr)self, SMB_visitStatements_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_insertBlockReturn_ = new_Symbol(L"insertBlockReturn:");
    // insertBlockReturn:. 
    Send PSend5652 = new_Send((Optr)self, SMB_insertBlockReturn_, 1, (Optr)VAR_aBlock_0_0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    // newFrom:. 
    Send PSend5653 = new_Send((Optr)PThreadedCode_classReference, SMB_newFrom_, 1, (Optr)slot_Kernel_Threading_ThreadedCompiler_code);
    Symbol SMB_compileNatively_ = new_Symbol(L"compileNatively:");
    // compileNatively:. 
    Send PSend5654 = new_Send((Optr)self, SMB_compileNatively_, 1, (Optr)PSend5653);
    Symbol SMB_threaded_ = new_Symbol(L"threaded:");
    // threaded:. 
    Send PSend5655 = new_Send((Optr)VAR_aBlock_0_0, SMB_threaded_, 1, (Optr)PSend5654);
    Symbol SMB_popScope = new_Symbol(L"popScope");
    // popScope. 
    Send PSend5656 = new_Send((Optr)self, SMB_popScope, 0);
    Array PThreadedCode5649 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5650, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5651, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend5652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PThreadedCode_classReference, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_send1, (Optr)PSend5653, (Optr)&t_send1, (Optr)PSend5654, (Optr)&t_send1, (Optr)PSend5655, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5656, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5647 = new_Method_with(PArray5648, empty_Array, empty_Array, PThreadedCode5649, 6, PSend5650, PSend5651, PSend5652, PSend5655, PSend5656, self);
    
    MethodClosure MC_SMB_compileBlock_ = new_MethodClosure((Method)PMethod5647, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_compileBlock_, MC_SMB_compileBlock_);
}


static void init_SMB_scopes() {
    Symbol SMB_scopes = new_Symbol(L"scopes");
    Array PThreadedCode5658 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_scopes, (Optr)&t_method_return);
    Method PMethod5657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5658, 1, slot_Kernel_Threading_ThreadedCompiler_scopes);
    
    MethodClosure MC_SMB_scopes = new_MethodClosure((Method)PMethod5657, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_scopes, MC_SMB_scopes);
}


static void init_SMB_visitStatements_() {
    Symbol SMB_visitStatements_ = new_Symbol(L"visitStatements:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray5660 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray5663 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend5665 = new_Send((Optr)VAR_each_1_0, SMB_accept_, 1, (Optr)self);
    Symbol  SMB_zap = new_Symbol(L"zap");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_zap_Const = new_Constant((Optr)SMB_zap);
    // append:. 
    Send PSend5666 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_zap_Const);
    Array PThreadedCode5664 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5665, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_zap, (Optr)&t_send1, (Optr)PSend5666, (Optr)&t_method_return);
    Block PBlock5662 = new_Block_with(PArray5663, empty_Array, PThreadedCode5664, 2, PSend5665, PSend5666);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend5667 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock5662);
    Array PThreadedCode5661 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock5662, (Optr)&t_send1, (Optr)PSend5667, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5659 = new_Method_with(PArray5660, empty_Array, empty_Array, PThreadedCode5661, 2, PSend5667, self);
    
    MethodClosure MC_SMB_visitStatements_ = new_MethodClosure((Method)PMethod5659, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitStatements_, MC_SMB_visitStatements_);
}


static void init_SMB_visitThisContext_() {
    Symbol SMB_visitThisContext_ = new_Symbol(L"visitThisContext:");
    Variable VAR_context_0_0 = new_Variable_named(L"context", 0);
    Array PArray5669 = new_Array_with(1, (Optr)VAR_context_0_0);
    Symbol  SMB_push__context = new_Symbol(L"push_context");
    Symbol SMB_append_ = new_Symbol(L"append:");
    Constant SMB_push__context_Const = new_Constant((Optr)SMB_push__context);
    // append:. 
    Send PSend5671 = new_Send((Optr)self, SMB_append_, 1, (Optr)SMB_push__context_Const);
    Array PThreadedCode5670 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_push__context, (Optr)&t_send1, (Optr)PSend5671, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5668 = new_Method_with(PArray5669, empty_Array, empty_Array, PThreadedCode5670, 2, PSend5671, self);
    
    MethodClosure MC_SMB_visitThisContext_ = new_MethodClosure((Method)PMethod5668, Kernel_Threading_ThreadedCompiler_Class);
    store_method(Kernel_Threading_ThreadedCompiler_Class, SMB_visitThisContext_, MC_SMB_visitThisContext_);
}


static void init_SMB_append_() {
    Symbol SMB_append_ = new_Symbol(L"append:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray5673 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend5675 = new_Send((Optr)PFunctionPointer_classReference, SMB_named_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend5676 = new_Send((Optr)slot_Kernel_Threading_ThreadedCompiler_code, SMB_add_, 1, (Optr)PSend5675);
    Array PThreadedCode5674 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_ThreadedCompiler_code, (Optr)&t_push_class_reference, (Optr)PFunctionPointer_classReference, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend5675, (Optr)&t_send1, (Optr)PSend5676, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5672 = new_Method_with(PArray5673, empty_Array, empty_Array, PThreadedCode5674, 2, PSend5676, self);
    
    MethodClosure MC_SMB_append_ = new_MethodClosure((Method)PMethod5672, Kernel_Threading_ThreadedCompiler_Class);
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