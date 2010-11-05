#include <lib/class/Collection/AbstractBucket.h>


Optr layout_Collection_AbstractBucket_Class_class;
Optr slot_Collection_AbstractBucket_bucketSize;
Optr layout_Collection_AbstractBucket;


static void init_SMB_isFull() {
    Symbol SMB_isFull = new_Symbol(L"isFull");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend6415 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend6416 = new_Send((Optr)slot_Collection_AbstractBucket_bucketSize, SMB__equals_, 1, (Optr)PSend6415);
    Array PThreadedCode6414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6415, (Optr)&t_send1, (Optr)PSend6416, (Optr)&t_method_return);
    Method PMethod6413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6414, 1, PSend6416);
    
    MethodClosure MC_SMB_isFull = new_MethodClosure((Method)PMethod6413, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_isFull, MC_SMB_isFull);
}


static void init_SMB_copyFrom_() {
    Symbol SMB_copyFrom_ = new_Symbol(L"copyFrom:");
    Variable VAR_aBucket_0_0 = new_Variable_named(L"aBucket", 0);
    Array PArray6418 = new_Array_with(1, (Optr)VAR_aBucket_0_0);
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    // bucketSize. 
    Send PSend6420 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Variable VAR_idx_1_0 = new_Variable_named(L"idx", 1);
    Array PArray6422 = new_Array_with(1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend6424 = new_Send((Optr)VAR_aBucket_0_0, SMB_at_, 1, (Optr)VAR_idx_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6425 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_idx_1_0, (Optr)PSend6424);
    Array PThreadedCode6423 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_push_variable, (Optr)VAR_idx_1_0, (Optr)&t_send1, (Optr)PSend6424, (Optr)&t_send2, (Optr)PSend6425, (Optr)&t_method_return);
    Block PBlock6421 = new_Block_with(PArray6422, empty_Array, PThreadedCode6423, 1, PSend6425);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6426 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend6420, (Optr)PBlock6421);
    // bucketSize. 
    Send PSend6428 = new_Send((Optr)VAR_aBucket_0_0, SMB_bucketSize, 0);
    Assign PAssign6427 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)PSend6428);
    Array PThreadedCode6419 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6420, (Optr)&t_push_closure, (Optr)PBlock6421, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6426, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6427, (Optr)&t_push_variable, (Optr)VAR_aBucket_0_0, (Optr)&t_send0, (Optr)PSend6428, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6417 = new_Method_with(PArray6418, empty_Array, empty_Array, PThreadedCode6419, 3, PSend6426, PAssign6427, self);
    
    MethodClosure MC_SMB_copyFrom_ = new_MethodClosure((Method)PMethod6417, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_copyFrom_, MC_SMB_copyFrom_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6431 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Array PThreadedCode6430 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign6431, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6430, 2, PAssign6431, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod6429, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_bucketSize() {
    Symbol SMB_bucketSize = new_Symbol(L"bucketSize");
    Array PThreadedCode6433 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_method_return);
    Method PMethod6432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6433, 1, slot_Collection_AbstractBucket_bucketSize);
    
    MethodClosure MC_SMB_bucketSize = new_MethodClosure((Method)PMethod6432, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_bucketSize, MC_SMB_bucketSize);
}


static void init_SMB_removeAll() {
    Symbol SMB_removeAll = new_Symbol(L"removeAll");
    Variable VAR_oldSize_0_0 = new_Variable_named(L"oldSize", 0);
    Array PArray6435 = new_Array_with(1, (Optr)VAR_oldSize_0_0);
    Assign PAssign6437 = new_Assign((Optr)VAR_oldSize_0_0, (Optr)slot_Collection_AbstractBucket_bucketSize);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign6438 = new_Assign((Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)int_0_Const);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray6440 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend6442 = new_Send((Optr)self, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)nil_Const);
    Array PThreadedCode6441 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend6442, (Optr)&t_method_return);
    Block PBlock6439 = new_Block_with(PArray6440, empty_Array, PThreadedCode6441, 1, PSend6442);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend6443 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_oldSize_0_0, (Optr)PBlock6439);
    Array PThreadedCode6436 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign6437, (Optr)&t_push_slot, (Optr)slot_Collection_AbstractBucket_bucketSize, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign6438, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_oldSize_0_0, (Optr)&t_push_closure, (Optr)PBlock6439, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend6443, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6434 = new_Method_with(empty_Array, PArray6435, empty_Array, PThreadedCode6436, 4, PAssign6437, PAssign6438, PSend6443, self);
    
    MethodClosure MC_SMB_removeAll = new_MethodClosure((Method)PMethod6434, Collection_AbstractBucket_Class);
    store_method(Collection_AbstractBucket_Class, SMB_removeAll, MC_SMB_removeAll);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_sizeRequested_0_0 = new_Variable_named(L"sizeRequested", 0);
    Array PArray6445 = new_Array_with(1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_basicNew_ = new_Symbol(L"basicNew:");
    Super PSuper6447 = new_Super(SMB_basicNew_, 1, (Optr)VAR_sizeRequested_0_0);
    Symbol SMB_initialize = new_Symbol(L"initialize");
    // initialize. 
    Send PSend6448 = new_Send((Optr)PSuper6447, SMB_initialize, 0);
    Array PThreadedCode6446 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sizeRequested_0_0, (Optr)&t_super1, (Optr)PSuper6447, (Optr)&t_send0, (Optr)PSend6448, (Optr)&t_method_return);
    Method PMethod6444 = new_Method_with(PArray6445, empty_Array, empty_Array, PThreadedCode6446, 1, PSend6448);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod6444, HEADER(Collection_AbstractBucket_Class));
    store_method(HEADER(Collection_AbstractBucket_Class), SMB_new_, MC_SMB_new_);
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
    Send PSend6451 = new_Send((Optr)self, SMB_shouldNotCall, 0);
    Array PThreadedCode6450 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend6451, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod6449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode6450, 2, PSend6451, self);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod6449, HEADER(Collection_AbstractBucket_Class));
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
    init_class_SMB_new();
    
}