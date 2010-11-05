#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18647 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18650 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18649 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18650);
    Array PThreadedCode18648 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18649, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18646 = new_Method_with(PArray18647, empty_Array, empty_Array, PThreadedCode18648, 2, PAssign18649, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18646, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18652 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18653 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18656 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18659 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18658 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18659);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18662 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18661 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18662, (Optr)&t_block_return);
    Block PBlock18660 = new_Block_with(empty_Array, empty_Array, PThreadedCode18661, 1, PSend18662);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18663 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18660);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18665 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18664 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18665);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18666 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18669 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18668 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18669, (Optr)&t_block_return);
    Block PBlock18667 = new_Block_with(empty_Array, empty_Array, PThreadedCode18668, 1, PSend18669);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18670 = new_Send((Optr)PSend18666, SMB_or_, 1, (Optr)PBlock18667);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18674 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18673 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18674, (Optr)&t_block_return);
    Block PBlock18672 = new_Block_with(empty_Array, empty_Array, PThreadedCode18673, 1, PSend18674);
    // ifTrue:. 
    Send PSend18671 = new_Send((Optr)PSend18670, SMB_ifTrue_, 1, (Optr)PBlock18672);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18675 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18676 = new_Send((Optr)PSend18675, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18677 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18657 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18658, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18659, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18660, (Optr)&t_send1, (Optr)PSend18663, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18664, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18665, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18666, (Optr)&t_push_closure, (Optr)PBlock18667, (Optr)&t_send1, (Optr)PSend18670, (Optr)&t_send_ifTrue_, (Optr)PSend18671, (Optr)PBlock18672, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18675, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18676, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18677, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18655 = new_Block_with(PArray18656, empty_Array, PThreadedCode18657, 7, PAssign18658, PSend18663, PAssign18664, PSend18671, PSend18676, PSend18677, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18678 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18655);
    Array PThreadedCode18654 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18655, (Optr)&t_send1, (Optr)PSend18678, (Optr)&t_method_return);
    Method PMethod18651 = new_Method_with(PArray18652, PArray18653, empty_Array, PThreadedCode18654, 1, PSend18678);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18651, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18680 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18681 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18684 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18687 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18686 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18687);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18690 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18690, (Optr)&t_block_return);
    Block PBlock18688 = new_Block_with(empty_Array, empty_Array, PThreadedCode18689, 1, PSend18690);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18691 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18688);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18693 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18692 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18693);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18694 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18697 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18697, (Optr)&t_block_return);
    Block PBlock18695 = new_Block_with(empty_Array, empty_Array, PThreadedCode18696, 1, PSend18697);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18698 = new_Send((Optr)PSend18694, SMB_or_, 1, (Optr)PBlock18695);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18702 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18701 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18702, (Optr)&t_block_return);
    Block PBlock18700 = new_Block_with(empty_Array, empty_Array, PThreadedCode18701, 1, PSend18702);
    // ifTrue:. 
    Send PSend18699 = new_Send((Optr)PSend18698, SMB_ifTrue_, 1, (Optr)PBlock18700);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18703 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18685 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18686, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18687, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18688, (Optr)&t_send1, (Optr)PSend18691, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18692, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18693, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18694, (Optr)&t_push_closure, (Optr)PBlock18695, (Optr)&t_send1, (Optr)PSend18698, (Optr)&t_send_ifTrue_, (Optr)PSend18699, (Optr)PBlock18700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18703, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18683 = new_Block_with(PArray18684, empty_Array, PThreadedCode18685, 6, PAssign18686, PSend18691, PAssign18692, PSend18699, PSend18703, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18704 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18683);
    Array PThreadedCode18682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18683, (Optr)&t_send1, (Optr)PSend18704, (Optr)&t_method_return);
    Method PMethod18679 = new_Method_with(PArray18680, PArray18681, empty_Array, PThreadedCode18682, 1, PSend18704);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18679, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18706 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8446 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8446_Const = new_Constant((Optr)char_8446);
    // <<. 
    Send PSend18708 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8446_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18709 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18710 = new_Send((Optr)PSend18708, SMB__shiftLeft_, 1, (Optr)PSend18709);
    Character char_2173 = new_Character(L'-');
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend18711 = new_Send((Optr)PSend18710, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // asCharacter. 
    Send PSend18712 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18713 = new_Send((Optr)PSend18711, SMB__shiftLeft_, 1, (Optr)PSend18712);
    Character char_18714 = new_Character(L']');
    Constant char_18714_Const = new_Constant((Optr)char_18714);
    // <<. 
    Send PSend18715 = new_Send((Optr)PSend18713, SMB__shiftLeft_, 1, (Optr)char_18714_Const);
    Array PThreadedCode18707 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8446, (Optr)&t_send1, (Optr)PSend18708, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18709, (Optr)&t_send1, (Optr)PSend18710, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend18711, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18712, (Optr)&t_send1, (Optr)PSend18713, (Optr)&t_push1, (Optr)char_18714, (Optr)&t_send1, (Optr)PSend18715, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18705 = new_Method_with(PArray18706, empty_Array, empty_Array, PThreadedCode18707, 2, PSend18715, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18705, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18717 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18720 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18719 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18720);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18719, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18720, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18716 = new_Method_with(PArray18717, empty_Array, empty_Array, PThreadedCode18718, 2, PAssign18719, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18716, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18722 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18725 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18727 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18728 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18727);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18729 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18730 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18729);
    Array PThreadedCode18726 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18727, (Optr)&t_send1, (Optr)PSend18728, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18729, (Optr)&t_send1, (Optr)PSend18730, (Optr)&t_method_return);
    Block PBlock18724 = new_Block_with(PArray18725, empty_Array, PThreadedCode18726, 2, PSend18728, PSend18730);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18731 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18732 = new_Send((Optr)PBlock18724, SMB_value_, 1, (Optr)PSend18731);
    Array PThreadedCode18723 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18724, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18731, (Optr)&t_send1, (Optr)PSend18732, (Optr)&t_method_return);
    Method PMethod18721 = new_Method_with(PArray18722, empty_Array, empty_Array, PThreadedCode18723, 1, PSend18732);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18721, HEADER(PEG_Range_Class));
    store_method(HEADER(PEG_Range_Class), SMB_between_and_, MC_SMB_between_and_);
}

void init_PEG_PEGRange_layout() {
    layout_PEG_Range_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Range_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Range_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Range_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Range_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Range_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Range = new_Symbol(L"Range");
    slot_PEG_Range_start = (Optr)new_Slot(0, L"start");
    slot_PEG_Range_stop = (Optr)new_Slot(1, L"stop");
    layout_PEG_Range = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_PEG_Range)->values[0] = slot_PEG_Range_start; // start 
    ((Array)layout_PEG_Range)->values[1] = slot_PEG_Range_stop; // stop 
    PEG_Range_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Range_Class_class);
    PEG_Range_Class->layout = layout_PEG_Range;
    PEG_Range_Class->name = SMB_Range;
    
}

void init_PEG_PEGRange_methods() {
    init_SMB_stop_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_printOn_();
    init_SMB_start_();
    init_class_SMB_between_and_();
    
}