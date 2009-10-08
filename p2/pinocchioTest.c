#include <pinocchio.h>
#include <unistd.h> 
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

jmp_buf Test_Continue;
int TEST_CASE_FAILED;

#define ERROR_BUFFER_LEN 1024*1024
char error_buffer[ERROR_BUFFER_LEN] = {0};
int out_pipe[2];
int saved_stdout;

void test_suite_begin(char * suiteName)
{
    TEST_CASE_FAILED = 0;
    fflush(stdout);
    // redirect stdout
    if(pipe(out_pipe) != 0) {
        exit(1);
    }
    dup2(out_pipe[1], STDOUT_FILENO);
    close(out_pipe[1]);
}


void test_suite_end(char * suiteName)
{
    fflush(stdout);
    if (TEST_CASE_FAILED) {
        /* reads out contents of pipe to the error_buffer */
        read(out_pipe[0], error_buffer, ERROR_BUFFER_LEN);
        dup2(saved_stdout, STDOUT_FILENO);
        printf("\033[31m===================================================================\033[0m\n");
        printf(">>> \033[31m%s\033[0m \033[100D\033[60C[\033[31mERROR\033[0m]\n", suiteName);
        printf("%s", error_buffer);
        printf("<<< \033[31m%s\033[0m\n", suiteName);
        printf("\033[31m===================================================================\033[0m\n");
    } else {
        dup2(saved_stdout, STDOUT_FILENO);
        printf("%s \033[100D\033[60C[\033[32mDONE\033[0m]\n", suiteName);
    }
}

void init_Exception_Handling()
{
    // save the default stdout
    saved_stdout = dup(STDOUT_FILENO);
    
    if(setjmp(Assert_Fail)) {
        printf("Test Failed\n");
        TEST_CASE_FAILED = 1;
        IN_EVAL = 0;
        longjmp(Test_Continue, 1);
    }
}


/* ========================================================================== */

Object Eval_AST_SendConst(Object self, Object symbol, Type_Array args) 
{
    return (Object)Eval((Object)new_AST_Send((Object)self, symbol, args));
}

Object Eval_AST_Send(Object self, Object symbol, Type_Array args) 
{
    AST_Constant self_const = new_AST_Constant(self);
    int i;
    for (i=0; i<args->size->value; i++) {
        args->values[i] = (Object)new_AST_Constant(args->values[i]);
    }
    return Eval_AST_SendConst((Object)self_const, symbol, args);
}

Object Eval_AST_Send0(Object self, Object symbol)
{
    return Eval_AST_Send(self, symbol, Empty_Type_Array);
}

Object Eval_AST_Send1(Object self, Object symbol, Object arg)
{
    return Eval_AST_Send(self, symbol, new_Type_Array_With(1, arg));
}

/* ========================================================================== */

void run_tests()
{
    init_Exception_Handling();
    test_Type_Array();
    test_AST_Assign();
    test_Type_Boolean();
    test_AST_Callec();
    test_Type_Character();
    test_Type_Class();
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
