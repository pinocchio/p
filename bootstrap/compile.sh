#!/bin/bash
./dumpAddr.sh $1 $2/Kernel/Test.o
gcc -fomit-frame-pointer -lgc main.c plib.c $2/Kernel/Test.o 
