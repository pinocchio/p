#include <pinocchio.h>
#include <pinocchioTest.h>

#include <system/ast/AssignTest.ci>
#include <system/ast/CallecTest.ci>
#include <system/ast/ConstantTest.ci>
#include <system/ast/ContinueTest.ci>
#include <system/ast/MethodTest.ci>
#include <system/ast/NativeMethodTest.ci>
#include <system/ast/SelfTest.ci>
#include <system/ast/SendTest.ci>
#include <system/ast/SuperTest.ci>
#include <system/ast/VariableTest.ci>
#include <system/io/FileTest.ci>
#include <system/runtime/EnvTest.ci>
#include <system/runtime/ThreadTest.ci>
#include <system/type/ArrayTest.ci>
#include <system/type/BooleanTest.ci>
#include <system/type/CharacterTest.ci>
#include <system/type/ClassTest.ci>
#include <system/type/DictionaryTest.ci>
#include <system/type/ObjectTest.ci>
#include <system/type/SmallIntTest.ci>
#include <system/type/StringTest.ci>
#include <system/type/SymbolTest.ci>

/* ========================================================================== */

Object EvalSendConst(Object self, Object symbol, Type_Array args) 
{
    return Eval((Object)new_Send((Object)self, symbol, args));
}


Object EvalSend(Object self, Object symbol, Type_Array args) 
{
    AST_Constant self_const = new_Constant(self);
    int i;
    for (i=0; i<args->size->value; i++) {
        args->values[i] = (Object)new_Constant(args->values[i]);
    }
    return EvalSendConst((Object)self_const, symbol, args);
}

Object EvalSend0(Object self, Object symbol)
{
    return EvalSend(self, symbol, Empty_Type_Array);
}

Object EvalSend1(Object self, Object symbol, Object arg)
{
    return EvalSend(self, symbol, new_Type_Array_With(1, arg));
}

/* ========================================================================== */

void run_tests()
{
    test_Type_Array();
    test_Assign();
    test_Type_Boolean();
    test_Callec();
    test_Type_Character();
    test_Type_Class();
    test_Constant();
    test_Continue();
    test_Type_Dictionary();
    test_IO_File();
    test_Method();
    test_NativeMethod();
    test_Type_Object();
    test_Self();
    test_Send();
    test_Type_SmallInt();
    test_Type_String();
    test_Super();
    test_Type_Symbol();
    test_Thread();
    test_Variable();
}
