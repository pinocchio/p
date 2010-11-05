#include <lib/class/Collections/Sequenceable/OrderedCollection.h>


Optr layout_Collections_Sequenceable_OrderedCollection_Class_class;
Optr slot_Collections_Sequenceable_OrderedCollection_array;
Optr slot_Collections_Sequenceable_OrderedCollection_firstIndex;
Optr slot_Collections_Sequenceable_OrderedCollection_lastIndex;
Optr layout_Collections_Sequenceable_OrderedCollection;


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12124 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12126 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12125 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12126, (Optr)&t_method_return);
    Method PMethod12123 = new_Method_with(PArray12124, empty_Array, empty_Array, PThreadedCode12125, 1, PSend12126);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12123, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12128 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12130 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12129 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12130, (Optr)&t_method_return);
    Method PMethod12127 = new_Method_with(PArray12128, empty_Array, empty_Array, PThreadedCode12129, 1, PSend12130);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12127, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_addAllLast_() {
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12132 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12135 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12137 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12137, (Optr)&t_method_return);
    Block PBlock12134 = new_Block_with(PArray12135, empty_Array, PThreadedCode12136, 1, PSend12137);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12138 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12134);
    Array PThreadedCode12133 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12134, (Optr)&t_send1, (Optr)PSend12138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12131 = new_Method_with(PArray12132, empty_Array, empty_Array, PThreadedCode12133, 2, PSend12138, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12131, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAllLast_, MC_SMB_addAllLast_);
}


static void init_SMB_addFirst_() {
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12140 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend12142 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12146 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12145 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12146, (Optr)&t_block_return);
    Block PBlock12144 = new_Block_with(empty_Array, empty_Array, PThreadedCode12145, 1, PSend12146);
    // ifTrue:. 
    Send PSend12143 = new_Send((Optr)PSend12142, SMB_ifTrue_, 1, (Optr)PBlock12144);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12148 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12147 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12148);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12149 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12141 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12142, (Optr)&t_send_ifTrue_, (Optr)PSend12143, (Optr)PBlock12144, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12147, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12149, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12139 = new_Method_with(PArray12140, empty_Array, empty_Array, PThreadedCode12141, 4, PSend12143, PAssign12147, PSend12149, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12139, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addFirst_, MC_SMB_addFirst_);
}


