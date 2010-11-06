#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18658 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18661 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18660 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18661);
    Array PThreadedCode18659 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18660, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18657 = new_Method_with(PArray18658, empty_Array, empty_Array, PThreadedCode18659, 2, PAssign18660, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18657, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18663 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18664 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18667 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18670 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18669 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18670);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18673 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18672 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18673, (Optr)&t_block_return);
    Block PBlock18671 = new_Block_with(empty_Array, empty_Array, PThreadedCode18672, 1, PSend18673);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18674 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18671);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18676 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18675 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18676);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18677 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18680 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18679 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18680, (Optr)&t_block_return);
    Block PBlock18678 = new_Block_with(empty_Array, empty_Array, PThreadedCode18679, 1, PSend18680);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18681 = new_Send((Optr)PSend18677, SMB_or_, 1, (Optr)PBlock18678);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18685 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18684 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18685, (Optr)&t_block_return);
    Block PBlock18683 = new_Block_with(empty_Array, empty_Array, PThreadedCode18684, 1, PSend18685);
    // ifTrue:. 
    Send PSend18682 = new_Send((Optr)PSend18681, SMB_ifTrue_, 1, (Optr)PBlock18683);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18686 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18687 = new_Send((Optr)PSend18686, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18688 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18668 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18669, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18670, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18671, (Optr)&t_send1, (Optr)PSend18674, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18675, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18676, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18677, (Optr)&t_push_closure, (Optr)PBlock18678, (Optr)&t_send1, (Optr)PSend18681, (Optr)&t_send_ifTrue_, (Optr)PSend18682, (Optr)PBlock18683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18686, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18688, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18666 = new_Block_with(PArray18667, empty_Array, PThreadedCode18668, 7, PAssign18669, PSend18674, PAssign18675, PSend18682, PSend18687, PSend18688, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18689 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18666);
    Array PThreadedCode18665 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18666, (Optr)&t_send1, (Optr)PSend18689, (Optr)&t_method_return);
    Method PMethod18662 = new_Method_with(PArray18663, PArray18664, empty_Array, PThreadedCode18665, 1, PSend18689);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18662, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18691 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18692 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18695 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18698 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18697 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18698);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18701 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18700 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18701, (Optr)&t_block_return);
    Block PBlock18699 = new_Block_with(empty_Array, empty_Array, PThreadedCode18700, 1, PSend18701);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18702 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18699);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18704 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18703 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18704);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18705 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18708 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18708, (Optr)&t_block_return);
    Block PBlock18706 = new_Block_with(empty_Array, empty_Array, PThreadedCode18707, 1, PSend18708);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18709 = new_Send((Optr)PSend18705, SMB_or_, 1, (Optr)PBlock18706);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18713 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18712 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18713, (Optr)&t_block_return);
    Block PBlock18711 = new_Block_with(empty_Array, empty_Array, PThreadedCode18712, 1, PSend18713);
    // ifTrue:. 
    Send PSend18710 = new_Send((Optr)PSend18709, SMB_ifTrue_, 1, (Optr)PBlock18711);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18714 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18696 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18697, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18698, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18699, (Optr)&t_send1, (Optr)PSend18702, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18703, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18704, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18705, (Optr)&t_push_closure, (Optr)PBlock18706, (Optr)&t_send1, (Optr)PSend18709, (Optr)&t_send_ifTrue_, (Optr)PSend18710, (Optr)PBlock18711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18714, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18694 = new_Block_with(PArray18695, empty_Array, PThreadedCode18696, 6, PAssign18697, PSend18702, PAssign18703, PSend18710, PSend18714, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18715 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18694);
    Array PThreadedCode18693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18694, (Optr)&t_send1, (Optr)PSend18715, (Optr)&t_method_return);
    Method PMethod18690 = new_Method_with(PArray18691, PArray18692, empty_Array, PThreadedCode18693, 1, PSend18715);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18690, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18717 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8457 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8457_Const = new_Constant((Optr)char_8457);
    // <<. 
    Send PSend18719 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8457_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18720 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18721 = new_Send((Optr)PSend18719, SMB__shiftLeft_, 1, (Optr)PSend18720);
    Character char_2182 = new_Character(L'-');
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend18722 = new_Send((Optr)PSend18721, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // asCharacter. 
    Send PSend18723 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18724 = new_Send((Optr)PSend18722, SMB__shiftLeft_, 1, (Optr)PSend18723);
    Character char_18725 = new_Character(L']');
    Constant char_18725_Const = new_Constant((Optr)char_18725);
    // <<. 
    Send PSend18726 = new_Send((Optr)PSend18724, SMB__shiftLeft_, 1, (Optr)char_18725_Const);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8457, (Optr)&t_send1, (Optr)PSend18719, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18720, (Optr)&t_send1, (Optr)PSend18721, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend18722, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18723, (Optr)&t_send1, (Optr)PSend18724, (Optr)&t_push1, (Optr)char_18725, (Optr)&t_send1, (Optr)PSend18726, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18716 = new_Method_with(PArray18717, empty_Array, empty_Array, PThreadedCode18718, 2, PSend18726, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18716, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18728 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18731 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18730 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18731);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18730, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18731, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18727 = new_Method_with(PArray18728, empty_Array, empty_Array, PThreadedCode18729, 2, PAssign18730, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18727, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18733 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18736 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18738 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18739 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18738);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18740 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18741 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18740);
    Array PThreadedCode18737 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18738, (Optr)&t_send1, (Optr)PSend18739, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18740, (Optr)&t_send1, (Optr)PSend18741, (Optr)&t_method_return);
    Block PBlock18735 = new_Block_with(PArray18736, empty_Array, PThreadedCode18737, 2, PSend18739, PSend18741);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18742 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18743 = new_Send((Optr)PBlock18735, SMB_value_, 1, (Optr)PSend18742);
    Array PThreadedCode18734 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18735, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18742, (Optr)&t_send1, (Optr)PSend18743, (Optr)&t_method_return);
    Method PMethod18732 = new_Method_with(PArray18733, empty_Array, empty_Array, PThreadedCode18734, 1, PSend18743);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18732, HEADER(PEG_Range_Class));
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