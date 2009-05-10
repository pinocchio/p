CFILES=model.c bootstrap.c primitives.c system.c print.c\
scheme/natives.c scheme/system.c debug.c thread.c\
system/icall.c system/appcall.c system/ilist.c system/iconst.c\
system/dircall.c system/iassign.c system/ivar.c system/icapture.c\
system/env.c system/iscoped.c
HFILES=model.h bootstrap.h primitives.h system.h print.h gc.h\
scheme/natives.h scheme/system.h debug.h thread.h constants.h\
system/icall.h system/appcall.h system/ilist.h system/iconst.h\
system/dircall.h system/iassign.h system/ivar.h system/icapture.h\
system/env.h system/iscoped.h
PROGRAM=fools
VERSION=0.1

EXTRA_SOURCES=fib-compiler.scm lambda-compiler.scm prefix.c postfix.c\
test.c Makefile fools.c

TARGET=fib

FULLNAME=$(PROGRAM)-$(VERSION)

CFLAGS = -O3 -g -Wall -I.
LDFLAGS = -lgc

TEST_OBJECTS= test test.o fib fib.o fib.c
SOURCES=$(CFILES) $(HFILES) $(EXTRA_SOURCES)
OBJECTS=$(CFILES:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS) $(PROGRAM).o
	$(CC) $(LDFLAGS) -o $@ $^

test: $(OBJECTS) test.o
	$(CC) $(LDFLAGS) -o $@ $^
	./test

fib.c: prefix.c postfix.c fib-compiler.scm lambda-compiler.scm
	cat prefix.c > fib.c
	mzscheme -r fib-compiler.scm >> fib.c
	cat postfix.c >> fib.c

fib: $(OBJECTS) fib.o
	$(CC) $(LDFLAGS) -o $@ $^
	./fib

profile: 
	$(MAKE) CFLAGS="-pg $(CFLAGS)" LDFLAGS="-pg $(LDFLAGS)" $(TARGET)

clean:
	rm -rf $(OBJECTS) $(PROGRAM) $(PROGRAM).o $(TEST_OBJECTS) make.depend

TARBZ2=$(FULLNAME).tar.bz2

dist: $(TARBZ2)

$(TARBZ2): $(SOURCES)
	mkdir -p .dist/$(FULLNAME)
	for i in $(SOURCES); do mkdir -p .dist/$(FULLNAME)/`dirname $$i`; cp $$i .dist/$(FULLNAME)/$$i; done
	cd .dist; tar cfj $@ $(FULLNAME); cp $@ ..; cd ..
	rm -rf .dist

.PHONY: dist clean

include make.depend

make.depend: $(CFILES) test.c fools.c
	$(CC) -I. -M $^ > $@
