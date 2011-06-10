#!/bin/sh
gcc -c -O3 plib.c
./compile.sh simpleMethod $1 && ./a.out | tail -n 1
./compile.sh blockTest $1 && ./a.out | tail -n 1
./compile.sh blockTest2 $1 && ./a.out | tail -n 1
./compile.sh fib $1 && ./a.out | tail -n 1
./a.out 10 | tail -n 1
./compile.sh fibSend $1 && ./a.out | tail -n 1
./a.out 10 | tail -n 1
