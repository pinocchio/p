#include <lib/class/Number/Random/ShiftRandom.h>


Optr layout_Number_Random_ShiftRandom_Class_class;
Optr slot_Number_Random_ShiftRandom_x;
Optr slot_Number_Random_ShiftRandom_y;
Optr slot_Number_Random_ShiftRandom_z;
Optr slot_Number_Random_ShiftRandom_v;
Optr slot_Number_Random_ShiftRandom_w;
Optr layout_Number_Random_ShiftRandom;


static void init_SMB_seed_() {
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray21877 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Assign PAssign21879 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)VAR_aNumber_0_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21881 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21880 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)PSend21881);
    // next. 
    Send PSend21883 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21882 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)PSend21883);
    // next. 
    Send PSend21885 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21884 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)PSend21885);
    // next. 
    Send PSend21887 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21886 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)PSend21887);
    Array PThreadedCode21878 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign21879, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21880, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21881, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21882, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21883, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21884, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21885, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21886, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21876 = new_Method_with(PArray21877, empty_Array, empty_Array, PThreadedCode21878, 6, PAssign21879, PAssign21880, PAssign21882, PAssign21884, PAssign21886, self);
    
    MethodClosure MC_SMB_seed_ = new_MethodClosure((Method)PMethod21876, Number_Random_ShiftRandom_Class);
    store_method(Number_Random_ShiftRandom_Class, SMB_seed_, MC_SMB_seed_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR_t_0_0 = new_Variable_named(L"t", 0);
    Variable VAR_v2_0_1 = new_Variable_named(L"v2", 0);
    Variable VAR_t2_0_2 = new_Variable_named(L"t2", 0);
    Array PArray21889 = new_Array_with(3, (Optr)VAR_t_0_0, (Optr)VAR_v2_0_1, (Optr)VAR_t2_0_2);
    Symbol SMB_xor_ = new_Symbol(L"xor:");
    Symbol SMB__shiftRight_ = new_Symbol(L">>");
    SmallInt int_7 = new_SmallInt(7);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // >>. 
    Send PSend21893 = new_Send((Optr)slot_Number_Random_ShiftRandom_x, SMB__shiftRight_, 1, (Optr)int_7_Const);
    // xor:. 
    Send PSend21892 = new_Send((Optr)slot_Number_Random_ShiftRandom_x, SMB_xor_, 1, (Optr)PSend21893);
    Assign PAssign21891 = new_Assign((Optr)VAR_t_0_0, (Optr)PSend21892);
    Assign PAssign21894 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)slot_Number_Random_ShiftRandom_y);
    Assign PAssign21895 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)slot_Number_Random_ShiftRandom_z);
    Assign PAssign21896 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)slot_Number_Random_ShiftRandom_w);
    Assign PAssign21897 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)slot_Number_Random_ShiftRandom_v);
    Symbol SMB__and_ = new_Symbol(L"&");
    SmallInt int_8388607 = new_SmallInt(8388607);
    Constant int_8388607_Const = new_Constant((Optr)int_8388607);
    // &. 
    Send PSend21900 = new_Send((Optr)slot_Number_Random_ShiftRandom_v, SMB__and_, 1, (Optr)int_8388607_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <<. 
    Send PSend21899 = new_Send((Optr)PSend21900, SMB__shiftLeft_, 1, (Optr)int_6_Const);
    Assign PAssign21898 = new_Assign((Optr)VAR_v2_0_1, (Optr)PSend21899);
    SmallInt int_8191 = new_SmallInt(8191);
    Constant int_8191_Const = new_Constant((Optr)int_8191);
    // &. 
    Send PSend21903 = new_Send((Optr)VAR_t_0_0, SMB__and_, 1, (Optr)int_8191_Const);
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // <<. 
    Send PSend21902 = new_Send((Optr)PSend21903, SMB__shiftLeft_, 1, (Optr)int_13_Const);
    Assign PAssign21901 = new_Assign((Optr)VAR_t2_0_2, (Optr)PSend21902);
    // xor:. 
    Send PSend21906 = new_Send((Optr)slot_Number_Random_ShiftRandom_v, SMB_xor_, 1, (Optr)VAR_v2_0_1);
    // xor:. 
    Send PSend21907 = new_Send((Optr)VAR_t_0_0, SMB_xor_, 1, (Optr)VAR_t2_0_2);
    // xor:. 
    Send PSend21905 = new_Send((Optr)PSend21906, SMB_xor_, 1, (Optr)PSend21907);
    Assign PAssign21904 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)PSend21905);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21908 = new_Send((Optr)slot_Number_Random_ShiftRandom_y, SMB__plus_, 1, (Optr)slot_Number_Random_ShiftRandom_y);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21909 = new_Send((Optr)PSend21908, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_268435455 = new_SmallInt(268435455);
    Constant int_268435455_Const = new_Constant((Optr)int_268435455);
    // &. 
    Send PSend21910 = new_Send((Optr)PSend21909, SMB__and_, 1, (Optr)int_268435455_Const);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21911 = new_Send((Optr)PSend21910, SMB__times_, 1, (Optr)slot_Number_Random_ShiftRandom_v);
    // &. 
    Send PSend21912 = new_Send((Optr)PSend21911, SMB__and_, 1, (Optr)int_268435455_Const);
    Array PThreadedCode21890 = instantiate_Array_with(ThreadedCode_Class, 0, 106, (Optr)&t_push1, (Optr)PAssign21891, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_x, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_x, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21893, (Optr)&t_send1, (Optr)PSend21892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21894, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21895, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_z, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21896, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_w, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21897, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21898, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_push1, (Optr)int_8388607, (Optr)&t_send1, (Optr)PSend21900, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend21899, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21901, (Optr)&t_push_variable, (Optr)VAR_t_0_0, (Optr)&t_push1, (Optr)int_8191, (Optr)&t_send1, (Optr)PSend21903, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send1, (Optr)PSend21902, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21904, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_push_variable, (Optr)VAR_v2_0_1, (Optr)&t_send1, (Optr)PSend21906, (Optr)&t_push_variable, (Optr)VAR_t_0_0, (Optr)&t_push_variable, (Optr)VAR_t2_0_2, (Optr)&t_send1, (Optr)PSend21907, (Optr)&t_send1, (Optr)PSend21905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_send1, (Optr)PSend21908, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21909, (Optr)&t_push1, (Optr)int_268435455, (Optr)&t_send1, (Optr)PSend21910, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_send1, (Optr)PSend21911, (Optr)&t_push1, (Optr)int_268435455, (Optr)&t_send1, (Optr)PSend21912, (Optr)&t_method_return);
    Method PMethod21888 = new_Method_with(empty_Array, PArray21889, empty_Array, PThreadedCode21890, 9, PAssign21891, PAssign21894, PAssign21895, PAssign21896, PAssign21897, PAssign21898, PAssign21901, PAssign21904, PSend21912);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21888, Number_Random_ShiftRandom_Class);
    store_method(Number_Random_ShiftRandom_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign21915 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Assign PAssign21916 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Assign PAssign21917 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Assign PAssign21918 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)int_4_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    Assign PAssign21919 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)int_5_Const);
    Super PSuper21920 = new_Super(SMB_initialize, 0);
    Array PThreadedCode21914 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign21915, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21916, (Optr)&t_push_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21917, (Optr)&t_push1, (Optr)int_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21918, (Optr)&t_push1, (Optr)int_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21919, (Optr)&t_push1, (Optr)int_5, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21914, 7, PAssign21915, PAssign21916, PAssign21917, PAssign21918, PAssign21919, PSuper21920, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21913, Number_Random_ShiftRandom_Class);
    store_method(Number_Random_ShiftRandom_Class, SMB_initialize, MC_SMB_initialize);
}

