#include <lib/class/Collections/Sequenceable/OrderedCollection.h>


Optr layout_Collections_Sequenceable_OrderedCollection_Class_class;
Optr slot_Collections_Sequenceable_OrderedCollection_array;
Optr slot_Collections_Sequenceable_OrderedCollection_firstIndex;
Optr slot_Collections_Sequenceable_OrderedCollection_lastIndex;
Optr layout_Collections_Sequenceable_OrderedCollection;


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12100 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12102 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12101 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12102, (Optr)&t_method_return);
    Method PMethod12099 = new_Method_with(PArray12100, empty_Array, empty_Array, PThreadedCode12101, 1, PSend12102);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12099, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12104 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12106 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12105 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12106, (Optr)&t_method_return);
    Method PMethod12103 = new_Method_with(PArray12104, empty_Array, empty_Array, PThreadedCode12105, 1, PSend12106);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12103, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_addAllLast_() {
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12108 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12111 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12113 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12112 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12113, (Optr)&t_method_return);
    Block PBlock12110 = new_Block_with(PArray12111, empty_Array, PThreadedCode12112, 1, PSend12113);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12114 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12110);
    Array PThreadedCode12109 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12110, (Optr)&t_send1, (Optr)PSend12114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12107 = new_Method_with(PArray12108, empty_Array, empty_Array, PThreadedCode12109, 2, PSend12114, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12107, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAllLast_, MC_SMB_addAllLast_);
}


static void init_SMB_addFirst_() {
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12116 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend12118 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12122 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12121 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12122, (Optr)&t_block_return);
    Block PBlock12120 = new_Block_with(empty_Array, empty_Array, PThreadedCode12121, 1, PSend12122);
    // ifTrue:. 
    Send PSend12119 = new_Send((Optr)PSend12118, SMB_ifTrue_, 1, (Optr)PBlock12120);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12124 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12123 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12124);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12125 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12117 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12118, (Optr)&t_send_ifTrue_, (Optr)PSend12119, (Optr)PBlock12120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12123, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12115 = new_Method_with(PArray12116, empty_Array, empty_Array, PThreadedCode12117, 4, PSend12119, PAssign12123, PSend12125, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12115, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addFirst_, MC_SMB_addFirst_);
}


