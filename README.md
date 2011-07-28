Pinocchio VM
============

This repository contains the C sources of Pinocchio.

More information on [Google code](http://code.google.com/p/pinocchiovm/).


Requirements
------------

Supported Platforms:
    - Linux (X86/64)
    - OSX (X86/64)

How to Start
------------

1. Load a Pharo One-Click image from http://pharo-project.org/
    
    

2. Load the "Pinocchio V4" project from SqueakSources by executing the following 
   statements in a workspace
    
    Gofer new
	    url: 'http://www.squeaksource.com/P4';
        package: 'PEG';
	    package: 'P4';
	    load.
    

3. Export some data by executing the following in a workspace

    P4StaticClassInstaller new
    	processor: P4X86_64 new
    	os: P4OSX new;
    	compileClasses: {
    		P4KernelTest.
    		P4StaticKernelTest }.


4. Compile the existing C sources and link them against the exported binary images

    cd /p4/src
    make clean
    make


5. Execute Pinocchio
    
    ./pinocchio