void init_Number_Random_XORShiftRandom_layout() {
    layout_Number_Random_ShiftRandom_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Number_Random_ShiftRandom_Class_class)->values[5] = slot_Number_Random_Random_Class_class_instance; // instance 
    
    Symbol  SMB_ShiftRandom = new_Symbol(L"ShiftRandom");
    slot_Number_Random_ShiftRandom_x = (Optr)new_Slot(0, L"x");
    slot_Number_Random_ShiftRandom_y = (Optr)new_Slot(1, L"y");
    slot_Number_Random_ShiftRandom_z = (Optr)new_Slot(2, L"z");
    slot_Number_Random_ShiftRandom_v = (Optr)new_Slot(3, L"v");
    slot_Number_Random_ShiftRandom_w = (Optr)new_Slot(4, L"w");
    layout_Number_Random_ShiftRandom = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Number_Random_ShiftRandom)->values[0] = slot_Number_Random_ShiftRandom_x; // x 
    ((Array)layout_Number_Random_ShiftRandom)->values[1] = slot_Number_Random_ShiftRandom_y; // y 
    ((Array)layout_Number_Random_ShiftRandom)->values[2] = slot_Number_Random_ShiftRandom_z; // z 
    ((Array)layout_Number_Random_ShiftRandom)->values[3] = slot_Number_Random_ShiftRandom_v; // v 
    ((Array)layout_Number_Random_ShiftRandom)->values[4] = slot_Number_Random_ShiftRandom_w; // w 
    Number_Random_ShiftRandom_Class = (Class)new_Class(Number_Random_Random_Class, layout_Number_Random_ShiftRandom_Class_class);
    Number_Random_ShiftRandom_Class->layout = layout_Number_Random_ShiftRandom;
    Number_Random_ShiftRandom_Class->name = SMB_ShiftRandom;
    
}

void init_Number_Random_XORShiftRandom_methods() {
    init_SMB_seed_();
    init_SMB_next();
    init_SMB_initialize();
    
}