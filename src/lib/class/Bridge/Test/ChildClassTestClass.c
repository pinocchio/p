#include <lib/class/Bridge/Test/ChildClassTestClass.h>


Optr slot_Bridge_Test_ChildClassTestClass_Class_class_c;
Optr layout_Bridge_Test_ChildClassTestClass_Class_class;
Optr slot_Bridge_Test_ChildClassTestClass_b;
Optr layout_Bridge_Test_ChildClassTestClass;


static void init_SMB_b_() {
    Symbol SMB_b_ = new_Symbol(L"b:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24910 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24912 = new_Assign((Optr)slot_Bridge_Test_ChildClassTestClass_b, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24911 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24912, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24909 = new_Method_with(PArray24910, empty_Array, empty_Array, PThreadedCode24911, 2, PAssign24912, self);
    
    MethodClosure MC_SMB_b_ = new_MethodClosure((Method)PMethod24909, Bridge_Test_ChildClassTestClass_Class);
    store_method(Bridge_Test_ChildClassTestClass_Class, SMB_b_, MC_SMB_b_);
}


static void init_SMB_b() {
    Symbol SMB_b = new_Symbol(L"b");
    Array PThreadedCode24914 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_ChildClassTestClass_b, (Optr)&t_method_return);
    Method PMethod24913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24914, 1, slot_Bridge_Test_ChildClassTestClass_b);
    
    MethodClosure MC_SMB_b = new_MethodClosure((Method)PMethod24913, Bridge_Test_ChildClassTestClass_Class);
    store_method(Bridge_Test_ChildClassTestClass_Class, SMB_b, MC_SMB_b);
}


static void init_SMB_testSuper() {
    Symbol SMB_testSuper = new_Symbol(L"testSuper");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_test = new_Symbol(L"test");
    Super PSuper24917 = new_Super(SMB_test, 0);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend24918 = new_Send((Optr)int_10_Const, SMB__times_, 1, (Optr)PSuper24917);
    Array PThreadedCode24916 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24917, (Optr)&t_send1, (Optr)PSend24918, (Optr)&t_method_return);
    Method PMethod24915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24916, 1, PSend24918);
    
    MethodClosure MC_SMB_testSuper = new_MethodClosure((Method)PMethod24915, Bridge_Test_ChildClassTestClass_Class);
    store_method(Bridge_Test_ChildClassTestClass_Class, SMB_testSuper, MC_SMB_testSuper);
}


static void init_class_SMB_c() {
    Symbol SMB_c = new_Symbol(L"c");
    Array PThreadedCode24920 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_ChildClassTestClass_Class_class_c, (Optr)&t_method_return);
    Method PMethod24919 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24920, 1, slot_Bridge_Test_ChildClassTestClass_Class_class_c);
    
    MethodClosure MC_SMB_c = new_MethodClosure((Method)PMethod24919, HEADER(Bridge_Test_ChildClassTestClass_Class));
    store_method(HEADER(Bridge_Test_ChildClassTestClass_Class), SMB_c, MC_SMB_c);
}


static void init_class_SMB_c_() {
    Symbol SMB_c_ = new_Symbol(L"c:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray24922 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24924 = new_Assign((Optr)slot_Bridge_Test_ChildClassTestClass_Class_class_c, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24923 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24924, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24921 = new_Method_with(PArray24922, empty_Array, empty_Array, PThreadedCode24923, 2, PAssign24924, self);
    
    MethodClosure MC_SMB_c_ = new_MethodClosure((Method)PMethod24921, HEADER(Bridge_Test_ChildClassTestClass_Class));
    store_method(HEADER(Bridge_Test_ChildClassTestClass_Class), SMB_c_, MC_SMB_c_);
}

void init_Bridge_Test_ChildClassTestClass_layout() {
    slot_Bridge_Test_ChildClassTestClass_Class_class_c = (Optr)new_Slot(7, L"c");
    layout_Bridge_Test_ChildClassTestClass_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[5] = slot_Bridge_Test_SuperClassTestClass_Class_class_a; // a 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[6] = slot_Bridge_Test_SuperClassTestClass_Class_class_b; // b 
    ((Array)layout_Bridge_Test_ChildClassTestClass_Class_class)->values[7] = slot_Bridge_Test_ChildClassTestClass_Class_class_c; // c 
    
    Symbol  SMB_ChildClassTestClass = new_Symbol(L"ChildClassTestClass");
    slot_Bridge_Test_ChildClassTestClass_b = (Optr)new_Slot(1, L"b");
    layout_Bridge_Test_ChildClassTestClass = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Bridge_Test_ChildClassTestClass)->values[0] = slot_Bridge_Test_SuperClassTestClass_a; // a 
    ((Array)layout_Bridge_Test_ChildClassTestClass)->values[1] = slot_Bridge_Test_ChildClassTestClass_b; // b 
    Bridge_Test_ChildClassTestClass_Class = (Class)new_Class(Bridge_Test_SuperClassTestClass_Class, layout_Bridge_Test_ChildClassTestClass_Class_class);
    Bridge_Test_ChildClassTestClass_Class->layout = layout_Bridge_Test_ChildClassTestClass;
    Bridge_Test_ChildClassTestClass_Class->name = SMB_ChildClassTestClass;
    
}

void init_Bridge_Test_ChildClassTestClass_methods() {
    init_SMB_b_();
    init_SMB_b();
    init_SMB_testSuper();
    init_class_SMB_c();
    init_class_SMB_c_();
    
}