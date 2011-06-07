#!/bin/bash
NAME=$1
ADDR=$(objdump -d $2 | grep -o "mov .*%rip.* <$1+.*" | sed -e "s/.*mov .*%rip.* <$1+\(.*\)>/\1/")
echo "$ADDR"
echo "#define METHOD_OFFSET $ADDR" > settings.h
echo "#define METHOD_CALL \"call $NAME\"" >> settings.h
echo "#define METHOD_NAME $NAME" >> settings.h
