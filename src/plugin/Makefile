SHELL=/bin/bash

MAKEOPTS=-j3

CFILES=$(wildcard */*.c)
OFILES=$(CFILES:%.c=%.o)
SOFILES=$(filter-out %Helper.c,$(CFILES:%.c=%.so))
#SOFILES=$(filter-out %Helper.c,$(CFILES:%.c=%.la))
LOFILES=$(CFILES:%.c=%.lo)

CFLAGS+=-DASSERT_FAIL -c -I../ -Wall
LDFLAGS+=-lm -lgc

plugin: $(SOFILES)

%.o: %.c
	@echo Compiling: $@
	@glibtool --mode=compile --tag CC $(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

#%.la: %.o
#	@glibtool --mode=link --tag CC $(CC) $(LDFLAGS) -o $@ $^  

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