static void init_SMB_addLast_() {
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12151 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12153 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12154 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12153);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12158 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12157 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12158, (Optr)&t_block_return);
    Block PBlock12156 = new_Block_with(empty_Array, empty_Array, PThreadedCode12157, 1, PSend12158);
    // ifTrue:. 
    Send PSend12155 = new_Send((Optr)PSend12154, SMB_ifTrue_, 1, (Optr)PBlock12156);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12160 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12159 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12160);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12161 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12152 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12153, (Optr)&t_send1, (Optr)PSend12154, (Optr)&t_send_ifTrue_, (Optr)PSend12155, (Optr)PBlock12156, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12159, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12160, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12161, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12150 = new_Method_with(PArray12151, empty_Array, empty_Array, PThreadedCode12152, 4, PSend12155, PAssign12159, PSend12161, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12150, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addLast_, MC_SMB_addLast_);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12164 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12165 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12164);
    // size. 
    Send PSend12166 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12167 = new_Send((Optr)PSend12165, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12166, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12163 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12164, (Optr)&t_send1, (Optr)PSend12165, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12166, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12167, (Optr)&t_method_return);
    Method PMethod12162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12163, 1, PSend12167);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12162, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12169 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12172 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12174 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12177 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12178 = new_Send((Optr)PSend12177, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12179 = new_Send((Optr)PSend12178, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12176 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12177, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12178, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12179, (Optr)&t_block_return);
    Block PBlock12175 = new_Block_with(empty_Array, empty_Array, PThreadedCode12176, 1, PSend12179);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12180 = new_Send((Optr)PSend12174, SMB_or_, 1, (Optr)PBlock12175);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12184 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12183 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12184, (Optr)&t_block_return);
    Block PBlock12182 = new_Block_with(empty_Array, empty_Array, PThreadedCode12183, 1, PSend12184);
    // +. 
    Send PSend12187 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12188 = new_Send((Optr)PSend12187, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12189 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12188);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12190 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12189);
    Array PThreadedCode12186 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12187, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12188, (Optr)&t_send1, (Optr)PSend12189, (Optr)&t_send1, (Optr)PSend12190, (Optr)&t_block_return);
    Block PBlock12185 = new_Block_with(empty_Array, empty_Array, PThreadedCode12186, 1, PSend12190);
    // ifTrue:ifFalse:. 
    Send PSend12181 = new_Send((Optr)PSend12180, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12182, (Optr)PBlock12185);
    Array PThreadedCode12173 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12174, (Optr)&t_push_closure, (Optr)PBlock12175, (Optr)&t_send1, (Optr)PSend12180, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12181, (Optr)PBlock12182, (Optr)PBlock12185, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12171 = new_Block_with(PArray12172, empty_Array, PThreadedCode12173, 2, PSend12181, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12191 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12171);
    Array PThreadedCode12170 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12171, (Optr)&t_send1, (Optr)PSend12191, (Optr)&t_method_return);
    Method PMethod12168 = new_Method_with(PArray12169, empty_Array, empty_Array, PThreadedCode12170, 1, PSend12191);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12168, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12193 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12194 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12197 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12200 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12199 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12200);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12201 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12204 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12205 = new_Send((Optr)PSend12204, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12206 = new_Send((Optr)PSend12205, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12203 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12204, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12205, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12206, (Optr)&t_block_return);
    Block PBlock12202 = new_Block_with(empty_Array, empty_Array, PThreadedCode12203, 1, PSend12206);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12207 = new_Send((Optr)PSend12201, SMB_or_, 1, (Optr)PBlock12202);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12211 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12210 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12211, (Optr)&t_block_return);
    Block PBlock12209 = new_Block_with(empty_Array, empty_Array, PThreadedCode12210, 1, PSend12211);
    // +. 
    Send PSend12214 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12215 = new_Send((Optr)PSend12214, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12216 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12215, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12217 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12216);
    Array PThreadedCode12213 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12214, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12215, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12216, (Optr)&t_send1, (Optr)PSend12217, (Optr)&t_block_return);
    Block PBlock12212 = new_Block_with(empty_Array, empty_Array, PThreadedCode12213, 1, PSend12217);
    // ifTrue:ifFalse:. 
    Send PSend12208 = new_Send((Optr)PSend12207, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12209, (Optr)PBlock12212);
    Array PThreadedCode12198 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12199, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12200, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12201, (Optr)&t_push_closure, (Optr)PBlock12202, (Optr)&t_send1, (Optr)PSend12207, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12208, (Optr)PBlock12209, (Optr)PBlock12212, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12196 = new_Block_with(PArray12197, empty_Array, PThreadedCode12198, 3, PAssign12199, PSend12208, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12218 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12196);
    Array PThreadedCode12195 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12196, (Optr)&t_send1, (Optr)PSend12218, (Optr)&t_method_return);
    Method PMethod12192 = new_Method_with(PArray12193, PArray12194, empty_Array, PThreadedCode12195, 1, PSend12218);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12192, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12220 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12221 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12225 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12226 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12224 = new_Send((Optr)PSend12225, SMB_new_, 1, (Optr)PSend12226);
    Assign PAssign12223 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12224);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12228 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12230 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12231 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12230);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12232 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12231);
    Array PThreadedCode12229 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12230, (Optr)&t_send1, (Optr)PSend12231, (Optr)&t_send1, (Optr)PSend12232, (Optr)&t_method_return);
    Block PBlock12227 = new_Block_with(PArray12228, empty_Array, PThreadedCode12229, 1, PSend12232);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12233 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12227);
    Array PThreadedCode12222 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12223, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12225, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12226, (Optr)&t_send1, (Optr)PSend12224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12227, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12219 = new_Method_with(PArray12220, PArray12221, empty_Array, PThreadedCode12222, 3, PAssign12223, PSend12233, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12219, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12235 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12236 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12239 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12238 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12239);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12241 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12244 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12243 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12244);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12245 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12243);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12249 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12248 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12249, (Optr)&t_block_return);
    Block PBlock12247 = new_Block_with(empty_Array, empty_Array, PThreadedCode12248, 1, PSend12249);
    // ifTrue:. 
    Send PSend12246 = new_Send((Optr)PSend12245, SMB_ifTrue_, 1, (Optr)PBlock12247);
    Array PThreadedCode12242 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12243, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12244, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12245, (Optr)&t_send_ifTrue_, (Optr)PSend12246, (Optr)PBlock12247, (Optr)&t_method_return);
    Block PBlock12240 = new_Block_with(PArray12241, empty_Array, PThreadedCode12242, 1, PSend12246);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12250 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12240);
    Array PThreadedCode12237 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12238, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12239, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12240, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12234 = new_Method_with(PArray12235, PArray12236, empty_Array, PThreadedCode12237, 3, PAssign12238, PSend12250, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12234, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12252 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12255 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12257 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12258 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12257);
    Array PThreadedCode12256 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12257, (Optr)&t_send1, (Optr)PSend12258, (Optr)&t_method_return);
    Block PBlock12254 = new_Block_with(PArray12255, empty_Array, PThreadedCode12256, 1, PSend12258);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12259 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12254);
    Array PThreadedCode12253 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12254, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12259, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12251 = new_Method_with(PArray12252, empty_Array, empty_Array, PThreadedCode12253, 2, PSend12259, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12251, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Array PArray12261 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12266 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12267 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12265 = new_Send((Optr)PSend12266, SMB__plus_, 1, (Optr)PSend12267);
    // new:. 
    Send PSend12264 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12265);
    Assign PAssign12263 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12264);
    // size. 
    Send PSend12268 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12269 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12268, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12270 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12262 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12263, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12266, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12267, (Optr)&t_send1, (Optr)PSend12265, (Optr)&t_send1, (Optr)PSend12264, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12268, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12269, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12270, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12260 = new_Method_with(empty_Array, PArray12261, empty_Array, PThreadedCode12262, 4, PAssign12263, PSend12269, PAssign12270, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12260, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_growSize() {
    Symbol SMB_growSize = new_Symbol(L"growSize");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12273 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // max:. 
    Send PSend12274 = new_Send((Optr)PSend12273, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12272 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12273, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12274, (Optr)&t_method_return);
    Method PMethod12271 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12272, 1, PSend12274);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12271, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_growSize, MC_SMB_growSize);
}


