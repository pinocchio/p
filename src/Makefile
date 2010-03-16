TARGET=pinocchio

SHELL=/bin/bash

MAKEOPTS=-j3

CFILES+=$(filter-out %Test.c, $(wildcard *.c)) $(wildcard system/*/*.c)
CFILES+=$(wildcard lib/*.c) $(wildcard lib/*/*.c)

CIFILES=$(wildcard *.ci)
HFILES+=$(CFILES:%.c=%.h)

TEST_CIFILES=$(wildcard system/*/*Test.ci) $(wildcard test/*.ci)
TEST_CFILES=test/pinocchioTest.c
TEST_CFILES+=$(wildcard test/lib/*.c) $(wildcard test/lib/*/*.c)
TEST_HFILES=$(TEST_CFILES:%.c=%.h)

CFLAGS+=-O3 -DGC_PTHREADS -DASSERT_FAIL -I. -Wall -g
LDFLAGS+=-lpthread -lm -lgc

SOURCES=$(CFILES) $(HFILES) $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES) $(CIFILES)
OBJECTS=$(CFILES:%.c=%.o)
ALLOBJECTS=$(OBJECTS) $(TEST_CFILES:%.c=%.o)


$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

run: $(TARGET)
	CFLAGS="-O3" ./$(TARGET)

test: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-O0 -DTEST" CFILES="$(TEST_CFILES)" HFILES="$(TEST_HFILES)" make run

vtest: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-O0 -DTEST -DTEST_FAIL -DPRINT_DISPATCH_TRACE" CFILES="$(TEST_CFILES)" HFILES="$(TEST_HFILES)" make run


clean:
	@rm -rf $(ALLOBJECTS) $(TARGET) make.depend

profile:
	LDFLAGS="-pg" CFLAGS="-O3 -pg" make $(TARGET)
	./$(TARGET)
	gprof --flat-profile $(TARGET)

tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -h ".h.hi" --langmap="c:.c.ci" -R .; fi

mac:
	CFLAGS="-arch i386 -arch x86_64 -arch ppc" LDFLAGS="-arch i386 -arch x86_64 -arch ppc" make


.PHONY: test vtest run clean profile

include make.depend

make.depend: $(SOURCES)
	@$(CC) -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^

