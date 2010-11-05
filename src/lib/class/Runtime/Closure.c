#include <lib/class/Runtime/Closure.h>


Optr layout_Runtime_Closure_Class_class;
Optr slot_Runtime_Closure_code;
Optr layout_Runtime_Closure;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode7802 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_method_return);
    Method PMethod7801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7802, 1, slot_Runtime_Closure_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod7801, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_code_() {
    Symbol SMB_code_ = new_Symbol(L"code:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7804 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7806 = new_Assign((Optr)slot_Runtime_Closure_code, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7806, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7803 = new_Method_with(PArray7804, empty_Array, empty_Array, PThreadedCode7805, 2, PAssign7806, self);
    
    MethodClosure MC_SMB_code_ = new_MethodClosure((Method)PMethod7803, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code_, MC_SMB_code_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7808 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7809 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7812 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7815 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7814 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7815);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7816 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7820 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7821 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7820);
    Array PThreadedCode7819 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7820, (Optr)&t_send1, (Optr)PSend7821, (Optr)&t_block_return);
    Block PBlock7818 = new_Block_with(empty_Array, empty_Array, PThreadedCode7819, 1, PSend7821);
    // ifTrue:. 
    Send PSend7817 = new_Send((Optr)PSend7816, SMB_ifTrue_, 1, (Optr)PBlock7818);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7822 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend7823 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend7822);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7827 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend7828 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7827);
    Array PThreadedCode7826 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend7827, (Optr)&t_send1, (Optr)PSend7828, (Optr)&t_block_return);
    Block PBlock7825 = new_Block_with(empty_Array, empty_Array, PThreadedCode7826, 1, PSend7828);
    // ifTrue:. 
    Send PSend7824 = new_Send((Optr)PSend7823, SMB_ifTrue_, 1, (Optr)PBlock7825);
    // size. 
    Send PSend7829 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7830 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend7829);
    // size. 
    Send PSend7834 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend7835 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend7834);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7836 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend7835);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend7837 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend7836);
    // valueWithArguments:. 
    Send PSend7838 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7837);
    // escape:. 
    Send PSend7839 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7838);
    Array PThreadedCode7833 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7834, (Optr)&t_send1, (Optr)PSend7835, (Optr)&t_send1, (Optr)PSend7836, (Optr)&t_send1, (Optr)PSend7837, (Optr)&t_send1, (Optr)PSend7838, (Optr)&t_send1, (Optr)PSend7839, (Optr)&t_block_return);
    Block PBlock7832 = new_Block_with(empty_Array, empty_Array, PThreadedCode7833, 1, PSend7839);
    // ifTrue:. 
    Send PSend7831 = new_Send((Optr)PSend7830, SMB_ifTrue_, 1, (Optr)PBlock7832);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend7840 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend7841 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7840);
    Array PThreadedCode7813 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7814, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7816, (Optr)&t_send_ifTrue_, (Optr)PSend7817, (Optr)PBlock7818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7822, (Optr)&t_send1, (Optr)PSend7823, (Optr)&t_send_ifTrue_, (Optr)PSend7824, (Optr)PBlock7825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7829, (Optr)&t_send1, (Optr)PSend7830, (Optr)&t_send_ifTrue_, (Optr)PSend7831, (Optr)PBlock7832, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend7840, (Optr)&t_send1, (Optr)PSend7841, (Optr)&t_method_return);
    Block PBlock7811 = new_Block_with(PArray7812, empty_Array, PThreadedCode7813, 5, PAssign7814, PSend7817, PSend7824, PSend7831, PSend7841);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7842 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7811);
    Array PThreadedCode7810 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7811, (Optr)&t_send1, (Optr)PSend7842, (Optr)&t_method_return);
    Method PMethod7807 = new_Method_with(PArray7808, PArray7809, empty_Array, PThreadedCode7810, 1, PSend7842);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7807, Runtime_Closure_Class);
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