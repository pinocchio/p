#include <lib/class/Graphics/Primitives/Point.h>


Optr layout_Graphics_Primitives_Point_Class_class;
Optr slot_Graphics_Primitives_Point_x;
Optr slot_Graphics_Primitives_Point_y;
Optr layout_Graphics_Primitives_Point;


static void init_SMB_x() {
    Symbol SMB_x = new_Symbol(L"x");
    Array PThreadedCode5716 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_method_return);
    Method PMethod5715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5716, 1, slot_Graphics_Primitives_Point_x);
    
    MethodClosure MC_SMB_x = new_MethodClosure((Method)PMethod5715, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_x, MC_SMB_x);
}


static void init_SMB_y() {
    Symbol SMB_y = new_Symbol(L"y");
    Array PThreadedCode5718 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_method_return);
    Method PMethod5717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5718, 1, slot_Graphics_Primitives_Point_y);
    
    MethodClosure MC_SMB_y = new_MethodClosure((Method)PMethod5717, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_y, MC_SMB_y);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aPoint_0_0 = new_Variable_named(L"aPoint", 0);
    Array PArray5720 = new_Array_with(1, (Optr)VAR_aPoint_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5723 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend5725 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend5726 = new_Send((Optr)VAR_aPoint_0_0, SMB_species, 0);
    // =. 
    Send PSend5727 = new_Send((Optr)PSend5725, SMB__equals_, 1, (Optr)PSend5726);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend5731 = new_Send((Optr)VAR_aPoint_0_0, SMB_x, 0);
    // =. 
    Send PSend5732 = new_Send((Optr)slot_Graphics_Primitives_Point_x, SMB__equals_, 1, (Optr)PSend5731);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend5735 = new_Send((Optr)VAR_aPoint_0_0, SMB_y, 0);
    // =. 
    Send PSend5736 = new_Send((Optr)slot_Graphics_Primitives_Point_y, SMB__equals_, 1, (Optr)PSend5735);
    Array PThreadedCode5734 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5735, (Optr)&t_send1, (Optr)PSend5736, (Optr)&t_block_return);
    Block PBlock5733 = new_Block_with(empty_Array, empty_Array, PThreadedCode5734, 1, PSend5736);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend5737 = new_Send((Optr)PSend5732, SMB_and_, 1, (Optr)PBlock5733);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5737);
    Array PThreadedCode5730 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5731, (Optr)&t_send1, (Optr)PSend5732, (Optr)&t_push_closure, (Optr)PBlock5733, (Optr)&t_send1, (Optr)PSend5737, (Optr)&t_send1, (Optr)PSend5738, (Optr)&t_block_return);
    Block PBlock5729 = new_Block_with(empty_Array, empty_Array, PThreadedCode5730, 1, PSend5738);
    // escape:. 
    Send PSend5741 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode5740 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend5741, (Optr)&t_block_return);
    Block PBlock5739 = new_Block_with(empty_Array, empty_Array, PThreadedCode5740, 1, PSend5741);
    // ifTrue:ifFalse:. 
    Send PSend5728 = new_Send((Optr)PSend5727, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5729, (Optr)PBlock5739);
    Array PThreadedCode5724 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5725, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5726, (Optr)&t_send1, (Optr)PSend5727, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5728, (Optr)PBlock5729, (Optr)PBlock5739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5722 = new_Block_with(PArray5723, empty_Array, PThreadedCode5724, 2, PSend5728, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5742 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5722);
    Array PThreadedCode5721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5722, (Optr)&t_send1, (Optr)PSend5742, (Optr)&t_method_return);
    Method PMethod5719 = new_Method_with(PArray5720, empty_Array, empty_Array, PThreadedCode5721, 1, PSend5742);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod5719, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray5744 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5746 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5746_Const = new_Constant((Optr)char_5746);
    // <<. 
    Send PSend5747 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5746_Const);
    // printOn:. 
    Send PSend5748 = new_Send((Optr)slot_Graphics_Primitives_Point_x, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4800 = new_Character(L'@');
    Constant char_4800_Const = new_Constant((Optr)char_4800);
    // <<. 
    Send PSend5749 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4800_Const);
    // printOn:. 
    Send PSend5750 = new_Send((Optr)slot_Graphics_Primitives_Point_y, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend5751 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode5745 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5746, (Optr)&t_send1, (Optr)PSend5747, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5748, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4800, (Optr)&t_send1, (Optr)PSend5749, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5750, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend5751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5743 = new_Method_with(PArray5744, empty_Array, empty_Array, PThreadedCode5745, 6, PSend5747, PSend5748, PSend5749, PSend5750, PSend5751, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod5743, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_setX_setY_() {
    Symbol SMB_setX_setY_ = new_Symbol(L"setX:setY:");
    Variable VAR_xValue_0_0 = new_Variable_named(L"xValue", 0);
    Variable VAR_yValue_0_1 = new_Variable_named(L"yValue", 0);
    Array PArray5753 = new_Array_with(2, (Optr)VAR_xValue_0_0, (Optr)VAR_yValue_0_1);
    Assign PAssign5755 = new_Assign((Optr)slot_Graphics_Primitives_Point_x, (Optr)VAR_xValue_0_0);
    Assign PAssign5756 = new_Assign((Optr)slot_Graphics_Primitives_Point_y, (Optr)VAR_yValue_0_1);
    Array PThreadedCode5754 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign5755, (Optr)&t_push_variable, (Optr)VAR_xValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5756, (Optr)&t_push_variable, (Optr)VAR_yValue_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5752 = new_Method_with(PArray5753, empty_Array, empty_Array, PThreadedCode5754, 3, PAssign5755, PAssign5756, self);
    
    MethodClosure MC_SMB_setX_setY_ = new_MethodClosure((Method)PMethod5752, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_setX_setY_, MC_SMB_setX_setY_);
}


static void init_class_SMB_x_y_() {
    Symbol SMB_x_y_ = new_Symbol(L"x:y:");
    Variable VAR_xInteger_0_0 = new_Variable_named(L"xInteger", 0);
    Variable VAR_yInteger_0_1 = new_Variable_named(L"yInteger", 0);
    Array PArray5758 = new_Array_with(2, (Optr)VAR_xInteger_0_0, (Optr)VAR_yInteger_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend5760 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_setX_setY_ = new_Symbol(L"setX:setY:");
    // setX:setY:. 
    Send PSend5761 = new_Send((Optr)PSend5760, SMB_setX_setY_, 2, (Optr)VAR_xInteger_0_0, (Optr)VAR_yInteger_0_1);
    Array PThreadedCode5759 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5760, (Optr)&t_push_variable, (Optr)VAR_xInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_yInteger_0_1, (Optr)&t_send2, (Optr)PSend5761, (Optr)&t_method_return);
    Method PMethod5757 = new_Method_with(PArray5758, empty_Array, empty_Array, PThreadedCode5759, 1, PSend5761);
    
    MethodClosure MC_SMB_x_y_ = new_MethodClosure((Method)PMethod5757, HEADER(Graphics_Primitives_Point_Class));
    store_method(HEADER(Graphics_Primitives_Point_Class), SMB_x_y_, MC_SMB_x_y_);
}

void init_Graphics_Primitives_Point_layout() {
    layout_Graphics_Primitives_Point_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Graphics_Primitives_Point_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Graphics_Primitives_Point_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Graphics_Primitives_Point_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Graphics_Primitives_Point_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Graphics_Primitives_Point_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Point = new_Symbol(L"Point");
    slot_Graphics_Primitives_Point_x = (Optr)new_Slot(0, L"x");
    slot_Graphics_Primitives_Point_y = (Optr)new_Slot(1, L"y");
    layout_Graphics_Primitives_Point = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Graphics_Primitives_Point)->values[0] = slot_Graphics_Primitives_Point_x; // x 
    ((Array)layout_Graphics_Primitives_Point)->values[1] = slot_Graphics_Primitives_Point_y; // y 
    Graphics_Primitives_Point_Class = (Class)new_Class(Object_Class, layout_Graphics_Primitives_Point_Class_class);
    Graphics_Primitives_Point_Class->layout = layout_Graphics_Primitives_Point;
    Graphics_Primitives_Point_Class->name = SMB_Point;
    
}

void init_Graphics_Primitives_Point_methods() {
    init_SMB_x();
    init_SMB_y();
    init_SMB__equals_();
    init_SMB_printOn_();
    init_SMB_setX_setY_();
    init_class_SMB_x_y_();
    
}