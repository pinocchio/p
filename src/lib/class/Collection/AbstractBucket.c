#include <lib/class/Collection/AbstractBucket.h>


Optr layout_Collection_AbstractBucket_Class_class;
Optr slot_Collection_AbstractBucket_bucketSize;
Optr layout_Collection_AbstractBucket;


static void init_SMB_isFull() {
    Symbol SMB_isFull = new_Symbol(L"isFull");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6418 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6419 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__equals_, 1, (Optr)PSend6418);
    Array PThreadedCode6417 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6418, (Optr)&t_send1, (Optr)PSend6419, (Optr)&t_method_return);
    Method PMethod6416 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6417, 1, PSend6419);
    
    MethodClosure MC_SMB_isFull = new_MethodClosure((Method)PMethod6416, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_isFull, MC_SMB_isFull);
}


static void init_SMB_copyFrom_() {
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    Variable VAR_aBucket_0_0 = new_Variable_named(L"aBucket", 0);
    Array PArray6421 = new_Array_with(1, (Optr)VAR_aBucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6423 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Variable VAR_idx_1_0 = new_Variable_named(L"idx", 1);
    Array PArray6425 = new_Array_with(1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6427 = new_Send((Optr)VAR_aBucket_0_0, SMB_at_, 1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6428 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_idx_1_0, (Optr)PSend6427);
    Array PThreadedCode6426 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_send1, (Optr)PSend6427, (Optr)&t_send2, (Optr)PSend6428, (Optr)&t_method_return);
    Block PBlock6424 = new_Block_with(PArray6425, empty_Array, PThreadedCode6426, 1, PSend6428);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6429 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend6423, (Optr)PBlock6424);
    // bucketSize. 
    Send PSend6431 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Assign PAssign6430 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6431);
    Array PThreadedCode6422 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6423, (Optr)&t_push_closure, (Optr)PBlock6424, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6429, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6430, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6420 = new_Method_with(PArray6421, empty_Array, empty_Array, PThreadedCode6422, 3, PSend6429, PAssign6430, self);
    
    MethodClosure MC_SMB_copyFrom_ = new_MethodClosure((Method)PMethod6420, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_copyFrom_, MC_SMB_copyFrom_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6434 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Array PThreadedCode6433 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6434, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6433, 2, PAssign6434, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6432, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_bucketSize() {
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    Array PThreadedCode6436 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_method_return);
    Method PMethod6435 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6436, 1, slot_Collection_AbstractBucket_bucketSize);
    
    MethodClosure MC_SMB_bucketSize = new_MethodClosure((Method)PMethod6435, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_bucketSize, MC_SMB_bucketSize);
}


static void init_SMB_removeAll() {
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    Variable VAR_oldSize_0_0 = new_Variable_named(L"oldSize", 0);
    Array PArray6438 = new_Array_with(1, (Optr)VAR_oldSize_0_0);
    Assign PAssign6440 = new_Assign((Optr)VAR_oldSize_0_0, (Optr)slot_Collection_AbstractBucket_bucketSize);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6441 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6443 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6445 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)nil_Const);
    Array PThreadedCode6444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6445, (Optr)&t_method_return);
    Block PBlock6442 = new_Block_with(PArray6443, empty_Array, PThreadedCode6444, 1, PSend6445);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6446 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_oldSize_0_0, (Optr)PBlock6442);
    Array PThreadedCode6439 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign6440, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6441, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_0, (Optr)&t_push_closure, (Optr)PBlock6442, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6437 = new_Method_with(empty_Array, PArray6438, empty_Array, PThreadedCode6439, 4, PAssign6440, PAssign6441, PSend6446, self);
    
    MethodClosure MC_SMB_removeAll = new_MethodClosure((Method)PMethod6437, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_removeAll, MC_SMB_removeAll);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6448 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_basicNew_ = new_Symbol(L"basicNew:");
    Super PSuper6450 = new_Super(SMB_basicNew_, 1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend6451 = new_Send((Optr)PSuper6450, SMB_initialize, 0);
    Array PThreadedCode6449 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_super1, (Optr)PSuper6450, (Optr)&t_send0, (Optr)PSend6451, (Optr)&t_method_return);
    Method PMethod6447 = new_Method_with(PArray6448, empty_Array, empty_Array, PThreadedCode6449, 1, PSend6451);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6447, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_removeNatives() {
    Symbol SMB_removeNatives = new_Symbol(L"removeNatives");
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend6454 = new_Send((Optr)self, SMB_methods, 0);
    Variable VAR_method_1_0 = new_Variable_named(L"method", 1);
    Array PArray6456 = new_Array_with(1, (Optr)VAR_method_1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend6458 = new_Send((Optr)VAR_method_1_0, SMB_code, 0);
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    // clearNative. 
    Send PSend6459 = new_Send((Optr)PSend6458, SMB_clearNative, 0);
    Array PThreadedCode6457 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_method_1_0, (Optr)&t_send0, (Optr)PSend6458, (Optr)&t_send0, (Optr)PSend6459, (Optr)&t_method_return);
    Block PBlock6455 = new_Block_with(PArray6456, empty_Array, PThreadedCode6457, 1, PSend6459);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend6460 = new_Send((Optr)PSend6454, SMB_do_, 1, (Optr)PBlock6455);
    Array PThreadedCode6453 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6454, (Optr)&t_push_closure, (Optr)PBlock6455, (Optr)&t_send1, (Optr)PSend6460, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6452 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6453, 2, PSend6460, self);
    
    MethodClosure MC_SMB_removeNatives = new_MethodClosure((Method)PMethod6452, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_removeNatives, MC_SMB_removeNatives);
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
    Symbol SMB_shouldNotCall = new_Symbol(L"shouldNotCall");
    // shouldNotCall. 
    Send PSend6463 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode6462 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6463, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6462, 2, PSend6463, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod6461, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_new, MC_SMB_new);
}

void init_Collection_PAbstractBucket_layout() {
    layout_Collection_AbstractBucket_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_AbstractBucket_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractBucket = new_Symbol(L"AbstractBucket");
    slot_Collection_AbstractBucket_bucketSize = (Optr)new_Slot(0, L"bucketSize");
    layout_Collection_AbstractBucket = (Optr)create_layout_with_vars(ArrayLayout_Class, 1);
    ((Array)layout_Collection_AbstractBucket)->values[0] = slot_Collection_AbstractBucket_bucketSize;
    Collection_AbstractBucket_Class = (Class)new_Class(Array_Class, layout_Collection_AbstractBucket_Class_class);
    Collection_AbstractBucket_Class->layout = layout_Collection_AbstractBucket;
    Collection_AbstractBucket_Class->name = SMB_AbstractBucket;
    
}

void init_Collection_PAbstractBucket_methods() {
    init_SMB_isFull();
    init_SMB_copyFrom_();
    init_SMB_initialize();
    init_SMB_bucketSize();
    init_SMB_removeAll();
    init_class_SMB_new_();
    init_class_SMB_removeNatives();
    init_class_SMB_new();
    
}