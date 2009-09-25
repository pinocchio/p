#define TEST

#include <pinocchio.c>

#include <system/ast/AssignTest.c>
#include <system/ast/CallecTest.c>
#include <system/ast/ConstantTest.c>
#include <system/ast/ContinueTest.c>
#include <system/ast/MethodTest.c>
#include <system/ast/NativeMethodTest.c>
#include <system/ast/SelfTest.c>
#include <system/ast/SendTest.c>
#include <system/ast/SuperTest.c>
#include <system/ast/VariableTest.c>
#include <system/io/FileTest.c>
#include <system/runtime/EnvTest.c>
#include <system/runtime/ThreadTest.c>
#include <system/type/ArrayTest.c>
#include <system/type/BooleanTest.c>
#include <system/type/CharacterTest.c>
#include <system/type/ClassTest.c>
#include <system/type/DictionaryTest.c>
#include <system/type/ObjectTest.c>
#include <system/type/SmallIntTest.c>
#include <system/type/StringTest.c>
#include <system/type/SymbolTest.c>

/* ========================================================================== */

void run_tests()
{
    test_Array();
    test_Assign();
    test_Boolean();
    test_Callec();
    test_Character();
    test_Class();
    test_Constant();
    test_Continue();
    test_Dictionary();
    test_File();
    test_Method();
    test_NativeMethod();
    test_Object();
    test_Self();
    test_Send();
    test_SmallInt();
    test_String();
    test_Super();
    test_Symbol();
    test_Thread();
    test_Variable();
}
