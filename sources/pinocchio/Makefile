CFILES=model.c bootstrap.c primitives.c system.c print.c\
scheme/natives.c scheme/system.c scheme/symbols.c debug.c thread.c\
system/icall.c system/ilist.c system/iconst.c system/ival.c\
system/iassign.c system/ivar.c system/icapture.c system/ifixed.c\
system/env.c system/iscoped.c system/shift.c system/array.c system/dict.c\
system/string.c system/fallback.c system/number.c system/file.c\
system/char.c
HFILES=model.h bootstrap.h primitives.h system.h print.h gc.h\
scheme/natives.h scheme/system.h scheme/symbols.h debug.h thread.h\
constants.h\
system/icall.h system/ilist.h system/iconst.h system/ival.h\
system/iassign.h system/ivar.h system/icapture.h system/ifixed.h\
system/env.h system/iscoped.h system/shift.h system/array.h system/dict.h\
system/string.h system/fallback.h system/number.h system/file.h\
system/char.h
SFILES=prefix.c postfix.c pcompiler.scm
PFILES=boot/core.p boot/pinocchio.scm boot/peg.p
TFILES=test.c boot/test/test-core.p boot/test/test-peg.p
PROGRAM=pinocchio
VERSION=0.1

EXTRA_SOURCES=$(SFILES) $(PFILES) $(TFILES) Makefile

FULLNAME=$(PROGRAM)-$(VERSION)

CFLAGS = -O3 -g -Wall -I.

LDFLAGS = -lgc

TEST_OBJECTS=test test.o
SOURCES=$(CFILES) $(HFILES) $(EXTRA_SOURCES)
OBJECTS=$(CFILES:.c=.o)
GENERATED=pinocchio.c

all: $(PROGRAM)

run: $(PROGRAM)
	./$^

$(PROGRAM): $(OBJECTS) $(PROGRAM).o
	$(CC) $(LDFLAGS) -o $@ $^

test: $(OBJECTS) test.o
	$(CC) $(LDFLAGS) -o $@ $^
	./test

pinocchio.c: $(SFILES) $(PFILES) $(TFILES)
	cat prefix.c > $@
	mzscheme -r boot/pinocchio.scm >> $@
	cat postfix.c >> $@

profile: 
	$(MAKE) CFLAGS="-pg $(CFLAGS)" LDFLAGS="-pg $(LDFLAGS)" $(TARGET)

clean:
	rm -rf $(OBJECTS) $(PROGRAM) $(PROGRAM).o $(TEST_OBJECTS) $(GENERATED) make.depend

TARBZ2=$(FULLNAME).tar.bz2

dist: $(TARBZ2)

$(TARBZ2): $(SOURCES)
	mkdir -p .dist/$(FULLNAME)
	for i in $(SOURCES); do mkdir -p .dist/$(FULLNAME)/`dirname $$i`; cp $$i .dist/$(FULLNAME)/$$i; done
	cd .dist; tar cfj $@ $(FULLNAME); cp $@ ..; cd ..
	rm -rf .dist

.PHONY: dist clean

include make.depend

make.depend: $(CFILES) test.c pinocchio.c
	$(CC) -I. -M $^ > $@
