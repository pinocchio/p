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

CFILES      += $(wildcard *.c) $(wildcard system/**/*.c)
CFILES      += $(wildcard lib/**/*.c) $(wildcard lib/*.c)

CIFILES      = $(wildcard *.ci) $(wildcard system/**/*.ci)
HIFILES      = $(wildcard *.hi) $(wildcard system/**/*.hi)
HFILES      += $(CFILES:%.c=%.h)

SOURCES      = $(CFILES) $(HFILES) $(HIFILES) $(CIFILES)
PLUGINSOURCES = plugin/Makefile $(wildcard plugin/*.h) $(wildcard plugin/*.c) $(wildcard plugin/**/*.h) $(wildcard plugin/**/*.c)
EXTRASOURCES = SETUP lib/VERSION SVNVERSION Makefile $(PLUGINSOURCES)
OBJECTS      = $(CFILES:%.c=%.o)
# ============================================================================
CFLAGS  += -pipe -I. -Wall -g -std=c99 -DASSERT_FAIL 
LDFLAGS += -lgc -lm -ldl 
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

SVNVERSION:
	@(svn info 2>/dev/null||git svn info)|grep Revision|awk '{print $$2}'>$@

$(TARGET): $(OBJECTS)
	@echo Linking $@
	@$(CC) $(LDFLAGS) -o $@ $^; make plugin

run: $(TARGET)
	rlwrap --file=completion.txt ./$(TARGET)

plugin:
	@cd plugin; make;

clean:
	@rm -rf $(OBJECTS) $(TARGET) make.depend
	@cd plugin; ${MAKE} clean;

fast:
	CFLAGS="-O3" make  $(TARGET)

profile:
	LDFLAGS="-pg" CFLAGS="-pg -DNOGC" make $(TARGET)
	./$(TARGET) benchmark/fib/fib.p
	gprof --flat-profile $(TARGET)

	
probes: probes.d
	dtrace -h -s probes.d
	
probes.o: probes.d
	@if [[ $$(uname) != "Darwin" ]]; then dtrace -G -s probes.d -o probes.o $(OBJECTS); fi

dtrace:
	LDFLAGS="" CFLAGS="-03 -DDTRACE" make $(TARGET)

debug:
	CFLAGS="-O0 -DDEBUG -DPRINT_DISPATCH_TRACE" make $(TARGET) 

tags: $(SOURCES)
	if [[ $$(uname) == "Darwin" ]]; then ctags $$(find . -iname "*.ci" -or -iname "*.hi" -or -iname "*.c" -or -iname "*.h"); else ctags -h ".h.hi" --langmap="c:.c.ci" -R .; fi

dist: $(SOURCES) $(EXTRASOURCES)
	@mkdir -p $(EDGEPV)
	@tar cf $(EDGEPV).tar $^
	@mv $(EDGEPV).tar $(EDGEPV)
	@EDGEPV=$(EDGEPV) && cd $${EDGEPV} && tar xf $${EDGEPV}.tar
	@rm $(EDGEPV)/$(EDGEPV).tar
	@tar cfz $(EDGEPV).tar.gz $(EDGEPV)
	@rm -rf $(EDGEPV)

# ============================================================================
.PHONY: test vtest run clean profile plugin dist SVNVERSION
# ============================================================================
include make.depend

make.depend: $(SOURCES)
	@$(CC) -M -I. $(CFILES) > $@
	@#makedepend $(INCLUDES) $^