static void init_SMB_addLast_() {
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12127 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12129 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12130 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12129);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12134 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12133 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12134, (Optr)&t_block_return);
    Block PBlock12132 = new_Block_with(empty_Array, empty_Array, PThreadedCode12133, 1, PSend12134);
    // ifTrue:. 
    Send PSend12131 = new_Send((Optr)PSend12130, SMB_ifTrue_, 1, (Optr)PBlock12132);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12136 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12135 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12136);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12137 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12128 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12129, (Optr)&t_send1, (Optr)PSend12130, (Optr)&t_send_ifTrue_, (Optr)PSend12131, (Optr)PBlock12132, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12135, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12136, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12137, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12126 = new_Method_with(PArray12127, empty_Array, empty_Array, PThreadedCode12128, 4, PSend12131, PAssign12135, PSend12137, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12126, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addLast_, MC_SMB_addLast_);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12140 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12141 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12140);
    // size. 
    Send PSend12142 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12143 = new_Send((Optr)PSend12141, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12142, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12139 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12140, (Optr)&t_send1, (Optr)PSend12141, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12142, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12143, (Optr)&t_method_return);
    Method PMethod12138 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12139, 1, PSend12143);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12138, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12145 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12148 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12150 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12153 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12154 = new_Send((Optr)PSend12153, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12155 = new_Send((Optr)PSend12154, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12152 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12153, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12154, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12155, (Optr)&t_block_return);
    Block PBlock12151 = new_Block_with(empty_Array, empty_Array, PThreadedCode12152, 1, PSend12155);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12156 = new_Send((Optr)PSend12150, SMB_or_, 1, (Optr)PBlock12151);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12160 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12159 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12160, (Optr)&t_block_return);
    Block PBlock12158 = new_Block_with(empty_Array, empty_Array, PThreadedCode12159, 1, PSend12160);
    // +. 
    Send PSend12163 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12164 = new_Send((Optr)PSend12163, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12165 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12164);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12165);
    Array PThreadedCode12162 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12163, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12164, (Optr)&t_send1, (Optr)PSend12165, (Optr)&t_send1, (Optr)PSend12166, (Optr)&t_block_return);
    Block PBlock12161 = new_Block_with(empty_Array, empty_Array, PThreadedCode12162, 1, PSend12166);
    // ifTrue:ifFalse:. 
    Send PSend12157 = new_Send((Optr)PSend12156, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12158, (Optr)PBlock12161);
    Array PThreadedCode12149 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12150, (Optr)&t_push_closure, (Optr)PBlock12151, (Optr)&t_send1, (Optr)PSend12156, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12157, (Optr)PBlock12158, (Optr)PBlock12161, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12147 = new_Block_with(PArray12148, empty_Array, PThreadedCode12149, 2, PSend12157, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12167 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12147);
    Array PThreadedCode12146 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12147, (Optr)&t_send1, (Optr)PSend12167, (Optr)&t_method_return);
    Method PMethod12144 = new_Method_with(PArray12145, empty_Array, empty_Array, PThreadedCode12146, 1, PSend12167);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12144, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12169 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12170 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12173 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12176 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12175 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12176);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12177 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12180 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12181 = new_Send((Optr)PSend12180, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12182 = new_Send((Optr)PSend12181, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12179 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12180, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12181, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12182, (Optr)&t_block_return);
    Block PBlock12178 = new_Block_with(empty_Array, empty_Array, PThreadedCode12179, 1, PSend12182);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12183 = new_Send((Optr)PSend12177, SMB_or_, 1, (Optr)PBlock12178);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12187 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12186 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12187, (Optr)&t_block_return);
    Block PBlock12185 = new_Block_with(empty_Array, empty_Array, PThreadedCode12186, 1, PSend12187);
    // +. 
    Send PSend12190 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12191 = new_Send((Optr)PSend12190, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12192 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12191, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12193 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12192);
    Array PThreadedCode12189 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12190, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12191, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12192, (Optr)&t_send1, (Optr)PSend12193, (Optr)&t_block_return);
    Block PBlock12188 = new_Block_with(empty_Array, empty_Array, PThreadedCode12189, 1, PSend12193);
    // ifTrue:ifFalse:. 
    Send PSend12184 = new_Send((Optr)PSend12183, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12185, (Optr)PBlock12188);
    Array PThreadedCode12174 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12175, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12176, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12177, (Optr)&t_push_closure, (Optr)PBlock12178, (Optr)&t_send1, (Optr)PSend12183, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12184, (Optr)PBlock12185, (Optr)PBlock12188, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12172 = new_Block_with(PArray12173, empty_Array, PThreadedCode12174, 3, PAssign12175, PSend12184, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12194 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12172);
    Array PThreadedCode12171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12172, (Optr)&t_send1, (Optr)PSend12194, (Optr)&t_method_return);
    Method PMethod12168 = new_Method_with(PArray12169, PArray12170, empty_Array, PThreadedCode12171, 1, PSend12194);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12168, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12196 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12197 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12201 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12202 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12200 = new_Send((Optr)PSend12201, SMB_new_, 1, (Optr)PSend12202);
    Assign PAssign12199 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12200);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12204 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12206 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12207 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12206);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12208 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12207);
    Array PThreadedCode12205 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12206, (Optr)&t_send1, (Optr)PSend12207, (Optr)&t_send1, (Optr)PSend12208, (Optr)&t_method_return);
    Block PBlock12203 = new_Block_with(PArray12204, empty_Array, PThreadedCode12205, 1, PSend12208);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12209 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12203);
    Array PThreadedCode12198 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12199, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12201, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12202, (Optr)&t_send1, (Optr)PSend12200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12203, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12209, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12195 = new_Method_with(PArray12196, PArray12197, empty_Array, PThreadedCode12198, 3, PAssign12199, PSend12209, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12195, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12211 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12212 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12215 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12214 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12215);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12217 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12220 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12219 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12220);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12221 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12219);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12225 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12224 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12225, (Optr)&t_block_return);
    Block PBlock12223 = new_Block_with(empty_Array, empty_Array, PThreadedCode12224, 1, PSend12225);
    // ifTrue:. 
    Send PSend12222 = new_Send((Optr)PSend12221, SMB_ifTrue_, 1, (Optr)PBlock12223);
    Array PThreadedCode12218 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12219, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12220, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12221, (Optr)&t_send_ifTrue_, (Optr)PSend12222, (Optr)PBlock12223, (Optr)&t_method_return);
    Block PBlock12216 = new_Block_with(PArray12217, empty_Array, PThreadedCode12218, 1, PSend12222);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12226 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12216);
    Array PThreadedCode12213 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12214, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12215, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12216, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12210 = new_Method_with(PArray12211, PArray12212, empty_Array, PThreadedCode12213, 3, PAssign12214, PSend12226, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12210, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12228 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12231 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12233 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12234 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12233);
    Array PThreadedCode12232 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12233, (Optr)&t_send1, (Optr)PSend12234, (Optr)&t_method_return);
    Block PBlock12230 = new_Block_with(PArray12231, empty_Array, PThreadedCode12232, 1, PSend12234);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12235 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12230);
    Array PThreadedCode12229 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12230, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12235, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12227 = new_Method_with(PArray12228, empty_Array, empty_Array, PThreadedCode12229, 2, PSend12235, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12227, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Array PArray12237 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12242 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12243 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12241 = new_Send((Optr)PSend12242, SMB__plus_, 1, (Optr)PSend12243);
    // new:. 
    Send PSend12240 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12241);
    Assign PAssign12239 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12240);
    // size. 
    Send PSend12244 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12245 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12244, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12246 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12238 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12239, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12242, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12243, (Optr)&t_send1, (Optr)PSend12241, (Optr)&t_send1, (Optr)PSend12240, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12244, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12246, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12236 = new_Method_with(empty_Array, PArray12237, empty_Array, PThreadedCode12238, 4, PAssign12239, PSend12245, PAssign12246, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12236, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_growSize() {
    Symbol SMB_growSize = new_Symbol(L"growSize");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12249 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // max:. 
    Send PSend12250 = new_Send((Optr)PSend12249, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12248 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12249, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12250, (Optr)&t_method_return);
    Method PMethod12247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12248, 1, PSend12250);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12247, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_growSize, MC_SMB_growSize);
}