static void init_SMB_makeRoomAtFirst() {
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    Variable VAR_delta_0_0 = new_Variable_named(L"delta", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12276 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12279 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12283 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12284 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12282 = new_Send((Optr)PSend12283, SMB__minus_, 1, (Optr)PSend12284);
    Assign PAssign12281 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12282);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12285 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12289 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12292 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12293 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12291 = new_Send((Optr)PSend12292, SMB__minus_, 1, (Optr)PSend12293);
    Assign PAssign12290 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12291);
    Array PThreadedCode12288 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12289, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12290, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12292, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12293, (Optr)&t_send1, (Optr)PSend12291, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12287 = new_Block_with(empty_Array, empty_Array, PThreadedCode12288, 2, PSend12289, PAssign12290);
    // ifTrue:. 
    Send PSend12286 = new_Send((Optr)PSend12285, SMB_ifTrue_, 1, (Optr)PBlock12287);
    // size. 
    Send PSend12294 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12295 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12294);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12299 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12298 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12299, (Optr)&t_block_return);
    Block PBlock12297 = new_Block_with(empty_Array, empty_Array, PThreadedCode12298, 1, PSend12299);
    // ifTrue:. 
    Send PSend12296 = new_Send((Optr)PSend12295, SMB_ifTrue_, 1, (Optr)PBlock12297);
    // size. 
    Send PSend12301 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12300 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12301);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12304 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12303 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12304, (Optr)&t_block_return);
    Block PBlock12302 = new_Block_with(empty_Array, empty_Array, PThreadedCode12303, 1, PSend12304);
    // -. 
    Send PSend12307 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12308 = new_Send((Optr)PSend12307, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12309 = new_Send((Optr)PSend12308, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12310 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12309);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12311 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12310);
    // -. 
    Send PSend12312 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12313 = new_Send((Optr)PSend12312, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12314 = new_Send((Optr)PSend12313, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12315 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12314, (Optr)nil_Const);
    // -. 
    Send PSend12317 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12316 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12317);
    Array PThreadedCode12306 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12307, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12308, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12309, (Optr)&t_send1, (Optr)PSend12310, (Optr)&t_send2, (Optr)PSend12311, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12312, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12313, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12314, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12315, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12316, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12317, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12305 = new_Block_with(empty_Array, empty_Array, PThreadedCode12306, 3, PSend12311, PSend12315, PAssign12316);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12318 = new_Send((Optr)PBlock12302, SMB_whileTrue_, 1, (Optr)PBlock12305);
    // +. 
    Send PSend12320 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12319 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12320);
    // size. 
    Send PSend12322 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12321 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12322);
    Array PThreadedCode12280 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12281, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12283, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12284, (Optr)&t_send1, (Optr)PSend12282, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12285, (Optr)&t_send_ifTrue_, (Optr)PSend12286, (Optr)PBlock12287, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12294, (Optr)&t_send1, (Optr)PSend12295, (Optr)&t_send_ifTrue_, (Optr)PSend12296, (Optr)PBlock12297, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12300, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12301, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12302, (Optr)&t_push_closure, (Optr)PBlock12305, (Optr)&t_send1, (Optr)PSend12318, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12319, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12320, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12321, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12322, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12278 = new_Block_with(PArray12279, empty_Array, PThreadedCode12280, 8, PAssign12281, PSend12286, PSend12296, PAssign12300, PSend12318, PAssign12319, PAssign12321, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12323 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12278);
    Array PThreadedCode12277 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12278, (Optr)&t_send1, (Optr)PSend12323, (Optr)&t_method_return);
    Method PMethod12275 = new_Method_with(empty_Array, PArray12276, empty_Array, PThreadedCode12277, 1, PSend12323);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12275, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtFirst, MC_SMB_makeRoomAtFirst);
}


