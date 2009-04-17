CFILES=model.c fools.c bootstrap.c primitives.c
HFILES=model.h bootstrap.h primitives.h
PROGRAM=fools
VERSION=0.1

FULLNAME=$(PROGRAM)-$(VERSION)

CFLAGS = -g -Wall -I.

SOURCES=$(CFILES) $(HFILES) Makefile
OBJECTS=$(CFILES:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $^

clean:
	rm -rf $(OBJECTS) $(PROGRAM) make.depend

TARBZ2=$(FULLNAME).tar.bz2

dist: $(TARBZ2)

$(TARBZ2): $(SOURCES)
	mkdir -p .dist/$(FULLNAME)
	cp $(SOURCES) .dist/$(FULLNAME)
	cd .dist; tar cfj $@ $(FULLNAME); cp $@ ..; cd ..
	rm -rf .dist

.PHONY: dist clean

include make.depend

make.depend: $(CFILES)
	$(CC) -I. -M $^ > $@
