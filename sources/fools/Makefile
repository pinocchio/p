CFILES=model.c bootstrap.c primitives.c system.c ast.c
HFILES=model.h bootstrap.h primitives.h system.h ast.h gc.h
PROGRAM=fools
VERSION=0.1

FULLNAME=$(PROGRAM)-$(VERSION)

CFLAGS = -g -Wall -I.
LDFLAGS = -lgc

TEST_OBJECTS= test test.o fib fib.o
SOURCES=$(CFILES) $(HFILES) Makefile
OBJECTS=$(CFILES:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS) $(PROGRAM).o
	$(CC) $(LDFLAGS) -o $@ $^

test: $(OBJECTS) test.o
	$(CC) $(LDFLAGS) -o $@ $^
	./test

fib: $(OBJECTS) fib.o
	$(CC) $(LDFLAGS) -o $@ $^
	./fib

clean:
	rm -rf $(OBJECTS) $(PROGRAM) $(PROGRAM).o $(TEST_OBJECTS) make.depend

TARBZ2=$(FULLNAME).tar.bz2

dist: $(TARBZ2)

$(TARBZ2): $(SOURCES)
	mkdir -p .dist/$(FULLNAME)
	cp $(SOURCES) .dist/$(FULLNAME)
	cd .dist; tar cfj $@ $(FULLNAME); cp $@ ..; cd ..
	rm -rf .dist

.PHONY: dist clean

include make.depend

make.depend: $(CFILES) test.c fools.c
	$(CC) -I. -M $^ > $@