static void init_SMB_makeRoomAtLast() {
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    Variable VAR_newLast_0_0 = new_Variable_named(L"newLast", 0);
    Variable VAR_delta_0_1 = new_Variable_named(L"delta", 0);
    Array PArray12325 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12328 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12331 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12330 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12331);
    // size. 
    Send PSend12332 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12333 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12334 = new_Send((Optr)PSend12332, SMB__minus_, 1, (Optr)PSend12333);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12335 = new_Send((Optr)PSend12334, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12339 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12338 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12339, (Optr)&t_block_return);
    Block PBlock12337 = new_Block_with(empty_Array, empty_Array, PThreadedCode12338, 1, PSend12339);
    // ifTrue:. 
    Send PSend12336 = new_Send((Optr)PSend12335, SMB_ifTrue_, 1, (Optr)PBlock12337);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12341 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12340 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12341);
    // =. 
    Send PSend12342 = new_Send((Optr)PAssign12340, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12346 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12345 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12346, (Optr)&t_block_return);
    Block PBlock12344 = new_Block_with(empty_Array, empty_Array, PThreadedCode12345, 1, PSend12346);
    // ifTrue:. 
    Send PSend12343 = new_Send((Optr)PSend12342, SMB_ifTrue_, 1, (Optr)PBlock12344);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12348 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12350 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12351 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12350);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12352 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12351);
    // +. 
    Send PSend12353 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12354 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12353, (Optr)nil_Const);
    Array PThreadedCode12349 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12350, (Optr)&t_send1, (Optr)PSend12351, (Optr)&t_send2, (Optr)PSend12352, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12353, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12354, (Optr)&t_method_return);
    Block PBlock12347 = new_Block_with(PArray12348, empty_Array, PThreadedCode12349, 2, PSend12352, PSend12354);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12355 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12347);
    Assign PAssign12356 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12357 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12329 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12330, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12331, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12332, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12333, (Optr)&t_send1, (Optr)PSend12334, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12335, (Optr)&t_send_ifTrue_, (Optr)PSend12336, (Optr)PBlock12337, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12340, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12341, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12342, (Optr)&t_send_ifTrue_, (Optr)PSend12343, (Optr)PBlock12344, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12347, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12355, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12356, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12357, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12327 = new_Block_with(PArray12328, empty_Array, PThreadedCode12329, 7, PAssign12330, PSend12336, PSend12343, PSend12355, PAssign12356, PAssign12357, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12358 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12327);
    Array PThreadedCode12326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12327, (Optr)&t_send1, (Optr)PSend12358, (Optr)&t_method_return);
    Method PMethod12324 = new_Method_with(empty_Array, PArray12325, empty_Array, PThreadedCode12326, 1, PSend12358);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12324, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtLast, MC_SMB_makeRoomAtLast);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Array PArray12360 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12362 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12364 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12363 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12364);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12365 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12367 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12366 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12367);
    Array PThreadedCode12361 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12362, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12363, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12365, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12366, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12367, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12359 = new_Method_with(empty_Array, PArray12360, empty_Array, PThreadedCode12361, 5, PSend12362, PAssign12363, PSend12365, PAssign12366, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12359, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Variable VAR_lastObject_0_0 = new_Variable_named(L"lastObject", 0);
    Array PArray12369 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12371 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12373 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12372 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12373);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12374 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12376 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12375 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12376);
    Array PThreadedCode12370 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12371, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12372, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12373, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12374, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12375, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12376, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12368 = new_Method_with(empty_Array, PArray12369, empty_Array, PThreadedCode12370, 5, PSend12371, PAssign12372, PSend12374, PAssign12375, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12368, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12382 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // //. 
    Send PSend12381 = new_Send((Optr)PSend12382, SMB__quotient_, 1, (Optr)int_3_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // max:. 
    Send PSend12380 = new_Send((Optr)PSend12381, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12379 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12380);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12384 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12383 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12384);
    Array PThreadedCode12378 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12379, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12382, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12381, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12380, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12383, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12377 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12378, 3, PAssign12379, PAssign12383, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12377, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12386 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12387 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12389 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12392 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12391 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12392, (Optr)&t_block_return);
    Block PBlock12390 = new_Block_with(empty_Array, empty_Array, PThreadedCode12391, 1, PSend12392);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12395 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12396 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12395);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12398 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12397 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12398);
    Array PThreadedCode12394 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12395, (Optr)&t_send1, (Optr)PSend12396, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12397, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12398, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12393 = new_Block_with(empty_Array, empty_Array, PThreadedCode12394, 2, PSend12396, PAssign12397);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12399 = new_Send((Optr)PBlock12390, SMB_whileTrue_, 1, (Optr)PBlock12393);
    Array PThreadedCode12388 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12389, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12390, (Optr)&t_push_closure, (Optr)PBlock12393, (Optr)&t_send1, (Optr)PSend12399, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12385 = new_Method_with(PArray12386, PArray12387, empty_Array, PThreadedCode12388, 3, PAssign12389, PSend12399, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12385, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_newCol_0_0 = new_Variable_named(L"newCol", 0);
    Array PArray12401 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12405 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12404 = new_Send((Optr)PSend12405, SMB_new, 0);
    Assign PAssign12403 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12404);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12407 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12409 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12409, (Optr)&t_method_return);
    Block PBlock12406 = new_Block_with(PArray12407, empty_Array, PThreadedCode12408, 1, PSend12409);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12410 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12406);
    Array PThreadedCode12402 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12403, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12405, (Optr)&t_send0, (Optr)PSend12404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12406, (Optr)&t_send1, (Optr)PSend12410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12400 = new_Method_with(empty_Array, PArray12401, empty_Array, PThreadedCode12402, 3, PAssign12403, PSend12410, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12400, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray12412 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12415 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12418 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12417 = new_Block_with(empty_Array, empty_Array, PThreadedCode12418, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12419 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12417);
    Array PThreadedCode12416 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12417, (Optr)&t_send2, (Optr)PSend12419, (Optr)&t_method_return);
    Block PBlock12414 = new_Block_with(PArray12415, empty_Array, PThreadedCode12416, 1, PSend12419);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12420 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12414);
    Array PThreadedCode12413 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12414, (Optr)&t_send1, (Optr)PSend12420, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12411 = new_Method_with(PArray12412, empty_Array, empty_Array, PThreadedCode12413, 2, PSend12420, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12411, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setCollection_() {
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12422 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12424 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12425 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12423 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12424, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12425, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12421 = new_Method_with(PArray12422, empty_Array, empty_Array, PThreadedCode12423, 3, PAssign12424, PSend12425, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12421, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_setCollection_, MC_SMB_setCollection_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12428 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12429 = new_Send((Optr)PSend12428, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12427 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12428, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12429, (Optr)&t_method_return);
    Method PMethod12426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12427, 1, PSend12429);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12426, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12431 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12433 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12434 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12435 = new_Send((Optr)PSend12433, SMB_setCollection_, 1, (Optr)PSend12434);
    Array PThreadedCode12432 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12433, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12434, (Optr)&t_send1, (Optr)PSend12435, (Optr)&t_method_return);
    Method PMethod12430 = new_Method_with(PArray12431, empty_Array, empty_Array, PThreadedCode12432, 1, PSend12435);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12430, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_ofSize_() {
    Symbol SMB_ofSize_ = new_Symbol(L"ofSize:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray12437 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12438 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12441 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12440 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12441);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12442 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12443 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12442);
    Array PThreadedCode12439 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12440, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12441, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12442, (Optr)&t_send1, (Optr)PSend12443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12436 = new_Method_with(PArray12437, PArray12438, empty_Array, PThreadedCode12439, 3, PAssign12440, PSend12443, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12436, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_ofSize_, MC_SMB_ofSize_);
}


static void init_class_SMB_new_withAll_() {
    Symbol SMB_new_withAll_ = new_Symbol(L"new:withAll:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12445 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12447 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12448 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12449 = new_Send((Optr)PSend12447, SMB_setContents_, 1, (Optr)PSend12448);
    Array PThreadedCode12446 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12447, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12448, (Optr)&t_send1, (Optr)PSend12449, (Optr)&t_method_return);
    Method PMethod12444 = new_Method_with(PArray12445, empty_Array, empty_Array, PThreadedCode12446, 1, PSend12449);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12444, HEADER(Collections_Sequenceable_OrderedCollection_Class));
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
    Send PSend12452 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12451 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12452, (Optr)&t_method_return);
    Method PMethod12450 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12451, 1, PSend12452);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12450, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12454 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12455 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12459 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12458 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12459);
    Assign PAssign12457 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12458);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12460 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12456 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12457, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12459, (Optr)&t_send1, (Optr)PSend12458, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12453 = new_Method_with(PArray12454, PArray12455, empty_Array, PThreadedCode12456, 3, PAssign12457, PSend12460, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12453, HEADER(Collections_Sequenceable_OrderedCollection_Class));
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