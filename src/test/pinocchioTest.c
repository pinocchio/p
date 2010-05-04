#include <pinocchio.h>
#include <unistd.h> 
#include <test/pinocchioTest.h>
#include <test/lib/lib.h>

#include <system/ast/SelfTest.ci>
#include <system/ast/SuperTest.ci>
#include <system/ast/VariableTest.ci>
#include <system/io/FileTest.ci>
#include <system/runtime/ThreadTest.ci>
#include <system/type/ClassTest.ci>
#include <system/type/ObjectTest.ci>
#include <system/type/SmallIntTest.ci>
#include <system/type/StringTest.ci>
#include <system/type/SymbolTest.ci>
#include <system/runtime/BlockClosureTest.ci>
#include <system/ast/InfoTest.ci>
#include <system/runtime/MethodClosureTest.ci>
#include <system/ast/SlotTest.ci>

/* ========================================================================= */

jmp_buf Test_Continue;
int TEST_CASE_FAILED;

#define ERROR_BUFFER_LEN 1024*1024
char error_buffer[ERROR_BUFFER_LEN] = {0};
int out_pipe[2];
int saved_stdout;

void test_suite_begin(char * suiteName)
{
    TEST_CASE_FAILED = 0;
    #ifndef TEST_FAIL
    fflush(stdout);
    // redirect stdout
    if(pipe(out_pipe) != 0) {
        exit(1);
    }
    dup2(out_pipe[1], STDOUT_FILENO);
    close(out_pipe[1]);
    #endif // TEST_FAIL
}


void test_suite_end(char * suiteName)
{
    FLUSH_STDOUT
    if (TEST_CASE_FAILED) {
        /* reads out contents of pipe to the error_buffer */
        dup2(saved_stdout, STDOUT_FILENO);
        ssize_t nr = read(out_pipe[0], error_buffer, ERROR_BUFFER_LEN);
        error_buffer[nr] = '\0';
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
        #ifndef TEST_FAIL
        printf("Test Failed\n");
        TEST_CASE_FAILED = 1;
        IN_EVAL = 0;
        longjmp(Test_Continue, 1);
        #endif // TEST_FAIL
    }
}



/* ========================================================================= */

void run_tests()
{
   init_Exception_Handling();
   
/*
test_Type_Class();
test_IO_File();
test_Type_Object();
test_AST_Self();
test_Type_SmallInt();
test_Type_String();
test_AST_Super();
test_Type_Symbol();
test_Thread();
test_AST_Variable();
test_Runtime_BlockClosure();
test_AST_Info();
test_Runtime_MethodClosure();
test_AST_Slot();
*/
test_lib();

}
