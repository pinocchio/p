#include <lib/class/Runtime/Closure.h>


Optr layout_Runtime_Closure_Class_class;
Optr slot_Runtime_Closure_code;
Optr layout_Runtime_Closure;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode8068 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_method_return);
    Method PMethod8067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8068, 1, slot_Runtime_Closure_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod8067, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_code_() {
    Symbol SMB_code_ = new_Symbol(L"code:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray8070 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign8072 = new_Assign((Optr)slot_Runtime_Closure_code, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode8071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8072, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8069 = new_Method_with(PArray8070, empty_Array, empty_Array, PThreadedCode8071, 2, PAssign8072, self);
    
    MethodClosure MC_SMB_code_ = new_MethodClosure((Method)PMethod8069, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code_, MC_SMB_code_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray8074 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray8075 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8078 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend8081 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign8080 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend8081);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend8082 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend8086 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8087 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8086);
    Array PThreadedCode8085 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8086, (Optr)&t_send1, (Optr)PSend8087, (Optr)&t_block_return);
    Block PBlock8084 = new_Block_with(empty_Array, empty_Array, PThreadedCode8085, 1, PSend8087);
    // ifTrue:. 
    Send PSend8083 = new_Send((Optr)PSend8082, SMB_ifTrue_, 1, (Optr)PBlock8084);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend8088 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend8089 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend8088);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend8093 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend8094 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8093);
    Array PThreadedCode8092 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend8093, (Optr)&t_send1, (Optr)PSend8094, (Optr)&t_block_return);
    Block PBlock8091 = new_Block_with(empty_Array, empty_Array, PThreadedCode8092, 1, PSend8094);
    // ifTrue:. 
    Send PSend8090 = new_Send((Optr)PSend8089, SMB_ifTrue_, 1, (Optr)PBlock8091);
    // size. 
    Send PSend8095 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend8096 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend8095);
    // size. 
    Send PSend8100 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend8101 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend8100);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend8102 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend8101);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8103 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend8102);
    // valueWithArguments:. 
    Send PSend8104 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8103);
    // escape:. 
    Send PSend8105 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend8104);
    Array PThreadedCode8099 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8100, (Optr)&t_send1, (Optr)PSend8101, (Optr)&t_send1, (Optr)PSend8102, (Optr)&t_send1, (Optr)PSend8103, (Optr)&t_send1, (Optr)PSend8104, (Optr)&t_send1, (Optr)PSend8105, (Optr)&t_block_return);
    Block PBlock8098 = new_Block_with(empty_Array, empty_Array, PThreadedCode8099, 1, PSend8105);
    // ifTrue:. 
    Send PSend8097 = new_Send((Optr)PSend8096, SMB_ifTrue_, 1, (Optr)PBlock8098);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend8106 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend8107 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend8106);
    Array PThreadedCode8079 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign8080, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8082, (Optr)&t_send_ifTrue_, (Optr)PSend8083, (Optr)PBlock8084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8088, (Optr)&t_send1, (Optr)PSend8089, (Optr)&t_send_ifTrue_, (Optr)PSend8090, (Optr)PBlock8091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend8095, (Optr)&t_send1, (Optr)PSend8096, (Optr)&t_send_ifTrue_, (Optr)PSend8097, (Optr)PBlock8098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend8106, (Optr)&t_send1, (Optr)PSend8107, (Optr)&t_method_return);
    Block PBlock8077 = new_Block_with(PArray8078, empty_Array, PThreadedCode8079, 5, PAssign8080, PSend8083, PSend8090, PSend8097, PSend8107);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8108 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8077);
    Array PThreadedCode8076 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8077, (Optr)&t_send1, (Optr)PSend8108, (Optr)&t_method_return);
    Method PMethod8073 = new_Method_with(PArray8074, PArray8075, empty_Array, PThreadedCode8076, 1, PSend8108);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod8073, Runtime_Closure_Class);
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