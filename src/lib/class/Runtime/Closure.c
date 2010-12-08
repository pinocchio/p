#include <lib/class/Runtime/Closure.h>


Optr layout_Runtime_Closure_Class_class;
Optr slot_Runtime_Closure_code;
Optr layout_Runtime_Closure;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode8095 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_method_return);
    Method PMethod8094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8095, 1, slot_Runtime_Closure_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod8094, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_code_() {
    Symbol SMB_code_ = new_Symbol(L"code:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8097 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign8099 = new_Assign((Optr)slot_Runtime_Closure_code, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8098 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8099, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8096 = new_Method_with(PArray8097, empty_Array, empty_Array, PThreadedCode8098, 2, PAssign8099, self);
    
    MethodClosure MC_SMB_code_ = new_MethodClosure((Method)PMethod8096, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code_, MC_SMB_code_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8101 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8102 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8105 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8108 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8107 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8108);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8109 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8113 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8114 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8113);
    Array PThreadedCode8112 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8113, (Optr)&t_send1, (Optr)PSend8114, (Optr)&t_block_return);
    Block PBlock8111 = new_Block_with(empty_Array, empty_Array, PThreadedCode8112, 1, PSend8114);
    // ifTrue:. 
    Send PSend8110 = new_Send((Optr)PSend8109, SMB_ifTrue_, 1, (Optr)PBlock8111);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8115 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8116 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8115);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8120 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8121 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8120);
    Array PThreadedCode8119 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8120, (Optr)&t_send1, (Optr)PSend8121, (Optr)&t_block_return);
    Block PBlock8118 = new_Block_with(empty_Array, empty_Array, PThreadedCode8119, 1, PSend8121);
    // ifTrue:. 
    Send PSend8117 = new_Send((Optr)PSend8116, SMB_ifTrue_, 1, (Optr)PBlock8118);
    // size. 
    Send PSend8122 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8123 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8122);
    // size. 
    Send PSend8127 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8128 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8127);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8129 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8128);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8130 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8129);
    // valueWithArguments:. 
    Send PSend8131 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8130);
    // escape:. 
    Send PSend8132 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8131);
    Array PThreadedCode8126 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8127, (Optr)&t_send1, (Optr)PSend8128, (Optr)&t_send1, (Optr)PSend8129, (Optr)&t_send1, (Optr)PSend8130, (Optr)&t_send1, (Optr)PSend8131, (Optr)&t_send1, (Optr)PSend8132, (Optr)&t_block_return);
    Block PBlock8125 = new_Block_with(empty_Array, empty_Array, PThreadedCode8126, 1, PSend8132);
    // ifTrue:. 
    Send PSend8124 = new_Send((Optr)PSend8123, SMB_ifTrue_, 1, (Optr)PBlock8125);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8133 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8134 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8133);
    Array PThreadedCode8106 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8109, (Optr)&t_send_ifTrue_, (Optr)PSend8110, (Optr)PBlock8111, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8115, (Optr)&t_send1, (Optr)PSend8116, (Optr)&t_send_ifTrue_, (Optr)PSend8117, (Optr)PBlock8118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8122, (Optr)&t_send1, (Optr)PSend8123, (Optr)&t_send_ifTrue_, (Optr)PSend8124, (Optr)PBlock8125, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8133, (Optr)&t_send1, (Optr)PSend8134, (Optr)&t_method_return);
    Block PBlock8104 = new_Block_with(PArray8105, empty_Array, PThreadedCode8106, 5, PAssign8107, PSend8110, PSend8117, PSend8124, PSend8134);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8135 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8104);
    Array PThreadedCode8103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8104, (Optr)&t_send1, (Optr)PSend8135, (Optr)&t_method_return);
    Method PMethod8100 = new_Method_with(PArray8101, PArray8102, empty_Array, PThreadedCode8103, 1, PSend8135);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8100, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_valueWithPossibleArgs_, MC_SMB_valueWithPossibleArgs_);
}

void init_Runtime_PClosure_layout() {
    layout_Runtime_Closure_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Runtime_Closure_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Runtime_Closure_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Runtime_Closure_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Runtime_Closure_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Runtime_Closure_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Closure = new_Symbol(L"Closure");
    slot_Runtime_Closure_code = (Optr)new_Slot(0, L"code");
    layout_Runtime_Closure = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Runtime_Closure)->values[0] = slot_Runtime_Closure_code; // code 
    Runtime_Closure_Class = (Class)new_Class(Object_Class, layout_Runtime_Closure_Class_class);
    Runtime_Closure_Class->layout = layout_Runtime_Closure;
    Runtime_Closure_Class->name = SMB_Closure;
    
}

void init_Runtime_PClosure_methods() {
    init_SMB_code();
    init_SMB_code_();
    init_SMB_valueWithPossibleArgs_();
    
}