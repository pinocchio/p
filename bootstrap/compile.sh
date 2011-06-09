#!/bin/bash
./dumpAddr.sh $1 $2/Kernel/Test.o
gcc -fomit-frame-pointer -lgc main.c plib.o $2/Kernel/Test.o 
