SHELL=/bin/bash

MAKEOPTS=-j3

CFILES=$(wildcard *.c)
HFILES=$(CFILES:%.c=%.h)
OBJECTS=$(CFILES:%.c=%.o)
SOFILES=$(CFILES:%.c=%.so)

CFLAGS+=-DGC_PTHREADS -DASSERT_FAIL -fPIC -c -I../ -Wall
LDFLAGS+=-lpthread -lm -lgc -lc -shared

plugin: $(SOFILES)

%.so: %.o
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	@rm -rf $(OBJECTS) $(DLS) make.depend

tags: $(SOURCES)
	@cd ..; make tags

mac:
	CFLAGS="-arch i386 -arch x86_64 -arch ppc" LDFLAGS="-arch i386 -arch x86_64 -arch ppc" make

.PHONY: plugin tags clean tags
