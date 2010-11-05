#include <lib/class/Graphics/Primitives/Point.h>


Optr layout_Graphics_Primitives_Point_Class_class;
Optr slot_Graphics_Primitives_Point_x;
Optr slot_Graphics_Primitives_Point_y;
Optr layout_Graphics_Primitives_Point;


static void init_SMB_x() {
    Symbol SMB_x = new_Symbol(L"x");
    Array PThreadedCode5707 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_method_return);
    Method PMethod5706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5707, 1, slot_Graphics_Primitives_Point_x);
    
    MethodClosure MC_SMB_x = new_MethodClosure((Method)PMethod5706, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_x, MC_SMB_x);
}


static void init_SMB_y() {
    Symbol SMB_y = new_Symbol(L"y");
    Array PThreadedCode5709 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_method_return);
    Method PMethod5708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5709, 1, slot_Graphics_Primitives_Point_y);
    
    MethodClosure MC_SMB_y = new_MethodClosure((Method)PMethod5708, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_y, MC_SMB_y);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_aPoint_0_0 = new_Variable_named(L"aPoint", 0);
    Array PArray5711 = new_Array_with(1, (Optr)VAR_aPoint_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray5714 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend5716 = new_Send((Optr)self, SMB_species, 0);
    // species. 
    Send PSend5717 = new_Send((Optr)VAR_aPoint_0_0, SMB_species, 0);
    // =. 
    Send PSend5718 = new_Send((Optr)PSend5716, SMB__equals_, 1, (Optr)PSend5717);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend5722 = new_Send((Optr)VAR_aPoint_0_0, SMB_x, 0);
    // =. 
    Send PSend5723 = new_Send((Optr)slot_Graphics_Primitives_Point_x, SMB__equals_, 1, (Optr)PSend5722);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend5726 = new_Send((Optr)VAR_aPoint_0_0, SMB_y, 0);
    // =. 
    Send PSend5727 = new_Send((Optr)slot_Graphics_Primitives_Point_y, SMB__equals_, 1, (Optr)PSend5726);
    Array PThreadedCode5725 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5726, (Optr)&t_send1, (Optr)PSend5727, (Optr)&t_block_return);
    Block PBlock5724 = new_Block_with(empty_Array, empty_Array, PThreadedCode5725, 1, PSend5727);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend5728 = new_Send((Optr)PSend5723, SMB_and_, 1, (Optr)PBlock5724);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend5729 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend5728);
    Array PThreadedCode5721 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5722, (Optr)&t_send1, (Optr)PSend5723, (Optr)&t_push_closure, (Optr)PBlock5724, (Optr)&t_send1, (Optr)PSend5728, (Optr)&t_send1, (Optr)PSend5729, (Optr)&t_block_return);
    Block PBlock5720 = new_Block_with(empty_Array, empty_Array, PThreadedCode5721, 1, PSend5729);
    // escape:. 
    Send PSend5732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode5731 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend5732, (Optr)&t_block_return);
    Block PBlock5730 = new_Block_with(empty_Array, empty_Array, PThreadedCode5731, 1, PSend5732);
    // ifTrue:ifFalse:. 
    Send PSend5719 = new_Send((Optr)PSend5718, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock5720, (Optr)PBlock5730);
    Array PThreadedCode5715 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5716, (Optr)&t_push_variable, (Optr)VAR_aPoint_0_0, (Optr)&t_send0, (Optr)PSend5717, (Optr)&t_send1, (Optr)PSend5718, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend5719, (Optr)PBlock5720, (Optr)PBlock5730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock5713 = new_Block_with(PArray5714, empty_Array, PThreadedCode5715, 2, PSend5719, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend5733 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock5713);
    Array PThreadedCode5712 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock5713, (Optr)&t_send1, (Optr)PSend5733, (Optr)&t_method_return);
    Method PMethod5710 = new_Method_with(PArray5711, empty_Array, empty_Array, PThreadedCode5712, 1, PSend5733);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod5710, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray5735 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Character char_5737 = new_Character(L'(');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_5737_Const = new_Constant((Optr)char_5737);
    // <<. 
    Send PSend5738 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_5737_Const);
    // printOn:. 
    Send PSend5739 = new_Send((Optr)slot_Graphics_Primitives_Point_x, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4800 = new_Character(L'@');
    Constant char_4800_Const = new_Constant((Optr)char_4800);
    // <<. 
    Send PSend5740 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4800_Const);
    // printOn:. 
    Send PSend5741 = new_Send((Optr)slot_Graphics_Primitives_Point_y, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Character char_4147 = new_Character(L')');
    Constant char_4147_Const = new_Constant((Optr)char_4147);
    // <<. 
    Send PSend5742 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)char_4147_Const);
    Array PThreadedCode5736 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_5737, (Optr)&t_send1, (Optr)PSend5738, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_x, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5739, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4800, (Optr)&t_send1, (Optr)PSend5740, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Graphics_Primitives_Point_y, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend5741, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)char_4147, (Optr)&t_send1, (Optr)PSend5742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5734 = new_Method_with(PArray5735, empty_Array, empty_Array, PThreadedCode5736, 6, PSend5738, PSend5739, PSend5740, PSend5741, PSend5742, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod5734, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_setX_setY_() {
    Symbol SMB_setX_setY_ = new_Symbol(L"setX:setY:");
    Variable VAR_xValue_0_0 = new_Variable_named(L"xValue", 0);
    Variable VAR_yValue_0_1 = new_Variable_named(L"yValue", 0);
    Array PArray5744 = new_Array_with(2, (Optr)VAR_xValue_0_0, (Optr)VAR_yValue_0_1);
    Assign PAssign5746 = new_Assign((Optr)slot_Graphics_Primitives_Point_x, (Optr)VAR_xValue_0_0);
    Assign PAssign5747 = new_Assign((Optr)slot_Graphics_Primitives_Point_y, (Optr)VAR_yValue_0_1);
    Array PThreadedCode5745 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign5746, (Optr)&t_push_variable, (Optr)VAR_xValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign5747, (Optr)&t_push_variable, (Optr)VAR_yValue_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5743 = new_Method_with(PArray5744, empty_Array, empty_Array, PThreadedCode5745, 3, PAssign5746, PAssign5747, self);
    
    MethodClosure MC_SMB_setX_setY_ = new_MethodClosure((Method)PMethod5743, Graphics_Primitives_Point_Class);
    store_method(Graphics_Primitives_Point_Class, SMB_setX_setY_, MC_SMB_setX_setY_);
}


static void init_class_SMB_x_y_() {
    Symbol SMB_x_y_ = new_Symbol(L"x:y:");
    Variable VAR_xInteger_0_0 = new_Variable_named(L"xInteger", 0);
    Variable VAR_yInteger_0_1 = new_Variable_named(L"yInteger", 0);
    Array PArray5749 = new_Array_with(2, (Optr)VAR_xInteger_0_0, (Optr)VAR_yInteger_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend5751 = new_Send((Optr)self, SMB_basicNew, 0);
    Symbol SMB_setX_setY_ = new_Symbol(L"setX:setY:");
    // setX:setY:. 
    Send PSend5752 = new_Send((Optr)PSend5751, SMB_setX_setY_, 2, (Optr)VAR_xInteger_0_0, (Optr)VAR_yInteger_0_1);
    Array PThreadedCode5750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5751, (Optr)&t_push_variable, (Optr)VAR_xInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_yInteger_0_1, (Optr)&t_send2, (Optr)PSend5752, (Optr)&t_method_return);
    Method PMethod5748 = new_Method_with(PArray5749, empty_Array, empty_Array, PThreadedCode5750, 1, PSend5752);
    
    MethodClosure MC_SMB_x_y_ = new_MethodClosure((Method)PMethod5748, HEADER(Graphics_Primitives_Point_Class));
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