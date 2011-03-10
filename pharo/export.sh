#! /bin/bash

DIR=`readlink "$0"` || DIR="$0";
DIR=`dirname "$DIR"`;
cd "$DIR"


squeak -vm-display-X11 -headless Pharo-1.1.image $PWD/export.st
