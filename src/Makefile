SHELL        = /bin/bash
VERSION      = `echo "$LastChangedRevision$" | awk '{print $2}'`

MAKEOPTS     = -j3
OS           = $(shell uname)
#CC           = llvm-gcc
# ============================================================================
TARGET       = pinocchio

CFILES      += $(filter-out %Test.c, $(wildcard *.c)) $(wildcard system/*/*.c)
CFILES      += $(wildcard lib/*.c) $(wildcard lib/*/*.c)

CIFILES      = $(wildcard *.ci)
HFILES      += $(CFILES:%.c=%.h)

TEST_CIFILES = $(wildcard system/*/*Test.ci) $(wildcard test/*.ci)
TEST_CFILES  = test/pinocchioTest.c
TEST_CFILES += $(wildcard test/lib/*.c) $(wildcard test/lib/*/*.c)
TEST_HFILES  = $(TEST_CFILES:%.c=%.h)

SOURCES      = $(CFILES) $(HFILES) $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES) $(CIFILES)
OBJECTS      = $(CFILES:%.c=%.o)
ALLOBJECTS   = $(OBJECTS) $(TEST_CFILES:%.c=%.o)
# ============================================================================
CFLAGS  += -pipe -DASSERT_FAIL -I. -Wall -g -std=c99
LDFLAGS += -lm -lgc -ldl 
ifeq ($(findstring Darwin,$(OS)),Darwin)
#	CFLAGS  += -arch i386 -arch x86_64 -arch ppc
#	LDFLAGS += -arch i386 -arch x86_64 -arch ppc
else
    LDFLAGS +=  -export-dynamic
endif
# ============================================================================
%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

$(TARGET): $(OBJECTS)
	@echo Linking $@
	@$(CC) $(LDFLAGS) -o $@ $^; make plugin

run: $(TARGET)
	./$(TARGET)

test: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-O0 -DTEST -DTEST_FAIL" CFILES="$(TEST_CFILES)" HFILES="$(TEST_HFILES)" make run

vtest: $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES)
	CFLAGS="-O0 -DTEST -DTEST_FAIL -DPRINT_DISPATCH_TRACE" CFILES="$(TEST_CFILES)" HFILES="$(TEST_HFILES)" make run

plugin:
	@cd plugin; make;

clean:
	@rm -rf $(ALLOBJECTS) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

fast:
	CFLAGS="-O3" make  $(TARGET)

profile:
	LDFLAGS="-pg" CFLAGS="-O3 -pg" make $(TARGET)
	./$(TARGET)
	gprof --flat-profile $(TARGET)

tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -h ".h.hi" --langmap="c:.c.ci" -R .; fi

package: $(SOURCES)
	tar -cvzf pinocchio_C_`date "+%Y-%m-%d_%H%M%S"`_.tar.gz $(SOURCES)

# ============================================================================
.PHONY: test vtest run clean profile plugin
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@$(CC) -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^

