#include <stdio.h>
#include <stdlib.h>
#include "settings.h"

#define SMALLER (void*)11
#define MINUS (void*)21
#define FIB (void*)31
#define PLUS (void*)41

extern void * METHOD_NAME();
extern void * blockTest();
extern void * arrayNew();
extern long * intNew();
long * p_1;
long * p_2;


int init() {
        p_2 = intNew();
        p_2[0] = 2;
        p_1 = intNew();
        p_1[0] = 1; 
}

int main()
{
       init();

       //void * method[] = {(void*)22,(void*)1,(void*)2,(void*)3,(void*)4,(void*)PLUS,(void*)p_1,(void*)PLUS};
       void * method[] = {(void*)22,(void*)1,(void*)2,(void*)3,(void*)4,(void*)p_1,(void*)p_1,(void*)PLUS};

       int offset = *(int*)&((unsigned char*)&METHOD_NAME)[METHOD_OFFSET-4];
       void** method_pointer = (void**)&(((unsigned char*)&METHOD_NAME)[offset+METHOD_OFFSET]);    
   
        printf("of: %d\n", offset);

        *method_pointer = (void*)(&method[1]);
        
        long * self = malloc(sizeof(long));
        self[0] = 0;
        self = (long*)(&self[1]);


        printf("address: %p\n", method_pointer);
        
        long * result;
           __asm("mov %0, %%rdi"::"r"(self));
           __asm("mov $0, %rax");
           __asm(METHOD_CALL);
           __asm("mov %%rax, %0":"=r"(result));

        printf("result: %li\n",result[0]);
        return 0;
}

