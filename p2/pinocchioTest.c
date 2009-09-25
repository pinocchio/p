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
