#include <lib/class/Testing/TestCase.h>


Optr layout_Testing_TestCase_Class_class;
Optr slot_Testing_TestCase_testSelector;
Optr layout_Testing_TestCase;


static void init_SMB_testSelector_() {
    Symbol SMB_testSelector_ = new_Symbol(L"testSelector:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12297 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign12299 = new_Assign((Optr)slot_Testing_TestCase_testSelector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12298 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12299, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12296 = new_Method_with(PArray12297, empty_Array, empty_Array, PThreadedCode12298, 2, PAssign12299, self);
    
    MethodClosure MC_SMB_testSelector_ = new_MethodClosure((Method)PMethod12296, Testing_TestCase_Class);
=======
    Array PArray12263 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign12265 = new_Assign((Optr)slot_Testing_TestCase_testSelector, (Optr)VAR_anObject_0_0);
    Array PThreadedCode12264 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign12265, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12262 = new_Method_with(PArray12263, empty_Array, empty_Array, PThreadedCode12264, 2, PAssign12265, self);
    
    MethodClosure MC_SMB_testSelector_ = new_MethodClosure((Method)PMethod12262, Testing_TestCase_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_TestCase_Class, SMB_testSelector_, MC_SMB_testSelector_);
}


static void init_SMB_testSelector() {
    Symbol SMB_testSelector = new_Symbol(L"testSelector");
<<<<<<< HEAD
    Array PThreadedCode12301 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestCase_testSelector, (Optr)&t_method_return);
    Method PMethod12300 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12301, 1, slot_Testing_TestCase_testSelector);
    
    MethodClosure MC_SMB_testSelector = new_MethodClosure((Method)PMethod12300, Testing_TestCase_Class);
=======
    Array PThreadedCode12267 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestCase_testSelector, (Optr)&t_method_return);
    Method PMethod12266 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12267, 1, slot_Testing_TestCase_testSelector);
    
    MethodClosure MC_SMB_testSelector = new_MethodClosure((Method)PMethod12266, Testing_TestCase_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_TestCase_Class, SMB_testSelector, MC_SMB_testSelector);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
<<<<<<< HEAD
    Send PSend12304 = new_Send((Optr)self, SMB_new, 0);
    // run. 
    Send PSend12305 = new_Send((Optr)PSend12304, SMB_run, 0);
    Array PThreadedCode12303 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12304, (Optr)&t_send0, (Optr)PSend12305, (Optr)&t_method_return);
    Method PMethod12302 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12303, 1, PSend12305);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod12302, HEADER(Testing_TestCase_Class));
=======
    Send PSend12270 = new_Send((Optr)self, SMB_new, 0);
    // run. 
    Send PSend12271 = new_Send((Optr)PSend12270, SMB_run, 0);
    Array PThreadedCode12269 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12270, (Optr)&t_send0, (Optr)PSend12271, (Optr)&t_method_return);
    Method PMethod12268 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12269, 1, PSend12271);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod12268, HEADER(Testing_TestCase_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Testing_TestCase_Class), SMB_run, MC_SMB_run);
}

void init_Testing_PTestCase_layout() {
    layout_Testing_TestCase_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_TestCase_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_TestCase_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_TestCase_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_TestCase_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_TestCase_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TestCase = new_Symbol(L"TestCase");
    slot_Testing_TestCase_testSelector = (Optr)new_Slot(0, L"testSelector");
    layout_Testing_TestCase = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Testing_TestCase)->values[0] = slot_Testing_TestCase_testSelector; // testSelector 
    Testing_TestCase_Class = (Class)new_Class(Object_Class, layout_Testing_TestCase_Class_class);
    Testing_TestCase_Class->layout = layout_Testing_TestCase;
    Testing_TestCase_Class->name = SMB_TestCase;
    
}

void init_Testing_PTestCase_methods() {
    init_SMB_testSelector_();
    init_SMB_testSelector();
    init_class_SMB_run();
    
}