#!/bin/bash
NAME=$1
#ADDR=$(objdump -d $2 | grep -o "mov .*%rip.* <$1+.*" | head -n1 | sed -e "s/.*mov .*%rip.* <$1+\(.*\)>/\1/")
#echo "$ADDR"
#echo "#define METHOD_OFFSET $ADDR" > settings.h
echo "#define METHOD_CALL \"call $NAME\"" > settings.h
echo "#define METHOD_NAME $NAME" >> settings.h
echo "#define METHOD_OBJECT __$NAME" >> settings.h
size=$(readelf -a $2 | grep  "GLOBAL DEFAULT .* __$1$" | head -c 30 | tail -c 5)
echo "#define METHOD_OBJECT_SIZE $size" >> settings.h

