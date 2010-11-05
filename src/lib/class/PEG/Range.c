#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18683 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18686 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18685 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18686);
    Array PThreadedCode18684 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18685, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18682 = new_Method_with(PArray18683, empty_Array, empty_Array, PThreadedCode18684, 2, PAssign18685, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18682, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18688 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18689 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18692 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18695 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18694 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18695);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18698 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18698, (Optr)&t_block_return);
    Block PBlock18696 = new_Block_with(empty_Array, empty_Array, PThreadedCode18697, 1, PSend18698);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18699 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18696);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18701 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18700 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18701);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18702 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18705 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18704 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18705, (Optr)&t_block_return);
    Block PBlock18703 = new_Block_with(empty_Array, empty_Array, PThreadedCode18704, 1, PSend18705);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18706 = new_Send((Optr)PSend18702, SMB_or_, 1, (Optr)PBlock18703);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18710 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18709 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18710, (Optr)&t_block_return);
    Block PBlock18708 = new_Block_with(empty_Array, empty_Array, PThreadedCode18709, 1, PSend18710);
    // ifTrue:. 
    Send PSend18707 = new_Send((Optr)PSend18706, SMB_ifTrue_, 1, (Optr)PBlock18708);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18711 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18712 = new_Send((Optr)PSend18711, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18713 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18693 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18694, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18695, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18696, (Optr)&t_send1, (Optr)PSend18699, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18700, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18701, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18702, (Optr)&t_push_closure, (Optr)PBlock18703, (Optr)&t_send1, (Optr)PSend18706, (Optr)&t_send_ifTrue_, (Optr)PSend18707, (Optr)PBlock18708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18711, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18712, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18713, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18691 = new_Block_with(PArray18692, empty_Array, PThreadedCode18693, 7, PAssign18694, PSend18699, PAssign18700, PSend18707, PSend18712, PSend18713, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18714 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18691);
    Array PThreadedCode18690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18691, (Optr)&t_send1, (Optr)PSend18714, (Optr)&t_method_return);
    Method PMethod18687 = new_Method_with(PArray18688, PArray18689, empty_Array, PThreadedCode18690, 1, PSend18714);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18687, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18716 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18717 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18720 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18723 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18722 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18723);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18726 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18725 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18726, (Optr)&t_block_return);
    Block PBlock18724 = new_Block_with(empty_Array, empty_Array, PThreadedCode18725, 1, PSend18726);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18727 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18724);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18729 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18728 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18729);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18730 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18733 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18732 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18733, (Optr)&t_block_return);
    Block PBlock18731 = new_Block_with(empty_Array, empty_Array, PThreadedCode18732, 1, PSend18733);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18734 = new_Send((Optr)PSend18730, SMB_or_, 1, (Optr)PBlock18731);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18737 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18738, (Optr)&t_block_return);
    Block PBlock18736 = new_Block_with(empty_Array, empty_Array, PThreadedCode18737, 1, PSend18738);
    // ifTrue:. 
    Send PSend18735 = new_Send((Optr)PSend18734, SMB_ifTrue_, 1, (Optr)PBlock18736);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18739 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18721 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18722, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18723, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18724, (Optr)&t_send1, (Optr)PSend18727, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18728, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18729, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18730, (Optr)&t_push_closure, (Optr)PBlock18731, (Optr)&t_send1, (Optr)PSend18734, (Optr)&t_send_ifTrue_, (Optr)PSend18735, (Optr)PBlock18736, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18739, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18719 = new_Block_with(PArray18720, empty_Array, PThreadedCode18721, 6, PAssign18722, PSend18727, PAssign18728, PSend18735, PSend18739, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18740 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18719);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18719, (Optr)&t_send1, (Optr)PSend18740, (Optr)&t_method_return);
    Method PMethod18715 = new_Method_with(PArray18716, PArray18717, empty_Array, PThreadedCode18718, 1, PSend18740);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18715, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18742 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8450 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8450_Const = new_Constant((Optr)char_8450);
    // <<. 
    Send PSend18744 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8450_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18745 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18746 = new_Send((Optr)PSend18744, SMB__shiftLeft_, 1, (Optr)PSend18745);
    Character char_2173 = new_Character(L'-');
    Constant char_2173_Const = new_Constant((Optr)char_2173);
    // <<. 
    Send PSend18747 = new_Send((Optr)PSend18746, SMB__shiftLeft_, 1, (Optr)char_2173_Const);
    // asCharacter. 
    Send PSend18748 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18749 = new_Send((Optr)PSend18747, SMB__shiftLeft_, 1, (Optr)PSend18748);
    Character char_18750 = new_Character(L']');
    Constant char_18750_Const = new_Constant((Optr)char_18750);
    // <<. 
    Send PSend18751 = new_Send((Optr)PSend18749, SMB__shiftLeft_, 1, (Optr)char_18750_Const);
    Array PThreadedCode18743 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8450, (Optr)&t_send1, (Optr)PSend18744, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18745, (Optr)&t_send1, (Optr)PSend18746, (Optr)&t_push1, (Optr)char_2173, (Optr)&t_send1, (Optr)PSend18747, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18748, (Optr)&t_send1, (Optr)PSend18749, (Optr)&t_push1, (Optr)char_18750, (Optr)&t_send1, (Optr)PSend18751, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18741 = new_Method_with(PArray18742, empty_Array, empty_Array, PThreadedCode18743, 2, PSend18751, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18741, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18753 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18756 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18755 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18756);
    Array PThreadedCode18754 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18755, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18752 = new_Method_with(PArray18753, empty_Array, empty_Array, PThreadedCode18754, 2, PAssign18755, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18752, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18758 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18761 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18763 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18764 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18763);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18765 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18766 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18765);
    Array PThreadedCode18762 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18763, (Optr)&t_send1, (Optr)PSend18764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18765, (Optr)&t_send1, (Optr)PSend18766, (Optr)&t_method_return);
    Block PBlock18760 = new_Block_with(PArray18761, empty_Array, PThreadedCode18762, 2, PSend18764, PSend18766);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18767 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18768 = new_Send((Optr)PBlock18760, SMB_value_, 1, (Optr)PSend18767);
    Array PThreadedCode18759 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18760, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18767, (Optr)&t_send1, (Optr)PSend18768, (Optr)&t_method_return);
    Method PMethod18757 = new_Method_with(PArray18758, empty_Array, empty_Array, PThreadedCode18759, 1, PSend18768);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18757, HEADER(PEG_Range_Class));
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