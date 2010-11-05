#include <lib/class/Runtime/Closure.h>


Optr layout_Runtime_Closure_Class_class;
Optr slot_Runtime_Closure_code;
Optr layout_Runtime_Closure;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode7763 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_method_return);
    Method PMethod7762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7763, 1, slot_Runtime_Closure_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod7762, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_code_() {
    Symbol SMB_code_ = new_Symbol(L"code:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7765 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7767 = new_Assign((Optr)slot_Runtime_Closure_code, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7766 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7767, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7764 = new_Method_with(PArray7765, empty_Array, empty_Array, PThreadedCode7766, 2, PAssign7767, self);
    
    MethodClosure MC_SMB_code_ = new_MethodClosure((Method)PMethod7764, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code_, MC_SMB_code_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7769 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7770 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7773 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7776 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7775 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7776);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7777 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7781 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7782 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7781);
    Array PThreadedCode7780 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7781, (Optr)&t_send1, (Optr)PSend7782, (Optr)&t_block_return);
    Block PBlock7779 = new_Block_with(empty_Array, empty_Array, PThreadedCode7780, 1, PSend7782);
    // ifTrue:. 
    Send PSend7778 = new_Send((Optr)PSend7777, SMB_ifTrue_, 1, (Optr)PBlock7779);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7783 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend7784 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend7783);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7788 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend7789 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7788);
    Array PThreadedCode7787 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend7788, (Optr)&t_send1, (Optr)PSend7789, (Optr)&t_block_return);
    Block PBlock7786 = new_Block_with(empty_Array, empty_Array, PThreadedCode7787, 1, PSend7789);
    // ifTrue:. 
    Send PSend7785 = new_Send((Optr)PSend7784, SMB_ifTrue_, 1, (Optr)PBlock7786);
    // size. 
    Send PSend7790 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7791 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend7790);
    // size. 
    Send PSend7795 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend7796 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend7795);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7797 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend7796);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend7798 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend7797);
    // valueWithArguments:. 
    Send PSend7799 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7798);
    // escape:. 
    Send PSend7800 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7799);
    Array PThreadedCode7794 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7795, (Optr)&t_send1, (Optr)PSend7796, (Optr)&t_send1, (Optr)PSend7797, (Optr)&t_send1, (Optr)PSend7798, (Optr)&t_send1, (Optr)PSend7799, (Optr)&t_send1, (Optr)PSend7800, (Optr)&t_block_return);
    Block PBlock7793 = new_Block_with(empty_Array, empty_Array, PThreadedCode7794, 1, PSend7800);
    // ifTrue:. 
    Send PSend7792 = new_Send((Optr)PSend7791, SMB_ifTrue_, 1, (Optr)PBlock7793);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend7801 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend7802 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7801);
    Array PThreadedCode7774 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7775, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7776, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7777, (Optr)&t_send_ifTrue_, (Optr)PSend7778, (Optr)PBlock7779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7783, (Optr)&t_send1, (Optr)PSend7784, (Optr)&t_send_ifTrue_, (Optr)PSend7785, (Optr)PBlock7786, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7790, (Optr)&t_send1, (Optr)PSend7791, (Optr)&t_send_ifTrue_, (Optr)PSend7792, (Optr)PBlock7793, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend7801, (Optr)&t_send1, (Optr)PSend7802, (Optr)&t_method_return);
    Block PBlock7772 = new_Block_with(PArray7773, empty_Array, PThreadedCode7774, 5, PAssign7775, PSend7778, PSend7785, PSend7792, PSend7802);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7803 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7772);
    Array PThreadedCode7771 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7772, (Optr)&t_send1, (Optr)PSend7803, (Optr)&t_method_return);
    Method PMethod7768 = new_Method_with(PArray7769, PArray7770, empty_Array, PThreadedCode7771, 1, PSend7803);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7768, Runtime_Closure_Class);
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