#include <pinocchio.h>
#include <unistd.h> 
#include <test/pinocchioTest.h>
#include <test/pinocchioTest.hi>


/* ========================================================================= */

jmp_buf Test_Continue;
int TEST_CASE_FAILED;

#define ERROR_BUFFER_LEN 1024*1024
char error_buffer[ERROR_BUFFER_LEN];
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


void test_suite_end(char * suiteName, uns_int numtests, uns_int numrun)
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
        printf("<<< \033[31m%s\033[0m %"F_I"u/%"F_I"u\n", suiteName, numrun, numtests);
        printf("\033[31m===================================================================\033[0m\n");
    } else {
        dup2(saved_stdout, STDOUT_FILENO);
        printf("%s \033[100D\033[60C[\033[32mDONE\033[0m %"F_I"u/%"F_I"u]\n",
               suiteName, numrun, numtests);
    }
}

void init_Exception_Handling()
{
    // save the default stdout
    saved_stdout = dup(STDOUT_FILENO);
    
    #ifndef TEST_FAIL
    if(setjmp(Assert_Fail)) {
        printf("Test Failed\n");
        TEST_CASE_FAILED = 1;
        IN_EVAL = 0;
        longjmp(Test_Continue, 1);
    }
    #endif // TEST_FAIL
}


/* ========================================================================= */
Object finish_eval()
{
    while (!empty_CNT()) {
        peek_CNT()();
    }
    return pop_EXP();
}

Object Eval_Send0(Object self, Type_Symbol symbol)
{
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 0);
    return finish_eval();
}

Object Eval_Send1(Object self, Type_Symbol symbol, Object arg)
{
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 1, arg);
    return finish_eval();
}

Object Eval_Send2(Object self, Type_Symbol symbol, Object arg1,  Object arg2)
{
    Type_Class_direct_dispatch(self, HEADER(self), (Object)symbol, 2, arg1, arg2);
    return finish_eval();
}


/* ========================================================================= */

void run_tests()
{
   init_Exception_Handling();
   
test_Type_Array();
test_AST_Assign();
test_Type_Boolean();
 test_Type_Character();
test_Type_Class();
test_AST_Constant();
//test_AST_Continue();
test_Type_Dictionary();
test_IO_File();
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
test_Runtime_BlockClosure();
test_AST_Block();
test_Type_Nil();
test_AST_Info();
test_Runtime_MethodClosure();
test_AST_Method();
test_AST_InstVariable();

test_AutoGenTest();
}
