#include <lib/class/PBenchmark/Fib.h>


Optr layout_PBenchmark_Fib_Class_class;
Optr layout_PBenchmark_Fib;


static void init_SMB_benchFib() {
    Symbol SMB_benchFib = new_Symbol(L"benchFib");
    SmallInt int_31 = new_SmallInt(31);
    Constant int_31_Const = new_Constant((Optr)int_31);
    Symbol SMB_fib = new_Symbol(L"fib");
    // fib. 
    Send PSend25086 = new_Send((Optr)int_31_Const, SMB_fib, 0);
    Array PThreadedCode25085 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send0, (Optr)PSend25086, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod25084 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode25085, 2, PSend25086, self);
    
    MethodClosure MC_SMB_benchFib = new_MethodClosure((Method)PMethod25084, PBenchmark_Fib_Class);
    store_method(PBenchmark_Fib_Class, SMB_benchFib, MC_SMB_benchFib);
}

void init_PBenchmark_PBFib_layout() {
    layout_PBenchmark_Fib_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Fib_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Fib_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Fib_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Fib_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Fib_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Fib = new_Symbol(L"Fib");
    layout_PBenchmark_Fib = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PBenchmark_Fib)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_Fib)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    PBenchmark_Fib_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_PBenchmark_Fib_Class_class);
    PBenchmark_Fib_Class->layout = layout_PBenchmark_Fib;
    PBenchmark_Fib_Class->name = SMB_Fib;
    
}

void init_PBenchmark_PBFib_methods() {
    init_SMB_benchFib();
    
}