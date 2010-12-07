#include <lib/class/Bridge/Test/SuperClassTestClass.h>


Optr slot_Bridge_Test_SuperClassTestClass_Class_class_a;
Optr slot_Bridge_Test_SuperClassTestClass_Class_class_b;
Optr layout_Bridge_Test_SuperClassTestClass_Class_class;
Optr slot_Bridge_Test_SuperClassTestClass_a;
Optr layout_Bridge_Test_SuperClassTestClass;


static void init_SMB_a_() {
    /*
    a: anObject
// 	a := anObject
    */
    Symbol SMB_a_ = new_Symbol(L"a:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray24847 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24849 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24849, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24846 = new_Method_with(PArray24847, empty_Array, empty_Array, PThreadedCode24848, 2, PAssign24849, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24846, Bridge_Test_SuperClassTestClass_Class);
=======
    Array PArray24664 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24666 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24665 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24666, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24663 = new_Method_with(PArray24664, empty_Array, empty_Array, PThreadedCode24665, 2, PAssign24666, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24663, Bridge_Test_SuperClassTestClass_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_a_, MC_SMB_a_);
}


static void init_SMB_a() {
    /*
    a
// 	^ a
    */
    Symbol SMB_a = new_Symbol(L"a");
<<<<<<< HEAD
    Array PThreadedCode24851 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)&t_method_return);
    Method PMethod24850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24851, 1, slot_Bridge_Test_SuperClassTestClass_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24850, Bridge_Test_SuperClassTestClass_Class);
=======
    Array PThreadedCode24668 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_a, (Optr)&t_method_return);
    Method PMethod24667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24668, 1, slot_Bridge_Test_SuperClassTestClass_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24667, Bridge_Test_SuperClassTestClass_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_a, MC_SMB_a);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    SmallInt int_10 = new_SmallInt(10);
<<<<<<< HEAD
    Array PThreadedCode24853 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_method_return);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Method PMethod24852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24853, 1, int_10_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod24852, Bridge_Test_SuperClassTestClass_Class);
=======
    Array PThreadedCode24670 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)int_10, (Optr)&t_method_return);
    Constant int_10_Const = new_Constant((Optr)int_10);
    Method PMethod24669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24670, 1, int_10_Const);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod24669, Bridge_Test_SuperClassTestClass_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Bridge_Test_SuperClassTestClass_Class, SMB_test, MC_SMB_test);
}


static void init_class_SMB_a() {
    Symbol SMB_a = new_Symbol(L"a");
<<<<<<< HEAD
    Array PThreadedCode24855 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)&t_method_return);
    Method PMethod24854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24855, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24854, HEADER(Bridge_Test_SuperClassTestClass_Class));
=======
    Array PThreadedCode24672 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)&t_method_return);
    Method PMethod24671 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24672, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_a);
    
    MethodClosure MC_SMB_a = new_MethodClosure((Method)PMethod24671, HEADER(Bridge_Test_SuperClassTestClass_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_a, MC_SMB_a);
}


static void init_class_SMB_a_() {
    Symbol SMB_a_ = new_Symbol(L"a:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray24857 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24859 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24859, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24856 = new_Method_with(PArray24857, empty_Array, empty_Array, PThreadedCode24858, 2, PAssign24859, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24856, HEADER(Bridge_Test_SuperClassTestClass_Class));
=======
    Array PArray24674 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24676 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_a, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24676, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24673 = new_Method_with(PArray24674, empty_Array, empty_Array, PThreadedCode24675, 2, PAssign24676, self);
    
    MethodClosure MC_SMB_a_ = new_MethodClosure((Method)PMethod24673, HEADER(Bridge_Test_SuperClassTestClass_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_a_, MC_SMB_a_);
}


static void init_class_SMB_b() {
    Symbol SMB_b = new_Symbol(L"b");
<<<<<<< HEAD
    Array PThreadedCode24861 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)&t_method_return);
    Method PMethod24860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24861, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_b);
    
    MethodClosure MC_SMB_b = new_MethodClosure((Method)PMethod24860, HEADER(Bridge_Test_SuperClassTestClass_Class));
=======
    Array PThreadedCode24678 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)&t_method_return);
    Method PMethod24677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24678, 1, slot_Bridge_Test_SuperClassTestClass_Class_class_b);
    
    MethodClosure MC_SMB_b = new_MethodClosure((Method)PMethod24677, HEADER(Bridge_Test_SuperClassTestClass_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_b, MC_SMB_b);
}


static void init_class_SMB_b_() {
    Symbol SMB_b_ = new_Symbol(L"b:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray24863 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24865 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24865, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24862 = new_Method_with(PArray24863, empty_Array, empty_Array, PThreadedCode24864, 2, PAssign24865, self);
    
    MethodClosure MC_SMB_b_ = new_MethodClosure((Method)PMethod24862, HEADER(Bridge_Test_SuperClassTestClass_Class));
=======
    Array PArray24680 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign24682 = new_Assign((Optr)slot_Bridge_Test_SuperClassTestClass_Class_class_b, (Optr)VAR_anObject_0_0);
    Array PThreadedCode24681 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24682, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24679 = new_Method_with(PArray24680, empty_Array, empty_Array, PThreadedCode24681, 2, PAssign24682, self);
    
    MethodClosure MC_SMB_b_ = new_MethodClosure((Method)PMethod24679, HEADER(Bridge_Test_SuperClassTestClass_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Bridge_Test_SuperClassTestClass_Class), SMB_b_, MC_SMB_b_);
}

void init_Bridge_Test_SuperClassTestClass_layout() {
    slot_Bridge_Test_SuperClassTestClass_Class_class_a = (Optr)new_Slot(5, L"a");
    slot_Bridge_Test_SuperClassTestClass_Class_class_b = (Optr)new_Slot(6, L"b");
    layout_Bridge_Test_SuperClassTestClass_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[5] = slot_Bridge_Test_SuperClassTestClass_Class_class_a; // a 
    ((Array)layout_Bridge_Test_SuperClassTestClass_Class_class)->values[6] = slot_Bridge_Test_SuperClassTestClass_Class_class_b; // b 
    
    Symbol  SMB_SuperClassTestClass = new_Symbol(L"SuperClassTestClass");
    slot_Bridge_Test_SuperClassTestClass_a = (Optr)new_Slot(0, L"a");
    layout_Bridge_Test_SuperClassTestClass = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Bridge_Test_SuperClassTestClass)->values[0] = slot_Bridge_Test_SuperClassTestClass_a; // a 
    Bridge_Test_SuperClassTestClass_Class = (Class)new_Class(Object_Class, layout_Bridge_Test_SuperClassTestClass_Class_class);
    Bridge_Test_SuperClassTestClass_Class->layout = layout_Bridge_Test_SuperClassTestClass;
    Bridge_Test_SuperClassTestClass_Class->name = SMB_SuperClassTestClass;
    
}

void init_Bridge_Test_SuperClassTestClass_methods() {
    init_SMB_a_();
    init_SMB_a();
    init_SMB_test();
    init_class_SMB_a();
    init_class_SMB_a_();
    init_class_SMB_b();
    init_class_SMB_b_();
    
}