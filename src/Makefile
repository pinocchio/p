SHELL        = /bin/bash
PHAROVERSION = `cat lib/VERSION`
SVNVERSION   = `cat SVNVERSION`
EDGEVERSION  = svn$(SVNVERSION)_mc$(PHAROVERSION)
EDGEPV       = pinocchio_$(EDGEVERSION)
MAKEOPTS     = -j3
OS           = $(shell uname)
#CC           = llvm-gcc
# ============================================================================
TARGET       = pinocchio

CFILES      += $(filter-out %Test.c, $(wildcard *.c)) $(wildcard system/**/*.c)
CFILES      += $(wildcard lib/**/*.c) $(wildcard lib/*.c)

CIFILES      = $(wildcard *.ci) $(wildcard system/**/*.ci)
HIFILES      = $(wildcard *.hi) $(wildcard system/**/*.hi)
HFILES      += $(CFILES:%.c=%.h)

TEST_CIFILES = $(wildcard system/**/*Test.ci) $(wildcard test/**/*.ci)
TEST_CFILES  = test/pinocchioTest.c
TEST_CFILES += $(wildcard test/**/*.c)
TEST_HFILES  = $(TEST_CFILES:%.c=%.h)

SOURCES      = $(CFILES) $(HFILES) $(TEST_CFILES) $(TEST_HFILES) $(TEST_CIFILES) $(HIFILES) $(CIFILES)
PLUGINSOURCES = plugin/Makefile $(wildcard plugin/*.h) $(wildcard plugin/*.c) $(wildcard plugin/**/*.h) $(wildcard plugin/**/*.c)
EXTRASOURCES = SETUP lib/VERSION SVNVERSION Makefile $(PLUGINSOURCES)
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

all: $(TARGET)

%.o: %.c
	@echo Compiling: $@
	@$(CC) $(CFLAGS) -c -o $@ $(@:%.o=%.c)

svnversion:
	@(svn info 2>/dev/null||git svn info)|grep Revision|awk '{print $$2}'>SVNVERSION

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

dist: $(SOURCES) $(EXTRASOURCES)
	@make svnversion
	@mkdir -p $(EDGEPV)
	@tar cf $(EDGEPV).tar $^
	@mv $(EDGEPV).tar $(EDGEPV)
	@EDGEPV=$(EDGEPV) && cd $${EDGEPV} && tar xf $${EDGEPV}.tar
	@rm $(EDGEPV)/$(EDGEPV).tar
	@tar cfz $(EDGEPV).tar.gz $(EDGEPV)
	@rm -rf $(EDGEPV)

# ============================================================================
.PHONY: test vtest run clean profile plugin dist svnversion
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@$(CC) -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^

