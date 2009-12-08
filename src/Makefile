TARGET=pinocchio

SHELL=/bin/bash

CFILES+=$(filter-out %Test.c, $(wildcard *.c)) $(wildcard system/*/*.c)
CIFILES=$(wildcard *.ci)
HFILES+=$(CFILES:%.c=%.h)

TEST_CIFILES=$(wildcard system/*/*Test.ci) $(wildcard test/*.ci)
TEST_CFILES=test/pinocchioTest.c
TEST_HFILES=$(TEST_CFILES:%.c=%.h)

CFLAGS+=-I. -Wall -g 
LDFLAGS+=-lm -lgc

SOURCES=$(CFILES) $(HFILES) $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES) $(CIFILES)
OBJECTS=$(CFILES:%.c=%.o)
ALLOBJECTS=$(OBJECTS) $(TEST_CFILES:%.c=%.o)


$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

compile_run: $(TARGET)
	./$(TARGET)

run: $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-O3" CFILES=$(TEST_CFILES) HFILES=$(TEST_HFILES) make compile_run

test: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-DTEST" CFILES=$(TEST_CFILES) HFILES=$(TEST_HFILES) make compile_run

vtest: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-DTEST -DTEST_FAIL" CFILES=$(TEST_CFILES) HFILES=$(TEST_HFILES) make compile_run


clean:
	rm -rf $(ALLOBJECTS) $(TARGET) make.depend

profile:
	LDFLAGS="-pg" CFLAGS="-pg -O3" make $(TARGET)
	./$(TARGET)
	gprof --flat-profile $(TARGET)

tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -R .; fi

mac:
	CFLAGS="-arch i386 -arch x86_64 -arch ppc" LDFLAGS="-arch i386 -arch x86_64 -arch ppc" make


.PHONY: test vtest run clean profile

include make.depend

make.depend: $(SOURCES)
	$(CC) -M -I. $(CFILES) > $@
	#makedepend $(INCLUDES) $^

