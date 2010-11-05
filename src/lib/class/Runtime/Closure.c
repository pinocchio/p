#include <lib/class/Runtime/Closure.h>


Optr layout_Runtime_Closure_Class_class;
Optr slot_Runtime_Closure_code;
Optr layout_Runtime_Closure;


static void init_SMB_code() {
    Symbol SMB_code = new_Symbol(L"code");
    Array PThreadedCode7840 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Runtime_Closure_code, (Optr)&t_method_return);
    Method PMethod7839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7840, 1, slot_Runtime_Closure_code);
    
    MethodClosure MC_SMB_code = new_MethodClosure((Method)PMethod7839, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code, MC_SMB_code);
}


static void init_SMB_code_() {
    Symbol SMB_code_ = new_Symbol(L"code:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray7842 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign7844 = new_Assign((Optr)slot_Runtime_Closure_code, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode7843 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7844, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7841 = new_Method_with(PArray7842, empty_Array, empty_Array, PThreadedCode7843, 2, PAssign7844, self);
    
    MethodClosure MC_SMB_code_ = new_MethodClosure((Method)PMethod7841, Runtime_Closure_Class);
    store_method(Runtime_Closure_Class, SMB_code_, MC_SMB_code_);
}


static void init_SMB_valueWithPossibleArgs_() {
    Symbol SMB_valueWithPossibleArgs_ = new_Symbol(L"valueWithPossibleArgs:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray7846 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Variable VAR_numArgs_0_1 = new_Variable_named(L"numArgs", 0);
    Array PArray7847 = new_Array_with(1, (Optr)VAR_numArgs_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray7850 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_numArgs = new_Symbol(L"numArgs");
    // numArgs. 
    Send PSend7853 = new_Send((Optr)self, SMB_numArgs, 0);
    Assign PAssign7852 = new_Assign((Optr)VAR_numArgs_0_1, (Optr)PSend7853);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend7854 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend7858 = new_Send((Optr)self, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend7859 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7858);
    Array PThreadedCode7857 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7858, (Optr)&t_send1, (Optr)PSend7859, (Optr)&t_block_return);
    Block PBlock7856 = new_Block_with(empty_Array, empty_Array, PThreadedCode7857, 1, PSend7859);
    // ifTrue:. 
    Send PSend7855 = new_Send((Optr)PSend7854, SMB_ifTrue_, 1, (Optr)PBlock7856);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7860 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    // =. 
    Send PSend7861 = new_Send((Optr)VAR_numArgs_0_1, SMB__equals_, 1, (Optr)PSend7860);
    Symbol SMB_valueWithArguments_ = new_Symbol(L"valueWithArguments:");
    // valueWithArguments:. 
    Send PSend7865 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)VAR_anArray_0_0);
    // escape:. 
    Send PSend7866 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7865);
    Array PThreadedCode7864 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send1, (Optr)PSend7865, (Optr)&t_send1, (Optr)PSend7866, (Optr)&t_block_return);
    Block PBlock7863 = new_Block_with(empty_Array, empty_Array, PThreadedCode7864, 1, PSend7866);
    // ifTrue:. 
    Send PSend7862 = new_Send((Optr)PSend7861, SMB_ifTrue_, 1, (Optr)PBlock7863);
    // size. 
    Send PSend7867 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend7868 = new_Send((Optr)VAR_numArgs_0_1, SMB__gt_, 1, (Optr)PSend7867);
    // size. 
    Send PSend7872 = new_Send((Optr)VAR_anArray_0_0, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend7873 = new_Send((Optr)VAR_numArgs_0_1, SMB__minus_, 1, (Optr)PSend7872);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend7874 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend7873);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend7875 = new_Send((Optr)VAR_anArray_0_0, SMB__append_, 1, (Optr)PSend7874);
    // valueWithArguments:. 
    Send PSend7876 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7875);
    // escape:. 
    Send PSend7877 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend7876);
    Array PThreadedCode7871 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7872, (Optr)&t_send1, (Optr)PSend7873, (Optr)&t_send1, (Optr)PSend7874, (Optr)&t_send1, (Optr)PSend7875, (Optr)&t_send1, (Optr)PSend7876, (Optr)&t_send1, (Optr)PSend7877, (Optr)&t_block_return);
    Block PBlock7870 = new_Block_with(empty_Array, empty_Array, PThreadedCode7871, 1, PSend7877);
    // ifTrue:. 
    Send PSend7869 = new_Send((Optr)PSend7868, SMB_ifTrue_, 1, (Optr)PBlock7870);
    Symbol SMB_copyFrom_to_ = new_Symbol(L"copyFrom:to:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // copyFrom:to:. 
    Send PSend7878 = new_Send((Optr)VAR_anArray_0_0, SMB_copyFrom_to_, 2, (Optr)int_1_Const, (Optr)VAR_numArgs_0_1);
    // valueWithArguments:. 
    Send PSend7879 = new_Send((Optr)self, SMB_valueWithArguments_, 1, (Optr)PSend7878);
    Array PThreadedCode7851 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign7852, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7853, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend7854, (Optr)&t_send_ifTrue_, (Optr)PSend7855, (Optr)PBlock7856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7860, (Optr)&t_send1, (Optr)PSend7861, (Optr)&t_send_ifTrue_, (Optr)PSend7862, (Optr)PBlock7863, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_send0, (Optr)PSend7867, (Optr)&t_send1, (Optr)PSend7868, (Optr)&t_send_ifTrue_, (Optr)PSend7869, (Optr)PBlock7870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_numArgs_0_1, (Optr)&t_send2, (Optr)PSend7878, (Optr)&t_send1, (Optr)PSend7879, (Optr)&t_method_return);
    Block PBlock7849 = new_Block_with(PArray7850, empty_Array, PThreadedCode7851, 5, PAssign7852, PSend7855, PSend7862, PSend7869, PSend7879);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend7880 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock7849);
    Array PThreadedCode7848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock7849, (Optr)&t_send1, (Optr)PSend7880, (Optr)&t_method_return);
    Method PMethod7845 = new_Method_with(PArray7846, PArray7847, empty_Array, PThreadedCode7848, 1, PSend7880);
    
    MethodClosure MC_SMB_valueWithPossibleArgs_ = new_MethodClosure((Method)PMethod7845, Runtime_Closure_Class);
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