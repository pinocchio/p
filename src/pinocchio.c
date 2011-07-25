#include <pinocchio.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern struct Class Test_StaticKernelTest;

int main(int argc, char**argv)
{
    setlocale(LC_ALL, "");

    tObject self    = basicNew((tBehavior)&Test_StaticKernelTest);
    // tObject result  = 
        send(self, "testStatic");
    
//    long * result;
 
//    if (IS_INT(result)) {
//        printf("result: %li\n", DEC_INT(result));
//    } else {
//        printf("result: %p\n", result);
//   }
    return 0;
}