static void init_SMB_makeRoomAtFirst() {
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    Variable VAR_delta_0_0 = new_Variable_named(L"delta", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12252 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12255 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12259 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12260 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12258 = new_Send((Optr)PSend12259, SMB__minus_, 1, (Optr)PSend12260);
    Assign PAssign12257 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12258);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12261 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12265 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12268 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12269 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12267 = new_Send((Optr)PSend12268, SMB__minus_, 1, (Optr)PSend12269);
    Assign PAssign12266 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12267);
    Array PThreadedCode12264 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12265, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12266, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12268, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12269, (Optr)&t_send1, (Optr)PSend12267, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12263 = new_Block_with(empty_Array, empty_Array, PThreadedCode12264, 2, PSend12265, PAssign12266);
    // ifTrue:. 
    Send PSend12262 = new_Send((Optr)PSend12261, SMB_ifTrue_, 1, (Optr)PBlock12263);
    // size. 
    Send PSend12270 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12271 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12270);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12275 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12274 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12275, (Optr)&t_block_return);
    Block PBlock12273 = new_Block_with(empty_Array, empty_Array, PThreadedCode12274, 1, PSend12275);
    // ifTrue:. 
    Send PSend12272 = new_Send((Optr)PSend12271, SMB_ifTrue_, 1, (Optr)PBlock12273);
    // size. 
    Send PSend12277 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12276 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12277);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12280 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12279 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12280, (Optr)&t_block_return);
    Block PBlock12278 = new_Block_with(empty_Array, empty_Array, PThreadedCode12279, 1, PSend12280);
    // -. 
    Send PSend12283 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12284 = new_Send((Optr)PSend12283, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12285 = new_Send((Optr)PSend12284, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12286 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12285);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12287 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12286);
    // -. 
    Send PSend12288 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12289 = new_Send((Optr)PSend12288, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12290 = new_Send((Optr)PSend12289, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12291 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12290, (Optr)nil_Const);
    // -. 
    Send PSend12293 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12292 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12293);
    Array PThreadedCode12282 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12283, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12284, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12285, (Optr)&t_send1, (Optr)PSend12286, (Optr)&t_send2, (Optr)PSend12287, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12288, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12289, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12290, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12291, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12292, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12293, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12281 = new_Block_with(empty_Array, empty_Array, PThreadedCode12282, 3, PSend12287, PSend12291, PAssign12292);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12294 = new_Send((Optr)PBlock12278, SMB_whileTrue_, 1, (Optr)PBlock12281);
    // +. 
    Send PSend12296 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12295 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12296);
    // size. 
    Send PSend12298 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12297 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12298);
    Array PThreadedCode12256 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12257, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12259, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12260, (Optr)&t_send1, (Optr)PSend12258, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12261, (Optr)&t_send_ifTrue_, (Optr)PSend12262, (Optr)PBlock12263, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12270, (Optr)&t_send1, (Optr)PSend12271, (Optr)&t_send_ifTrue_, (Optr)PSend12272, (Optr)PBlock12273, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12276, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12277, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12278, (Optr)&t_push_closure, (Optr)PBlock12281, (Optr)&t_send1, (Optr)PSend12294, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12295, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12296, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12297, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12298, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12254 = new_Block_with(PArray12255, empty_Array, PThreadedCode12256, 8, PAssign12257, PSend12262, PSend12272, PAssign12276, PSend12294, PAssign12295, PAssign12297, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12299 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12254);
    Array PThreadedCode12253 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12254, (Optr)&t_send1, (Optr)PSend12299, (Optr)&t_method_return);
    Method PMethod12251 = new_Method_with(empty_Array, PArray12252, empty_Array, PThreadedCode12253, 1, PSend12299);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12251, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtFirst, MC_SMB_makeRoomAtFirst);
}


