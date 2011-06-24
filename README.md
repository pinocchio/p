Pinocchio VM
============

This repository contains the C sources of Pinocchio.

More information on [Google code](http://code.google.com/p/pinocchiovm/).


Requirements
------------

For now it will just work under linux with ELF support

How to Start
------------

1. First export the Kernel
    pc := P4SmalltalkKernelCompiler new.
    pc processor: P4AbstractX86_64 new os: P4Linux new.
    pc compileClasses: { P4Test }.

2. Then run the testsuite
    bootstrap/testSuite.sh $PATH_TO_THE_PHARO_DIR
