#!/bin/bash
./dumpAddr.sh $1 $2/Kernel/Test.o
gcc -lgc -O3 -std=c99 -g main.c plib.c bootstrap.c $2/Kernel/Test.o 