static void init_SMB_makeRoomAtLast() {
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    Variable VAR_newLast_0_0 = new_Variable_named(L"newLast", 0);
    Variable VAR_delta_0_1 = new_Variable_named(L"delta", 0);
    Array PArray12301 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12304 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12307 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12306 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12307);
    // size. 
    Send PSend12308 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12309 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12310 = new_Send((Optr)PSend12308, SMB__minus_, 1, (Optr)PSend12309);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12311 = new_Send((Optr)PSend12310, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12315 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12314 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12315, (Optr)&t_block_return);
    Block PBlock12313 = new_Block_with(empty_Array, empty_Array, PThreadedCode12314, 1, PSend12315);
    // ifTrue:. 
    Send PSend12312 = new_Send((Optr)PSend12311, SMB_ifTrue_, 1, (Optr)PBlock12313);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12317 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12316 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12317);
    // =. 
    Send PSend12318 = new_Send((Optr)PAssign12316, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12322 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12321 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12322, (Optr)&t_block_return);
    Block PBlock12320 = new_Block_with(empty_Array, empty_Array, PThreadedCode12321, 1, PSend12322);
    // ifTrue:. 
    Send PSend12319 = new_Send((Optr)PSend12318, SMB_ifTrue_, 1, (Optr)PBlock12320);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12324 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12326 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12327 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12326);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12328 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12327);
    // +. 
    Send PSend12329 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12330 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12329, (Optr)nil_Const);
    Array PThreadedCode12325 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12326, (Optr)&t_send1, (Optr)PSend12327, (Optr)&t_send2, (Optr)PSend12328, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12329, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12330, (Optr)&t_method_return);
    Block PBlock12323 = new_Block_with(PArray12324, empty_Array, PThreadedCode12325, 2, PSend12328, PSend12330);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12331 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12323);
    Assign PAssign12332 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12333 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12305 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12306, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12307, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12308, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12309, (Optr)&t_send1, (Optr)PSend12310, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12311, (Optr)&t_send_ifTrue_, (Optr)PSend12312, (Optr)PBlock12313, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12316, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12317, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12318, (Optr)&t_send_ifTrue_, (Optr)PSend12319, (Optr)PBlock12320, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12323, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12331, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12332, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12333, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12303 = new_Block_with(PArray12304, empty_Array, PThreadedCode12305, 7, PAssign12306, PSend12312, PSend12319, PSend12331, PAssign12332, PAssign12333, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12334 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12303);
    Array PThreadedCode12302 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12303, (Optr)&t_send1, (Optr)PSend12334, (Optr)&t_method_return);
    Method PMethod12300 = new_Method_with(empty_Array, PArray12301, empty_Array, PThreadedCode12302, 1, PSend12334);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12300, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtLast, MC_SMB_makeRoomAtLast);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Array PArray12336 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12338 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12340 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12339 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12340);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12341 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12343 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12342 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12343);
    Array PThreadedCode12337 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12338, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12339, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12340, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12341, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12342, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12343, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12335 = new_Method_with(empty_Array, PArray12336, empty_Array, PThreadedCode12337, 5, PSend12338, PAssign12339, PSend12341, PAssign12342, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12335, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Variable VAR_lastObject_0_0 = new_Variable_named(L"lastObject", 0);
    Array PArray12345 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12347 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12349 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12348 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12349);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12350 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12352 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12351 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12352);
    Array PThreadedCode12346 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12347, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12348, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12350, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12351, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12352, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12344 = new_Method_with(empty_Array, PArray12345, empty_Array, PThreadedCode12346, 5, PSend12347, PAssign12348, PSend12350, PAssign12351, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12344, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12358 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // //. 
    Send PSend12357 = new_Send((Optr)PSend12358, SMB__quotient_, 1, (Optr)int_3_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // max:. 
    Send PSend12356 = new_Send((Optr)PSend12357, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12355 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12356);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12360 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12359 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12360);
    Array PThreadedCode12354 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12355, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12358, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12357, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12359, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12360, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12354, 3, PAssign12355, PAssign12359, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12353, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12362 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12363 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12365 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12368 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12367 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12368, (Optr)&t_block_return);
    Block PBlock12366 = new_Block_with(empty_Array, empty_Array, PThreadedCode12367, 1, PSend12368);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12371 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12372 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12371);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12374 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12373 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12374);
    Array PThreadedCode12370 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12371, (Optr)&t_send1, (Optr)PSend12372, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12373, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12374, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12369 = new_Block_with(empty_Array, empty_Array, PThreadedCode12370, 2, PSend12372, PAssign12373);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12375 = new_Send((Optr)PBlock12366, SMB_whileTrue_, 1, (Optr)PBlock12369);
    Array PThreadedCode12364 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12365, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12366, (Optr)&t_push_closure, (Optr)PBlock12369, (Optr)&t_send1, (Optr)PSend12375, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12361 = new_Method_with(PArray12362, PArray12363, empty_Array, PThreadedCode12364, 3, PAssign12365, PSend12375, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12361, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_newCol_0_0 = new_Variable_named(L"newCol", 0);
    Array PArray12377 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12381 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12380 = new_Send((Optr)PSend12381, SMB_new, 0);
    Assign PAssign12379 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12380);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12383 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12385 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12384 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12385, (Optr)&t_method_return);
    Block PBlock12382 = new_Block_with(PArray12383, empty_Array, PThreadedCode12384, 1, PSend12385);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12386 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12382);
    Array PThreadedCode12378 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12379, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12381, (Optr)&t_send0, (Optr)PSend12380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12382, (Optr)&t_send1, (Optr)PSend12386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12376 = new_Method_with(empty_Array, PArray12377, empty_Array, PThreadedCode12378, 3, PAssign12379, PSend12386, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12376, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray12388 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12391 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12394 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12393 = new_Block_with(empty_Array, empty_Array, PThreadedCode12394, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12395 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12393);
    Array PThreadedCode12392 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12393, (Optr)&t_send2, (Optr)PSend12395, (Optr)&t_method_return);
    Block PBlock12390 = new_Block_with(PArray12391, empty_Array, PThreadedCode12392, 1, PSend12395);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12396 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12390);
    Array PThreadedCode12389 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12390, (Optr)&t_send1, (Optr)PSend12396, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12387 = new_Method_with(PArray12388, empty_Array, empty_Array, PThreadedCode12389, 2, PSend12396, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12387, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setCollection_() {
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12398 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12400 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12401 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12399 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12400, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12397 = new_Method_with(PArray12398, empty_Array, empty_Array, PThreadedCode12399, 3, PAssign12400, PSend12401, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12397, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_setCollection_, MC_SMB_setCollection_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12404 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12405 = new_Send((Optr)PSend12404, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12403 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12404, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12405, (Optr)&t_method_return);
    Method PMethod12402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12403, 1, PSend12405);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12402, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12407 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12409 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12410 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12411 = new_Send((Optr)PSend12409, SMB_setCollection_, 1, (Optr)PSend12410);
    Array PThreadedCode12408 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12409, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12410, (Optr)&t_send1, (Optr)PSend12411, (Optr)&t_method_return);
    Method PMethod12406 = new_Method_with(PArray12407, empty_Array, empty_Array, PThreadedCode12408, 1, PSend12411);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12406, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_ofSize_() {
    Symbol SMB_ofSize_ = new_Symbol(L"ofSize:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray12413 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12414 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12417 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12416 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12417);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12418 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12419 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12418);
    Array PThreadedCode12415 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12416, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12417, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12418, (Optr)&t_send1, (Optr)PSend12419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12412 = new_Method_with(PArray12413, PArray12414, empty_Array, PThreadedCode12415, 3, PAssign12416, PSend12419, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12412, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_ofSize_, MC_SMB_ofSize_);
}


static void init_class_SMB_new_withAll_() {
    Symbol SMB_new_withAll_ = new_Symbol(L"new:withAll:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12421 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12423 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12424 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12425 = new_Send((Optr)PSend12423, SMB_setContents_, 1, (Optr)PSend12424);
    Array PThreadedCode12422 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12423, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12424, (Optr)&t_send1, (Optr)PSend12425, (Optr)&t_method_return);
    Method PMethod12420 = new_Method_with(PArray12421, empty_Array, empty_Array, PThreadedCode12422, 1, PSend12425);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12420, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_withAll_, MC_SMB_new_withAll_);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // new:. 
    Send PSend12428 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12427 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12428, (Optr)&t_method_return);
    Method PMethod12426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12427, 1, PSend12428);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12426, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12430 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12431 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12435 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12434 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12435);
    Assign PAssign12433 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12434);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12436 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12432 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12433, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12435, (Optr)&t_send1, (Optr)PSend12434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12429 = new_Method_with(PArray12430, PArray12431, empty_Array, PThreadedCode12432, 3, PAssign12433, PSend12436, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12429, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}

