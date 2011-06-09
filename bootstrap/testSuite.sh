#!/bin/sh
gcc -c -O3 plib.c
./compile.sh blockTest ../../e/ && ./a.out | tail -n 1
./compile.sh blockTest2 ../../e/ && ./a.out | tail -n 1
./compile.sh fib ../../e/ && ./a.out | tail -n 1
./a.out 10 | tail -n 1
./compile.sh fibSend ../../e/ && ./a.out | tail -n 1
./a.out 10 | tail -n 1
