#include <lib/class/PEG/Range.h>


Optr layout_PEG_Range_Class_class;
Optr slot_PEG_Range_start;
Optr slot_PEG_Range_stop;
Optr layout_PEG_Range;


static void init_SMB_stop_() {
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18574 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18577 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18576 = new_Assign((Optr)slot_PEG_Range_stop, (Optr)PSend18577);
    Array PThreadedCode18575 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18576, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18577, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18573 = new_Method_with(PArray18574, empty_Array, empty_Array, PThreadedCode18575, 2, PAssign18576, self);
    
    MethodClosure MC_SMB_stop_ = new_MethodClosure((Method)PMethod18573, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_stop_, MC_SMB_stop_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18579 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18580 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18583 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18586 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18585 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18586);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18589 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18588 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18589, (Optr)&t_block_return);
    Block PBlock18587 = new_Block_with(empty_Array, empty_Array, PThreadedCode18588, 1, PSend18589);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18590 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18587);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18592 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18591 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18592);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18593 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18596 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18596, (Optr)&t_block_return);
    Block PBlock18594 = new_Block_with(empty_Array, empty_Array, PThreadedCode18595, 1, PSend18596);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18597 = new_Send((Optr)PSend18593, SMB_or_, 1, (Optr)PBlock18594);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18601 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18600 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18601, (Optr)&t_block_return);
    Block PBlock18599 = new_Block_with(empty_Array, empty_Array, PThreadedCode18600, 1, PSend18601);
    // ifTrue:. 
    Send PSend18598 = new_Send((Optr)PSend18597, SMB_ifTrue_, 1, (Optr)PBlock18599);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18602 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18603 = new_Send((Optr)PSend18602, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18604 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18584 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push1, (Optr)PAssign18585, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18586, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18587, (Optr)&t_send1, (Optr)PSend18590, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18591, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18592, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18593, (Optr)&t_push_closure, (Optr)PBlock18594, (Optr)&t_send1, (Optr)PSend18597, (Optr)&t_send_ifTrue_, (Optr)PSend18598, (Optr)PBlock18599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18602, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18604, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18582 = new_Block_with(PArray18583, empty_Array, PThreadedCode18584, 7, PAssign18585, PSend18590, PAssign18591, PSend18598, PSend18603, PSend18604, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18605 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18582);
    Array PThreadedCode18581 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18582, (Optr)&t_send1, (Optr)PSend18605, (Optr)&t_method_return);
    Method PMethod18578 = new_Method_with(PArray18579, PArray18580, empty_Array, PThreadedCode18581, 1, PSend18605);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18578, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18607 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Variable VAR_charValue_0_2 = new_Variable_named(L"charValue", 0);
    Array PArray18608 = new_Array_with(2, (Optr)VAR_char_0_1, (Optr)VAR_charValue_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18611 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18614 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18613 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18614);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18617 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18616 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18617, (Optr)&t_block_return);
    Block PBlock18615 = new_Block_with(empty_Array, empty_Array, PThreadedCode18616, 1, PSend18617);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18618 = new_Send((Optr)VAR_char_0_1, SMB_ifNil_, 1, (Optr)PBlock18615);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18620 = new_Send((Optr)VAR_char_0_1, SMB_asInteger, 0);
    Assign PAssign18619 = new_Assign((Optr)VAR_charValue_0_2, (Optr)PSend18620);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18621 = new_Send((Optr)VAR_charValue_0_2, SMB__lt_, 1, (Optr)slot_PEG_Range_start);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend18624 = new_Send((Optr)VAR_charValue_0_2, SMB__gt_, 1, (Optr)slot_PEG_Range_stop);
    Array PThreadedCode18623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send1, (Optr)PSend18624, (Optr)&t_block_return);
    Block PBlock18622 = new_Block_with(empty_Array, empty_Array, PThreadedCode18623, 1, PSend18624);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18625 = new_Send((Optr)PSend18621, SMB_or_, 1, (Optr)PBlock18622);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // escape:. 
    Send PSend18629 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18629, (Optr)&t_block_return);
    Block PBlock18627 = new_Block_with(empty_Array, empty_Array, PThreadedCode18628, 1, PSend18629);
    // ifTrue:. 
    Send PSend18626 = new_Send((Optr)PSend18625, SMB_ifTrue_, 1, (Optr)PBlock18627);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18630 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18612 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18613, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_push_closure, (Optr)PBlock18615, (Optr)&t_send1, (Optr)PSend18618, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18619, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send0, (Optr)PSend18620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_charValue_0_2, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send1, (Optr)PSend18621, (Optr)&t_push_closure, (Optr)PBlock18622, (Optr)&t_send1, (Optr)PSend18625, (Optr)&t_send_ifTrue_, (Optr)PSend18626, (Optr)PBlock18627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18630, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18610 = new_Block_with(PArray18611, empty_Array, PThreadedCode18612, 6, PAssign18613, PSend18618, PAssign18619, PSend18626, PSend18630, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18631 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18610);
    Array PThreadedCode18609 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18610, (Optr)&t_send1, (Optr)PSend18631, (Optr)&t_method_return);
    Method PMethod18606 = new_Method_with(PArray18607, PArray18608, empty_Array, PThreadedCode18609, 1, PSend18631);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18606, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray18633 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Character char_8373 = new_Character(L'[');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8373_Const = new_Constant((Optr)char_8373);
    // <<. 
    Send PSend18635 = new_Send((Optr)VAR_stream_0_0, SMB__shiftLeft_, 1, (Optr)char_8373_Const);
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18636 = new_Send((Optr)slot_PEG_Range_start, SMB_asCharacter, 0);
    // <<. 
    Send PSend18637 = new_Send((Optr)PSend18635, SMB__shiftLeft_, 1, (Optr)PSend18636);
    Character char_2182 = new_Character(L'-');
    Constant char_2182_Const = new_Constant((Optr)char_2182);
    // <<. 
    Send PSend18638 = new_Send((Optr)PSend18637, SMB__shiftLeft_, 1, (Optr)char_2182_Const);
    // asCharacter. 
    Send PSend18639 = new_Send((Optr)slot_PEG_Range_stop, SMB_asCharacter, 0);
    // <<. 
    Send PSend18640 = new_Send((Optr)PSend18638, SMB__shiftLeft_, 1, (Optr)PSend18639);
    Character char_18641 = new_Character(L']');
    Constant char_18641_Const = new_Constant((Optr)char_18641);
    // <<. 
    Send PSend18642 = new_Send((Optr)PSend18640, SMB__shiftLeft_, 1, (Optr)char_18641_Const);
    Array PThreadedCode18634 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_push1, (Optr)char_8373, (Optr)&t_send1, (Optr)PSend18635, (Optr)&t_push_slot, (Optr)slot_PEG_Range_start, (Optr)&t_send0, (Optr)PSend18636, (Optr)&t_send1, (Optr)PSend18637, (Optr)&t_push1, (Optr)char_2182, (Optr)&t_send1, (Optr)PSend18638, (Optr)&t_push_slot, (Optr)slot_PEG_Range_stop, (Optr)&t_send0, (Optr)PSend18639, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_push1, (Optr)char_18641, (Optr)&t_send1, (Optr)PSend18642, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18632 = new_Method_with(PArray18633, empty_Array, empty_Array, PThreadedCode18634, 2, PSend18642, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod18632, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_start_() {
    Symbol SMB_start_ = new_Symbol(L"start:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray18644 = new_Array_with(1, (Optr)VAR_int_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18647 = new_Send((Optr)VAR_int_0_0, SMB_asInteger, 0);
    Assign PAssign18646 = new_Assign((Optr)slot_PEG_Range_start, (Optr)PSend18647);
    Array PThreadedCode18645 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18646, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_send0, (Optr)PSend18647, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18643 = new_Method_with(PArray18644, empty_Array, empty_Array, PThreadedCode18645, 2, PAssign18646, self);
    
    MethodClosure MC_SMB_start_ = new_MethodClosure((Method)PMethod18643, PEG_Range_Class);
    store_method(PEG_Range_Class, SMB_start_, MC_SMB_start_);
}


static void init_class_SMB_between_and_() {
    Symbol SMB_between_and_ = new_Symbol(L"between:and:");
    Variable VAR_start_0_0 = new_Variable_named(L"start", 0);
    Variable VAR_stop_0_1 = new_Variable_named(L"stop", 0);
    Array PArray18649 = new_Array_with(2, (Optr)VAR_start_0_0, (Optr)VAR_stop_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18652 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18654 = new_Send((Optr)VAR_start_0_0, SMB_min_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_start_ = new_Symbol(L"start:");
    // start:. 
    Send PSend18655 = new_Send((Optr)VAR__receiver__1_0, SMB_start_, 1, (Optr)PSend18654);
    Symbol SMB_max_ = new_Symbol(L"max:");
    // max:. 
    Send PSend18656 = new_Send((Optr)VAR_start_0_0, SMB_max_, 1, (Optr)VAR_stop_0_1);
    Symbol SMB_stop_ = new_Symbol(L"stop:");
    // stop:. 
    Send PSend18657 = new_Send((Optr)VAR__receiver__1_0, SMB_stop_, 1, (Optr)PSend18656);
    Array PThreadedCode18653 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18654, (Optr)&t_send1, (Optr)PSend18655, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_start_0_0, (Optr)&t_push_variable, (Optr)VAR_stop_0_1, (Optr)&t_send1, (Optr)PSend18656, (Optr)&t_send1, (Optr)PSend18657, (Optr)&t_method_return);
    Block PBlock18651 = new_Block_with(PArray18652, empty_Array, PThreadedCode18653, 2, PSend18655, PSend18657);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18658 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18659 = new_Send((Optr)PBlock18651, SMB_value_, 1, (Optr)PSend18658);
    Array PThreadedCode18650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock18651, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18658, (Optr)&t_send1, (Optr)PSend18659, (Optr)&t_method_return);
    Method PMethod18648 = new_Method_with(PArray18649, empty_Array, empty_Array, PThreadedCode18650, 1, PSend18659);
    
    MethodClosure MC_SMB_between_and_ = new_MethodClosure((Method)PMethod18648, HEADER(PEG_Range_Class));
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