void init_Collections_Sequenceable_OrderedCollection_layout() {
    layout_Collections_Sequenceable_OrderedCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedCollection = new_Symbol(L"OrderedCollection");
    slot_Collections_Sequenceable_OrderedCollection_array = (Optr)new_Slot(0, L"array");
    slot_Collections_Sequenceable_OrderedCollection_firstIndex = (Optr)new_Slot(1, L"firstIndex");
    slot_Collections_Sequenceable_OrderedCollection_lastIndex = (Optr)new_Slot(2, L"lastIndex");
    layout_Collections_Sequenceable_OrderedCollection = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[0] = slot_Collections_Sequenceable_OrderedCollection_array; // array 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[1] = slot_Collections_Sequenceable_OrderedCollection_firstIndex; // firstIndex 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[2] = slot_Collections_Sequenceable_OrderedCollection_lastIndex; // lastIndex 
    Collections_Sequenceable_OrderedCollection_Class = (Class)new_Class(Collections_Abstract_SequenceableCollection_Class, layout_Collections_Sequenceable_OrderedCollection_Class_class);
    Collections_Sequenceable_OrderedCollection_Class->layout = layout_Collections_Sequenceable_OrderedCollection;
    Collections_Sequenceable_OrderedCollection_Class->name = SMB_OrderedCollection;
    
}

void init_Collections_Sequenceable_OrderedCollection_methods() {
    init_SMB_add_();
    init_SMB_addAll_();
    init_SMB_addAllLast_();
    init_SMB_addFirst_();
    init_SMB_addLast_();
    init_SMB_asArray();
    init_SMB_at_();
    init_SMB_at_put_();
    init_SMB_collect_();
    init_SMB_select_();
    init_SMB_do_();
    init_SMB_grow();
    init_SMB_growSize();
    init_SMB_makeRoomAtFirst();
    init_SMB_makeRoomAtLast();
    init_SMB_removeFirst();
    init_SMB_removeLast();
    init_SMB_reset();
    init_SMB_reverseDo_();
    init_SMB_reversed();
    init_SMB_inspectChildrenOn_();
    init_SMB_setCollection_();
    init_SMB_size();
    init_class_SMB_new_();
    init_class_SMB_ofSize_();
    init_class_SMB_new_withAll_();
    init_class_SMB_new();
    init_class_SMB_newFrom_();
    
}