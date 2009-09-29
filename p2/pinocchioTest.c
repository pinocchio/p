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

Object EvalAST_SendConst(Object self, Object symbol, Type_Array args) 
{
    return Eval((Object)new_AST_Send((Object)self, symbol, args));
}


Object EvalAST_Send(Object self, Object symbol, Type_Array args) 
{
    AST_Constant self_const = new_AST_Constant(self);
    int i;
    for (i=0; i<args->size->value; i++) {
        args->values[i] = (Object)new_AST_Constant(args->values[i]);
    }
    return EvalAST_SendConst((Object)self_const, symbol, args);
}

Object EvalAST_Send0(Object self, Object symbol)
{
    return EvalAST_Send(self, symbol, Empty_Type_Array);
}

Object EvalAST_Send1(Object self, Object symbol, Object arg)
{
    return EvalAST_Send(self, symbol, new_Type_Array_With(1, arg));
}

/* ========================================================================== */

void run_tests()
{
    test_Type_Array();
    test_AST_Assign();
    test_Type_Boolean();
    test_AST_Callec();
    test_Type_Character();
    test_Class();
    test_AST_Constant();
    test_AST_Continue();
    test_Type_Dictionary();
    test_IO_File();
    test_Method();
    test_NativeMethod();
    test_Type_Object();
    test_AST_Self();
    test_AST_Send();
    test_Type_SmallInt();
    test_Type_String();
    test_AST_Super();
    test_Type_Symbol();
    test_Thread();
    test_AST_Variable();
}
