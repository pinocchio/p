SHELL=/bin/bash

MAKEOPTS=-j3

CFILES=$(wildcard */*.c)
OFILES=$(CFILES:%.c=%.o)
SOFILES=$(filter-out %Helper.c,$(CFILES:%.c=%.so))
LOFILES=$(CFILES:%.c=%.lo)

CFLAGS+=-DGC_PTHREADS -DASSERT_FAIL -fPIC -c -I../ -Wall
LDFLAGS+=-lpthread -lm -lgc -shared

plugin: $(SOFILES)


%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

%.so: %.o
	@$(CC) $(LDFLAGS) -o $@ $^  

clean:
	echo $(SOFILES) 
	@rm -rf $(OFILES) $(SOFILES) $(LOFILES) make.depend

tags: $(SOURCES)
	@cd ..; make tags

mac:
	CFLAGS="-arch i386 -arch x86_64 -arch ppc" LDFLAGS="-arch i386 -arch x86_64 -arch ppc" make

.PHONY: plugin tags clean tags
