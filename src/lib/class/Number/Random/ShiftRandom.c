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
    Array PArray21775 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Assign PAssign21777 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)VAR_aNumber_0_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21779 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21778 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)PSend21779);
    // next. 
    Send PSend21781 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21780 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)PSend21781);
    // next. 
    Send PSend21783 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21782 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)PSend21783);
    // next. 
    Send PSend21785 = new_Send((Optr)self, SMB_next, 0);
    Assign PAssign21784 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)PSend21785);
    Array PThreadedCode21776 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign21777, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21778, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21780, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21782, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21784, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21774 = new_Method_with(PArray21775, empty_Array, empty_Array, PThreadedCode21776, 6, PAssign21777, PAssign21778, PAssign21780, PAssign21782, PAssign21784, self);
    
    MethodClosure MC_SMB_seed_ = new_MethodClosure((Method)PMethod21774, Number_Random_ShiftRandom_Class);
    store_method(Number_Random_ShiftRandom_Class, SMB_seed_, MC_SMB_seed_);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR_t_0_0 = new_Variable_named(L"t", 0);
    Variable VAR_v2_0_1 = new_Variable_named(L"v2", 0);
    Variable VAR_t2_0_2 = new_Variable_named(L"t2", 0);
    Array PArray21787 = new_Array_with(3, (Optr)VAR_t_0_0, (Optr)VAR_v2_0_1, (Optr)VAR_t2_0_2);
    Symbol SMB_xor_ = new_Symbol(L"xor:");
    Symbol SMB__shiftRight_ = new_Symbol(L">>");
    SmallInt int_7 = new_SmallInt(7);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // >>. 
    Send PSend21791 = new_Send((Optr)slot_Number_Random_ShiftRandom_x, SMB__shiftRight_, 1, (Optr)int_7_Const);
    // xor:. 
    Send PSend21790 = new_Send((Optr)slot_Number_Random_ShiftRandom_x, SMB_xor_, 1, (Optr)PSend21791);
    Assign PAssign21789 = new_Assign((Optr)VAR_t_0_0, (Optr)PSend21790);
    Assign PAssign21792 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)slot_Number_Random_ShiftRandom_y);
    Assign PAssign21793 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)slot_Number_Random_ShiftRandom_z);
    Assign PAssign21794 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)slot_Number_Random_ShiftRandom_w);
    Assign PAssign21795 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)slot_Number_Random_ShiftRandom_v);
    Symbol SMB__and_ = new_Symbol(L"&");
    SmallInt int_8388607 = new_SmallInt(8388607);
    Constant int_8388607_Const = new_Constant((Optr)int_8388607);
    // &. 
    Send PSend21798 = new_Send((Optr)slot_Number_Random_ShiftRandom_v, SMB__and_, 1, (Optr)int_8388607_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    SmallInt int_6 = new_SmallInt(6);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // <<. 
    Send PSend21797 = new_Send((Optr)PSend21798, SMB__shiftLeft_, 1, (Optr)int_6_Const);
    Assign PAssign21796 = new_Assign((Optr)VAR_v2_0_1, (Optr)PSend21797);
    SmallInt int_8191 = new_SmallInt(8191);
    Constant int_8191_Const = new_Constant((Optr)int_8191);
    // &. 
    Send PSend21801 = new_Send((Optr)VAR_t_0_0, SMB__and_, 1, (Optr)int_8191_Const);
    SmallInt int_13 = new_SmallInt(13);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // <<. 
    Send PSend21800 = new_Send((Optr)PSend21801, SMB__shiftLeft_, 1, (Optr)int_13_Const);
    Assign PAssign21799 = new_Assign((Optr)VAR_t2_0_2, (Optr)PSend21800);
    // xor:. 
    Send PSend21804 = new_Send((Optr)slot_Number_Random_ShiftRandom_v, SMB_xor_, 1, (Optr)VAR_v2_0_1);
    // xor:. 
    Send PSend21805 = new_Send((Optr)VAR_t_0_0, SMB_xor_, 1, (Optr)VAR_t2_0_2);
    // xor:. 
    Send PSend21803 = new_Send((Optr)PSend21804, SMB_xor_, 1, (Optr)PSend21805);
    Assign PAssign21802 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)PSend21803);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend21806 = new_Send((Optr)slot_Number_Random_ShiftRandom_y, SMB__plus_, 1, (Optr)slot_Number_Random_ShiftRandom_y);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21807 = new_Send((Optr)PSend21806, SMB__plus_, 1, (Optr)int_1_Const);
    SmallInt int_268435455 = new_SmallInt(268435455);
    Constant int_268435455_Const = new_Constant((Optr)int_268435455);
    // &. 
    Send PSend21808 = new_Send((Optr)PSend21807, SMB__and_, 1, (Optr)int_268435455_Const);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21809 = new_Send((Optr)PSend21808, SMB__times_, 1, (Optr)slot_Number_Random_ShiftRandom_v);
    // &. 
    Send PSend21810 = new_Send((Optr)PSend21809, SMB__and_, 1, (Optr)int_268435455_Const);
    Array PThreadedCode21788 = instantiate_Array_with(ThreadedCode_Class, 0, 106, (Optr)&t_push1, (Optr)PAssign21789, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_x, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_x, (Optr)&t_push1, (Optr)int_7, (Optr)&t_send1, (Optr)PSend21791, (Optr)&t_send1, (Optr)PSend21790, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21792, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21793, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_z, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21794, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_w, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21795, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21796, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_push1, (Optr)int_8388607, (Optr)&t_send1, (Optr)PSend21798, (Optr)&t_push1, (Optr)int_6, (Optr)&t_send1, (Optr)PSend21797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21799, (Optr)&t_push_variable, (Optr)VAR_t_0_0, (Optr)&t_push1, (Optr)int_8191, (Optr)&t_send1, (Optr)PSend21801, (Optr)&t_push1, (Optr)int_13, (Optr)&t_send1, (Optr)PSend21800, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21802, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_push_variable, (Optr)VAR_v2_0_1, (Optr)&t_send1, (Optr)PSend21804, (Optr)&t_push_variable, (Optr)VAR_t_0_0, (Optr)&t_push_variable, (Optr)VAR_t2_0_2, (Optr)&t_send1, (Optr)PSend21805, (Optr)&t_send1, (Optr)PSend21803, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_y, (Optr)&t_send1, (Optr)PSend21806, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21807, (Optr)&t_push1, (Optr)int_268435455, (Optr)&t_send1, (Optr)PSend21808, (Optr)&t_push_slot, (Optr)slot_Number_Random_ShiftRandom_v, (Optr)&t_send1, (Optr)PSend21809, (Optr)&t_push1, (Optr)int_268435455, (Optr)&t_send1, (Optr)PSend21810, (Optr)&t_method_return);
    Method PMethod21786 = new_Method_with(empty_Array, PArray21787, empty_Array, PThreadedCode21788, 9, PAssign21789, PAssign21792, PAssign21793, PAssign21794, PAssign21795, PAssign21796, PAssign21799, PAssign21802, PSend21810);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21786, Number_Random_ShiftRandom_Class);
    store_method(Number_Random_ShiftRandom_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign21813 = new_Assign((Optr)slot_Number_Random_ShiftRandom_x, (Optr)int_1_Const);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Assign PAssign21814 = new_Assign((Optr)slot_Number_Random_ShiftRandom_y, (Optr)int_2_Const);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Assign PAssign21815 = new_Assign((Optr)slot_Number_Random_ShiftRandom_z, (Optr)int_3_Const);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    Assign PAssign21816 = new_Assign((Optr)slot_Number_Random_ShiftRandom_v, (Optr)int_4_Const);
    SmallInt int_5 = new_SmallInt(5);
    Constant int_5_Const = new_Constant((Optr)int_5);
    Assign PAssign21817 = new_Assign((Optr)slot_Number_Random_ShiftRandom_w, (Optr)int_5_Const);
    Super PSuper21818 = new_Super(SMB_initialize, 0);
    Array PThreadedCode21812 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign21813, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21814, (Optr)&t_push_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21815, (Optr)&t_push1, (Optr)int_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21816, (Optr)&t_push1, (Optr)int_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21817, (Optr)&t_push1, (Optr)int_5, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21818, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21812, 7, PAssign21813, PAssign21814, PAssign21815, PAssign21816, PAssign21817, PSuper21818, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21811, Number_Random_ShiftRandom_Class);
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