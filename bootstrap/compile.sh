#!/bin/bash
./dumpAddr.sh $1 $2/Kernel/Test.o
gcc -lgc -O3 main.c plib.c $2/Kernel/Test.o 
